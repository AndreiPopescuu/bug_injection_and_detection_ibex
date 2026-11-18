# Pass 1 synthesis draft (isolated agent, from zero)

Bin structure inferred by the agent: 26 op bins + 96 port bins + 1 illegal + 1984 cross bins
(62 op/port pairs x 32 regs) = 2107.

## Finding: SUBI unreachable (65 bins)
SUBI needs alu_operator_o=ALU_SUB with alu_op_b_mux_sel_o=OP_B_IMM. ALU_SUB is only set at
ibex_decoder.sv:994 inside OPCODE_OP, where operand B is OP_B_REG_B (:946). OP_IMM (:821-941)
never selects ALU_SUB. Max reachable = 2042/2107 (96.9%).

## Unreachable RTL in this configuration (agent's claims)
- instr_first_cycle_i=1: JAL/JALR second-cycle arms :250/:263; :762-769 (also BranchTargetALU=1);
  use_rs3_d=0 else-arms :904/957/966/975/984 (also RV32B-gated).
- BranchTargetALU=1: :703-706, :725-728, :1151-1155.
- branch_taken_i=1: IMM_B_INCR_PC side of :753/:767.
- illegal_c_insn_i=0: :646.
- RV32E=0: :178-180 not generated, illegal_reg_rv32e tied 0.
- RV32B=RV32BNone: all RV32B != None ALU-side arms (:830-890, :897-930, :949-988, :1005-1093).
- Toggle: use_rs3, alu_multicycle_o, RV32B alu_operator_o values never toggle.

## Streams (reasoning)
1. rtype_alu_port_sweep (:447-465, :944-1002): 10 RV32I R ops x 32 words, rd/rs1/rs2 are
   independent permutations of 0..31 -> all 960 R cross bins per seed.
2. itype_alu_port_sweep (:348-362, :398-404, :816-936): 9 legal imm ops x 32, permuted rd/rs1
   -> 576 cross bins; shifts with [26:25]=00, top5 in {00000,01000}.
3. load_store_port_sweep (:293-329, :776-795): lb/lh/lw/lbu/lhu x permuted rd/rs1; sb/sh/sw x
   permuted rs1/rs2.
4. op_imm_shift_space: walks every funct3=001/101 shift-imm case arm (all illegal under
   RV32BNone except slli/srli/srai).
5. op_m_and_bitmanip_space: all 8 RV32M arms, all 34 RV32B R pairs, cmix/cmov/fsl/fsr,
   instr[26]=1 other funct3, 16 unknown funct7 values.
6. branch_jump_upper: 6 legal + 2 illegal branch conds, JAL, JALR f3=0 and !=0, LUI, AUIPC.
7. system_csr_miscmem: priv insns clean/dirty, unknown funct12, all CSR funct3 incl. 100,
   rs1=0 vs !=0 (CSR operand fix-up :188-197), fence/fence.i, MISC_MEM default.
8. illegal_opcode_and_ls_size: all 117 undefined opcodes, illegal store sizes, ld f3 011/110/111.

Integration notes from the agent: needs LEGAL_OPCODES imported from isa.py; helpers
_perm/_R_ALU/_R_B/_R_M must be pasted with the builders.

## Code
