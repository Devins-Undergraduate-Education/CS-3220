 `include "define.vh" 


module FE_STAGE(
  input wire clk,
  input wire reset,
  input wire [`from_DE_to_FE_WIDTH-1:0] from_DE_to_FE,
  input wire [`from_AGEX_to_FE_WIDTH-1:0] from_AGEX_to_FE,   
  input wire [`from_MEM_to_FE_WIDTH-1:0] from_MEM_to_FE,   
  input wire [`from_WB_to_FE_WIDTH-1:0] from_WB_to_FE, 
  output wire [`FE_latch_WIDTH-1:0] FE_latch_out
);

  `UNUSED_VAR (from_MEM_to_FE)
  `UNUSED_VAR (from_WB_to_FE)

  // I-MEM
  (* ram_init_file = `IDMEMINITFILE *)
  reg [`DBITS-1:0] imem [`IMEMWORDS-1:0];
 
  initial begin
      $readmemh(`IDMEMINITFILE , imem);
  end

  // Display memory contents with verilator 
  /*
  always @(posedge clk) begin
    for (integer i=0 ; i<`IMEMWORDS ; i=i+1) begin
        $display("%h", imem[i]);
    end
  end
  */

  /* pipeline latch */ 
  reg [`FE_latch_WIDTH-1:0] FE_latch;  // FE latch 
  wire valid_FE;
  assign valid_FE = 1'b1;
  reg [`DBITS-1:0] PC_FE_latch; // PC latch in the FE stage   // you could use a part of FE_latch as a PC latch as well 
  
  reg [`DBITS-1:0] inst_count_FE; /* for debugging purpose */ 
  
  wire [`DBITS-1:0] inst_count_AGEX; /* for debugging purpose. resent the instruction counter */ 

  wire [`INSTBITS-1:0] inst_FE;  // instruction value in the FE stage 
  wire [`DBITS-1:0] pcplus_FE;  // pc plus value in the FE stage 
  wire stall_pipe_FE; // signal to indicate when a front-end needs to be stall
  
  wire [`FE_latch_WIDTH-1:0] FE_latch_contents;  // the signals that will be FE latch contents 
  
  // reading instruction from imem 
  assign inst_FE = imem[PC_FE_latch[`IMEMADDRBITS-1:`IMEMWORDBITS]];  // this code works. imem is stored 4B together 
  
  // wire to send the FE latch contents to the DE stage 
  assign FE_latch_out = FE_latch; 
 

  // This is the value of "incremented PC", computed in the FE stage
  assign pcplus_FE = PC_FE_latch + `INSTSIZE;
  
   
   // the order of latch contents should be matched in the decode stage when we extract the contents. 
  reg [`BHRBITS-1:0] bhr;
  reg [1:0] pht [0:`PHT_ENTRIES-1];
  reg [`DBITS-1:0] btb_target [0:`BTB_ENTRIES-1];
  reg [`BTB_TAG_BITS-1:0] btb_tag [0:`BTB_ENTRIES-1];
  reg [`BTB_ENTRIES-1:0] btb_valid;
  integer i;
  integer j;

  wire [`BTB_INDEX_BITS-1:0] btb_index_FE;
  wire [`BHRBITS-1:0] pht_index_FE;
  wire [`BHRBITS-1:0] pht_pc_hash_a_FE;
  wire [`BHRBITS-1:0] pht_pc_hash_b_FE;
  wire [`BHRBITS-1:0] pht_pc_source_FE;
  wire [1:0] pht_value_FE;
  wire [`DBITS-1:0] predicted_target_FE;
  wire predicted_taken_FE;
  wire pht_used_FE;
  wire [`DBITS-1:0] next_pc_FE;

  localparam integer BTB_INDEX_LO = `BTB_INDEX_LO;
  localparam integer BTB_INDEX_HI = `BTB_INDEX_HI;
  localparam integer BTB_TAG_LO = `BTB_TAG_LO;
  localparam integer PHT_PC_SLICE_LO_BASE = `IMEMWORDBITS;
  localparam integer PHT_PC_SLICE_HI_BASE = PHT_PC_SLICE_LO_BASE + `BHRBITS - 1;
  localparam integer PHT_PC_XOR_LO_BASE = PHT_PC_SLICE_LO_BASE + 8;
  localparam integer PHT_PC_XOR_HI_BASE = PHT_PC_XOR_LO_BASE + `BHRBITS - 1;
  localparam integer PHT_PC_SLICE_HI = (PHT_PC_SLICE_HI_BASE < `DBITS) ? PHT_PC_SLICE_HI_BASE : (`DBITS-1);
  localparam integer PHT_PC_SLICE_LO = PHT_PC_SLICE_HI - (`BHRBITS - 1);
  localparam integer PHT_PC_XOR_HI = (PHT_PC_XOR_HI_BASE < `DBITS) ? PHT_PC_XOR_HI_BASE : (`DBITS-1);
  localparam integer PHT_PC_XOR_LO = PHT_PC_XOR_HI - (`BHRBITS - 1);

  assign btb_index_FE = PC_FE_latch[BTB_INDEX_HI:BTB_INDEX_LO];
  assign pht_pc_hash_a_FE = PC_FE_latch[PHT_PC_SLICE_HI:PHT_PC_SLICE_LO];
  assign pht_pc_hash_b_FE = PC_FE_latch[PHT_PC_XOR_HI:PHT_PC_XOR_LO];
`ifdef USE_PHT_PC_HASH
  assign pht_pc_source_FE = pht_pc_hash_a_FE ^ pht_pc_hash_b_FE;
`else
  assign pht_pc_source_FE = pht_pc_hash_a_FE;
`endif
  assign pht_index_FE = pht_pc_source_FE ^ bhr;
  assign pht_value_FE = pht[pht_index_FE];
  assign predicted_target_FE = btb_target[btb_index_FE];
  assign predicted_taken_FE = (btb_valid[btb_index_FE]) && (btb_tag[btb_index_FE] == PC_FE_latch[`DBITS-1:BTB_TAG_LO]) && pht_value_FE[1];
  assign pht_used_FE = (btb_valid[btb_index_FE]) && (btb_tag[btb_index_FE] == PC_FE_latch[`DBITS-1:BTB_TAG_LO]);
  assign next_pc_FE = (predicted_taken_FE) ? predicted_target_FE : pcplus_FE;

  assign FE_latch_contents = {
                                valid_FE, 
                                inst_FE, 
                                PC_FE_latch, 
                                pcplus_FE,
                                inst_count_FE,
                                next_pc_FE,
                                pht_index_FE,
                                pht_used_FE
                                };




  // **TODO: Complete the rest of the pipeline 
  //assign stall_pipe_FE = 1;   // you need
  wire br_mispred_AGEX;  
  wire [`DBITS-1:0] br_target_AGEX;  
  wire btb_update_en_AGEX;
  wire [`DBITS-1:0] btb_update_pc_AGEX;
  wire [`DBITS-1:0] btb_update_target_AGEX;
  wire pht_update_en_AGEX;
  wire [`BHRBITS-1:0] pht_update_index_AGEX;
  wire pht_update_taken_AGEX;
  wire bhr_update_en_AGEX;
  wire bhr_update_taken_AGEX;

  assign {
    stall_pipe_FE
  } = from_DE_to_FE[0]; 

  assign {
    br_mispred_AGEX,
    br_target_AGEX,
    btb_update_en_AGEX,
    btb_update_pc_AGEX,
    btb_update_target_AGEX,
    pht_update_en_AGEX,
    pht_update_index_AGEX,
    pht_update_taken_AGEX,
    bhr_update_en_AGEX,
    bhr_update_taken_AGEX
  } = from_AGEX_to_FE;

  always @ (posedge clk) begin
  /* you need to extend this always block */
   if (reset) begin 
      PC_FE_latch <= `STARTPC;
      inst_count_FE <= 1;  /* inst_count starts from 1 for easy human reading. 1st fetch instructions can have 1 */ 
      bhr <= '0;
      btb_valid <= '0;
      for (i = 0; i < `PHT_ENTRIES; i = i + 1) begin
        pht[i] = 2'b01;
      end
      for (j = 0; j < `BTB_ENTRIES; j = j + 1) begin
        btb_tag[j] = '0;
        btb_target[j] = '0;
      end
      end 
    else begin
      if (br_mispred_AGEX)
        PC_FE_latch <= br_target_AGEX;
      else if (~stall_pipe_FE) begin
        PC_FE_latch <= next_pc_FE;
        inst_count_FE <= inst_count_FE + 1; 
      end

      if (btb_update_en_AGEX) begin
        btb_valid[btb_update_pc_AGEX[BTB_INDEX_HI:BTB_INDEX_LO]] <= 1'b1;
        btb_tag[btb_update_pc_AGEX[BTB_INDEX_HI:BTB_INDEX_LO]] <= btb_update_pc_AGEX[`DBITS-1:BTB_TAG_LO];
        btb_target[btb_update_pc_AGEX[BTB_INDEX_HI:BTB_INDEX_LO]] <= btb_update_target_AGEX;
      end

      if (pht_update_en_AGEX) begin
        if (pht_update_taken_AGEX) begin
          if (pht[pht_update_index_AGEX] != 2'b11)
            pht[pht_update_index_AGEX] <= pht[pht_update_index_AGEX] + 2'b01;
        end else begin
          if (pht[pht_update_index_AGEX] != 2'b00)
            pht[pht_update_index_AGEX] <= pht[pht_update_index_AGEX] - 2'b01;
        end
      end

      if (bhr_update_en_AGEX)
        bhr <= {bhr[`BHRBITS-2:0], bhr_update_taken_AGEX};
    end
  end
  

  always @ (posedge clk) begin
    if (reset) begin 
      FE_latch <= '0; 
    end else begin 
      if (br_mispred_AGEX)
        FE_latch <= '0;
      else if (stall_pipe_FE)
        FE_latch <= FE_latch; 
      else 
        FE_latch <= FE_latch_contents; 
    end  
  end

endmodule
