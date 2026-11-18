# Pass 1 review (isolated agent): verdict summary

The final merged code is in `pass1_review_final_block.py` and also appended to `crt/llm_streams.py`.

The reviewer checked every builder with a WSL Python script, run over 5 seeds. The script checked:
- lengths and the 32-bit range;
- determinism;
- a legality model for RV32BNone/RV32MFast;
- a full 32-register sweep per op and field;
- 6 known assembler encodings.

| Builder | Verdict |
|---|---|
| rtype_alu_port_sweep | CONFIRMED (citation tightened) |
| itype_alu_port_sweep | CONFIRMED |
| load_store_port_sweep | NEEDS FIX: docstring only. The decoder never asserts rf_we for LOAD, and stores drive OP_B_IMM. Port bins depend on the coverage model. |
| op_imm_shift_space | NEEDS FIX: comments only. The "rev8 (416)" word lands on :418, because :413-416 is dead under RV32BNone. |
| op_m_and_bitmanip_space | CONFIRMED |
| branch_jump_upper | CONFIRMED (citation trimmed to :694-760) |
| system_csr_miscmem | CONFIRMED |
| illegal_opcode_and_ls_size | NEEDS FIX: `LEGAL_OPCODES` is not imported, so it was replaced by `set(OPC.values())` |

## Unreachable claims

- **SUBI** (65 plan bins): CONFIRMED UNREACHABLE. ALU_SUB is set only at :994 (OPCODE_OP, with OP_B_REG_B at :946).
- **first_cycle / BranchTargetALU / branch_taken / illegal_c / RV32E:** CONFIRMED.
- **RV32BNone, :1005-1093:** PARTIAL DISPUTE. The case arms are entered; only the inner `if` assignments are dead.
- **Additional dead lines:** :413-416 and :433-434. The second is structural: instr[26]=0 is guaranteed by the :399 else branch.
- **alu_operator_o:** PARTIAL DISPUTE. Bits [5:0] do toggle; only bit [6] is stuck at 0.

## Note for the coverage model (checked afterwards against ml4dv's sampling)

ml4dv samples the write port when `rf_we_o || load_seen`, so the load×write crosses are reachable. Store read_B is sampled from `rf_ren_b_o`, so it is reachable too. The measured ceiling is 2042, which confirms this.
