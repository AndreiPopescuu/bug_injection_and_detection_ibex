## Independent review of the A_run2 draft

**How I checked it.** I re-read the `isa.py` encoders and the bins description myself. Then I took the draft's code block out of the brief, ran all four builders under WSL with seeds 0..19, and decoded every word with my own field decoder (scratch: `C:/Users/andre/AppData/Local/Temp/claude/--wsl-localhost-Ubuntu-home-andrei-IBEX-ibex-coverage-experiments/27131787-a013-45ac-bdf2-da457a863e97/scratchpad/A_run2_review/chk.py`). My decoder:
- treats instr[31:25] as funct7 for OP and for the shift-immediates;
- names an ADDI with a negative immediate SUBI;
- maps rs1 to read_A, rs2 to read_B and rd to write, per operation class.

**Result.** On every seed, one call of each builder gives 2106 distinct bins: 26 type-1, 96 type-2 and 1984 type-3. No word decoded to anything outside the 26 operations. Every stream is a list of ints in [0, 2^32), and the lengths are 320, 320, 96 and 96, all inside 16..512.

### build_r_alu_port_sweep_stream: CONFIRMED
- `enc_r(op, f3, f7, rd, rs1, rs2)` is called with the right argument order: `enc_r(OPC["OP"], f3, f7, rds[i], rs1s[i], rs2s[i])`.
- The (f3, f7) table is right: add 0/0x00, sub 0/0x20, and 7, or 6, xor 4, sll 1, srl 5/0x00, sra 5/0x20, slt 2, sltu 3. This matches the SPECS table in `isa.py` and RV32I.
- funct7 is never 0x01, so no word becomes an M-extension instruction. All 320 words are legal.
- The three independent permutations give all 96 (port, register) bins per operation, so 960 type-3 bins plus all 96 type-2 bins.
- `rng` drives the operation order, the registers and the pairings.

### build_imm_alu_port_sweep_stream: CONFIRMED
- `enc_i(op, f3, rd, rs1, imm)` is called in the right order. f3 values: addi/subi 0, slti 2, sltiu 3, xori 4, ori 6, andi 7. All correct.
- `enc_ish(op, f3, top5, b26, b25, rd, rs1, shamt)` is called in the right order:
  - slli: f3 1, top5 0b00000.
  - srli: f3 5, top5 0b00000.
  - srai: f3 5, top5 0b01000, which gives instr[31:25] = 0b0100000 (0x20).
  - b26 and b25 are 0, so the RV32 shamt is legal. shamt is random 0..31.
- Splitting ADDI (immediate 0..2047) from "SUBI" (immediate -2048..-1) is a sound hedge:
  - If the model ignores the sign, both blocks feed ADDI.
  - If it uses the sign, each operation gets its own 32-word block.

  Either way ADDI's 64 port bins are never lost.
- Each operation gets 32 words with permuted rd and rs1, so all 64 bins per operation are covered.

### build_load_port_sweep_stream: CONFIRMED
- The call is `enc_i(OPC["LOAD"], f3, rd, rs1, imm)` with f3 = 2 (lw), 1 (lh), 0 (lb). Order and values are correct and the words are legal.
- The offset is a random 12-bit value.
- It covers 3 × 64 = 192 type-3 bins.

### build_store_port_sweep_stream: CONFIRMED
- The call is `enc_s(op, f3, rs1, rs2, imm)`, which matches the signature: rs1 is the base (read_A) and rs2 is the data (read_B).
- f3 = 2 (sw), 1 (sh), 0 (sb). The words are legal and the immediate is split by the encoder.
- It covers 3 × 64 = 192 type-3 bins.

### General Python checks
- There are no imports.
- The only helper, `_perm32`, is defined.
- It assumes `rng` is a `random.Random`-style object (`shuffle`, `randint`), which matches the brief.
- Every word comes from an encoder; there are no raw integer literals.

### "Cannot be hit" claims
1. **SUBI has no real RV32I encoding; it is covered only if the model reads ADDI with a negative immediate as SUBI. Otherwise its 1 + 64 bins can't be hit.** CONFIRMED.
   - The plan lists 26 operations including SUBI, and RV32I has no SUBI opcode or funct3.
   - The negative-immediate ADDI block is the only plausible legal stimulus.
   - If the model expects some other, nonexistent encoding, no legal word can hit those bins. Not inventing an illegal word is correct.
2. **2107 vs 2106: about one bin is unexplained by the prose.** CONFIRMED.
   - My count of real operations is 25 + 96 + (10×96 + 9×64 + 3×64 + 3×64) = 2041. Adding SUBI (1 + 64) gives 2106.
   - Counting every operation on all three ports would give 26 + 96 + 26×96 = 2618, which is far more than 2107, so the per-operation used-port reading is right.
   - The leftover bin cannot be identified from the description, so not targeting it is reasonable.

No fixes are needed. All four functions are confirmed unchanged.

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
    write (rd)} x 32 registers (192 bins)."""
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
    read_B (data rs2)} x 32 registers (192 bins)."""
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