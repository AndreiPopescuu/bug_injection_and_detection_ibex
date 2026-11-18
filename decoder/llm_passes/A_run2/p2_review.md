## Review of A_run2 pass 2

I checked the draft against `crt/isa.py`, `docs/ml4dv_bins_description.txt` and `crt/llm_runs/A_run2_p1.py`. My scratch checks are in `C:/Users/andre/AppData/Local/Temp/claude/--wsl-localhost-Ubuntu-home-andrei-IBEX-ibex-coverage-experiments/27131787-a013-45ac-bdf2-da457a863e97/scratchpad/A_run2_review_p2/chk.py`. I did not open any other file under `llm_passes/`.

### Bin-count check (done independently)
- Operation bins: 26.
- Port bins: 32 registers x 3 ports = 96.
- Operation x port bins:
  - 10 R-type ops x 96 = 960
  - 10 immediate ops x 64 (read_A, write) = 640
  - 3 loads x 64 (read_A, write) = 192
  - 3 stores x 64 (read_A, read_B) = 192
  - Total: 1984.
- Grand total: 26 + 96 + 1984 = **2106**. The plan has 2107 bins, so exactly one bin is not described in the prose.

Calling that extra bin `illegal_instruction` is an **inference**, not something the description states. The description lists only 26 operations and never mentions illegal instructions. The author writes "27 operation bins" as if it were a fact; it should be marked as a hypothesis. It is still the most plausible reading. If the extra bin is instead an "other / unclassified operation" bin, deliberately illegal words would very likely land in it too, so the builder is a cheap, sound hedge either way. The headline figure is consistent: 2107 - 65 SUBI bins = 2042 reachable.

### build_illegal_instruction_mix_stream (with helpers _rr and _illegal_word): CONFIRMED

**1. Encoder argument order.** Every call matches the `isa.py` signatures:
- `enc_r(op, f3, f7, rd, rs1, rs2)` in k=0..3
- `enc_i(op, f3, rd, rs1, imm)` in k=4, 7, 9, 10, 11
- `enc_s(op, f3, rs1, rs2, imm)` in k=5
- `enc_b(op, f3, rs1, rs2, imm)` in k=6. The immediate is even and within ±4096; the 13-bit mask is applied correctly.
- `enc_ish(op, f3, top5, b26, b25, rd, rs1, shamt)` in k=8

Field widths are masked by the encoders.

**2. Illegality.** I ran 2000 seeds (about 144k words) through my own RV32IM + Zicsr + privileged legality model. That model accepts LUI, AUIPC, JAL, JALR with f3=0, the legal branch, load and store funct3 values, OP_IMM with slli top=0 and srli/srai top in {0, 0x20}, OP with f7 in {0, 1} or 0x20 on f3 in {0, 5}, MISC_MEM f3 in {0, 1}, SYSTEM f3=0 only with rd=rs1=0 and funct12 in {ecall, ebreak, mret, dret, wfi}, and SYSTEM f3 != 4. **Zero words were legal.**

Checks on individual classes:
- k=1 (`& 0x7C`): clears bits [1:0] (bit 7 is irrelevant), so [1:0] is always in {00, 01, 10}. These are illegal for a 32-bit decoder with no C.
- k=8: when b25=1 the shift is illegal because shamt[5] is set. When b26=1 on f3=5 the word has the fsri pattern, which is still illegal because there is no bit-manip.
- k=10: sret (0x102), sfence.vma (0x120) and the old uret/hret encodings are all illegal on an M/U-only core.

**3. Python checks.** All pass:
- Returns 48..96 ints, all in [0, 2^32).
- No imports; `_rr` is defined.
- Free fields use `rng`.
- `rng.random`, `rng.randrange` and `rng.choice` all exist on `random.Random`.

**Cosmetic issues only, no fix required:**
- The k=0 comment labels are off:
  - 0x1B is OP-IMM-32 (RV64), not "MISC".
  - 0x2B is custom-1.
  - 0x57 is OP-V.
  - All of these are still illegal here.
- In k=10, the `[v for v in (...)]` wrapper is redundant.
- In k=8, the f3=1 branch also excludes top5=0b01000, although that value would be illegal as well. This loses a little variety and does not affect correctness.

Optional hedge, not applied: a few legal words outside the 26 operations (LUI, AUIPC, JAL, branches, MUL, LBU, CSR, FENCE) would cover the case where the extra bin means "other legal op". I did not add them, because the docstring promises that every word is illegal.

### "Cannot be hit" claim: SUBI (1 operation bin + 64 SUBI x read_A/write bins = 65): CONFIRMED
- RV32IM + Zicsr has no subtract-immediate encoding. OP_IMM funct3=000 is ADDI regardless of the immediate bits.
- An ADDI word with instr[30] set (the SUB-style funct7 bit) is still ADDI. That bit is imm[10], and pass 1 already set it randomly in about half of its negative-immediate ADDI words.
- No legal instruction in this configuration produces a subtract ALU operation with an immediate operand. JAL, JALR, loads and stores use add; branches use compare operations.
- Pass 1's ADDI-with-negative-immediate stand-in is the only plausible encoding. I could not verify the author's report that it hit none of these bins, because results are off-limits to me, but nothing in the ISA leaves another route.
- These 65 bins are a structural hole in the plan, and 2042/2107 is the ceiling.

