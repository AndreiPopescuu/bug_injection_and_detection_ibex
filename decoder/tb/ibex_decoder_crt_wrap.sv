// CRT top-level wrapper for ibex_decoder.
//
// Unlike ../../decoder/ibex_decoder_wrap.sv (ml4dv), every decoder input is a
// port so the CRT test can randomise it, and the configuration parameters are
// top-level ints so the Makefile can set them with -G<name>=<value>.

module ibex_decoder_crt_wrap #(
  parameter int RV32E           = 0,
  parameter int RV32M           = 2,  // ibex_pkg::rv32m_e : 0 None, 1 Slow, 2 Fast, 3 SingleCycle
  parameter int RV32B           = 0,  // ibex_pkg::rv32b_e : 0 None, 1 Balanced, 2 OTEarlGrey, 3 Full
  parameter int BranchTargetALU = 1
) (
  input  logic        clk_i,
  input  logic        rst_ni,
  input  logic [31:0] insn_i,
  input  logic        instr_first_cycle_i,
  input  logic        branch_taken_i,
  input  logic        illegal_c_insn_i
);

  ibex_decoder #(
    .RV32E           (RV32E[0]),
    .RV32M           (ibex_pkg::rv32m_e'(RV32M)),
    .RV32B           (ibex_pkg::rv32b_e'(RV32B)),
    .BranchTargetALU (BranchTargetALU[0])
  ) u_decoder (
    .clk_i               (clk_i),
    .rst_ni              (rst_ni),
    .branch_taken_i      (branch_taken_i),
    .instr_first_cycle_i (instr_first_cycle_i),
    .instr_rdata_i       (insn_i),
    .instr_rdata_alu_i   (insn_i),
    .illegal_c_insn_i    (illegal_c_insn_i)
  );

endmodule
