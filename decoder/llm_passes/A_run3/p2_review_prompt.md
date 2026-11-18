You are the independent adversarial reviewer of a draft constrained-random test (CRT) generator written by another agent for a design-verification experiment. You have NO context from whoever wrote it; treat it as an unverified submission. Re-derive every claim -- do not rubber-stamp.

Do NOT open: crt/generator.py, crt/func_coverage.py, crt/ml4dv_coverage.py, test_crt_decoder.py, profiles/, results/, PAPER_COMPARISON.md, README.md, llm_passes/ (except files named in this brief), crt/llm_runs/ (except your own run's files named in this brief), crt/llm_streams.py, llm_crt_prompts.py, llm_pipeline.py, ibex-coverage-experiments/decoder/ (repo-level ml4dv copy), rl-coverage/, cpu/, /tmp/ml4dv, any ml4dv / LLM4DV repository or paper text, any scratch folder other than your own, rtl/ (no RTL in this condition), any other Ibex source.

## The design under test

The DUT is the instruction decoder of a small RISC-V core configured for RV32IM + Zicsr (+ the privileged SYSTEM instructions); no compressed and no bit-manipulation extension. Each stimulus is ONE 32-bit instruction word applied to the decoder; its outputs are sampled once per word. You do NOT have the RTL or the testbench source.

## Files you may read

  //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/crt/isa.py   -- the encoder library (the ONLY way to build instruction words)
  //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/docs/ml4dv_bins_description.txt   -- the coverage plan description

Your own generator from earlier passes (these builders keep running; add NEW builders, do not repeat them):
  //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/crt/llm_runs/A_run3_p1.py

## Coverage metric(s)

Functional coverage plan of 2107 bins, described (in prose) in //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/docs/ml4dv_bins_description.txt. That description is all that is known about the plan.

## What to check, for EVERY function

1. Every encoder call builds the instruction its comment claims: check argument order and field widths in //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/crt/isa.py yourself (e.g. enc_i(op, f3, rd, rs1, imm), enc_s(op, f3, rs1, rs2, imm), enc_r(op, f3, f7, rd, rs1, rs2)). Argument-order mistakes are the most likely bug.
2. The words are legal (or illegal, when intended) for this configuration and plausibly hit the claimed coverage goal.
3. Every "cannot be hit" claim: CONFIRMED or DISPUTE, with your reasoning.
4. Python: returns list[int] of 32-bit values, 16..512 words, uses rng for free fields, defines any helper it uses, no imports (OPC and the enc_* functions are provided).

You may run Python under WSL for checks: write scratch files under C:/Users/andre/AppData/Local/Temp/claude/--wsl-localhost-Ubuntu-home-andrei-IBEX-ibex-coverage-experiments/27131787-a013-45ac-bdf2-da457a863e97/scratchpad/A_run3 and run `MSYS_NO_PATHCONV=1 wsl -d Ubuntu -- python3 <the /mnt/c/... path of that file>`; to import the encoders, add /home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/crt to sys.path and `from isa import *`.

## Draft to review

```python
_ILLEGAL_OPCODES = [  # 7-bit major opcodes with [1:0]=11 that RV32IM+Zicsr does not decode
    0x07, 0x0B, 0x1B, 0x1F, 0x27, 0x2B, 0x2F, 0x3B, 0x3F, 0x43, 0x47, 0x4B,
    0x4F, 0x53, 0x57, 0x5B, 0x5F, 0x6B, 0x77, 0x7B, 0x7F,
]
_LEGAL_R_F7 = {0x00, 0x20, 0x01}
_SYS_F12_LEGAL = {0x000, 0x001, 0x302, 0x7B2, 0x105}


def _r5(rng):
    return rng.randint(0, 31)


def _illegal_word(rng):
    k = rng.randrange(12)
    if k == 0:   # unknown major opcode (FP, AMO, custom-0..3, OP-32, ...)
        return enc_i(rng.choice(_ILLEGAL_OPCODES), rng.randint(0, 7), _r5(rng), _r5(rng),
                     rng.randint(-2048, 2047))
    if k == 1:   # legal major opcode but instr[1:0] != 11 (16-bit/compressed space; no C ext)
        op = rng.choice(list(OPC.values())) & 0x7C | rng.randint(0, 2)
        return enc_i(op, rng.randint(0, 7), _r5(rng), _r5(rng), rng.randint(-2048, 2047))
    if k == 2:   # OP with funct7 outside {0x00, 0x20, 0x01} (incl. bitmanip funct7s, B absent)
        f7 = rng.choice([v for v in range(128) if v not in _LEGAL_R_F7])
        return enc_r(OPC["OP"], rng.randint(0, 7), f7, _r5(rng), _r5(rng), _r5(rng))
    if k == 3:   # OP funct7=0x20 with funct3 other than 000 (sub) / 101 (sra)
        return enc_r(OPC["OP"], rng.choice([1, 2, 3, 4, 6, 7]), 0x20, _r5(rng), _r5(rng), _r5(rng))
    if k == 4:   # slli with non-zero instr[31:25] (incl. shamt[5]=bit25 on RV32, bitmanip slots)
        while True:
            top5, b26, b25 = rng.randint(0, 31), rng.randint(0, 1), rng.randint(0, 1)
            if (top5, b26, b25) != (0, 0, 0):
                break
        return enc_ish(OPC["OP_IMM"], 0b001, top5, b26, b25, _r5(rng), _r5(rng), _r5(rng))
    if k == 5:   # srli/srai with instr[31:25] not in {0000000, 0100000}
        while True:
            top5, b26, b25 = rng.randint(0, 31), rng.randint(0, 1), rng.randint(0, 1)
            if (top5, b26, b25) not in ((0, 0, 0), (0b01000, 0, 0)):
                break
        return enc_ish(OPC["OP_IMM"], 0b101, top5, b26, b25, _r5(rng), _r5(rng), _r5(rng))
    if k == 6:   # LOAD funct3 011 (ld, RV64), 110 (lwu), 111
        return enc_i(OPC["LOAD"], rng.choice([3, 6, 7]), _r5(rng), _r5(rng), rng.randint(-2048, 2047))
    if k == 7:   # STORE funct3 011..111
        return enc_s(OPC["STORE"], rng.randint(3, 7), _r5(rng), _r5(rng), rng.randint(-2048, 2047))
    if k == 8:   # BRANCH funct3 010 / 011 (reserved)
        return enc_b(OPC["BRANCH"], rng.choice([2, 3]), _r5(rng), _r5(rng),
                     rng.randint(-2048, 2047) * 2)
    if k == 9:   # JALR funct3 != 000
        return enc_i(OPC["JALR"], rng.randint(1, 7), _r5(rng), _r5(rng), rng.randint(-2048, 2047))
    if k == 10:  # MISC_MEM funct3 010..111 (fence/fence.i are 000/001)
        return enc_i(OPC["MISC_MEM"], rng.randint(2, 7), _r5(rng), _r5(rng), rng.randint(-2048, 2047))
    # k == 11: SYSTEM funct3=100 (reserved), or funct3=000 with unknown funct12
    if rng.random() < 0.5:
        return enc_i(OPC["SYSTEM"], 0b100, _r5(rng), _r5(rng), rng.randint(-2048, 2047))
    while True:
        f12 = rng.randint(0, 4095)
        if f12 not in _SYS_F12_LEGAL:
            break
    return enc_i(OPC["SYSTEM"], 0b000, 0, 0, f12)


def build_illegal_instruction_stream(rng):
    """Targets the 'illegal_instruction' operation bin (the decoder's
    illegal-instruction output). Every word is deliberately malformed for
    RV32IM+Zicsr (no C, no B). The words come from 12 independent illegality
    classes: unknown major opcodes; instr[1:0]!=11; OP funct7 outside
    {00,20,01}; funct7=0x20 with funct3 other than sub/sra; slli/srli/srai with
    a bad instr[31:25] (shamt[5] or bitmanip slots); reserved
    LOAD/STORE/BRANCH/JALR/MISC_MEM funct3 values; SYSTEM funct3=100; and
    unknown SYSTEM funct12. Words are built through the encoders with
    out-of-spec field values, with no raw literals. Every earlier builder emits
    only well-formed RV32I words, so the generator has never produced an
    illegal word. The classes are mixed because we don't know which checks the
    decoder implements. 128 words."""
    return [_illegal_word(rng) for _ in range(128)]


NEW_BUILDERS = [build_illegal_instruction_stream]
```

**Reasoning per stream**

- **build_illegal_instruction_stream** (targets `illegal_instruction`, 1 bin): a fully random 32-bit word would hit this bin almost every time. It is unreached only because every pass-1 builder builds legal RV32I encodings. Since the RTL isn't available, I don't know which illegality checks the decoder performs. The stream therefore spreads its 128 words across 12 classes, about 10 words per class, so at least one class is very likely to raise the illegal output. The classes are:
  - unknown or reserved major opcodes, including the FP, AMO and custom slots
  - non-32-bit encodings (instr[1:0] != 11; the C extension is absent)
  - bad funct7 on OP, including the bitmanip funct7 values (the B extension is absent)
  - funct7=0x20 with a funct3 other than sub/sra
  - bad upper bits on immediate shifts, including shamt[5]=1, which is illegal on RV32
  - reserved funct3 values in LOAD, STORE, BRANCH, JALR and MISC_MEM
  - SYSTEM funct3=100
  - SYSTEM funct3=000 with an unknown funct12

  I checked it in a scratch run: 50 seeds each give 128 valid 32-bit words.

- **SUBI** (the SUBI operation bin plus SUBI x read_A and SUBI x write for registers 0-31, 65 bins): I think these bins can't be hit, so I did not invent a stream for them. RV32I has no subtract-immediate instruction. In OP-IMM, funct3=000 is only ADDI, and instr[31:20] is the immediate rather than a funct7, so there is no bit-30 "SUB" variant. A decoder for this ISA never selects a subtract ALU operation with an immediate operand: loads, stores, jumps and ADDI all add, and branches compare.

  Pass 1 already tried the obvious mappings and missed:
  - ADDI with every negative immediate, over all 32 rd/rs1 registers.
  - ADDI with non-negative immediates, which include imm[11:5]=0b0100000. That pattern appears about once in 64 of those words, so across 3 seeds x 100k stimuli it showed up many times.

  So the bin's intended encoding does not exist in this ISA. The 64 SUBI register crosses fail for the same reason.

## Output

Per function: CONFIRMED, NEEDS FIX (exact fix) or REJECT. Per "cannot be hit" claim: CONFIRMED or DISPUTE. End with ONE final ```python block containing only CONFIRMED / fixed functions and their helpers (no imports), ending with `NEW_BUILDERS = [...]`. Do not edit any repository file.
