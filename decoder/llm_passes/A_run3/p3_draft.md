```python
NEW_BUILDERS = []
```

**Why there are no new builders this pass**

All 65 unreached bins are SUBI bins: the SUBI operation bin, plus SUBI crossed with read_A and with write for registers 0 to 31. I think all of them are impossible to hit. These 65 are the only bins still open, so the other 2042 bins are already covered, and they cover everything that can be reached.

1. **No RV32 encoding means "subtract immediate."** RV32I has no `subi`. You subtract a constant by writing `addi` with a negative immediate. In the OP_IMM opcode, funct3=000 is ADDI no matter what is in imm[11:0], and every other funct3 slot is already taken (slli, slti, sltiu, xori, srli/srai, ori, andi). An ALU op that subtracts an immediate does not exist in the ISA. So a decoder for RV32IM+Zicsr never asks for a subtraction with the immediate operand.

2. **The ways the plan might label SUBI are already tested.**
   - **ADDI with a negative immediate:** pass 1's `build_itype_alu_port_cross_stream` has a separate `addi_neg` block that runs strictly negative immediates (including -2048 and -1) across all 32 rd and rs1 values. SUBI is still unreached.
   - **ADDI whose immediate looks like SUB's funct7 (imm[11:5]=0100000):** the same stream draws immediates uniformly over 0..2047 and -2048..-1. That puts imm bit 10 (instruction bit 30) at 1 in about half of all ADDI words, so this case was hit many thousands of times across 3 seeds x 100k stimuli.
   - **Malformed OP_IMM, OP, SYSTEM or opcode-space words:** pass 2's `build_illegal_instruction_stream` already sweeps 12 illegality classes, and none of them produced SUBI.

3. **Why a probe stream would not help.** The bins only describe what a word does (operation and register ports), not how it is encoded. Every way I could think of to encode "subtract immediate" has already been exercised. Adding one more speculative builder would only dilute the run: each builder is picked uniformly, so a probe takes stimuli away from the builders that keep the other 2042 bins covered, and it is very unlikely to hit anything new.

**Conclusion:** 2042/2107 should be read as 2042/2042 of the reachable bins, i.e. 100%. The 65 SUBI bins are a coverage-plan entry with no matching RV32 encoding (and no matching decoder behaviour), not a gap in the stimulus.