```python
def _rr(rng):
    return rng.randint(0, 31)


def _illegal_word(rng):
    k = rng.randrange(12)
    if k == 0:
        # malformed on purpose: 7-bit major opcodes with [1:0]=11 that RV32IM+Zicsr
        # does not decode (LOAD-FP, custom-0, OP-IMM-32, STORE-FP, custom-1, AMO,
        # OP-32, MADD..NMADD, OP-FP, OP-V, custom-2, reserved 0x77, custom-3)
        op = rng.choice([0x07, 0x0B, 0x1B, 0x27, 0x2B, 0x2F, 0x3B, 0x43, 0x47,
                         0x4B, 0x4F, 0x53, 0x57, 0x5B, 0x77, 0x7B])
        return enc_r(op, rng.randint(0, 7), rng.randint(0, 127), _rr(rng), _rr(rng), _rr(rng))
    if k == 1:
        # malformed on purpose: instr[1:0] != 2'b11 (16-bit/compressed space,
        # C extension is not configured); keep a legal-looking upper part
        op = (OPC[rng.choice(list(OPC))] & 0x7C) | rng.randint(0, 2)
        return enc_r(op, rng.randint(0, 7), rng.randint(0, 127), _rr(rng), _rr(rng), _rr(rng))
    if k == 2:
        # OP with funct7 not in {0x00, 0x01(M), 0x20}; malformed on purpose
        f7 = rng.choice([v for v in range(128) if v not in (0x00, 0x01, 0x20)])
        return enc_r(OPC["OP"], rng.randint(0, 7), f7, _rr(rng), _rr(rng), _rr(rng))
    if k == 3:
        # OP with funct7=0x20 but funct3 not 000(sub)/101(sra)
        return enc_r(OPC["OP"], rng.choice([1, 2, 3, 4, 6, 7]), 0x20, _rr(rng), _rr(rng), _rr(rng))
    if k == 4:
        # LOAD with reserved funct3 (011 = ld is RV64, 110, 111)
        return enc_i(OPC["LOAD"], rng.choice([3, 6, 7]), _rr(rng), _rr(rng), rng.randint(-2048, 2047))
    if k == 5:
        # STORE with reserved funct3 (011 = sd is RV64, 100..111)
        return enc_s(OPC["STORE"], rng.randint(3, 7), _rr(rng), _rr(rng), rng.randint(-2048, 2047))
    if k == 6:
        # BRANCH with reserved funct3 010 / 011
        return enc_b(OPC["BRANCH"], rng.choice([2, 3]), _rr(rng), _rr(rng), rng.randrange(-4096, 4096, 2))
    if k == 7:
        # JALR with funct3 != 000
        return enc_i(OPC["JALR"], rng.randint(1, 7), _rr(rng), _rr(rng), rng.randint(-2048, 2047))
    if k == 8:
        # OP_IMM shifts with bad upper bits: slli with top5 != 0, or srli/srai with
        # top5 not in {00000, 01000}, or bit25 set (shamt[5], illegal on RV32);
        # no bit-manip extension, so bitmanip-style top5 values are also illegal
        f3 = rng.choice([1, 5])
        if rng.random() < 0.5:
            top5 = rng.choice([t for t in range(32) if t not in (0b00000, 0b01000)])
            b26, b25 = rng.randint(0, 1), rng.randint(0, 1)
        else:
            top5 = 0b00000 if f3 == 1 else rng.choice([0b00000, 0b01000])
            b26, b25 = rng.randint(0, 1), 1
        return enc_ish(OPC["OP_IMM"], f3, top5, b26, b25, _rr(rng), _rr(rng), rng.randint(0, 31))
    if k == 9:
        # SYSTEM funct3=100 is reserved
        return enc_i(OPC["SYSTEM"], 0b100, _rr(rng), _rr(rng), rng.randint(0, 4095))
    if k == 10:
        # SYSTEM funct3=000 with funct12 that is not ecall/ebreak/mret/dret/wfi
        f12 = rng.choice([0x002, 0x003, 0x102, 0x202, 0x303, 0x7B3, 0x104,
                          0x106, 0x120, 0x7FF, 0xFFF, 0x300])
        return enc_i(OPC["SYSTEM"], 0, 0, 0, f12)
    # MISC_MEM with funct3 not 000/001
    return enc_i(OPC["MISC_MEM"], rng.randint(2, 7), _rr(rng), _rr(rng), rng.randint(-2048, 2047))


def build_illegal_instruction_mix_stream(rng):
    """Targets the (inferred) extra 2107th bin, presumably 'illegal_instruction'
    (26 + 96 + 1984 = 2106 described bins).

    Every word is deliberately undecodable for an RV32IM+Zicsr core with no
    compressed and no bit-manip extension: unsupported major opcodes, words
    with instr[1:0] != 11, OP with unknown funct7 (or funct7=0x20 on a funct3
    other than SUB/SRA), LOAD funct3 011/110/111, STORE funct3 >= 011, BRANCH
    funct3 010/011, JALR funct3 != 0, OP_IMM shifts with nonzero/unknown upper
    bits or shamt[5] set, SYSTEM funct3=100, SYSTEM funct3=0 with an unknown
    funct12, MISC_MEM funct3 >= 010.  Several independent illegal classes are
    mixed so the bin is hit whichever check the decoder/monitor uses.
    """
    return [_illegal_word(rng) for _ in range(rng.randint(48, 96))]


NEW_BUILDERS = [build_illegal_instruction_mix_stream]
```