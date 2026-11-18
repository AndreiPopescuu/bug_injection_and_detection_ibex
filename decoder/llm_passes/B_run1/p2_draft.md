I added no new builders: all 65 unreached plan bins and all 171 uncovered code points look unreachable in this configuration.

```python
# Pass 2: every point in the pass-2 feedback is unreachable for this DUT
# configuration (RV32E=0, RV32M=RV32MFast, RV32B=RV32BNone, BranchTargetALU=1,
# instr_first_cycle_i=1, branch_taken_i=1, illegal_c_insn_i=0).
# The prose below gives the RTL reason for each group. Adding builders would
# only dilute the pass-1 streams that already cover everything reachable.
NEW_BUILDERS = []
```

## Reasoning per unreached group

**Plan bins: SUBI, SUBI x read_A, SUBI x write (65 bins).** RV32I has no SUBI instruction. The OP_IMM ALU decode (ibex_decoder.sv l.821-827) maps funct3=000 only to `ALU_ADD`. The only `ALU_SUB` path in the whole decoder is OPCODE_OP with {funct7=0x20, funct3=000} (l.994). That is the SUB bin, and it is already covered.

Pass 1 already tried the only plausible "subtract an immediate" form. `build_itype_alu_port_cross_stream` sent addi with negative immediates (-1, -2048, random negatives) across every rd and rs1, and plain addi with uniform 12-bit immediates. Over 300k stimuli, every imm[11:5] pattern on funct3=000 was hit, including 0x20 (a SUB-like funct7). SUBI stayed at 0, so the testbench model never labels any encodable word as SUBI. The other OP_IMM funct3 values are all decoded explicitly (l.352-443), so no word is left over that could be. These bins are dead in the coverage plan.

**Branch/line points that need RV32B != RV32BNone (dead with RV32BNone):**
- l.1006-1089: every `if` is an `if (RV32B != RV32BNone)` or `if (RV32B == RV32BOTEarlGrey/Full)` guard. The surrounding case items (l.1005, 1011, 1018…1088) are already covered by pass-1 `build_illegal_op_space_stream`; only the constant-false then-branch is missing.
- l.830 `if`, and the case items and ifs at l.832-889 (incl. 835/841/850/856/862/868/874/880): all inside `if (RV32B != RV32BNone)`. The line-830 then-branch is constant false.
- l.897/898/901/912/923/924 and the case items at l.908-927: inside the l.897 RV32B guard.
- l.949/954/963/972/981 and the case items at l.951-987: inside the l.949 RV32B guard.
- l.413 `elsif`, l.415 `if`, l.422 `elsif`: these are conditions on the RV32B parameter itself (`RV32B == RV32BOTEarlGrey || RV32B == RV32BFull`, `RV32B == RV32BBalanced`), so they are constant false.
  - The data-dependent l.424 orc.b branch is not in the list, so pass 1's orc.b word already covers it.

**Points that need a different BranchTargetALU or tied side input:**
- l.695 `else`, l.717 `else`, l.750 `else`, l.1148 `else`: these are the else of `if (BranchTargetALU)`, which is 1.
- l.701 `if`, l.723 `if`: these need `instr_first_cycle_i && !BranchTargetALU`, which is false.
- l.762 `if`/`else`: this is the else-if of `if (instr_first_cycle_i)` at l.758. It is only reached when instr_first_cycle_i=0, which is tied to 1.
- l.244 `else`, l.257 `else`, l.578 (implicit) `else`: these need instr_first_cycle_i=0, which is tied to 1.
- l.645 `if`: this needs illegal_c_insn_i=1, which is tied to 0.

**Structurally dead branches:**
- l.431 `else`: it sits inside the l.399 else-branch, which already requires instr[26]=0, so `instr[26]==1'b0` at l.431 is always true.
- l.443 `case` default and l.940 `case` default: both funct3 cases list all 8 values (000, 010, 011, 100, 110, 111, 001, 101), so their defaults can't be reached.

**Toggle points:**
- `illegal_reg_rv32e` (l.101): tied to 1'b0 because RV32E=0 (l.182).
- `use_rs3_d` / `use_rs3_q` (l.114/115): only set to 1 in RV32B branches (l.902/955/964/973/982). `use_rs3_q = use_rs3_d` (l.160).
- `illegal_c_insn_i` (l.41): tied input.
- `bt_a_mux_sel_o[0]`: only OP_A_CURRPC (2) or OP_A_REG_A (0) are ever assigned (l.677/696/718/751/1149), so bit 0 is always 0.
- `imm_b_type_o[0]`, `imm_j_type_o[0]`, `imm_u_type_o[11:0]`: hard-wired zeros (l.135-137).
- `zimm_rs1_type_o[31:5]`: hard-wired `27'b0` (l.140).
- `alu_operator_o[6]`: the largest operator reachable without RV32B is ALU_SLTU, index 44 in `alu_op_e` (ibex_pkg.sv l.78-185). Indices of 64 and above are only the RV32B ops (crc32, clmul, bcompress, …).
- `alu_multicycle_o` (l.70): only set to 1 in RV32B branches (l.852-1091).

**Conclusion:** coverage after pass 1 is 2042/2107 plan bins and 632/803 Verilator points. That appears to be the ceiling for this DUT configuration, so I added no new streams.