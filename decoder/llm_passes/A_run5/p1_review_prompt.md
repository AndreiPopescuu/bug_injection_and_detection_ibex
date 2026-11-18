You are the independent adversarial reviewer of a draft CRT generator written by another model. Re-derive every claim -- do not rubber-stamp.

## The design under test

The DUT is the instruction decoder of a small RISC-V core configured for RV32IM + Zicsr (+ the privileged SYSTEM instructions); no compressed and no bit-manipulation extension. Each stimulus is ONE 32-bit instruction word applied to the decoder; its outputs are sampled once per word. You do NOT have the RTL or the testbench source.

## Coverage metric(s)

Functional coverage plan of 2107 bins, described (in prose) in //wsl.localhost/Ubuntu/home/andre/ibex-crt-llm-coverage/crt-coverage/decoder/docs/ml4dv_bins_description.txt. That description is all that is known about the plan.

## isa.py -- encoder library

```python
"""
RV32 instruction table + encoders for the Ibex decoder CRT generator.

Every instruction is described by an InsnSpec: a name, the ISA extension it
belongs to, an encoding format and the fixed fields (opcode / funct3 / funct7 /
...). The generator fills the *free* fields (rd, rs1, rs2, rs3, imm, shamt,
csr) under constraints; the encoders below assemble the 32-bit word.

Encodings follow the instruction list in ibex_decoder.sv (incl. the draft
bitmanip 0.92 encodings Ibex uses for RV32B Balanced / OTEarlGrey / Full).
"""

from dataclasses import dataclass, field

# ---------------------------------------------------------------------------
# Major opcodes (ibex_pkg::opcode_e)
# ---------------------------------------------------------------------------
OPC = {
    "LOAD":     0x03,
    "MISC_MEM": 0x0F,
    "OP_IMM":   0x13,
    "AUIPC":    0x17,
    "STORE":    0x23,
    "OP":       0x33,
    "LUI":      0x37,
    "BRANCH":   0x63,
    "JALR":     0x67,
    "JAL":      0x6F,
    "SYSTEM":   0x73,
}
LEGAL_OPCODES = set(OPC.values())


@dataclass(frozen=True)
class InsnSpec:
    name: str
    ext: str        # I, M, Zicsr, Zifencei, Priv, Zba, Zbb, Zbs, Zbt, Zbp, Zbc, Zbe, Zbf, Zbr
    fmt: str        # R, I, ISH, IUN, S, B, U, J, SYS, CSR, CSRI, FENCE, R4, FSRI
    opcode: int
    f3: int = 0
    f7: int = 0     # R: funct7 | ISH: instr[31:27] (top5) | IUN: instr[31:20]
    extra: dict = field(default_factory=dict, hash=False, compare=False)


# ---------------------------------------------------------------------------
# Bit-field helpers
# ---------------------------------------------------------------------------
def _m(v, bits):
    return v & ((1 << bits) - 1)


def enc_r(op, f3, f7, rd, rs1, rs2):
    return (_m(f7, 7) << 25) | (_m(rs2, 5) << 20) | (_m(rs1, 5) << 15) | \
           (_m(f3, 3) << 12) | (_m(rd, 5) << 7) | _m(op, 7)


def enc_i(op, f3, rd, rs1, imm):
    return (_m(imm, 12) << 20) | (_m(rs1, 5) << 15) | (_m(f3, 3) << 12) | \
           (_m(rd, 5) << 7) | _m(op, 7)


def enc_s(op, f3, rs1, rs2, imm):
    return (_m(imm >> 5, 7) << 25) | (_m(rs2, 5) << 20) | (_m(rs1, 5) << 15) | \
           (_m(f3, 3) << 12) | (_m(imm, 5) << 7) | _m(op, 7)


def enc_b(op, f3, rs1, rs2, imm):
    imm = _m(imm, 13)
    return (((imm >> 12) & 1) << 31) | (((imm >> 5) & 0x3F) << 25) | \
           (_m(rs2, 5) << 20) | (_m(rs1, 5) << 15) | (_m(f3, 3) << 12) | \
           (((imm >> 1) & 0xF) << 8) | (((imm >> 11) & 1) << 7) | _m(op, 7)


def enc_u(op, rd, imm20):
    return (_m(imm20, 20) << 12) | (_m(rd, 5) << 7) | _m(op, 7)


def enc_j(op, rd, imm):
    imm = _m(imm, 21)
    return (((imm >> 20) & 1) << 31) | (((imm >> 1) & 0x3FF) << 21) | \
           (((imm >> 11) & 1) << 20) | (((imm >> 12) & 0xFF) << 12) | \
           (_m(rd, 5) << 7) | _m(op, 7)


def enc_ish(op, f3, top5, b26, b25, rd, rs1, shamt):
    """Shift-immediate style: instr[31:27]=top5, [26], [25], [24:20]=shamt."""
    return (_m(top5, 5) << 27) | (_m(b26, 1) << 26) | (_m(b25, 1) << 25) | \
           (_m(shamt, 5) << 20) | (_m(rs1, 5) << 15) | (_m(f3, 3) << 12) | \
           (_m(rd, 5) << 7) | _m(op, 7)


def enc_r4(op, f3, rs3, b26_25, rd, rs1, rs2):
    """Ternary bitmanip (cmix/cmov/fsl/fsr): rs3 in [31:27], [26:25] fixed."""
    return (_m(rs3, 5) << 27) | (_m(b26_25, 2) << 25) | (_m(rs2, 5) << 20) | \
           (_m(rs1, 5) << 15) | (_m(f3, 3) << 12) | (_m(rd, 5) << 7) | _m(op, 7)


# ---------------------------------------------------------------------------
# Instruction table
# ---------------------------------------------------------------------------
_O = OPC
SPECS = []


def _add(*a, **k):
    SPECS.append(InsnSpec(*a, **k))


# --- RV32I ---------------------------------------------------------------
_add("lui",   "I", "U", _O["LUI"])
_add("auipc", "I", "U", _O["AUIPC"])
_add("jal",   "I", "J", _O["JAL"])
_add("jalr",  "I", "I", _O["JALR"], f3=0)
for n, f3 in [("beq", 0), ("bne", 1), ("blt", 4), ("bge", 5), ("bltu", 6), ("bgeu", 7)]:
    _add(n, "I", "B", _O["BRANCH"], f3=f3)
for n, f3 in [("lb", 0), ("lh", 1), ("lw", 2), ("lbu", 4), ("lhu", 5)]:
    _add(n, "I", "I", _O["LOAD"], f3=f3)
for n, f3 in [("sb", 0), ("sh", 1), ("sw", 2)]:
    _add(n, "I", "S", _O["STORE"], f3=f3)
for n, f3 in [("addi", 0), ("slti", 2), ("sltiu", 3), ("xori", 4), ("ori", 6), ("andi", 7)]:
    _add(n, "I", "I", _O["OP_IMM"], f3=f3)
_add("slli", "I", "ISH", _O["OP_IMM"], f3=1, f7=0b00000)
_add("srli", "I", "ISH", _O["OP_IMM"], f3=5, f7=0b00000)
_add("srai", "I", "ISH", _O["OP_IMM"], f3=5, f7=0b01000)
for n, f7, f3 in [("add", 0x00, 0), ("sub", 0x20, 0), ("sll", 0x00, 1), ("slt", 0x00, 2),
                  ("sltu", 0x00, 3), ("xor", 0x00, 4), ("srl", 0x00, 5), ("sra", 0x20, 5),
                  ("or", 0x00, 6), ("and", 0x00, 7)]:
    _add(n, "I", "R", _O["OP"], f3=f3, f7=f7)

# --- Zifencei / misc-mem -------------------------------------------------
_add("fence",   "I",        "FENCE", _O["MISC_MEM"], f3=0)
_add("fence.i", "Zifencei", "FENCE", _O["MISC_MEM"], f3=1)

# --- Privileged / SYSTEM (funct12 in extra) -------------------------------
for n, f12 in [("ecall", 0x000), ("ebreak", 0x001), ("mret", 0x302),
               ("dret", 0x7B2), ("wfi", 0x105)]:
    _add(n, "Priv", "SYS", _O["SYSTEM"], f3=0, extra={"f12": f12})

# --- Zicsr ---------------------------------------------------------------
for n, f3 in [("csrrw", 1), ("csrrs", 2), ("csrrc", 3)]:
    _add(n, "Zicsr", "CSR", _O["SYSTEM"], f3=f3)
for n, f3 in [("csrrwi", 5), ("csrrsi", 6), ("csrrci", 7)]:
    _add(n, "Zicsr", "CSRI", _O["SYSTEM"], f3=f3)

# --- RV32M ---------------------------------------------------------------
for f3, n in enumerate(["mul", "mulh", "mulhsu", "mulhu", "div", "divu", "rem", "remu"]):
    _add(n, "M", "R", _O["OP"], f3=f3, f7=0x01)

# --- RV32B register-register (funct7, funct3) ----------------------------
for n, ext, f7, f3 in [
    ("sh1add", "Zba", 0x10, 2), ("sh2add", "Zba", 0x10, 4), ("sh3add", "Zba", 0x10, 6),
    ("andn", "Zbb", 0x20, 7), ("orn", "Zbb", 0x20, 6), ("xnor", "Zbb", 0x20, 4),
    ("rol", "Zbb", 0x30, 1), ("ror", "Zbb", 0x30, 5),
    ("min", "Zbb", 0x05, 4), ("max", "Zbb", 0x05, 6), ("minu", "Zbb", 0x05, 5), ("maxu", "Zbb", 0x05, 7),
    ("pack", "Zbb", 0x04, 4), ("packu", "Zbb", 0x24, 4), ("packh", "Zbb", 0x04, 7),
    ("bclr", "Zbs", 0x24, 1), ("bset", "Zbs", 0x14, 1), ("binv", "Zbs", 0x34, 1), ("bext", "Zbs", 0x24, 5),
    ("bfp", "Zbf", 0x24, 7),
    ("grev", "Zbp", 0x34, 5), ("gorc", "Zbp", 0x14, 5), ("shfl", "Zbp", 0x04, 1), ("unshfl", "Zbp", 0x04, 5),
    ("xperm.n", "Zbp", 0x14, 2), ("xperm.b", "Zbp", 0x14, 4), ("xperm.h", "Zbp", 0x14, 6),
    ("slo", "Zbp", 0x10, 1), ("sro", "Zbp", 0x10, 5),
    ("clmul", "Zbc", 0x05, 1), ("clmulr", "Zbc", 0x05, 2), ("clmulh", "Zbc", 0x05, 3),
    ("bdecompress", "Zbe", 0x24, 6), ("bcompress", "Zbe", 0x04, 6),
]:
    _add(n, ext, "R", _O["OP"], f3=f3, f7=f7)

# --- RV32B ternary (rs3) -------------------------------------------------
for n, f3, b in [("cmix", 1, 0b11), ("cmov", 5, 0b11), ("fsl", 1, 0b10), ("fsr", 5, 0b10)]:
    _add(n, "Zbt", "R4", _O["OP"], f3=f3, extra={"b26_25": b})
_add("fsri", "Zbt", "FSRI", _O["OP_IMM"], f3=5)

# --- RV32B shift-immediate style (instr[31:27]) --------------------------
for n, ext, f3, top5 in [
    ("sloi", "Zbp", 1, 0b00100), ("bclri", "Zbs", 1, 0b01001), ("bseti", "Zbs", 1, 0b00101),
    ("binvi", "Zbs", 1, 0b01101), ("shfli", "Zbp", 1, 0b00001),
    ("sroi", "Zbp", 5, 0b00100), ("rori", "Zbb", 5, 0b01100), ("bexti", "Zbs", 5, 0b01001),
    ("grevi", "Zbp", 5, 0b01101), ("gorci", "Zbp", 5, 0b00101), ("unshfli", "Zbp", 5, 0b00001),
]:
    _add(n, ext, "ISH", _O["OP_IMM"], f3=f3, f7=top5)
# rev8 / orc.b are grevi / gorci with a fixed shamt (Balanced only decodes those)
_add("rev8",  "Zbb", "ISH", _O["OP_IMM"], f3=5, f7=0b01101, extra={"shamt": 0b11000})
_add("orc.b", "Zbb", "ISH", _O["OP_IMM"], f3=5, f7=0b00101, extra={"shamt": 0b00111})

# --- RV32B unary (instr[31:20] fixed) ------------------------------------
for n, ext, f12 in [
    ("clz", "Zbb", 0x600), ("ctz", "Zbb", 0x601), ("cpop", "Zbb", 0x602),
    ("sext.b", "Zbb", 0x604), ("sext.h", "Zbb", 0x605),
    ("crc32.b", "Zbr", 0x610), ("crc32.h", "Zbr", 0x611), ("crc32.w", "Zbr", 0x612),
    ("crc32c.b", "Zbr", 0x618), ("crc32c.h", "Zbr", 0x619), ("crc32c.w", "Zbr", 0x61A),
]:
    _add(n, ext, "IUN", _O["OP_IMM"], f3=1, f7=f12)

SPEC_BY_NAME = {s.name: s for s in SPECS}

# Which extensions each Ibex RV32B config actually decodes (see ibex_decoder.sv).
B_EXTS = {
    0: set(),                                                         # RV32BNone
    1: {"Zba", "Zbb", "Zbs", "Zbf", "Zbt"},                           # RV32BBalanced
    2: {"Zba", "Zbb", "Zbs", "Zbf", "Zbt", "Zbp", "Zbc", "Zbr"},      # RV32BOTEarlGrey
    3: {"Zba", "Zbb", "Zbs", "Zbf", "Zbt", "Zbp", "Zbc", "Zbr", "Zbe"},  # RV32BFull
}
B_EXT_NAMES = {"Zba", "Zbb", "Zbs", "Zbf", "Zbt", "Zbp", "Zbc", "Zbr", "Zbe"}


def encode(spec, f):
    """Assemble one instruction. `f` holds rd/rs1/rs2/rs3/imm/shamt/csr/b26/b25."""
    op, f3 = spec.opcode, spec.f3
    if spec.fmt == "R":
        return enc_r(op, f3, spec.f7, f["rd"], f["rs1"], f["rs2"])
    if spec.fmt == "I":
        return enc_i(op, f3, f["rd"], f["rs1"], f["imm"])
    if spec.fmt == "S":
        return enc_s(op, f3, f["rs1"], f["rs2"], f["imm"])
    if spec.fmt == "B":
        return enc_b(op, f3, f["rs1"], f["rs2"], f["imm"])
    if spec.fmt == "U":
        return enc_u(op, f["rd"], f["imm"])
    if spec.fmt == "J":
        return enc_j(op, f["rd"], f["imm"])
    if spec.fmt == "ISH":
        shamt = spec.extra.get("shamt", f["shamt"])
        return enc_ish(op, f3, spec.f7, f.get("b26", 0), f.get("b25", 0), f["rd"], f["rs1"], shamt)
    if spec.fmt == "IUN":
        return enc_i(op, f3, f["rd"], f["rs1"], spec.f7)
    if spec.fmt == "FSRI":
        # rs3 in [31:27], bit 26 = 1, shamt in [24:20] (bit 25 left free)
        return enc_ish(op, f3, f["rs3"], 1, f.get("b25", 0), f["rd"], f["rs1"], f["shamt"])
    if spec.fmt == "R4":
        return enc_r4(op, f3, f["rs3"], spec.extra["b26_25"], f["rd"], f["rs1"], f["rs2"])
    if spec.fmt == "SYS":
        return enc_i(op, 0, f["rd"], f["rs1"], spec.extra["f12"])
    if spec.fmt == "CSR":
        return enc_i(op, f3, f["rd"], f["rs1"], f["csr"])
    if spec.fmt == "CSRI":
        return enc_i(op, f3, f["rd"], f["uimm"], f["csr"])
    if spec.fmt == "FENCE":
        return enc_i(op, f3, f["rd"], f["rs1"], f["imm"])
    raise ValueError(f"unknown fmt {spec.fmt}")

```

