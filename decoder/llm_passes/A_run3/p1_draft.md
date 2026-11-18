```python
def _perm32(rng):
    p = list(range(32))
    rng.shuffle(p)
    return p


def _imm12(rng):
    # bias toward sign/extreme corners and negatives, otherwise uniform
    r = rng.random()
    if r < 0.15:
        return rng.choice([-2048, -1, 0, 1, 2047])
    if r < 0.55:
        return rng.randint(-2048, -1)          # negative immediates (also "subtract-immediate" style addi)
    return rng.randint(0, 2047)


_R_OPS = [  # (funct3, funct7) for the 10 RV32I register-register ALU ops
    (0b000, 0x00),  # add
    (0b000, 0x20),  # sub
    (0b111, 0x00),  # and
    (0b110, 0x00),  # or
    (0b100, 0x00),  # xor
    (0b001, 0x00),  # sll
    (0b101, 0x00),  # srl
    (0b101, 0x20),  # sra
    (0b010, 0x00),  # slt
    (0b011, 0x00),  # sltu
]

_I_ARITH_F3 = [0b000, 0b111, 0b110, 0b100, 0b010, 0b011]   # addi andi ori xori slti sltiu
_I_SHIFTS = [(0b001, 0b00000), (0b101, 0b00000), (0b101, 0b01000)]  # slli srli srai (f3, instr[31:27])

_LOAD_F3 = [0b010, 0b001, 0b000]    # lw lh lb
_STORE_F3 = [0b010, 0b001, 0b000]   # sw sh sb


def build_rtype_alu_port_cross_stream(rng):
    """Targets: BIN type 1 for ADD, SUB, AND, OR, XOR, SLL, SRL, SRA, SLT, SLTU;
    BIN type 2 (read_A/read_B/write of all 32 registers); BIN type 3 for these
    10 ops x 32 registers x {read_A, read_B, write} = 960 cross bins.
    Encoding: OP opcode (0x33), funct3/funct7 per op, rd=[11:7] (write),
    rs1=[19:15] (read_A), rs2=[24:20] (read_B).  For each op, three independent
    random permutations of 0..31 are used for rd/rs1/rs2, so every register
    hits every port of every op exactly once per emission (32 words per op,
    320 words total) while the pairing between fields stays random.
    Random 32-bit words almost never hit this: the opcode must match one of 128
    values AND funct7 must be exactly 0x00/0x20 (1/128 each), so a specific
    (op, register, port) triple is ~1 in 10^6 per random word."""
    stream = []
    ops = list(_R_OPS)
    rng.shuffle(ops)
    for f3, f7 in ops:
        rds, rs1s, rs2s = _perm32(rng), _perm32(rng), _perm32(rng)
        for i in range(32):
            stream.append(enc_r(OPC["OP"], f3, f7, rds[i], rs1s[i], rs2s[i]))
    return stream


def build_itype_alu_port_cross_stream(rng):
    """Targets: BIN type 1 for ADDI, ANDI, ORI, XORI, SLTI, SLTUI(sltiu), SLLI,
    SRLI, SRAI; BIN type 3 for these 9 ops x 32 registers x {read_A, write}
    (576 cross bins); also contributes to BIN type 2 read_A/write.
    Encoding: OP_IMM opcode (0x13); arithmetic/logic ops use enc_i with a
    random 12-bit immediate (about half negative, plus the -2048/-1/0/1/2047
    corners); shifts use enc_ish with instr[31:27]=00000 (slli/srli) or 01000
    (srai), bits 26/25 = 0 and a random shamt -- any other top bits would be a
    different (bit-manip / illegal) instruction in this config.  rd and rs1 are
    independent random permutations of 0..31 per op so each op sees every
    register on both ports once per emission (288 words).
    Random words rarely produce legal shift-immediates (top 7 bits fixed) and
    almost never sweep a given op over all 32 registers on both ports."""
    stream = []
    jobs = [("i", f3) for f3 in _I_ARITH_F3] + [("sh", s) for s in _I_SHIFTS]
    rng.shuffle(jobs)
    for kind, arg in jobs:
        rds, rs1s = _perm32(rng), _perm32(rng)
        for i in range(32):
            if kind == "i":
                stream.append(enc_i(OPC["OP_IMM"], arg, rds[i], rs1s[i], _imm12(rng)))
            else:
                f3, top5 = arg
                stream.append(enc_ish(OPC["OP_IMM"], f3, top5, 0, 0, rds[i], rs1s[i],
                                      rng.randint(0, 31)))
    return stream


def build_load_port_cross_stream(rng):
    """Targets: BIN type 1 for LW, LH, LB; BIN type 3 for these 3 ops x 32
    registers x {read_A (base rs1), write (rd)} = 192 cross bins.
    Encoding: LOAD opcode (0x03), funct3 010/001/000, rs1=[19:15], rd=[11:7],
    random signed 12-bit offset.  Independent permutations of rd and rs1 per
    op cover every register on both ports in 96 words.  Random words hit LOAD
    only 1/128 of the time and spread over 8 funct3 values (3 of them
    illegal), so the full 192-bin sweep takes tens of thousands of words."""
    stream = []
    f3s = list(_LOAD_F3)
    rng.shuffle(f3s)
    for f3 in f3s:
        rds, rs1s = _perm32(rng), _perm32(rng)
        for i in range(32):
            stream.append(enc_i(OPC["LOAD"], f3, rds[i], rs1s[i], _imm12(rng)))
    return stream


def build_store_port_cross_stream(rng):
    """Targets: BIN type 1 for SW, SH, SB; BIN type 3 for these 3 ops x 32
    registers x {read_A (base rs1), read_B (data rs2)} = 192 cross bins
    (stores have no write port).
    Encoding: STORE opcode (0x23), funct3 010/001/000, rs1=[19:15],
    rs2=[24:20], random signed 12-bit offset split over [31:25]/[11:7] by
    enc_s.  Independent rs1/rs2 permutations per op cover every register on
    both read ports in 96 words; random words hit STORE only 1/128 of the time
    with 5 of 8 funct3 values illegal."""
    stream = []
    f3s = list(_STORE_F3)
    rng.shuffle(f3s)
    for f3 in f3s:
        rs1s, rs2s = _perm32(rng), _perm32(rng)
        for i in range(32):
            stream.append(enc_s(OPC["STORE"], f3, rs1s[i], rs2s[i], _imm12(rng)))
    return stream


NEW_BUILDERS = [
    build_rtype_alu_port_cross_stream,
    build_itype_alu_port_cross_stream,
    build_load_port_cross_stream,
    build_store_port_cross_stream,
]
```

