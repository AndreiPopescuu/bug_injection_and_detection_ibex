```python
NEW_BUILDERS = []
```

**Why there are no new builders**

All 65 bins still unreached are SUBI bins: the SUBI operation bin, SUBI x read_A for registers 0-31, and SUBI x write for registers 0-31. I think none of them can be hit by any instruction word.

1. **There is no SUBI in the ISA.** RV32I, M and Zicsr have no subtract-immediate instruction. Subtracting a constant is written as `addi rd, rs1, -imm`. The coverage plan lists SUBI next to SUB by analogy, but no opcode, funct3 and funct7 combination encodes it. The encoder library `isa.py` has no SUBI entry either. It only has R-type `sub` (OP, funct7=0x20, funct3=0).

2. **The obvious readings were already tried and hit nothing.**
   - **Negative-immediate ADDI:** the pass-1 builder `build_imm_alu_port_sweep_stream` (in `A_run2_p1.py`) has a dedicated "subi" kind. It emits ADDI with immediates from -2048 to -1, sweeping all 32 rd and all 32 rs1, so every register was paired with a negative immediate many times over 3 seeds x 100k stimuli. Not one SUBI bin was hit, so the plan does not classify negative-immediate ADDI as SUBI.
   - **"SUB-style" immediate encoding** (OP_IMM, funct3=000, instr[31:25]=0100000, which is how SUB differs from ADD): these words are ADDI with immediates 1024 to 1055. The positive ADDI sweep, which draws immediates uniformly from 0 to 2047, emits them on about 1/64 of its words, across all registers. The pass-2 illegal/malformed mix covers other odd OP_IMM patterns. None of them hit a SUBI bin either.

3. **What this suggests about the plan.** No SUBI bin was hit at all, not even the single operation bin, although every legal and many malformed OP_IMM funct3=000 encodings were fed in. So the plan's SUBI bin almost certainly depends on a decoder output combination that a decoder without a SUBI instruction never produces: a subtract ALU operation with an immediate second operand. Without the RTL I can't prove that. But it is the only reading that fits the evidence, and under it the bins are unreachable by construction.

So the generator stays at 2042/2107. The remaining 65 SUBI bins should be treated as unreachable, and the true ceiling is 2042/2042 reachable bins. Adding another stream would only take sampling time away from the builders that already cover the reachable bins.