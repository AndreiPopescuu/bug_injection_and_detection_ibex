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
