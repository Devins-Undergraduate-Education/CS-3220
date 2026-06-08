`include "define.vh" 

module AGEX_STAGE(
  input wire clk,
  input wire reset,
  input wire [`from_MEM_to_AGEX_WIDTH-1:0] from_MEM_to_AGEX,    
  input wire [`from_WB_to_AGEX_WIDTH-1:0] from_WB_to_AGEX,   
  input wire [`DE_latch_WIDTH-1:0] from_DE_latch,
  output wire [`AGEX_latch_WIDTH-1:0] AGEX_latch_out,
  output wire [`from_AGEX_to_FE_WIDTH-1:0] from_AGEX_to_FE,
  output wire [`from_AGEX_to_DE_WIDTH-1:0] from_AGEX_to_DE
);

  `UNUSED_VAR (from_MEM_to_AGEX)
  `UNUSED_VAR (from_WB_to_AGEX)

  reg [`AGEX_latch_WIDTH-1:0] AGEX_latch; 
  // wire to send the AGEX latch contents to other pipeline stages 
  assign AGEX_latch_out = AGEX_latch;
  
  wire[`AGEX_latch_WIDTH-1:0] AGEX_latch_contents; 
  
  wire valid_AGEX; 
  wire [`INSTBITS-1:0]inst_AGEX; 
  wire [`DBITS-1:0]PC_AGEX;
  wire [`DBITS-1:0] inst_count_AGEX; 
  wire [`DBITS-1:0] pcplus_AGEX; 
  wire [`IOPBITS-1:0] op_I_AGEX;
  reg br_cond_AGEX; // 1 means a branch condition is satisified. 0 means a branch condition is not satisifed
 
  wire is_br_AGEX;
  wire wr_reg_AGEX;
  wire [`REGNOBITS-1:0] wregno_AGEX;

  wire [`DBITS-1:0] regval1_AGEX;
  wire [`DBITS-1:0] regval2_AGEX;
  wire [`DBITS-1:0] sxt_imm_AGEX;

  reg [`DBITS-1:0] br_target_AGEX;
  wire br_mispred_AGEX;

 
  reg [`DBITS-1:0] aluout_AGEX;
  reg [`DBITS-1:0] memaddr_AGEX;
  wire [`DBITS-1:0] store_data_AGEX;
  wire rd_mem_AGEX;
  wire wr_mem_AGEX;
  wire is_jal_AGEX;
  wire is_jalr_AGEX;
  wire is_branch_AGEX;
  reg br_taken_AGEX;

  wire signed [`DBITS-1:0] s_regval1_AGEX;
  wire signed [`DBITS-1:0] s_regval2_AGEX;
  assign s_regval1_AGEX = regval1_AGEX;
  assign s_regval2_AGEX = regval2_AGEX;
  assign store_data_AGEX = regval2_AGEX;
  assign is_jal_AGEX  = (op_I_AGEX == `JAL_I);
  assign is_jalr_AGEX = (op_I_AGEX == `JALR_I);
  assign is_branch_AGEX = (op_I_AGEX == `BEQ_I) || (op_I_AGEX == `BNE_I) ||
                          (op_I_AGEX == `BLT_I) || (op_I_AGEX == `BGE_I) ||
                          (op_I_AGEX == `BLTU_I) || (op_I_AGEX == `BGEU_I);
  assign rd_mem_AGEX = valid_AGEX && (
                       (op_I_AGEX == `LB_I)  ||
                       (op_I_AGEX == `LH_I)  ||
                       (op_I_AGEX == `LW_I)  ||
                       (op_I_AGEX == `LBU_I) ||
                       (op_I_AGEX == `LHU_I));
  assign wr_mem_AGEX = valid_AGEX && (
                       (op_I_AGEX == `SB_I) ||
                       (op_I_AGEX == `SH_I) ||
                       (op_I_AGEX == `SW_I));

  // Calculate branch condition
  always @ (*) begin
    case (op_I_AGEX)
      `BEQ_I : br_cond_AGEX = valid_AGEX && (regval1_AGEX == regval2_AGEX);
      `BNE_I : br_cond_AGEX = valid_AGEX && (regval1_AGEX != regval2_AGEX);
      `BLT_I : br_cond_AGEX = valid_AGEX && (s_regval1_AGEX < s_regval2_AGEX);
      `BGE_I : br_cond_AGEX = valid_AGEX && (s_regval1_AGEX >= s_regval2_AGEX);
      `BLTU_I: br_cond_AGEX = valid_AGEX && (regval1_AGEX < regval2_AGEX);
      `BGEU_I: br_cond_AGEX = valid_AGEX && (regval1_AGEX >= regval2_AGEX);
      default : br_cond_AGEX = 1'b0;
    endcase
  end

  // Compute ALU operations  (alu out or memory addresses)
  always @ (*) begin
    case (op_I_AGEX)
      `ADD_I  : aluout_AGEX = regval1_AGEX + regval2_AGEX;
      `SUB_I  : aluout_AGEX = regval1_AGEX - regval2_AGEX;
      `AND_I  : aluout_AGEX = regval1_AGEX & regval2_AGEX;
      `OR_I   : aluout_AGEX = regval1_AGEX | regval2_AGEX;
      `XOR_I  : aluout_AGEX = regval1_AGEX ^ regval2_AGEX;
      `SLT_I  : aluout_AGEX = {{(`DBITS-1){1'b0}}, (s_regval1_AGEX < s_regval2_AGEX)};
      `SLTU_I : aluout_AGEX = {{(`DBITS-1){1'b0}}, (regval1_AGEX < regval2_AGEX)};
      `SRA_I  : aluout_AGEX = s_regval1_AGEX >>> regval2_AGEX[4:0];
      `SRL_I  : aluout_AGEX = regval1_AGEX >> regval2_AGEX[4:0];
      `SLL_I  : aluout_AGEX = regval1_AGEX << regval2_AGEX[4:0];
      `MUL_I  : aluout_AGEX = regval1_AGEX * regval2_AGEX;
      `ADDI_I : aluout_AGEX = regval1_AGEX + sxt_imm_AGEX;
      `ANDI_I : aluout_AGEX = regval1_AGEX & sxt_imm_AGEX;
      `ORI_I  : aluout_AGEX = regval1_AGEX | sxt_imm_AGEX;
      `XORI_I : aluout_AGEX = regval1_AGEX ^ sxt_imm_AGEX;
      `SLTI_I : aluout_AGEX = {{(`DBITS-1){1'b0}}, (s_regval1_AGEX < $signed(sxt_imm_AGEX))};
      `SLTIU_I: aluout_AGEX = {{(`DBITS-1){1'b0}}, (regval1_AGEX < sxt_imm_AGEX)};
      `SRAI_I : aluout_AGEX = s_regval1_AGEX >>> sxt_imm_AGEX[4:0];
      `SRLI_I : aluout_AGEX = regval1_AGEX >> sxt_imm_AGEX[4:0];
      `SLLI_I : aluout_AGEX = regval1_AGEX << sxt_imm_AGEX[4:0];
      `LUI_I  : aluout_AGEX = sxt_imm_AGEX;
      `AUIPC_I: aluout_AGEX = PC_AGEX + sxt_imm_AGEX;
      `LW_I   : aluout_AGEX = regval1_AGEX + sxt_imm_AGEX;
      `JAL_I,
      `JALR_I : aluout_AGEX = pcplus_AGEX;
      default : aluout_AGEX = {`DBITS{1'b0}};
    endcase
  end 

  // memory address for loads/stores
  always @(*) begin
    if (rd_mem_AGEX || wr_mem_AGEX)
      memaddr_AGEX = regval1_AGEX + sxt_imm_AGEX;
    else
      memaddr_AGEX = {`DBITS{1'b0}};
  end

  // branch target needs to be computed here 
  // computed branch target needs to send to other pipeline stages (br_target_AGEX)
  always @(*)begin
    br_target_AGEX = pcplus_AGEX;
    br_taken_AGEX = 1'b0;

    if (is_branch_AGEX && br_cond_AGEX) begin
      br_taken_AGEX = 1'b1;
      br_target_AGEX = PC_AGEX + sxt_imm_AGEX;
    end else if (is_jal_AGEX) begin
      br_taken_AGEX = valid_AGEX;
      br_target_AGEX = PC_AGEX + sxt_imm_AGEX;
    end else if (is_jalr_AGEX) begin
      br_taken_AGEX = valid_AGEX;
      br_target_AGEX = (regval1_AGEX + sxt_imm_AGEX) & ~32'd1;
    end
  end

  assign br_mispred_AGEX = (br_taken_AGEX
                         && (br_target_AGEX != pcplus_AGEX)) ? 1'b1 : 1'b0;

    assign  {                     
                                  valid_AGEX,
                                  inst_AGEX,
                                  PC_AGEX,
                                  pcplus_AGEX,
                                  op_I_AGEX,
                                  inst_count_AGEX,
                                  regval1_AGEX,
                                  regval2_AGEX,
                                  sxt_imm_AGEX,
                                  is_br_AGEX,
                                  wr_reg_AGEX,
                                  wregno_AGEX
                                  } = from_DE_latch; 
  `UNUSED_VAR (is_br_AGEX)
    
 
  assign AGEX_latch_contents = {
                                valid_AGEX,
                                inst_AGEX,
                                PC_AGEX,
                                op_I_AGEX,
                                inst_count_AGEX,
                                aluout_AGEX,
                                memaddr_AGEX,
                                store_data_AGEX,
                                rd_mem_AGEX,
                                wr_mem_AGEX,
                                wr_reg_AGEX,
                                wregno_AGEX
                                 }; 
 
  always @ (posedge clk ) begin
    if(reset) begin
      AGEX_latch <= {`AGEX_latch_WIDTH{1'b0}};
        end 
    else 
        begin
            AGEX_latch <= AGEX_latch_contents ;
        end 
  end


  // forward signals to FE stage
  assign from_AGEX_to_FE = { 
      br_mispred_AGEX,
      br_target_AGEX
  };

  // forward signals to DE stage
  assign from_AGEX_to_DE = { 
    br_mispred_AGEX
  };

endmodule
