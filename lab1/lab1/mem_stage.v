 `include "define.vh" 

module MEM_STAGE(
  input wire clk,
  input wire reset,
  input wire [`from_WB_to_MEM_WIDTH-1:0] from_WB_to_MEM,  
  input wire [`AGEX_latch_WIDTH-1:0] from_AGEX_latch, 
  output wire [`MEM_latch_WIDTH-1:0] MEM_latch_out,
  output wire [`from_MEM_to_FE_WIDTH-1:0] from_MEM_to_FE,
  output wire [`from_MEM_to_DE_WIDTH-1:0] from_MEM_to_DE,
  output wire [`from_WB_to_AGEX_WIDTH-1:0] from_MEM_to_AGEX
);

  `UNUSED_VAR (from_WB_to_MEM)
  // D-MEM
  (* ram_init_file = `IDMEMINITFILE *)
  reg [`DBITS-1:0] dmem[`DMEMWORDS-1:0];
 
 // DMEM and IMEM should contains the same contents 
 initial begin
     $readmemh(`IDMEMINITFILE , dmem);
  end
  
  
  reg [`MEM_latch_WIDTH-1:0] MEM_latch; 
  wire valid_MEM;
  wire[`MEM_latch_WIDTH-1:0] MEM_latch_contents; 



  wire [`IOPBITS-1:0] op_I_MEM;
  wire [`DBITS-1:0] inst_count_MEM; 
  wire [`INSTBITS-1:0] inst_MEM; 
  wire [`DBITS-1:0] PC_MEM;
 


  wire [`DBITS-1:0] aluout_MEM;  // ALU result from AGEX 
  wire [`DBITS-1:0] memaddr_MEM;
  wire [`DBITS-1:0] store_data_MEM;
  wire rd_mem_MEM;
  wire wr_mem_MEM;
  wire [`REGNOBITS-1:0] wregno_MEM;
  wire wr_reg_MEM;
  wire [`DBITS-1:0] rd_val_MEM;  // memory read value 
  wire [`DBITS-1:0] wr_val_MEM;  // memory write value 
  wire rd_mem_flag_MEM;
  wire [1:0] byte_offset_MEM;
  wire [4:0] byte_shift_MEM;
  wire [4:0] half_shift_MEM;
  wire [15:0] halfword_data_MEM;
  reg  [7:0] byte_data_MEM;
  reg  [`DBITS-1:0] load_data_MEM;
  reg  [`DBITS-1:0] store_mask_MEM;
  reg  [`DBITS-1:0] store_data_aligned_MEM;
  wire [`DBITS-1:0] merged_store_MEM;
  // Read from D-MEM  (read code is completed if there is a correct memaddr_MEM ) 
  assign rd_val_MEM = dmem[memaddr_MEM[`DMEMADDRBITS-1:`DMEMWORDBITS]];

  
// Write to D-MEM
  always @ (posedge clk) begin
    if (wr_mem_MEM)
      dmem[memaddr_MEM[`DMEMADDRBITS-1:`DMEMWORDBITS]] <= merged_store_MEM; 
  end
    
   assign MEM_latch_out = MEM_latch; 

   assign {
                                valid_MEM,
                                inst_MEM,
                                PC_MEM,
                                op_I_MEM,
                                inst_count_MEM,
                                aluout_MEM,
                                memaddr_MEM,
                                store_data_MEM,
                                rd_mem_flag_MEM,
                                wr_mem_MEM,
                                wr_reg_MEM,
                                wregno_MEM
                                 } = from_AGEX_latch;  
 

  assign wr_val_MEM = store_data_MEM;
  assign rd_mem_MEM = rd_mem_flag_MEM;
  assign byte_offset_MEM = memaddr_MEM[1:0];
  assign byte_shift_MEM = {byte_offset_MEM, 3'b000};
  assign half_shift_MEM = {byte_offset_MEM[1], 4'b0000};
  assign halfword_data_MEM = byte_offset_MEM[1] ? rd_val_MEM[31:16] : rd_val_MEM[15:0];

  always @(*) begin
    case (byte_offset_MEM)
      2'b00: byte_data_MEM = rd_val_MEM[7:0];
      2'b01: byte_data_MEM = rd_val_MEM[15:8];
      2'b10: byte_data_MEM = rd_val_MEM[23:16];
      default: byte_data_MEM = rd_val_MEM[31:24];
    endcase
  end

  always @(*) begin
    case (op_I_MEM)
      `LB_I:  load_data_MEM = {{24{byte_data_MEM[7]}}, byte_data_MEM};
      `LBU_I: load_data_MEM = {{24{1'b0}}, byte_data_MEM};
      `LH_I:  load_data_MEM = {{16{halfword_data_MEM[15]}}, halfword_data_MEM};
      `LHU_I: load_data_MEM = {{16{1'b0}}, halfword_data_MEM};
      default: load_data_MEM = rd_val_MEM;
    endcase
  end

  always @(*) begin
    store_mask_MEM = {`DBITS{1'b0}};
    store_data_aligned_MEM = wr_val_MEM;
    case (op_I_MEM)
      `SB_I: begin
        store_mask_MEM = (32'hFF << byte_shift_MEM);
        store_data_aligned_MEM = ({{(`DBITS-8){1'b0}}, wr_val_MEM[7:0]} << byte_shift_MEM);
      end
      `SH_I: begin
        store_mask_MEM = (32'hFFFF << half_shift_MEM);
        store_data_aligned_MEM = ({{(`DBITS-16){1'b0}}, wr_val_MEM[15:0]} << half_shift_MEM);
      end
      `SW_I: begin
        store_mask_MEM = {`DBITS{1'b1}};
        store_data_aligned_MEM = wr_val_MEM;
      end
      default: begin
        store_mask_MEM = {`DBITS{1'b0}};
        store_data_aligned_MEM = wr_val_MEM;
      end
    endcase
  end

  assign merged_store_MEM = (rd_val_MEM & ~store_mask_MEM) | store_data_aligned_MEM;
   
  assign MEM_latch_contents = {
                                valid_MEM,
                                inst_MEM,
                                PC_MEM,
                                op_I_MEM,
                                inst_count_MEM,
                                aluout_MEM,
                                load_data_MEM,
                                rd_mem_MEM,
                                wr_reg_MEM,
                                wregno_MEM                
  };
 

  always @ (posedge clk) begin
    if(reset) begin
        MEM_latch <={`MEM_latch_WIDTH{1'b0}}; 
    end
    else 
     begin 
        MEM_latch <= MEM_latch_contents;
     end 
    
  end

  // forward signals to AGEX stage
  assign from_MEM_to_AGEX = '0;

  // forward signals to DE stage
  assign from_MEM_to_DE = '0;

  // forward signals to FE stage
  assign from_MEM_to_FE = '0;

endmodule
