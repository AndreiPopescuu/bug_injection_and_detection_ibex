"""LLM-CRT L4 run A_run2 pass 1 (Claude sub-agent, condition A)."""
from ..isa_l4 import ADD, SUB, SLL, SLT, SLTU, XOR, SRL, SRA, OR, AND, ADDI, SLTI, SLTIU, XORI, ORI, ANDI, SLLI, SRLI, SRAI, LB, LH, LW, LBU, LHU, SB, SH, SW, CSRRW, CSRRS, CSRRC, NOP  # noqa: F401


# ─── Op tables used by multiple builders ──────────────────────────────────────

R_OPS = [ADD, SUB, SLL, SLT, SLTU, XOR, SRL, SRA, OR, AND]        # 10 (WRITERS, READERS_TWO)
I_ALU_OPS = [ADDI, SLTI, SLTIU, XORI, ORI, ANDI, SLLI, SRLI, SRAI]  # 9  (WRITERS, READERS, IMM_OPS)
IALU_NONSHIFT = [ADDI, SLTI, SLTIU, XORI, ORI, ANDI]                # 6  (12-bit signed imm)
IALU_SHIFT = [SLLI, SRLI, SRAI]                                     # 3  (5-bit shamt)
LOAD_OPS = [LB, LH, LW, LBU, LHU]                                   # 5  (WRITERS, READERS, IMM_OPS)
STORE_OPS = [SB, SH, SW]                                            # 3  (READERS, IMM_OPS, READERS_TWO)
CSR_OPS = [CSRRW, CSRRS, CSRRC]                                     # 3  (WRITERS, READERS)

ALL_WRITERS = R_OPS + I_ALU_OPS + LOAD_OPS + CSR_OPS                # 27
ALL_READERS = R_OPS + I_ALU_OPS + LOAD_OPS + STORE_OPS + CSR_OPS    # 30
READERS_TWO = R_OPS + STORE_OPS                                     # 13
IMM_OPS = I_ALU_OPS + LOAD_OPS + STORE_OPS                          # 17


# ─── Private helpers ──────────────────────────────────────────────────────────

def _init_reg(stream, rd, value):
    """Materialize a 32-bit signed/unsigned value `value` into register rd.

    Verified input domain: any Python int. We canonicalize to a 32-bit unsigned
    pattern, then build it with up to ADDI → SLLI → ADDI → SLLI → ADDI,
    processing 10-bit chunks (always non-negative) so every ADDI imm is in
    [0, 1023] — safely inside the 12-bit signed range [-2048, 2047].

    Produces a register content equal to (value & 0xFFFFFFFF) interpreted as
    an unsigned 32-bit value. Because Ibex's XLEN=32 registers are 32 bits,
    this equivalently represents the signed value when reinterpreted.

    Must not use rd as a scratch of any other builder: always writes rd from x0.
    """
    v = value & 0xFFFFFFFF
    # Split into chunks of 10 bits each: v = c3<<30 | c2<<20 | c1<<10 | c0,
    # where c3 is 2 bits wide (bits 31:30), c2 c1 c0 are 10 bits wide.
    c0 = v & 0x3FF
    c1 = (v >> 10) & 0x3FF
    c2 = (v >> 20) & 0x3FF
    c3 = (v >> 30) & 0x3    # 2 bits
    # Build: rd = c3, rd <<= 10, rd += c2, rd <<= 10, rd += c1, rd <<= 10, rd += c0.
    stream.append(ADDI(rd, 0, c3))      # rd = c3  (0..3, always positive)
    stream.append(SLLI(rd, rd, 10))     # rd <<= 10
    if c2:
        stream.append(ADDI(rd, rd, c2)) # rd += c2 (0..1023)
    stream.append(SLLI(rd, rd, 10))
    if c1:
        stream.append(ADDI(rd, rd, c1))
    stream.append(SLLI(rd, rd, 10))
    if c0:
        stream.append(ADDI(rd, rd, c0))