## Reasoning per stream

**How I read the plan.** The plan has three kinds of bins, all built from opcode, register index and port:
- 26 per-operation bins.
- 96 register-port bins: 32 registers times read_A, read_B and write.
- An operation x register x port cross.

I counted the cross bins that a real RV32 instruction can reach:

| Operation group | Ports | Bins |
|---|---|---|
| 10 R-type ALU ops | read_A, read_B, write | 960 |
| 9 I-type ALU ops | read_A, write | 576 |
| 3 loads (LW, LH, LB) | read_A, write | 192 |
| 3 stores (SW, SH, SB) | read_A, read_B | 192 |

Together with the 26 + 96 bins above, that makes 2042. The remaining 65 of the 2107 bins match SUBI almost exactly: 1 per-operation bin plus 32 x {read_A, write} = 64 cross bins. One more bin is left over, which I cannot account for.

Coverage depends only on which operation is decoded and which register field sits on which port, not on operand values or sequences. So the best strategy is a full sweep: for each operation, shuffle the registers 0..31 separately for each port, so every (operation, register, port) triple is hit in one 32-word block. The pairing between fields still changes from seed to seed.

- **`build_rtype_alu_port_cross_stream`** (320 words): covers all 10 OP-opcode ALU instructions, with funct7 exactly 0x00 or 0x20 so none of them decodes as M or bit-manipulation. One emission should cover all 960 R-type cross bins plus every register-port bin.
- **`build_itype_alu_port_cross_stream`** (288 words): covers the 6 immediate arithmetic/logic ops and the 3 shift-immediates.
  - The shifts are built with `enc_ish` and top bits 0000000 or 0100000. Any other top bits would be a bit-manipulation or illegal instruction in this RV32IM configuration.
  - The immediates are weighted towards negative values and the edge values (-2048, -1, 0, 1, 2047).
- **`build_load_port_cross_stream` / `build_store_port_cross_stream`** (96 words each): cover LW/LH/LB with base register (read_A) and destination (write), and SW/SH/SB with base (read_A) and data register (read_B).

I kept four builders, one per group, because each one finishes its whole goal in one emission. Picking builders at random with equal weight therefore reaches full sweeps within a few picks. Smaller per-operation builders would only add calls without covering anything new.

**Bins I believe cannot be hit.** SUBI is not an RV32 instruction: there is no subtract-immediate encoding, and subtraction by a constant is written as `addi` with a negative immediate. I did not write a separate stream for it. I can't tell whether the hidden coverage monitor ever labels anything SUBI. If it treats `addi` with a negative immediate as SUBI, the I-type stream already produces those words for every rd/rs1, since about 40-50% of its `addi` immediates are negative. If it doesn't, those 65 bins cannot be reached by any legal instruction, and coverage would top out around 2042/2107 (about 96.9%), less the one bin I couldn't account for.

I could not confirm whether the monitor counts register x0, or the unused rs2 field of I-type and shift instructions, so the streams include x0 on every port.

I checked all four builders in my scratch folder against `isa.py`. Each returns the expected number of words (320, 288, 96, 96), every word fits in 32 bits, and every shift-immediate's top seven bits are 0000000 or 0100000. No repository files were changed.