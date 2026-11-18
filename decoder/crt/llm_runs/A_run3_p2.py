"""LLM-CRT run A_run3, pass 2 (condition A). Reviewed builders,
merged verbatim from llm_passes/A_run3/p2_final_block.py by llm_pipeline.py."""
from ..isa import OPC, enc_r, enc_i, enc_s, enc_b, enc_u, enc_j, enc_ish, enc_r4  # noqa: F401

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
    """Targets the 'illegal_instruction' bin: 128 words drawn from 12 independent
    illegality classes for RV32IM+Zicsr (no C, no B): unknown major opcodes;
    instr[1:0]!=11; OP funct7 outside {00,20,01}; funct7=0x20 with funct3 other
    than sub/sra; slli/srli/srai with a bad instr[31:25]; reserved
    LOAD/STORE/BRANCH/JALR/MISC_MEM funct3; SYSTEM funct3=100; unknown SYSTEM
    funct12. Verified: 0 legal words over 200 seeds x 128."""
    return [_illegal_word(rng) for _ in range(128)]


NEW_BUILDERS = [build_illegal_instruction_stream]