## What to check, for EVERY function

1. Every encoder call builds the instruction its comment claims: check argument order and field widths in isa.py (enc_i(op, f3, rd, rs1, imm), enc_s(op, f3, rs1, rs2, imm), enc_r(op, f3, f7, rd, rs1, rs2)).
2. The words are legal (or illegal, when intended) and plausibly hit the claimed coverage goal.

## IMPORTANT: no-isa mode
The synthesis agent did NOT have access to isa.py. The only names available outside a function body are Python builtins, `rng` (a random.Random), and from the header import: `OPC, enc_r, enc_i, enc_s, enc_b, enc_u, enc_j, enc_ish, enc_r4`. Any other name (e.g. SPEC_BY_NAME, INSN_TABLE, etc.) is undefined -- replace it with direct bit manipulation or a valid encoder call.
3. Every "cannot be hit" claim: CONFIRMED or DISPUTE with your reasoning.
4. Python: returns list[int] of 32-bit values, 16..512 words, uses rng for free fields, no imports.

## Draft generator to review

```python
"""LLM-CRT run A_run5, pass 1 (condition A): written by the synthesis agent, reviewed and fixed in place by the review agent."""
from ..isa import OPC, enc_r, enc_i, enc_s, enc_b, enc_u, enc_j, enc_ish, enc_r4  # noqa: F401

def build_op_type1_stream(rng):
    """
    Targets BIN type 1: Ensure each of the 26 operations is performed at least once.
    Utilizes RV32I base instructions across R, I, L, and S formats.
    """
    stream = []
    # 26 distinct operations: 10 R-type, 9 I-type, 4 Load, 3 Store
    ops = [
        "add", "sub", "sll", "slt", "sltu", "xor", "srl", "sra", "or", "and",
        "addi", "slli", "slti", "sltiu", "xori", "srli", "srai", "ori", "andi",
        "lb", "lh", "lw", "lbu",
        "sb", "sh", "sw"
    ]
    
    for name in ops:
        spec = SPEC_BY_NAME[name]
        # Define the union of all possible free fields
        f = {
            "rd": rng.randint(0, 31),
            "rs1": rng.randint(0, 31),
            "rs2": rng.randint(0, 31),
            "imm": rng.randint(0, 2047) if spec.fmt != "S" else rng.randint(0, 2047),
            "shamt": rng.randint(0, 31),
        }
        # S-type immediate handling is handled inside enc_s via encode()
        word = encode(spec, f)
        stream.append(word & 0xFFFFFFFF)

    return stream

def build_reg_type2_stream(rng):
    """
    Targets BIN type 2: Each register index (0-31) used as read_A, read_B, and write.
    Uses the ADD instruction because it utilizes all three ports (rs1, rs2, rd).
    """
    stream = []
    spec = SPEC_BY_NAME["add"]
    for i in range(32):
        # ADD x_i, x_i, x_i
        f = {"rd": i, "rs1": i, "rs2": i}
        word = encode(spec, f)
        stream.append(word & 0xFFFFFFFF)
    return stream

def build_op_reg_type3_stream(rng):
    """
    Targets BIN type 3: Each operation paired with each port it utilizes.
    Similar to type 1, ensuring specific port usage (rd, rs1, rs2) for a set of operations.
    """
    stream = []
    ops = [
        "add", "sub", "sll", "slt", "sltu", "xor", "srl", "sra", "or", "and",
        "addi", "slli", "slti", "sltiu", "xori", "srli", "srai", "ori", "andi",
        "lb", "lh", "lw", "lbu",
        "sb", "sh", "sw"
    ]
    
    for name in ops:
        spec = SPEC_BY_NAME[name]
        f = {
            "rd": rng.randint(0, 31),
            "rs1": rng.randint(0, 31),
            "rs2": rng.randint(0, 31),
            "imm": rng.randint(0, 2047),
            "shamt": rng.randint(0, 31),
        }
        word = encode(spec, f)
        stream.append(word & 0xFFFFFFFF)

    return stream

NEW_BUILDERS = [build_op_type1_stream, build_reg_type2_stream, build_op_reg_type3_stream]
```

## Required output format

Output ONLY a single fenced Python code block with the corrected generator. Keep the two header lines unchanged. Remove any fundamentally broken builder (REJECT) rather than leaving it in. Do not add new coverage goals. No prose outside the code block.