def _emit_writer(stream, op, rd, rs1_pref, rs2_pref, imm_pref=0):
    """Emit a single writer op that targets `rd`, reading rs1_pref/rs2_pref
    when applicable. For loads, `rs1_pref` is the address base and imm_pref
    is the byte offset. For CSR ops, rs2_pref is unused.
    Verified for op in ALL_WRITERS. rd may be any valid 5-bit register (0..31).
    """
    if op in R_OPS:
        stream.append(op(rd=rd, rs1=rs1_pref, rs2=rs2_pref))
    elif op in IALU_NONSHIFT:
        stream.append(op(rd=rd, rs1=rs1_pref, imm=imm_pref))
    elif op in IALU_SHIFT:
        stream.append(op(rd=rd, rs1=rs1_pref, shamt=(imm_pref & 0x1F)))
    elif op in LOAD_OPS:
        stream.append(op(rd=rd, rs1=rs1_pref, imm=imm_pref))
    elif op in CSR_OPS:
        stream.append(op(rd=rd, rs1=rs1_pref))
    else:
        raise ValueError("unsupported writer op")


def _emit_reader(stream, op, rd_dst, rs1_pref, rs2_pref, imm_pref=0):
    """Emit a single reader op. Writes to rd_dst when op is a WRITER; for
    stores, rd_dst is interpreted as rs2 (data) and rs1_pref as rs1 (base).
    Verified for op in ALL_READERS.
    """
    if op in R_OPS:
        stream.append(op(rd=rd_dst, rs1=rs1_pref, rs2=rs2_pref))
    elif op in IALU_NONSHIFT:
        stream.append(op(rd=rd_dst, rs1=rs1_pref, imm=imm_pref))
    elif op in IALU_SHIFT:
        stream.append(op(rd=rd_dst, rs1=rs1_pref, shamt=(imm_pref & 0x1F)))
    elif op in LOAD_OPS:
        stream.append(op(rd=rd_dst, rs1=rs1_pref, imm=imm_pref))
    elif op in STORE_OPS:
        stream.append(op(rs2=rd_dst, rs1=rs1_pref, imm=imm_pref))
    elif op in CSR_OPS:
        stream.append(op(rd=rd_dst, rs1=rs1_pref))
    else:
        raise ValueError("unsupported reader op")


def _reader_reads_rs1(op):
    """All 30 ops read rs1 (or have an rs1 field). True for every op in plan."""
    return True


def _reader_reads_rs2(op):
    """True iff op reads rs2 (R-type and stores only)."""
    return op in R_OPS or op in STORE_OPS


# A conservative "load/store base" register init: puts a word-aligned address
# into a register that we assume is safe to probe. Even if the access faults,
# other non-load/store ops around it still retire for coverage. We keep offsets
# bounded so the effective address stays close to the base.
def _set_mem_base(stream, rd):
    """Initialize `rd` with a word-aligned base used by load/store builders.

    Verified input domain: rd in [1..31]. We set rd = 0x100 as a conservative
    low-address probe. If the DUT's data memory starts elsewhere, these loads
    may not retire — but non-mem instructions in the same stream still do, and
    many other builders cover load/store SEEN via x1-based addressing too.
    """
    stream.append(ADDI(rd, 0, 0x100))   # 0x100 fits in 12-bit signed range


# ─── 1. SEEN builders (all 30 ops) ────────────────────────────────────────────

def build_seen_r_type_stream(rng):
    """SEEN for 10 R-type ops. Each op retires at least once.
    Random stimuli cover SEEN easily, but we guarantee it deterministically.
    """
    stream = []
    for op in R_OPS:
        rd = 1 + rng.randint(0, 14)
        rs1 = 1 + rng.randint(0, 14)
        rs2 = 1 + rng.randint(0, 14)
        stream.append(op(rd=rd, rs1=rs1, rs2=rs2))
    return stream


