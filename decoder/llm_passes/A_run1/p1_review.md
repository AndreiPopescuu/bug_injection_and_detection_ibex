## Independent review: A_run1 draft CRT generator (decoder, ml4dv functional plan)

**What I checked:** I read `crt/isa.py` and `docs/ml4dv_bins_description.txt`. I re-ran every builder's encoding under WSL in the scratch folder `.../scratchpad/A_run1_review/check.py`. That script decodes the words back to op and register fields and counts the op × port cross bins they reach. No repository file was edited.

**Encoder signatures checked against isa.py:** `enc_r(op,f3,f7,rd,rs1,rs2)`, `enc_i(op,f3,rd,rs1,imm)`, `enc_s(op,f3,rs1,rs2,imm)`, `enc_ish(op,f3,top5,b26,b25,rd,rs1,shamt)`. Every call in the draft passes its arguments in the right order with the right widths.

Spot checks:
- `srai x1,x2,3` encodes to 0x40315093, as the draft claims.
- `enc_s(0x23,2,5,7,-4)` gives 0xfe72ae23, which is `sw x7,-4(x5)`. The S-type immediate split is correct.

**Simulated coverage (seed 5, all builders except the SUBI probe):** 800 words, every one a legal 32-bit value that decodes to the intended op. They reach 1920 cross bins: 960 R-type + 384 I-ALU + 192 shift-immediate + 192 load + 192 store. That is the draft's 1984 minus the 64 SUBI port bins, so it matches.

**Bin arithmetic:** 26 op bins + 96 port bins + 1984 cross bins = 2106, against 2107 in the plan. This agrees with the draft. A full 26×96 cross would give 2618, so the plan must prune the ports each op cannot use, as the draft assumes. The one leftover bin cannot be identified from the prose. The draft makes no "cannot be hit" claim about it, so there is nothing to confirm or dispute.

### Per-function verdicts

- **`_perm32`, `_rand_imm12`, and the tables** (`_R_OPS`, `_I_ALU_OPS`, `_SH_OPS`, `_LOADS`, `_STORES`): **CONFIRMED.** The funct3/funct7 values match the RV32I entries in isa.py exactly. `_SH_OPS` puts the 5-bit top field (instr[31:27]) in `enc_ish`'s `top5` slot: 00000 for slli/srli and 01000 for srai.

- **`build_rtype_port_cross_stream`** (320 words): **CONFIRMED.** It uses opcode OP with only funct7 0x00/0x20, so no M-extension (0x01) or bitmanip encodings slip in. rd, rs1 and rs2 each walk their own permutation, so all 32 registers are hit on all 3 ports for each of the 10 ops (960 bins).

- **`build_itype_alu_port_cross_stream`** (192 words): **NEEDS FIX** (a hedge, not an encoding bug). The draft's own SUBI theory says a monitor may count ADDI with a negative immediate as SUBI. If so, those words do not count as ADDI. About half the ADDI words here have negative immediates: on seed 5 only 30 of the 64 ADDI port bins (read_A or write × 32) were hit with imm ≥ 0. Under that monitor reading, ADDI cross coverage drops to about half.
  - **Exact fix:** when funct3 is 000 (addi), draw the immediate from [0, 2047], using corner values 0/1/2047 a quarter of the time. The negative-immediate sweep is already done by the SUBI probe, so the two streams together cover both readings of the monitor. All other ops keep `_rand_imm12`.

- **`build_shift_imm_port_cross_stream`** (96 words): **CONFIRMED.** b26 and b25 are 0 and shamt is in 0..31, so instr[31:25] is exactly 0000000 or 0100000. These are the only legal RV32 encodings for these shifts on a core without bitmanip.

- **`build_load_port_cross_stream`** (96 words): **CONFIRMED.** LOAD opcode with funct3 000/001/010. Leaving out LBU and LHU is correct, since the plan has no bins for them.

- **`build_store_port_cross_stream`** (96 words): **CONFIRMED.** `enc_s(op,f3,rs1,rs2,imm)` is called in the right order. Base rs1 maps to read_A and data rs2 to read_B, matching the plan's "first/second argument" wording. Stores have no rd, so there are no write bins.

- **`build_addi_negative_imm_subi_probe_stream`** (32 words): **CONFIRMED.** ADDI with imm in [-2048, -1], with rd and rs1 each sweeping all 32 registers. It is the only legal way a monitor could see a "SUBI", so it is a sensible probe.

- **Python contract:** every builder returns list[int] of 32-bit values, with 32 to 320 words each, inside the 16..512 limit. All free fields come from `rng`, every helper used is defined, and there are no imports. **CONFIRMED.**

### "Cannot be hit" claims

- **SUBI likely unreachable (65 bins: 1 op bin + 64 port bins):** **CONFIRMED, with a caveat.** RV32I has no SUBI encoding. The only way any of these bins can be hit is a monitor that maps a negative-immediate ADDI to SUBI, and the probe covers that case. Whether they are hit can only be settled by simulation. The ADDI fix above stops that same mapping from costing ADDI bins.

- **Write to x0:** this is not a "cannot be hit" claim. Including rd=x0 in every sweep is correct either way. If the monitor ignores writes to x0, there is no cost.

