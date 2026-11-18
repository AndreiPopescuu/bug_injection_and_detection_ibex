"""Level-4 coverage monitor for ibex_cpu.

Ports the bin plan from /home/andre/Licenta/Licenta/rl-coverage/level4_shadow/
(5,879 bins across 30 ops) into our cocotb-based RVFI monitor.

Bin categories:
    SEEN              30  — each op retired at least once
    ZERO_DST          24  — writers with rd=x0
    ZERO_SRC          27  — readers with rs1=x0 or rs2=x0
    SAME_SRC          13  — two-source readers with rs1==rs2
    IMM_BUCKETS       85  — 17 imm-ops × 5 corner imm buckets
    RAW_DIST_1/2/3 2,430  — 27 writers × 30 readers × 3 distances
    K3_CHAINS      3,000  — R_outer × R_mid × reader_tail
                 ------
                  5,609  (plus 270 extra — see assertion)

RAW_DIST: a reader's rs1/rs2 was LAST written by `writer_op` exactly
distance-N retirements ago (N ∈ {1, 2, 3}).

K3_CHAIN: 3 consecutive retirements where retire_t-2 is R-type and writes rd,
retire_t-1 is R-type and reads t-2's rd AND writes a new rd, retire_t reads
t-1's rd.
"""
from __future__ import annotations

from collections import deque
from enum import IntEnum


class Op(IntEnum):
    ADD = 0;   SUB = 1;   SLL = 2;   SLT = 3;   SLTU = 4
    XOR = 5;   SRL = 6;   SRA = 7;   OR = 8;    AND = 9
    ADDI = 10; SLTI = 11; SLTIU = 12; XORI = 13; ORI = 14; ANDI = 15
    SLLI = 16; SRLI = 17; SRAI = 18
    LB = 19;   LH = 20;   LW = 21;   LBU = 22;  LHU = 23
    SB = 24;   SH = 25;   SW = 26
    CSRRW = 27; CSRRS = 28; CSRRC = 29


R_TYPE  = {Op.ADD, Op.SUB, Op.SLL, Op.SLT, Op.SLTU, Op.XOR, Op.SRL, Op.SRA, Op.OR, Op.AND}
I_ALU   = {Op.ADDI, Op.SLTI, Op.SLTIU, Op.XORI, Op.ORI, Op.ANDI,
           Op.SLLI, Op.SRLI, Op.SRAI}
LOADS   = {Op.LB, Op.LH, Op.LW, Op.LBU, Op.LHU}
STORES  = {Op.SB, Op.SH, Op.SW}
CSR_OPS = {Op.CSRRW, Op.CSRRS, Op.CSRRC}

WRITERS     = sorted(R_TYPE | I_ALU | LOADS | CSR_OPS)   # 27
READERS     = sorted(R_TYPE | I_ALU | LOADS | STORES | CSR_OPS)  # 30
READERS_TWO = sorted(R_TYPE | STORES)                    # 13
IMM_OPS     = sorted(I_ALU | LOADS | STORES)             # 17
CHAIN_R     = sorted(R_TYPE)                             # 10 (middle/outer)

RAW_MAX_DIST = 3
IMM_BUCKETS = 5


def reads_rs1(op: Op) -> bool:
    return op in R_TYPE or op in I_ALU or op in LOADS or op in STORES or op in CSR_OPS

def reads_rs2(op: Op) -> bool:
    return op in R_TYPE or op in STORES

def writes_rd(op: Op) -> bool:
    return op in R_TYPE or op in I_ALU or op in LOADS or op in CSR_OPS

def has_imm(op: Op) -> bool:
    return op in I_ALU or op in LOADS or op in STORES


# ─── Decode: 32-bit insn → (op, rd, rs1, rs2, imm) ────────────────────────────