def build_seen_i_alu_stream(rng):
    """SEEN for 9 I-type ALU ops (ADDI..ANDI + SLLI/SRLI/SRAI)."""
    stream = []
    for op in IALU_NONSHIFT:
        stream.append(op(rd=1 + rng.randint(0, 14),
                         rs1=1 + rng.randint(0, 14),
                         imm=rng.randint(-10, 10)))
    for op in IALU_SHIFT:
        stream.append(op(rd=1 + rng.randint(0, 14),
                         rs1=1 + rng.randint(0, 14),
                         shamt=rng.randint(1, 30)))
    return stream


def build_seen_loads_stream(rng):
    """SEEN for 5 load ops. Uses a word-aligned base; offset small positive."""
    stream = []
    base = 16
    _set_mem_base(stream, base)
    for op in LOAD_OPS:
        stream.append(op(rd=1 + rng.randint(0, 14),
                         rs1=base,
                         imm=rng.choice([0, 4, 8, 12])))
    return stream


def build_seen_stores_stream(rng):
    """SEEN for 3 store ops."""
    stream = []
    base = 16
    _set_mem_base(stream, base)
    for op in STORE_OPS:
        stream.append(op(rs2=1 + rng.randint(0, 14),
                         rs1=base,
                         imm=rng.choice([0, 4, 8, 12])))
    return stream


def build_seen_csr_stream(rng):
    """SEEN for 3 CSR ops."""
    stream = []
    for op in CSR_OPS:
        stream.append(op(rd=1 + rng.randint(0, 14),
                         rs1=1 + rng.randint(0, 14)))
    return stream


# ─── 2. ZERO_DST (27 bins) — writers with rd=x0 ───────────────────────────────

def build_zero_dst_stream(rng):
    """ZERO_DST for all 27 WRITERS. Each writer op retires with rd=x0.
    rd=x0 is unusual (useless write), so random tests under-sample this.
    """
    stream = []
    # R-type with rd=x0
    for op in R_OPS:
        stream.append(op(rd=0, rs1=1 + rng.randint(0, 14), rs2=1 + rng.randint(0, 14)))
    # I-ALU non-shift with rd=x0
    for op in IALU_NONSHIFT:
        stream.append(op(rd=0, rs1=1 + rng.randint(0, 14), imm=rng.randint(-100, 100)))
    # I-ALU shift with rd=x0
    for op in IALU_SHIFT:
        stream.append(op(rd=0, rs1=1 + rng.randint(0, 14), shamt=rng.randint(0, 31)))
    # Loads with rd=x0 (still retires, just discards)
    base = 16
    _set_mem_base(stream, base)
    for op in LOAD_OPS:
        stream.append(op(rd=0, rs1=base, imm=rng.choice([0, 4, 8])))
    # CSR with rd=x0
    for op in CSR_OPS:
        stream.append(op(rd=0, rs1=1 + rng.randint(0, 14)))
    return stream


# ─── 3. ZERO_SRC (30 bins) — readers with rs1 or rs2 = x0 ─────────────────────

def build_zero_src_stream(rng):
    """ZERO_SRC for all 30 READERS. Each reader op retires with rs1=x0 (and
    rs2=x0 too when applicable). Random tests under-sample x0 as a source.
    """
    stream = []
    # R-type: rs1=x0 (and rs2=x0 for extra SAME_SRC coverage incidentally)
    for op in R_OPS:
        stream.append(op(rd=1 + rng.randint(0, 14), rs1=0, rs2=1 + rng.randint(0, 14)))
    # I-ALU non-shift
    for op in IALU_NONSHIFT:
        stream.append(op(rd=1 + rng.randint(0, 14), rs1=0, imm=rng.randint(-10, 10)))
    # I-ALU shift
    for op in IALU_SHIFT:
        stream.append(op(rd=1 + rng.randint(0, 14), rs1=0, shamt=rng.randint(0, 31)))
    # Loads with rs1=x0 (base=0). May fault but encoding is legal.
    for op in LOAD_OPS:
        stream.append(op(rd=1 + rng.randint(0, 14), rs1=0, imm=0))
    # Stores with rs1=x0 (base=0). Similarly conservative.
    for op in STORE_OPS:
        stream.append(op(rs2=1 + rng.randint(0, 14), rs1=0, imm=0))
    # CSR with rs1=x0 (CSRRS/CSRRC: no write; CSRRW: writes 0). All retire.
    for op in CSR_OPS:
        stream.append(op(rd=1 + rng.randint(0, 14), rs1=0))
    return stream


