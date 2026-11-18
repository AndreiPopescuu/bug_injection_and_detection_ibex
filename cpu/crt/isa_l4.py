"""Extended encoder library for the ibex_cpu Level-4 experiment.

Superset of `isa.py`: 30 RISC-V instructions covering a richer coverage plan.

Instruction classes:
    R-type ALU (10): ADD, SUB, SLL, SLT, SLTU, XOR, SRL, SRA, OR, AND
    I-type ALU (9):  ADDI, SLTI, SLTIU, XORI, ORI, ANDI, SLLI, SRLI, SRAI
    Loads      (5):  LB, LH, LW, LBU, LHU
    Stores     (3):  SB, SH, SW
    CSR        (3):  CSRRW, CSRRS, CSRRC  (fixed CSR = mscratch 0x340)

Builders write:
    stream = []
    stream.append(ADD(rd=10, rs1=1, rs2=2))
    stream.append(ADDI(rd=5, rs1=1, imm=100))
    stream.append(LW(rd=3, rs1=1, imm=8))
    stream.append(SW(rs2=3, rs1=1, imm=4))
    stream.append(CSRRW(rd=0, rs1=5))
    return stream
"""

from __future__ import annotations


# ─── 32-bit encoding helpers ──────────────────────────────────────────────────

def _r(funct7: int, rs2: int, rs1: int, funct3: int, rd: int, opcode: int = 0b0110011) -> int:
    return (
        ((funct7 & 0x7F) << 25)
        | ((rs2 & 0x1F) << 20)
        | ((rs1 & 0x1F) << 15)
        | ((funct3 & 0x7) << 12)
        | ((rd & 0x1F) << 7)
        | (opcode & 0x7F)
    )


def _i(imm: int, rs1: int, funct3: int, rd: int, opcode: int) -> int:
    return (
        ((imm & 0xFFF) << 20)
        | ((rs1 & 0x1F) << 15)
        | ((funct3 & 0x7) << 12)
        | ((rd & 0x1F) << 7)
        | (opcode & 0x7F)
    )


def _s(imm12: int, rs2: int, rs1: int, funct3: int, opcode: int = 0b0100011) -> int:
    imm = imm12 & 0xFFF
    return (
        ((imm >> 5) << 25)
        | ((rs2 & 0x1F) << 20)
        | ((rs1 & 0x1F) << 15)
        | ((funct3 & 0x7) << 12)
        | ((imm & 0x1F) << 7)
        | (opcode & 0x7F)
    )


# ─── R-type ALU (10) ──────────────────────────────────────────────────────────

def ADD(rd, rs1, rs2):  return _r(0b0000000, rs2, rs1, 0b000, rd)
def SUB(rd, rs1, rs2):  return _r(0b0100000, rs2, rs1, 0b000, rd)
def SLL(rd, rs1, rs2):  return _r(0b0000000, rs2, rs1, 0b001, rd)
def SLT(rd, rs1, rs2):  return _r(0b0000000, rs2, rs1, 0b010, rd)
def SLTU(rd, rs1, rs2): return _r(0b0000000, rs2, rs1, 0b011, rd)
def XOR(rd, rs1, rs2):  return _r(0b0000000, rs2, rs1, 0b100, rd)
def SRL(rd, rs1, rs2):  return _r(0b0000000, rs2, rs1, 0b101, rd)
def SRA(rd, rs1, rs2):  return _r(0b0100000, rs2, rs1, 0b101, rd)
def OR(rd, rs1, rs2):   return _r(0b0000000, rs2, rs1, 0b110, rd)
def AND(rd, rs1, rs2):  return _r(0b0000000, rs2, rs1, 0b111, rd)


# ─── I-type ALU (9) ───────────────────────────────────────────────────────────
# ADDI / SLTI / SLTIU / XORI / ORI / ANDI: 12-bit signed imm in bits [31:20]
# SLLI / SRLI / SRAI: shamt (5 bits) in bits [24:20]; funct7 in [31:25]

def ADDI(rd, rs1, imm):  return _i(imm, rs1, 0b000, rd, 0b0010011)
def SLTI(rd, rs1, imm):  return _i(imm, rs1, 0b010, rd, 0b0010011)
def SLTIU(rd, rs1, imm): return _i(imm, rs1, 0b011, rd, 0b0010011)
def XORI(rd, rs1, imm):  return _i(imm, rs1, 0b100, rd, 0b0010011)
def ORI(rd, rs1, imm):   return _i(imm, rs1, 0b110, rd, 0b0010011)
def ANDI(rd, rs1, imm):  return _i(imm, rs1, 0b111, rd, 0b0010011)