```python
def _perm32(rng):
    p = list(range(32))
    rng.shuffle(p)
    return p

_R_OPS = [  # (name, funct3, funct7)
    ("add", 0b000, 0x00), ("sub", 0b000, 0x20), ("sll", 0b001, 0x00),
    ("slt", 0b010, 0x00), ("sltu", 0b011, 0x00), ("xor", 0b100, 0x00),
    ("srl", 0b101, 0x00), ("sra", 0b101, 0x20), ("or", 0b110, 0x00),
    ("and", 0b111, 0x00),
]
_I_ALU_OPS = [  # (name, funct3)
    ("addi", 0b000), ("slti", 0b010), ("sltiu", 0b011),
    ("xori", 0b100), ("ori", 0b110), ("andi", 0b111),
]
_SH_OPS = [  # (name, funct3, instr[31:27])
    ("slli", 0b001, 0b00000), ("srli", 0b101, 0b00000), ("srai", 0b101, 0b01000),
]
_LOADS = [("lb", 0b000), ("lh", 0b001), ("lw", 0b010)]
_STORES = [("sb", 0b000), ("sh", 0b001), ("sw", 0b010)]


def _rand_imm12(rng):
    # mix corner values and uniform values
    if rng.random() < 0.25:
        return rng.choice([0, 1, -1, 2047, -2048])
    return rng.randint(-2048, 2047)


def _rand_imm12_nonneg(rng):
    # non-negative immediates for ADDI, so a monitor that maps negative-imm
    # ADDI to SUBI still credits every ADDI x port bin
    if rng.random() < 0.25:
        return rng.choice([0, 1, 2047])
    return rng.randint(0, 2047)


def build_rtype_port_cross_stream(rng):
    """ADD/SUB/AND/OR/XOR/SLL/SRL/SRA/SLT/SLTU x {read_A, read_B, write} x 32 regs."""
    stream = []
    ops = list(_R_OPS)
    rng.shuffle(ops)
    for _name, f3, f7 in ops:
        rds, rs1s, rs2s = _perm32(rng), _perm32(rng), _perm32(rng)
        for i in range(32):
            stream.append(enc_r(OPC["OP"], f3, f7, rds[i], rs1s[i], rs2s[i]))
    return stream   # 320 words


def build_itype_alu_port_cross_stream(rng):
    """ADDI/SLTI/SLTUI/XORI/ORI/ANDI x {read_A, write} x 32 regs.
    ADDI uses non-negative immediates only (negative ones are in the SUBI probe)."""
    stream = []
    ops = list(_I_ALU_OPS)
    rng.shuffle(ops)
    for _name, f3 in ops:
        rds, rs1s = _perm32(rng), _perm32(rng)
        for i in range(32):
            imm = _rand_imm12_nonneg(rng) if f3 == 0b000 else _rand_imm12(rng)
            stream.append(enc_i(OPC["OP_IMM"], f3, rds[i], rs1s[i], imm))
    return stream   # 192 words


def build_shift_imm_port_cross_stream(rng):
    """SLLI/SRLI/SRAI x {read_A, write} x 32 regs; instr[31:25] = 0000000 / 0100000."""
    stream = []
    ops = list(_SH_OPS)
    rng.shuffle(ops)
    for _name, f3, top5 in ops:
        rds, rs1s = _perm32(rng), _perm32(rng)
        for i in range(32):
            stream.append(enc_ish(OPC["OP_IMM"], f3, top5, 0, 0, rds[i], rs1s[i],
                                  rng.randint(0, 31)))
    return stream   # 96 words


def build_load_port_cross_stream(rng):
    """LB/LH/LW x {read_A (base), write (rd)} x 32 regs."""
    stream = []
    ops = list(_LOADS)
    rng.shuffle(ops)
    for _name, f3 in ops:
        rds, rs1s = _perm32(rng), _perm32(rng)
        for i in range(32):
            stream.append(enc_i(OPC["LOAD"], f3, rds[i], rs1s[i], _rand_imm12(rng)))
    return stream   # 96 words


def build_store_port_cross_stream(rng):
    """SB/SH/SW x {read_A (base rs1), read_B (data rs2)} x 32 regs."""
    stream = []
    ops = list(_STORES)
    rng.shuffle(ops)
    for _name, f3 in ops:
        rs1s, rs2s = _perm32(rng), _perm32(rng)
        for i in range(32):
            stream.append(enc_s(OPC["STORE"], f3, rs1s[i], rs2s[i], _rand_imm12(rng)))
    return stream   # 96 words


def build_addi_negative_imm_subi_probe_stream(rng):
    """SUBI probe: ADDI with imm in [-2048, -1], rd/rs1 sweeping all 32 regs."""
    stream = []
    rds, rs1s = _perm32(rng), _perm32(rng)
    for i in range(32):
        stream.append(enc_i(OPC["OP_IMM"], 0b000, rds[i], rs1s[i], rng.randint(-2048, -1)))
    return stream   # 32 words


NEW_BUILDERS = [
    build_rtype_port_cross_stream,
    build_itype_alu_port_cross_stream,
    build_shift_imm_port_cross_stream,
    build_load_port_cross_stream,
    build_store_port_cross_stream,
    build_addi_negative_imm_subi_probe_stream,
]
```