# ─── 4. SAME_SRC (13 bins) — rs1 == rs2 for two-source readers ────────────────

def build_same_src_stream(rng):
    """SAME_SRC for 10 R-types + 3 stores. Uses a randomly chosen non-zero reg."""
    stream = []
    for op in R_OPS:
        r = 1 + rng.randint(0, 14)
        stream.append(op(rd=1 + rng.randint(0, 14), rs1=r, rs2=r))
    base = 16
    _set_mem_base(stream, base)
    for op in STORE_OPS:
        r = 1 + rng.randint(0, 14)
        stream.append(op(rs2=r, rs1=r, imm=0))
    return stream


# ─── 5. IMM_BUCKETS (85 bins) — 17 imm-ops × 5 buckets ────────────────────────

def build_imm_buckets_stream(rng):
    """IMM_BUCKETS: hit all 5 buckets for each of the 17 IMM_OPS.
    - 12-bit signed imm ops: pick one imm per bucket from
        [-2048, -500, 0, 500, 1500].
    - Shifts: shamt buckets {0→2, 1..7→1, 8..30→3, 31→4}; no bucket 0 for
      shifts (shamt is 5-bit unsigned, no "very negative"). We supply the
      4 reachable buckets per shift op and also hit shamt=31 (bucket 4).

    Loads/stores use a word-aligned base. For stores imm is also byte offset;
    the 5 chosen imms are within the ±2048 12-bit range.
    """
    stream = []
    base = 16
    _set_mem_base(stream, base)

    # Buckets per spec:
    #   0: imm <= -1024  -> -2048
    #   1: -1024 < imm < 0  -> -500
    #   2: imm == 0  -> 0
    #   3: 0 < imm < 1024  -> 500
    #   4: imm >= 1024  -> 1500 (also use 2047 for max positive)
    NON_SHIFT_IMMS = [-2048, -500, 0, 500, 1500]

    # 12-bit signed non-shift I-ALU
    for op in IALU_NONSHIFT:
        for imm in NON_SHIFT_IMMS:
            stream.append(op(rd=1 + rng.randint(0, 14),
                             rs1=1 + rng.randint(0, 14),
                             imm=imm))

    # Loads: imm is byte offset; use same corner imms. These may fault for
    # some imms depending on memory map, but encodings are legal and the
    # bucket is sampled at retirement.
    for op in LOAD_OPS:
        for imm in NON_SHIFT_IMMS:
            stream.append(op(rd=1 + rng.randint(0, 14),
                             rs1=base,
                             imm=imm))

    # Stores: imm is byte offset; same corner set.
    for op in STORE_OPS:
        for imm in NON_SHIFT_IMMS:
            stream.append(op(rs2=1 + rng.randint(0, 14),
                             rs1=base,
                             imm=imm))

    # Shift-immediate ops: shamt buckets (no "very negative" is reachable).
    # Pick shamt values: 0 (bucket 2), 1..7 random (bucket 1), 8..30 random
    # (bucket 3), 31 (bucket 4).
    for op in IALU_SHIFT:
        for shamt in [0, rng.randint(1, 7), rng.randint(8, 30), 31]:
            stream.append(op(rd=1 + rng.randint(0, 14),
                             rs1=1 + rng.randint(0, 14),
                             shamt=shamt))
    return stream


# ─── 6. Operand-corner builders (datapath values) ─────────────────────────────

