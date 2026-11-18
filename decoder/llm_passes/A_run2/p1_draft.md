```python
def _perm32(rng):
    p = list(range(32))
    rng.shuffle(p)
    return p


def build_r_alu_port_sweep_stream(rng):
    """Targets BIN type 1 for ADD, SUB, AND, OR, XOR, SLL, SRL, SRA, SLT, SLTU,
    BIN type 2 (read_A/read_B/write on every register) and BIN type 3 for these
    10 ops x {read_A, read_B, write} x 32 registers (960 bins).

    Encoding: R-type, opcode OP (0x33), funct3 per op, funct7 0x00 (0x20 for
    SUB/SRA); rd -> write, rs1 -> read_A, rs2 -> read_B.  For each op, rd, rs1
    and rs2 are three independent random permutations of 0..31, so 32 words
    hit all 96 (port, register) bins of that op.

    Random 32-bit words almost never hit these: they need opcode 0x33 (1/128)
    AND funct7 exactly 0x00/0x20 (1/64 each) AND a matching funct3, and then
    still a specific register in a specific field.
    """
    ops = [(0b000, 0x00), (0b000, 0x20), (0b111, 0x00), (0b110, 0x00),
           (0b100, 0x00), (0b001, 0x00), (0b101, 0x00), (0b101, 0x20),
           (0b010, 0x00), (0b011, 0x00)]   # add sub and or xor sll srl sra slt sltu
    rng.shuffle(ops)
    stream = []
    for f3, f7 in ops:
        rds, rs1s, rs2s = _perm32(rng), _perm32(rng), _perm32(rng)
        for i in range(32):
            stream.append(enc_r(OPC["OP"], f3, f7, rds[i], rs1s[i], rs2s[i]))
    return stream


def build_imm_alu_port_sweep_stream(rng):
    """Targets BIN type 1 and BIN type 3 for ADDI, ANDI, ORI, XORI, SLTI,
    SLTUI(=SLTIU), SLLI, SRLI, SRAI x {read_A, write} x 32 registers, plus the
    SUBI bins under the only plausible reading (ADDI with a negative
    immediate -- RV32I has no SUBI encoding).

    Encoding: OP_IMM (0x13); I-type for addi/slti/sltiu/xori/ori/andi with a
    random 12-bit immediate; shift-immediates via enc_ish with top5 0b00000
    (slli/srli) or 0b01000 (srai), bits 26/25 = 0 (bit 25 = 1 would be an
    illegal RV32 shamt), shamt random 0..31.  rs1 -> read_A, rd -> write,
    each a random permutation of 0..31 per op so 32 words cover all 64 bins.

    Random words rarely hit: opcode 0x13 is 1/128, shift-imm forms also need
    instr[31:25] exact (1/128), and each (op, port, reg) triple is a further
    1/32 x 1/8 event.
    """
    OI = OPC["OP_IMM"]
    kinds = ["addi", "subi", "andi", "ori", "xori", "slti", "sltiu",
             "slli", "srli", "srai"]
    rng.shuffle(kinds)
    f3_of = {"addi": 0, "subi": 0, "slti": 2, "sltiu": 3, "xori": 4,
             "ori": 6, "andi": 7}
    stream = []
    for k in kinds:
        rds, rs1s = _perm32(rng), _perm32(rng)
        for i in range(32):
            rd, rs1 = rds[i], rs1s[i]
            if k == "slli":
                w = enc_ish(OI, 0b001, 0b00000, 0, 0, rd, rs1, rng.randint(0, 31))
            elif k == "srli":
                w = enc_ish(OI, 0b101, 0b00000, 0, 0, rd, rs1, rng.randint(0, 31))
            elif k == "srai":
                w = enc_ish(OI, 0b101, 0b01000, 0, 0, rd, rs1, rng.randint(0, 31))
            elif k == "subi":
                w = enc_i(OI, 0b000, rd, rs1, rng.randint(-2048, -1))  # addi, negative imm
            elif k == "addi":
                w = enc_i(OI, 0b000, rd, rs1, rng.randint(0, 2047))
            else:
                w = enc_i(OI, f3_of[k], rd, rs1, rng.randint(-2048, 2047))
            stream.append(w)
    return stream


def build_load_port_sweep_stream(rng):
    """Targets BIN type 1 and BIN type 3 for LW, LH, LB x {read_A (base rs1),
    write (rd)} x 32 registers (192 bins).

    Encoding: I-type, opcode LOAD (0x03), funct3 0b010/0b001/0b000, random
    12-bit offset; rd and rs1 are independent random permutations per op.
    Random words: opcode 0x03 is 1/128 and only 3 of 8 funct3 values are
    these ops, then each specific register is a further 1/32.
    """
    ops = [0b010, 0b001, 0b000]   # lw lh lb
    rng.shuffle(ops)
    stream = []
    for f3 in ops:
        rds, rs1s = _perm32(rng), _perm32(rng)
        for i in range(32):
            stream.append(enc_i(OPC["LOAD"], f3, rds[i], rs1s[i],
                                rng.randint(-2048, 2047)))
    return stream


def build_store_port_sweep_stream(rng):
    """Targets BIN type 1 and BIN type 3 for SW, SH, SB x {read_A (base rs1),
    read_B (data rs2)} x 32 registers (192 bins).

    Encoding: S-type, opcode STORE (0x23), funct3 0b010/0b001/0b000, random
    12-bit offset split over [31:25]/[11:7]; rs1 and rs2 are independent
    random permutations per op.  Random words: opcode 0x23 is 1/128 and only
    3 of 8 funct3 values are legal stores.
    """
    ops = [0b010, 0b001, 0b000]   # sw sh sb
    rng.shuffle(ops)
    stream = []
    for f3 in ops:
        rs1s, rs2s = _perm32(rng), _perm32(rng)
        for i in range(32):
            stream.append(enc_s(OPC["STORE"], f3, rs1s[i], rs2s[i],
                                rng.randint(-2048, 2047)))
    return stream


NEW_BUILDERS = [build_r_alu_port_sweep_stream, build_imm_alu_port_sweep_stream,
                build_load_port_sweep_stream, build_store_port_sweep_stream]
```