def decode(insn: int):
    """Return (op, rd, rs1, rs2, imm_signed) for recognized encodings, else None."""
    opcode = insn & 0x7F
    rd  = (insn >> 7)  & 0x1F
    rs1 = (insn >> 15) & 0x1F
    rs2 = (insn >> 20) & 0x1F
    funct3 = (insn >> 12) & 0x7
    funct7 = (insn >> 25) & 0x7F
    imm_i = (insn >> 20) & 0xFFF
    if imm_i & 0x800:  # sign extend 12-bit
        imm_i -= 0x1000
    imm_s = ((insn >> 25) << 5) | ((insn >> 7) & 0x1F)
    if imm_s & 0x800:
        imm_s -= 0x1000

    # R-type opcode 0x33
    if opcode == 0b0110011:
        key = (funct3, funct7)
        mp = {(0b000, 0b0000000): Op.ADD, (0b000, 0b0100000): Op.SUB,
              (0b001, 0b0000000): Op.SLL, (0b010, 0b0000000): Op.SLT,
              (0b011, 0b0000000): Op.SLTU, (0b100, 0b0000000): Op.XOR,
              (0b101, 0b0000000): Op.SRL, (0b101, 0b0100000): Op.SRA,
              (0b110, 0b0000000): Op.OR, (0b111, 0b0000000): Op.AND}
        if key in mp:
            return (mp[key], rd, rs1, rs2, 0)
        return None
    # I-type ALU opcode 0x13
    if opcode == 0b0010011:
        if funct3 in (0b001, 0b101):  # shifts
            mp = {(0b001, 0b0000000): Op.SLLI, (0b101, 0b0000000): Op.SRLI,
                  (0b101, 0b0100000): Op.SRAI}
            key = (funct3, funct7)
            if key in mp:
                shamt = imm_i & 0x1F
                return (mp[key], rd, rs1, 0, shamt)
            return None
        mp = {0b000: Op.ADDI, 0b010: Op.SLTI, 0b011: Op.SLTIU,
              0b100: Op.XORI, 0b110: Op.ORI, 0b111: Op.ANDI}
        if funct3 in mp:
            return (mp[funct3], rd, rs1, 0, imm_i)
        return None
    # Loads opcode 0x03
    if opcode == 0b0000011:
        mp = {0b000: Op.LB, 0b001: Op.LH, 0b010: Op.LW, 0b100: Op.LBU, 0b101: Op.LHU}
        if funct3 in mp:
            return (mp[funct3], rd, rs1, 0, imm_i)
        return None
    # Stores opcode 0x23
    if opcode == 0b0100011:
        mp = {0b000: Op.SB, 0b001: Op.SH, 0b010: Op.SW}
        if funct3 in mp:
            return (mp[funct3], 0, rs1, rs2, imm_s)
        return None
    # CSR opcode 0x73
    if opcode == 0b1110011:
        mp = {0b001: Op.CSRRW, 0b010: Op.CSRRS, 0b011: Op.CSRRC}
        if funct3 in mp:
            return (mp[funct3], rd, rs1, 0, imm_i)
        return None
    return None


# ─── Imm bucket mapping ───────────────────────────────────────────────────────
# 5 buckets: 0=very negative, 1=small negative, 2=zero, 3=small positive, 4=very positive.
# For shifts shamt is 0..31; we map: 0 → bucket 2 (zero), 1..7 → 1, 8..23 → 2/3,
# 24..30 → 3, 31 → 4. Simpler bucket:
#   bucket = clip(shamt//8, 0, 4) but we use a 5-way split.

def imm_bucket(op: Op, imm: int) -> int:
    if op in (Op.SLLI, Op.SRLI, Op.SRAI):
        shamt = imm & 0x1F
        if shamt == 0: return 2
        if shamt <= 7: return 1
        if shamt <= 15: return 3 if shamt >= 8 else 1
        if shamt <= 23: return 3
        if shamt <= 30: return 3
        return 4   # shamt == 31
    # Signed 12-bit imm bucketing
    if imm <= -1024: return 0
    if imm < 0: return 1
    if imm == 0: return 2
    if imm < 1024: return 3
    return 4


# ─── Bin name table ───────────────────────────────────────────────────────────

def _build_bins():
    bins = []
    for op in Op:
        bins.append(f"{op.name.lower()}_seen")
    for op in WRITERS:
        bins.append(f"{op.name.lower()}_zero_dst")
    for op in READERS:
        bins.append(f"{op.name.lower()}_zero_src")
    for op in READERS_TWO:
        bins.append(f"{op.name.lower()}_same_src")
    for op in IMM_OPS:
        for b in range(IMM_BUCKETS):
            bins.append(f"{op.name.lower()}_imm{b}")
    for d in range(1, RAW_MAX_DIST + 1):
        for w in WRITERS:
            for r in READERS:
                bins.append(f"{w.name.lower()}->{r.name.lower()}_raw_dist{d}")
    for o in CHAIN_R:
        for m in CHAIN_R:
            for r in READERS:
                bins.append(f"{o.name.lower()}->{m.name.lower()}->{r.name.lower()}_k3chain")
    return bins


BIN_NAMES = _build_bins()
N_BINS = len(BIN_NAMES)
BIN_IDX = {n: i for i, n in enumerate(BIN_NAMES)}


# ─── Coverage monitor ─────────────────────────────────────────────────────────