def build_operand_corners_stream(rng):
    """Exercise sign-sensitive paths of R-type ops (SLT/SLTU/SRA/SUB/etc.) by
    materializing corner values into registers and using them as operands.

    Corner values: 0, 1, -1 (0xFFFFFFFF), INT32_MIN (0x80000000),
    INT32_MAX (0x7FFFFFFF), 0x80000001, 0x7FFFFFFE, powers of two.

    This hits parts of SEEN + supports K3_CHAIN patterns too.
    """
    stream = []
    # Prepare corner-value registers; use high-numbered regs to avoid clobbering
    # x1..x15 used elsewhere.
    CORNERS = {
        16: 0x00000000,  # zero
        17: 0x00000001,  # one
        18: 0xFFFFFFFF,  # -1
        19: 0x80000000,  # INT32_MIN
        20: 0x7FFFFFFF,  # INT32_MAX
        21: 0x80000001,  # INT32_MIN + 1
        22: 0x7FFFFFFE,  # INT32_MAX - 1
        23: 0x00008000,  # 2**15
        24: 0xFFFF8000,  # -(2**15)
        25: 0x00010000,  # 2**16
        26: 0x40000000,  # 2**30
    }
    for rd, v in CORNERS.items():
        _init_reg(stream, rd, v)

    regs = list(CORNERS.keys())
    # Run every R-type against every pair of corner regs (bounded by 512 words).
    # 10 ops × up to ~25 pairs is within budget.
    pairs = []
    for a in regs:
        for b in regs:
            pairs.append((a, b))
    rng.shuffle(pairs)
    pairs = pairs[:32]  # 10 * 32 = 320 words, well under 512
    for op in R_OPS:
        for (a, b) in pairs:
            stream.append(op(rd=1 + rng.randint(0, 14), rs1=a, rs2=b))
    return stream


# ─── 7. RAW_DIST builders — producer→consumer at distances 1, 2, 3 ────────────

def _raw_dist_block(stream, writer_op, reader_op, distance, rng):
    """Emit a producer+fillers+consumer block to generate one RAW_DIST sample.

    writer_op retires once, writes a non-zero rd.
    Then (distance-1) filler retirements (ADDI x30, x0, 0 — writes x30, which
    the consumer does NOT read) are inserted.
    Then reader_op retires, reading the produced rd as its rs1 (or rs2 if
    stores — both rs1/rs2 for stores work since both feed the RAW tracker).

    Register convention:
      - produced rd = x29 (keeps x30 free as filler scratch).
      - writer's own source operands are x1 (value 1 from prelude) when safe.
      - reader's unused operand is x1.

    Fillers do not touch x29 or x0 so distance is preserved.
    """
    RD_PRODUCED = 29
    FILLER_SCRATCH = 30

    # Emit writer that writes RD_PRODUCED.
    if writer_op in R_OPS:
        stream.append(writer_op(rd=RD_PRODUCED, rs1=1, rs2=2))
    elif writer_op in IALU_NONSHIFT:
        stream.append(writer_op(rd=RD_PRODUCED, rs1=1, imm=rng.randint(-100, 100)))
    elif writer_op in IALU_SHIFT:
        stream.append(writer_op(rd=RD_PRODUCED, rs1=1, shamt=rng.randint(0, 31)))
    elif writer_op in LOAD_OPS:
        # Must set up a safe base first. We use x28 (set once per block).
        stream.append(ADDI(28, 0, 0x100))  # base = 0x100
        stream.append(writer_op(rd=RD_PRODUCED, rs1=28, imm=0))
        # Note: producer is now the LAST instruction, as required for distance.
    elif writer_op in CSR_OPS:
        stream.append(writer_op(rd=RD_PRODUCED, rs1=1))
    else:
        raise ValueError("unsupported writer")

    # Fillers (distance - 1 of them). Each must NOT write RD_PRODUCED and must
    # NOT read RD_PRODUCED (so the real consumer is the one that reads it).
    for _ in range(distance - 1):
        stream.append(ADDI(FILLER_SCRATCH, 0, 0))

    # Consumer: must read RD_PRODUCED as a source.
    if reader_op in R_OPS:
        stream.append(reader_op(rd=1, rs1=RD_PRODUCED, rs2=RD_PRODUCED))
    elif reader_op in IALU_NONSHIFT:
        stream.append(reader_op(rd=1, rs1=RD_PRODUCED, imm=0))
    elif reader_op in IALU_SHIFT:
        stream.append(reader_op(rd=1, rs1=RD_PRODUCED, shamt=1))
    elif reader_op in LOAD_OPS:
        # Load uses RD_PRODUCED as base; may fault, but the RAW relation is
        # defined on the (would-be) retirement — if it does retire, we score.
        # Use a small fixed offset so if RD_PRODUCED happens to point somewhere
        # valid we still land on it.
        stream.append(reader_op(rd=1, rs1=RD_PRODUCED, imm=0))
    elif reader_op in STORE_OPS:
        # Store reads both rs1 and rs2 — put RD_PRODUCED in rs1 (base). rs2 is
        # a known-safe data reg (x1).
        stream.append(reader_op(rs2=1, rs1=RD_PRODUCED, imm=0))
    elif reader_op in CSR_OPS:
        stream.append(reader_op(rd=1, rs1=RD_PRODUCED))
    else:
        raise ValueError("unsupported reader")


