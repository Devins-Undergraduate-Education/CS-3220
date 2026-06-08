`include "define.vh" 

module FU_STAGE(
  input wire                              clk,
  input wire                              reset,
  input wire [`from_DE_to_FU_WIDTH-1:0]    from_DE_to_FU,   
  output wire [`from_FU_to_DE_WIDTH-1:0]   from_FU_to_DE
);
  /////////////////////////////////////////////////////////////////
  // Hook up the provided floating-point ALU and expose its status back to DE.
  wire [`ALUDATABITS-1:0] op1_to_alu;
  wire [`ALUDATABITS-1:0] op2_to_alu;
  wire [`ALUOPBITS-1:0]   aluop_to_alu;
  wire [`ALUCSRINBITS-1:0] csr_to_alu;

  assign {
    op1_to_alu,
    op2_to_alu,
    aluop_to_alu,
    csr_to_alu
  } = from_DE_to_FU;

  wire [`ALUDATABITS-1:0] op3_from_alu;
  wire [`ALUCSROUTBITS-1:0] csr_from_alu;

  external_alu external_alu_i (
    .clk(clk),
    .rst(reset),
    .OP1(op1_to_alu),
    .OP2(op2_to_alu),
    .OP3(op3_from_alu),
    .ALUOP(aluop_to_alu),
    .CSR_ALU_OUT(csr_from_alu),
    .CSR_ALU_IN(csr_to_alu)
  );

  assign from_FU_to_DE = {
    op3_from_alu,
    csr_from_alu
  };
endmodule