def SLLI(rd, rs1, shamt):
    """Logical shift left by 5-bit shamt (0..31). funct7 = 0."""
    imm = (0b0000000 << 5) | (shamt & 0x1F)
    return _i(imm, rs1, 0b001, rd, 0b0010011)

def SRLI(rd, rs1, shamt):
    """Logical shift right by 5-bit shamt. funct7 = 0."""
    imm = (0b0000000 << 5) | (shamt & 0x1F)
    return _i(imm, rs1, 0b101, rd, 0b0010011)

def SRAI(rd, rs1, shamt):
    """Arithmetic shift right by 5-bit shamt. funct7 = 0x20."""
    imm = (0b0100000 << 5) | (shamt & 0x1F)
    return _i(imm, rs1, 0b101, rd, 0b0010011)


# ─── Loads (5) ────────────────────────────────────────────────────────────────
# All I-type format, opcode 0b0000011, funct3 selects width/sign-extension.

def LB(rd, rs1, imm):  return _i(imm, rs1, 0b000, rd, 0b0000011)
def LH(rd, rs1, imm):  return _i(imm, rs1, 0b001, rd, 0b0000011)
def LW(rd, rs1, imm):  return _i(imm, rs1, 0b010, rd, 0b0000011)
def LBU(rd, rs1, imm): return _i(imm, rs1, 0b100, rd, 0b0000011)
def LHU(rd, rs1, imm): return _i(imm, rs1, 0b101, rd, 0b0000011)


# ─── Stores (3) ───────────────────────────────────────────────────────────────

def SB(rs2, rs1, imm=0): return _s(imm, rs2, rs1, 0b000)
def SH(rs2, rs1, imm=0): return _s(imm, rs2, rs1, 0b001)
def SW(rs2, rs1, imm=0): return _s(imm, rs2, rs1, 0b010)


# ─── CSR (3) ──────────────────────────────────────────────────────────────────
# System opcode 0b1110011. CSR number in bits [31:20] (12-bit). We hardcode to
# mscratch (0x340) — a scratchpad CSR that can be read/written arbitrarily
# with no side effects on control flow.

CSR_MSCRATCH = 0x340

def CSRRW(rd, rs1, csr=CSR_MSCRATCH):
    """Atomic read + write: rd ← CSR; CSR ← rs1."""
    return _i(csr, rs1, 0b001, rd, 0b1110011)

def CSRRS(rd, rs1, csr=CSR_MSCRATCH):
    """Atomic read + set: rd ← CSR; CSR ← CSR | rs1 (no write if rs1==x0)."""
    return _i(csr, rs1, 0b010, rd, 0b1110011)

def CSRRC(rd, rs1, csr=CSR_MSCRATCH):
    """Atomic read + clear: rd ← CSR; CSR ← CSR & ~rs1 (no write if rs1==x0)."""
    return _i(csr, rs1, 0b011, rd, 0b1110011)


# ─── Helpers ──────────────────────────────────────────────────────────────────

def NOP():
    """NOP = ADDI x0, x0, 0."""
    return ADDI(0, 0, 0)


# ─── Prelude ──────────────────────────────────────────────────────────────────

def prelude():
    """Initialize x1..x15 with values 1..15."""
    return [ADDI(i, 0, i) for i in range(1, 16)]


# ─── Plan tables ──────────────────────────────────────────────────────────────

R_PLAN = {
    "ADD": ADD, "SUB": SUB, "SLL": SLL, "SLT": SLT, "SLTU": SLTU,
    "XOR": XOR, "SRL": SRL, "SRA": SRA, "OR": OR, "AND": AND,
}
I_ALU_PLAN = {
    "ADDI": ADDI, "SLTI": SLTI, "SLTIU": SLTIU,
    "XORI": XORI, "ORI": ORI, "ANDI": ANDI,
    "SLLI": SLLI, "SRLI": SRLI, "SRAI": SRAI,
}
LOAD_PLAN = {"LB": LB, "LH": LH, "LW": LW, "LBU": LBU, "LHU": LHU}
STORE_PLAN = {"SB": SB, "SH": SH, "SW": SW}
CSR_PLAN = {"CSRRW": CSRRW, "CSRRS": CSRRS, "CSRRC": CSRRC}

ALL_OPS = (list(R_PLAN) + list(I_ALU_PLAN) + list(LOAD_PLAN)
           + list(STORE_PLAN) + list(CSR_PLAN))
assert len(ALL_OPS) == 30