def build_raw_dist_core_stream(rng):
    """RAW_DIST (chunk 1): core writer→reader pairs at distances 1, 2, 3.

    Random stimuli would need correlated register choices across adjacent
    instructions to hit RAW_DIST; most won't. We enumerate (writer, reader,
    distance) triples and emit a short block per triple.

    Budget: 512-word builder. Each block is ~2–5 instructions. We cover a
    representative subset: all 27 writers × a selected 10 readers × 3 dists.
    """
    stream = []
    reader_subset = [ADD, SUB, XOR, OR, AND, ADDI, SLLI, LW, SW, CSRRW]
    counter = 0
    for writer in ALL_WRITERS:
        for reader in reader_subset:
            # Pick ONE distance per (writer, reader) for this chunk; cycle.
            # Deterministic across Python runs: use a counter, not hash(name)
            # (Python string hashing is randomized per process unless
            # PYTHONHASHSEED is set).
            d = 1 + (counter % 3)
            counter += 1
            _raw_dist_block(stream, writer, reader, d, rng)
            if len(stream) > 460:
                return stream
    return stream


def build_raw_dist_d1_stream(rng):
    """RAW_DIST (distance=1 chunk): dense back-to-back producer→consumer.

    Emphasizes distance=1 bins across many (writer, reader) pairs. Distance=1
    is the most common form of data dependency and random tests sometimes hit
    it; we enumerate systematically.
    """
    stream = []
    # Choose a compact grid: 14 writers × 14 readers × distance=1.
    writers = [ADD, SUB, XOR, OR, AND, SLT, SLL, SRL, SRA, ADDI, SLLI, SRLI, LW, CSRRS]
    readers = [ADD, SUB, XOR, OR, AND, ADDI, SLTI, XORI, SLLI, SRLI, LW, SW, CSRRW, CSRRC]
    for w in writers:
        for r in readers:
            _raw_dist_block(stream, w, r, 1, rng)
            if len(stream) > 460:
                return stream
    return stream


def build_raw_dist_d2_stream(rng):
    """RAW_DIST (distance=2 chunk): one filler between producer and consumer."""
    stream = []
    writers = [ADD, SUB, XOR, SLT, SLTU, ADDI, SLTI, XORI, SRAI, LB, LH, LW, CSRRW, CSRRC]
    readers = [ADD, OR, AND, ADDI, ANDI, SLLI, LB, LH, LBU, SB, SW, CSRRS]
    for w in writers:
        for r in readers:
            _raw_dist_block(stream, w, r, 2, rng)
            if len(stream) > 450:
                return stream
    return stream


