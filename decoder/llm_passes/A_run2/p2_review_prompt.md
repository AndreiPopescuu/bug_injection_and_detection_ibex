You are the independent adversarial reviewer of a draft constrained-random test (CRT) generator written by another agent for a design-verification experiment. You have NO context from whoever wrote it; treat it as an unverified submission. Re-derive every claim -- do not rubber-stamp.

Do NOT open: crt/generator.py, crt/func_coverage.py, crt/ml4dv_coverage.py, test_crt_decoder.py, profiles/, results/, PAPER_COMPARISON.md, README.md, llm_passes/ (except files named in this brief), crt/llm_runs/ (except your own run's files named in this brief), crt/llm_streams.py, llm_crt_prompts.py, llm_pipeline.py, ibex-coverage-experiments/decoder/ (repo-level ml4dv copy), rl-coverage/, cpu/, /tmp/ml4dv, any ml4dv / LLM4DV repository or paper text, any scratch folder other than your own, rtl/ (no RTL in this condition), any other Ibex source.

## The design under test

The DUT is the instruction decoder of a small RISC-V core configured for RV32IM + Zicsr (+ the privileged SYSTEM instructions); no compressed and no bit-manipulation extension. Each stimulus is ONE 32-bit instruction word applied to the decoder; its outputs are sampled once per word. You do NOT have the RTL or the testbench source.

## Files you may read

  //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/crt/isa.py   -- the encoder library (the ONLY way to build instruction words)
  //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/docs/ml4dv_bins_description.txt   -- the coverage plan description

Your own generator from earlier passes (these builders keep running; add NEW builders, do not repeat them):
  //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/crt/llm_runs/A_run2_p1.py

## Coverage metric(s)

Functional coverage plan of 2107 bins, described (in prose) in //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/docs/ml4dv_bins_description.txt. That description is all that is known about the plan.

## What to check, for EVERY function

1. Every encoder call builds the instruction its comment claims: check argument order and field widths in //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/crt/isa.py yourself (e.g. enc_i(op, f3, rd, rs1, imm), enc_s(op, f3, rs1, rs2, imm), enc_r(op, f3, f7, rd, rs1, rs2)). Argument-order mistakes are the most likely bug.
2. The words are legal (or illegal, when intended) for this configuration and plausibly hit the claimed coverage goal.
3. Every "cannot be hit" claim: CONFIRMED or DISPUTE, with your reasoning.
4. Python: returns list[int] of 32-bit values, 16..512 words, uses rng for free fields, defines any helper it uses, no imports (OPC and the enc_* functions are provided).

You may run Python under WSL for checks: write scratch files under C:/Users/andre/AppData/Local/Temp/claude/--wsl-localhost-Ubuntu-home-andrei-IBEX-ibex-coverage-experiments/27131787-a013-45ac-bdf2-da457a863e97/scratchpad/A_run2 and run `MSYS_NO_PATHCONV=1 wsl -d Ubuntu -- python3 <the /mnt/c/... path of that file>`; to import the encoders, add /home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/crt to sys.path and `from isa import *`.

## Draft to review

```python
def _rr(rng):
    return rng.randint(0, 31)


def _illegal_word(rng):
    k = rng.randrange(12)
    if k == 0:
        # malformed on purpose: 7-bit major opcodes with [1:0]=11 that RV32IM+Zicsr
        # does not decode (LOAD-FP, custom-0, MISC 0x1B, STORE-FP, AMO, OP-32,
        # MADD..NMADD, OP-FP, custom-2, reserved 0x57/0x77, custom-3)
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
        f12 = rng.choice([v for v in (0x002, 0x003, 0x102, 0x202, 0x303, 0x7B3, 0x104,
                                      0x106, 0x120, 0x7FF, 0xFFF, 0x300)])
        return enc_i(OPC["SYSTEM"], 0, 0, 0, f12)
    # MISC_MEM with funct3 not 000/001
    return enc_i(OPC["MISC_MEM"], rng.randint(2, 7), _rr(rng), _rr(rng), rng.randint(-2048, 2047))


def build_illegal_instruction_mix_stream(rng):
    """Targets the operation bin 'illegal_instruction'.

    Every word is deliberately undecodable for an RV32IM+Zicsr core with no
    compressed and no bit-manip extension: unsupported major opcodes, words
    with instr[1:0] != 11, OP with unknown funct7 (or funct7=0x20 on a funct3
    other than SUB/SRA), LOAD funct3 011/110/111, STORE funct3 >= 011, BRANCH
    funct3 010/011, JALR funct3 != 0, OP_IMM shifts with nonzero/unknown upper
    bits or shamt[5] set, SYSTEM funct3=100, SYSTEM funct3=0 with an unknown
    funct12, MISC_MEM funct3 >= 010.  Several independent illegal classes are
    mixed so the bin is hit whichever check the decoder/monitor uses.  All
    earlier builders emit only legal words, which is why this bin was never
    reached; a random 32-bit word would hit it often, but the generator never
    produces random words.
    """
    return [_illegal_word(rng) for _ in range(rng.randint(48, 96))]


NEW_BUILDERS = [build_illegal_instruction_mix_stream]
```

## Reasoning

**build_illegal_instruction_mix_stream (targets the `illegal_instruction` bin).** The plan has 2107 bins. That count works out as 26 operations plus `illegal_instruction` (27 operation bins), plus 96 register-port bins, plus 1984 operation x port bins. So `illegal_instruction` is a real bin of its own. The pass-1 builders only produce legal encodings, which explains why this bin was never hit. This stream mixes 12 separate kinds of illegal encoding, so at least one should trigger whichever illegal check the decoder flags. Every word is built with the `isa.py` encoders. Where a raw literal is used (unsupported opcode values, or `instr[1:0] != 11`), a comment says why the word is malformed on purpose. I smoke-tested it in a scratch copy: 50 seeds each gave 48 to 96 valid 32-bit words.

**SUBI, and SUBI x read_A / write, registers 0-31 (65 bins): I believe these cannot be hit.** RV32I, M and Zicsr have no subtract-immediate instruction. OP_IMM with funct3=000 is only ADDI, and the ISA never encodes a subtraction with an immediate operand. Pass 1 already tried the only reasonable stand-in, which is ADDI with a negative immediate, for every rd and rs1 over 3 x 100k stimuli. None of the SUBI bins were hit, so the coverage model does not count that as SUBI. In decoder terms, a SUBI would need a subtract ALU operation with the immediate as its second operand, and a decoder for this ISA has no encoding that produces that. I am not adding a stream for these 65 bins; they look like a structural hole in the plan. The best reachable result is 2042/2107, which needs the illegal-instruction bin to close.

## Output

Per function: CONFIRMED, NEEDS FIX (exact fix) or REJECT. Per "cannot be hit" claim: CONFIRMED or DISPUTE. End with ONE final ```python block containing only CONFIRMED / fixed functions and their helpers (no imports), ending with `NEW_BUILDERS = [...]`. Do not edit any repository file.