class L4Monitor:
    """Samples L4 bins from RVFI retirements."""

    def __init__(self, dut):
        self.insn_valid = dut.u_top.rvfi_valid
        self.insn_pc    = dut.u_top.rvfi_pc_rdata
        self.insn       = dut.u_top.rvfi_insn
        self.counts = [0] * N_BINS
        # Per-register: last writer op, and age at that register.
        self.writer: list[Op | None] = [None] * 32
        self.age: list[int] = [0] * 32
        # Track the two most recent retirements for K3 chains:
        # (op, rd, rs1, rs2)
        self.last_two = deque(maxlen=2)
        self.last_pc: int | None = None
        self.retirement_trace: list[tuple[int, int, int, int]] = []

    def sample(self):
        if int(self.insn_valid.value) == 0:
            return
        insn_w = int(self.insn.value)
        dec = decode(insn_w)
        self.retirement_trace.append((
            int(self.insn_pc.value), insn_w, 0, 0
        ))
        if dec is None:
            # Unknown encoding — still age the writer table so RAW distance
            # math stays consistent with the "retirement count" model.
            for i in range(32):
                if self.writer[i] is not None:
                    self.age[i] += 1
            self.last_two.append(None)
            return
        op, rd, rs1, rs2, imm = dec

        # Age the writer table BEFORE sampling (so distance=1 means "the
        # immediately previous retirement").
        for i in range(32):
            if self.writer[i] is not None:
                self.age[i] += 1

        # 1. SEEN
        self.counts[BIN_IDX[f"{op.name.lower()}_seen"]] += 1

        # 2. ZERO_DST
        if writes_rd(op) and rd == 0:
            self.counts[BIN_IDX[f"{op.name.lower()}_zero_dst"]] += 1

        # 3. ZERO_SRC
        if op in READERS:
            z = (reads_rs1(op) and rs1 == 0) or (reads_rs2(op) and rs2 == 0)
            if z:
                self.counts[BIN_IDX[f"{op.name.lower()}_zero_src"]] += 1

        # 4. SAME_SRC
        if op in READERS_TWO and rs1 == rs2:
            self.counts[BIN_IDX[f"{op.name.lower()}_same_src"]] += 1

        # 5. IMM_BUCKETS
        if has_imm(op):
            b = imm_bucket(op, imm)
            self.counts[BIN_IDX[f"{op.name.lower()}_imm{b}"]] += 1

        # 6. RAW_DIST 1..3
        if op in READERS:
            srcs = []
            if reads_rs1(op): srcs.append(rs1)
            if reads_rs2(op): srcs.append(rs2)
            for src in srcs:
                w, age = self.writer[src], self.age[src]
                if w is not None and 1 <= age <= RAW_MAX_DIST:
                    name = f"{w.name.lower()}->{op.name.lower()}_raw_dist{age}"
                    self.counts[BIN_IDX[name]] += 1

        # 7. K3_CHAIN: last_two[0] = t-2, last_two[1] = t-1, current = t.
        # Pattern: t-2 is R, writes rd_A; t-1 is R, reads rd_A (rs1 or rs2),
        # writes rd_B; t is a reader of rd_B.
        if len(self.last_two) == 2 and self.last_two[0] is not None and self.last_two[1] is not None:
            op_o, rd_o, _, _ = self.last_two[0]
            op_m, rd_m, rs1_m, rs2_m = self.last_two[1]
            if (op_o in R_TYPE and op_m in R_TYPE
                    and (rs1_m == rd_o or rs2_m == rd_o)
                    and rd_o != 0  # chain of x0 isn't meaningful
                    and rd_m != 0
                    and op in READERS
                    and ((reads_rs1(op) and rs1 == rd_m) or (reads_rs2(op) and rs2 == rd_m))):
                name = f"{op_o.name.lower()}->{op_m.name.lower()}->{op.name.lower()}_k3chain"
                self.counts[BIN_IDX[name]] += 1

        # Update register writer table AFTER sampling.
        if writes_rd(op) and rd != 0:
            self.writer[rd] = op
            self.age[rd] = 0

        # Record for K3 chain tracking.
        self.last_two.append((op, rd, rs1, rs2))
        self.last_pc = int(self.insn_pc.value)

    # ─── Reporting ────────────────────────────────────────────────────────────

    def coverage_dict(self) -> dict[str, int]:
        return {BIN_NAMES[i]: c for i, c in enumerate(self.counts)}

    def summary(self) -> dict:
        d = self.coverage_dict()
        hit = sum(1 for v in d.values() if v > 0)
        return {
            "total_bins": N_BINS,
            "hit_bins": hit,
            "coverage_pct": 100.0 * hit / N_BINS,
            "bins": d,
            "retirement_trace": self.retirement_trace,
        }

    def summary_by_category(self) -> dict:
        d = self.coverage_dict()
        cats = {
            "SEEN": [n for n in d if n.endswith("_seen")],
            "ZERO_DST": [n for n in d if n.endswith("_zero_dst")],
            "ZERO_SRC": [n for n in d if n.endswith("_zero_src")],
            "SAME_SRC": [n for n in d if n.endswith("_same_src")],
            "IMM_BUCKETS": [n for n in d if "_imm" in n and not n.endswith("_seen")],
            "RAW_DIST": [n for n in d if "_raw_dist" in n],
            "K3_CHAIN": [n for n in d if "_k3chain" in n],
        }
        return {c: {"hit": sum(1 for n in names if d[n] > 0),
                    "total": len(names)}
                for c, names in cats.items()}