def build_raw_dist_d3_stream(rng):
    """RAW_DIST (distance=3 chunk): two fillers between producer and consumer."""
    stream = []
    writers = [ADD, SUB, SLL, OR, AND, ADDI, ORI, ANDI, SRAI, LHU, LBU, CSRRS]
    readers = [SUB, XOR, SLT, SLTU, ADDI, SLTIU, ORI, SRLI, LH, SH, CSRRW, CSRRC]
    for w in writers:
        for r in readers:
            _raw_dist_block(stream, w, r, 3, rng)
            if len(stream) > 440:
                return stream
    return stream


# ─── 8. K3_CHAIN builders — op_o (R) → op_m (R) → op_tail ─────────────────────

def _k3_triple(stream, outer, mid, tail, rng):
    """Emit a 3-instruction adjacent triple:
      outer(R) writes rd_o != x0 (and does not read tail's output).
      mid(R) reads rd_o, writes rd_m != x0.
      tail reads rd_m.
    Regs used: rd_o = x27, rd_m = x29; outer/mid rs2 = x1; tail uses x1 for
    unused operand(s).
    """
    RD_O = 27
    RD_M = 29
    # outer: writes RD_O, reads x1, x2 (from prelude).
    stream.append(outer(rd=RD_O, rs1=1, rs2=2))
    # mid: writes RD_M, reads RD_O (as rs1) and x1 (as rs2).
    stream.append(mid(rd=RD_M, rs1=RD_O, rs2=1))
    # tail: must read RD_M as a source.
    if tail in R_OPS:
        stream.append(tail(rd=1, rs1=RD_M, rs2=RD_M))
    elif tail in IALU_NONSHIFT:
        stream.append(tail(rd=1, rs1=RD_M, imm=0))
    elif tail in IALU_SHIFT:
        stream.append(tail(rd=1, rs1=RD_M, shamt=1))
    elif tail in LOAD_OPS:
        stream.append(tail(rd=1, rs1=RD_M, imm=0))
    elif tail in STORE_OPS:
        stream.append(tail(rs2=1, rs1=RD_M, imm=0))
    elif tail in CSR_OPS:
        stream.append(tail(rd=1, rs1=RD_M))
    else:
        raise ValueError("unsupported tail")


def build_k3_chain_core_stream(rng):
    """K3_CHAIN: triples op_outer(R) → op_mid(R) → op_tail(any reader).

    Random stimuli need three adjacent retirements with register data-flow
    chaining through non-x0 regs; combinatorially rare. We enumerate a
    representative grid.

    Budget is tight (512 words) — we cover a subset: 4 outer × 4 mid × all 30
    readers = 480 words (3 per triple).
    """
    stream = []
    outers = [ADD, XOR, SLL, OR]
    mids = [SUB, AND, SRL, ADDI]  # mids must be R-type per spec, so use R only
    mids = [SUB, AND, SRL, SLT]
    for o in outers:
        for m in mids:
            for t in ALL_READERS:
                _k3_triple(stream, o, m, t, rng)
                if len(stream) > 500:
                    return stream
    return stream


def build_k3_chain_wide_outer_stream(rng):
    """K3_CHAIN with wider R_outer coverage: 10 outer × 2 mid × 15 readers."""
    stream = []
    outers = R_OPS[:]           # all 10
    mids = [ADD, XOR]           # 2
    readers = ALL_READERS[::2]  # 15
    for o in outers:
        for m in mids:
            for t in readers:
                _k3_triple(stream, o, m, t, rng)
                if len(stream) > 500:
                    return stream
    return stream


def build_k3_chain_wide_mid_stream(rng):
    """K3_CHAIN with wider R_mid coverage: 2 outer × 10 mid × 15 readers."""
    stream = []
    outers = [ADD, OR]          # 2
    mids = R_OPS[:]             # all 10
    readers = ALL_READERS[1::2]  # 15 (odd-indexed)
    for o in outers:
        for m in mids:
            for t in readers:
                _k3_triple(stream, o, m, t, rng)
                if len(stream) > 500:
                    return stream
    return stream


# ─── 9. Extra IMM_BUCKETS reinforcement (varied imm within each bucket) ───────