## Reasoning per stream

**How I read the plan.** The plan has three bin types. Type 1 is "each operation appears once". Type 2 is "each of the 32 registers is used on each of its three ports (read_A, read_B, write)". Type 3 is "each operation crossed with each port and each register", counting only the ports that operation actually uses:
- R-type ALU ops use read_A, read_B and write.
- Immediate ALU ops and loads use read_A and write.
- Stores use read_A and read_B.

Under that reading, the 25 real RV32I operations give 25 + 96 + (10×96 + 9×64 + 3×64 + 3×64) = 2041 bins. A uniformly random 32-bit word rarely hits any of them. It has to land on one of a few opcodes (1/128 each), often needs an exact funct7, and then needs a specific register in a specific field. So every stream sets the opcode and funct fields deterministically and makes rd, rs1 and rs2 independent random permutations of 0..31 for each operation. That way 32 words per operation cover every (port, register) bin for that operation, and different seeds give different register pairings and immediates. I checked this offline with a small field decoder (scratch only): one call of each builder covers all 2041 bins, and every stream is 96 to 320 words long, inside the 16..512 limit.

- **build_r_alu_port_sweep_stream** (320 words): covers ADD, SUB, AND, OR, XOR, SLL, SRL, SRA, SLT and SLTU on all three ports for all 32 registers (960 type-3 bins). On its own it also covers all 96 type-2 bins. funct7 is fixed at 0x00, or 0x20 for SUB and SRA, so every word is a legal instruction.
- **build_imm_alu_port_sweep_stream** (320 words): covers ADDI, SLTI, SLTIU (the plan's "SLTUI"), XORI, ORI and ANDI with random 12-bit immediates. It also covers SLLI, SRLI and SRAI using shamt 0..31 with instr[25] = 0, because instr[25] = 1 is an illegal shift amount on RV32. It includes a separate 32-word block of ADDI with negative immediates, aimed at "SUBI".
- **build_load_port_sweep_stream** (96 words): covers LW, LH and LB on read_A (base register) and write (rd) for all 32 registers.
- **build_store_port_sweep_stream** (96 words): covers SW, SH and SB on read_A (base register) and read_B (data register) for all 32 registers.

**Bins that may be impossible to hit.** RV32I has no SUBI instruction; subtracting an immediate is done with ADDI and a negative immediate. If the coverage model treats "ADDI with a negative immediate" as SUBI, the negative-immediate block in the imm-ALU stream covers SUBI's 1 + 64 bins. If it only recognises some encoding that doesn't exist, those bins can't be hit by any legal instruction word, and I didn't invent a malformed word for them.

The plan says 2107 bins, but my reading gives 2041 for the real operations, and adding SUBI only brings it to 2106. That leaves about one bin unexplained by the prose. I can't tell from the plan what it is, so no stream targets it.

I used no raw integer literals; every word comes from enc_r, enc_i, enc_s or enc_ish. Scratch files (gen.py and the test script t.py) are in C:/Users/andre/AppData/Local/Temp/claude/--wsl-localhost-Ubuntu-home-andrei-IBEX-ibex-coverage-experiments/27131787-a013-45ac-bdf2-da457a863e97/scratchpad/A_run2. No repository files were changed.