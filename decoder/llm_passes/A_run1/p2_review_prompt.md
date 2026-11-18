You are the independent adversarial reviewer of a draft constrained-random test (CRT) generator written by another agent for a design-verification experiment. You have NO context from whoever wrote it; treat it as an unverified submission. Re-derive every claim -- do not rubber-stamp.

Do NOT open: crt/generator.py, crt/func_coverage.py, crt/ml4dv_coverage.py, test_crt_decoder.py, profiles/, results/, PAPER_COMPARISON.md, README.md, llm_passes/ (except files named in this brief), crt/llm_runs/ (except your own run's files named in this brief), crt/llm_streams.py, llm_crt_prompts.py, llm_pipeline.py, ibex-coverage-experiments/decoder/ (repo-level ml4dv copy), rl-coverage/, cpu/, /tmp/ml4dv, any ml4dv / LLM4DV repository or paper text, any scratch folder other than your own, rtl/ (no RTL in this condition), any other Ibex source.

## The design under test

The DUT is the instruction decoder of a small RISC-V core configured for RV32IM + Zicsr (+ the privileged SYSTEM instructions); no compressed and no bit-manipulation extension. Each stimulus is ONE 32-bit instruction word applied to the decoder; its outputs are sampled once per word. You do NOT have the RTL or the testbench source.

## Files you may read

  //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/crt/isa.py   -- the encoder library (the ONLY way to build instruction words)
  //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/docs/ml4dv_bins_description.txt   -- the coverage plan description

Your own generator from earlier passes (these builders keep running; add NEW builders, do not repeat them):
  //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/crt/llm_runs/A_run1_p1.py

## Coverage metric(s)

Functional coverage plan of 2107 bins, described (in prose) in //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/docs/ml4dv_bins_description.txt. That description is all that is known about the plan.

## What to check, for EVERY function

1. Every encoder call builds the instruction its comment claims: check argument order and field widths in //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/crt/isa.py yourself (e.g. enc_i(op, f3, rd, rs1, imm), enc_s(op, f3, rs1, rs2, imm), enc_r(op, f3, f7, rd, rs1, rs2)). Argument-order mistakes are the most likely bug.
2. The words are legal (or illegal, when intended) for this configuration and plausibly hit the claimed coverage goal.
3. Every "cannot be hit" claim: CONFIRMED or DISPUTE, with your reasoning.
4. Python: returns list[int] of 32-bit values, 16..512 words, uses rng for free fields, defines any helper it uses, no imports (OPC and the enc_* functions are provided).

You may run Python under WSL for checks: write scratch files under C:/Users/andre/AppData/Local/Temp/claude/--wsl-localhost-Ubuntu-home-andrei-IBEX-ibex-coverage-experiments/27131787-a013-45ac-bdf2-da457a863e97/scratchpad/A_run1 and run `MSYS_NO_PATHCONV=1 wsl -d Ubuntu -- python3 <the /mnt/c/... path of that file>`; to import the encoders, add /home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/crt to sys.path and `from isa import *`.

## Draft to review

```python
def _illegal_word(rng):
    """One instruction word the RV32IM+Zicsr decoder must flag as illegal."""
    k = rng.randrange(14)
    rd, rs1, rs2 = rng.randrange(32), rng.randrange(32), rng.randrange(32)
    if k == 0:
        # OP with funct7 outside {0x00, 0x20, 0x01}: no B extension -> illegal
        f7 = rng.choice([f for f in range(128) if f not in (0x00, 0x20, 0x01)])
        return enc_r(OPC["OP"], rng.randrange(8), f7, rd, rs1, rs2)
    if k == 1:
        # OP with funct7=0x20 but funct3 other than SUB(000)/SRA(101)
        return enc_r(OPC["OP"], rng.choice([1, 2, 3, 4, 6, 7]), 0x20, rd, rs1, rs2)
    if k == 2:
        # SLLI with non-zero instr[31:25]
        top5 = rng.randrange(32)
        b26, b25 = rng.randrange(2), rng.randrange(2)
        if top5 == 0 and b26 == 0 and b25 == 0:
            top5 = rng.randrange(1, 32)
        return enc_ish(OPC["OP_IMM"], 0b001, top5, b26, b25, rd, rs1, rng.randrange(32))
    if k == 3:
        # SRLI/SRAI with instr[31:25] not 0000000 / 0100000
        top5 = rng.choice([t for t in range(32) if t not in (0b00000, 0b01000)])
        return enc_ish(OPC["OP_IMM"], 0b101, top5, rng.randrange(2), rng.randrange(2),
                       rd, rs1, rng.randrange(32))
    if k == 4:
        # LOAD funct3 011/110/111 (ld/lwu/... do not exist on RV32)
        return enc_i(OPC["LOAD"], rng.choice([3, 6, 7]), rd, rs1, rng.randint(-2048, 2047))
    if k == 5:
        # STORE funct3 011..111 (no such store on RV32)
        return enc_s(OPC["STORE"], rng.randrange(3, 8), rs1, rs2, rng.randint(-2048, 2047))
    if k == 6:
        # JALR funct3 != 000
        return enc_i(OPC["JALR"], rng.randrange(1, 8), rd, rs1, rng.randint(-2048, 2047))
    if k == 7:
        # BRANCH funct3 010/011 are reserved
        return enc_b(OPC["BRANCH"], rng.choice([2, 3]), rs1, rs2, 2 * rng.randint(-2048, 2047))
    if k == 8:
        # MISC_MEM funct3 010..111 reserved
        return enc_i(OPC["MISC_MEM"], rng.randrange(2, 8), rd, rs1, rng.randint(-2048, 2047))
    if k == 9:
        # SYSTEM funct3=100 is reserved
        return enc_i(OPC["SYSTEM"], 0b100, rd, rs1, rng.randint(-2048, 2047))
    if k == 10:
        # SYSTEM funct3=000 with an unknown funct12 (uret/sret/sfence-like/random)
        f12 = rng.choice([0x002, 0x102, 0x120, 0x7FF, 0x305, 0x003])
        return enc_i(OPC["SYSTEM"], 0b000, 0, 0, f12)
    if k == 11:
        # Deliberately malformed: major opcode with bits[1:0]==11 that RV32IM+Zicsr
        # does not implement (LOAD_FP, custom-0, AMO, OP_32, MADD.., OP_FP, OP_V,
        # custom-2/3, reserved 0x77/0x7F, OP_IMM_32 ...)
        op = rng.choice([0x07, 0x0B, 0x1B, 0x1F, 0x27, 0x2B, 0x2F, 0x3B, 0x3F,
                         0x43, 0x47, 0x4B, 0x4F, 0x53, 0x57, 0x5B, 0x5F,
                         0x6B, 0x77, 0x7B, 0x7F])
        return enc_i(op, rng.randrange(8), rd, rs1, rng.randint(-2048, 2047))
    if k == 12:
        # Deliberately malformed: bits[1:0] != 11 (compressed quadrant, C not enabled)
        op = rng.choice([o for o in range(128) if (o & 3) != 3])
        return enc_i(op, rng.randrange(8), rd, rs1, rng.randint(-2048, 2047))
    # Deliberately malformed raw words: all-zeros and all-ones are defined illegal
    return rng.choice([0x00000000, 0xFFFFFFFF])


def build_illegal_instruction_stream(rng):
    """Targets the `illegal_instruction` operation bin.

    Every word is one the RV32IM+Zicsr decoder must reject: reserved funct3 /
    funct7 / shift-top-bit combinations in OP, OP_IMM, LOAD, STORE, JALR,
    BRANCH, MISC_MEM and SYSTEM (built with enc_r/enc_i/enc_s/enc_b/enc_ish
    using illegal fixed fields), unimplemented major opcodes, opcodes with
    bits[1:0] != 11 (no C extension), and the raw 0x00000000 / 0xFFFFFFFF
    words. All earlier builders emit only legal words, so this bin was never
    exercised; a uniformly random 32-bit word would hit it, but the stream
    selector never produces random words. rd/rs1/rs2/imm are randomised.
    """
    return [_illegal_word(rng) for _ in range(96)]


def _non_plan_legal_word(rng):
    rd, rs1, rs2 = rng.randrange(32), rng.randrange(32), rng.randrange(32)
    k = rng.randrange(10)
    if k == 0:
        return enc_u(OPC[rng.choice(["LUI", "AUIPC"])], rd, rng.randrange(1 << 20))
    if k == 1:
        return enc_j(OPC["JAL"], rd, 2 * rng.randint(-(1 << 19), (1 << 19) - 1))
    if k == 2:
        return enc_i(OPC["JALR"], 0b000, rd, rs1, rng.randint(-2048, 2047))
    if k == 3:
        return enc_b(OPC["BRANCH"], rng.choice([0, 1, 4, 5, 6, 7]), rs1, rs2,
                     2 * rng.randint(-2048, 2047))
    if k == 4:
        # lbu / lhu (not in the plan's LB/LH/LW list)
        return enc_i(OPC["LOAD"], rng.choice([4, 5]), rd, rs1, rng.randint(-2048, 2047))
    if k == 5:
        # RV32M: mul .. remu
        return enc_r(OPC["OP"], rng.randrange(8), 0x01, rd, rs1, rs2)
    if k == 6:
        # csrrw/csrrs/csrrc and csrrwi/csrrsi/csrrci on common machine CSRs
        csr = rng.choice([0x300, 0x304, 0x305, 0x340, 0x341, 0x342, 0x343, 0xF14])
        return enc_i(OPC["SYSTEM"], rng.choice([1, 2, 3, 5, 6, 7]), rd, rs1, csr)
    if k == 7:
        # fence / fence.i
        return enc_i(OPC["MISC_MEM"], rng.choice([0, 1]), 0, 0, rng.randrange(256))
    if k == 8:
        # ecall / ebreak / mret / wfi / dret
        return enc_i(OPC["SYSTEM"], 0b000, 0, 0, rng.choice([0x000, 0x001, 0x302, 0x105, 0x7B2]))
    return enc_i(OPC["OP_IMM"], 0b000, 0, 0, 0)  # canonical nop (addi x0,x0,0)


def build_non_plan_legal_mix_stream(rng):
    """Hedge for the `illegal_instruction` operation bin if the monitor files
    every word that is none of the 26 plan operations under that bin.

    Emits legal RV32IM+Zicsr instructions outside the plan's operation list:
    LUI/AUIPC (enc_u), JAL (enc_j), JALR, branches (enc_b), LBU/LHU, MUL..REMU
    (enc_r funct7=0x01), CSR ops, FENCE/FENCE.I, ECALL/EBREAK/MRET/WFI/DRET.
    No earlier builder emits any of these, so whichever way the monitor
    classifies them they have never been sampled. All free fields randomised.
    """
    return [_non_plan_legal_word(rng) for _ in range(64)]


NEW_BUILDERS = [
    build_illegal_instruction_stream,
    build_non_plan_legal_mix_stream,
]
```

**Reasoning per stream**

- **build_illegal_instruction_stream**: Every pass-1 builder emits only legal words, and the generator only ever emits builder streams. So no word the decoder rejects was ever sampled, which explains the unreached `illegal_instruction` bin. This stream builds 96 words that are illegal for RV32IM+Zicsr with no B and no C extension. They cover a range of illegal decode paths: reserved funct7/funct3 in OP, non-zero top bits on SLLI/SRLI/SRAI, reserved funct3 in LOAD, STORE, JALR, BRANCH, MISC_MEM and SYSTEM, unknown SYSTEM funct12 values, unimplemented major opcodes, opcodes whose bits[1:0] are not 11, and the raw words 0x00000000 and 0xFFFFFFFF. Raw literals and non-table opcodes are commented as deliberately malformed.
- **build_non_plan_legal_mix_stream**: This is a hedge for a monitor that might label "none of the 26 plan operations" as `illegal_instruction` instead of using the decoder's illegal flag. It emits legal instructions that are not in the plan: LUI, AUIPC, JAL, JALR, branches, LBU/LHU, the M extension, CSR ops, FENCE and the SYSTEM ops. Pass 1 never emitted any of these.

**SUBI (65 bins: the SUBI operation bin, plus SUBI x read_A and SUBI x write for each of the 32 registers): I believe these cannot be reached, so I wrote no stream for them.** RV32I has no "subtract immediate" instruction. On this decoder, OP_IMM with funct3=000 always decodes as an add with an immediate, and nothing else produces a subtract with an immediate operand B in this configuration. Pass 1 already probed the obvious fallback, ADDI with negative immediates (`build_addi_negative_imm_subi_probe_stream`), across all rd/rs1 values. That ran 3 seeds x 100k stimuli and hit none of the SUBI bins, so the monitor does not count negative-immediate ADDI as SUBI. Pass 1's uniform ADDI immediates also already produced the bit pattern that resembles SUB (imm[11:5]=0100000) many times, with no SUBI hit. These 65 bins appear to be unreachable by construction. The best possible score is likely 2042/2107, if `illegal_instruction` is hit.

I checked both builders on 5 seeds against `isa.py`: every stream has 16 to 512 words and every word is a valid 32-bit value. I did not edit any repository file. My scratch copies are in `C:/Users/andre/AppData/Local/Temp/claude/--wsl-localhost-Ubuntu-home-andrei-IBEX-ibex-coverage-experiments/27131787-a013-45ac-bdf2-da457a863e97/scratchpad/A_run1/`.

## Output

Per function: CONFIRMED, NEEDS FIX (exact fix) or REJECT. Per "cannot be hit" claim: CONFIRMED or DISPUTE. End with ONE final ```python block containing only CONFIRMED / fixed functions and their helpers (no imports), ending with `NEW_BUILDERS = [...]`. Do not edit any repository file.