def build_imm_variety_stream(rng):
    """Fill IMM_BUCKETS with multiple imms per bucket (robustness)."""
    stream = []
    base = 16
    _set_mem_base(stream, base)
    B_VERY_NEG = [-2048, -2000, -1500, -1024]
    B_SMALL_NEG = [-1023, -500, -100, -1]
    B_ZERO = [0]
    B_SMALL_POS = [1, 100, 500, 1023]
    B_VERY_POS = [1024, 1500, 2000, 2047]
    for op in IALU_NONSHIFT:
        for imm in [rng.choice(B_VERY_NEG), rng.choice(B_SMALL_NEG),
                    B_ZERO[0], rng.choice(B_SMALL_POS),
                    rng.choice(B_VERY_POS)]:
            stream.append(op(rd=1 + rng.randint(0, 14),
                             rs1=1 + rng.randint(0, 14),
                             imm=imm))
    # Shift imms (shamt is 5-bit; buckets 2/1/3/4 only).
    for op in IALU_SHIFT:
        for shamt in [0, rng.randint(1, 7), rng.randint(8, 30), 31]:
            stream.append(op(rd=1 + rng.randint(0, 14),
                             rs1=1 + rng.randint(0, 14),
                             shamt=shamt))
    return stream


# ─── 10. Shift-amount sweep (full 0..31) ──────────────────────────────────────

def build_shift_amount_sweep_stream(rng):
    """SEEN + IMM_BUCKETS for shift ops across every shamt 0..31.
    Also exercises r-type shifts SLL/SRL/SRA with varied rs2 low-5 bits.
    """
    stream = []
    # I-type shifts: every shamt.
    for shamt in range(32):
        for op in IALU_SHIFT:
            stream.append(op(rd=1 + rng.randint(0, 14),
                             rs1=1 + rng.randint(0, 14),
                             shamt=shamt))
    # R-type shifts: rs2's low-5 bits form the shift amount. Prelude gives
    # x1..x15 = 1..15 which covers shamt 1..15 directly, and we materialize
    # a few larger values in temporary regs.
    _init_reg(stream, 20, 16)  # shift by 16
    _init_reg(stream, 21, 31)  # shift by 31
    _init_reg(stream, 22, 24)  # shift by 24
    for shift_reg in [1, 5, 10, 15, 20, 21, 22]:
        for op in [SLL, SRL, SRA]:
            stream.append(op(rd=1 + rng.randint(0, 14),
                             rs1=1 + rng.randint(0, 14),
                             rs2=shift_reg))
    return stream


# ─── 11. Mixed combo: boosts SEEN/ZERO_SRC/SAME_SRC for CSRs and loads ────────

def build_combo_csr_stream(rng):
    """Extra CSR activity: CSRRW with rs1=x0 writes 0 to mscratch; CSRRS/CSRRC
    with rs1=x0 are read-only (rd ← CSR). This hits ZERO_SRC for CSR ops and
    SEEN + ZERO_DST reinforcement.
    """
    stream = []
    for _ in range(4):
        for op in CSR_OPS:
            rd = rng.choice([0, 1 + rng.randint(0, 14)])
            rs1 = rng.choice([0, 1 + rng.randint(0, 14)])
            stream.append(op(rd=rd, rs1=rs1))
    return stream


NEW_BUILDERS = [
    build_seen_r_type_stream,
    build_seen_i_alu_stream,
    build_seen_loads_stream,
    build_seen_stores_stream,
    build_seen_csr_stream,
    build_zero_dst_stream,
    build_zero_src_stream,
    build_same_src_stream,
    build_imm_buckets_stream,
    build_imm_variety_stream,
    build_shift_amount_sweep_stream,
    build_operand_corners_stream,
    build_raw_dist_core_stream,
    build_raw_dist_d1_stream,
    build_raw_dist_d2_stream,
    build_raw_dist_d3_stream,
    build_k3_chain_core_stream,
    build_k3_chain_wide_outer_stream,
    build_k3_chain_wide_mid_stream,
    build_combo_csr_stream,
]
