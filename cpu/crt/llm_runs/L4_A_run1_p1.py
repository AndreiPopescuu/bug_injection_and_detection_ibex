"""LLM-CRT L4 run A_run1 pass 1 (Claude sub-agent, condition A)."""
from ..isa_l4 import ADD, SUB, SLL, SLT, SLTU, XOR, SRL, SRA, OR, AND, ADDI, SLTI, SLTIU, XORI, ORI, ANDI, SLLI, SRLI, SRAI, LB, LH, LW, LBU, LHU, SB, SH, SW, CSRRW, CSRRS, CSRRC, NOP  # noqa: F401


# ---------------------------------------------------------------------------
# Op-category lists mirroring the plan.
# ---------------------------------------------------------------------------

R_OPS = [ADD, SUB, SLL, SLT, SLTU, XOR, SRL, SRA, OR, AND]
I_ALU_OPS = [ADDI, SLTI, SLTIU, XORI, ORI, ANDI]        # 6 imm-form
SHIFT_IMM_OPS = [SLLI, SRLI, SRAI]                       # 3 shamt-form
LOAD_OPS = [LB, LH, LW, LBU, LHU]
STORE_OPS = [SB, SH, SW]
CSR_OPS = [CSRRW, CSRRS, CSRRC]

ALL_I_ALU = I_ALU_OPS + SHIFT_IMM_OPS                    # 9
WRITERS = R_OPS + ALL_I_ALU + LOAD_OPS + CSR_OPS         # 27
READERS = R_OPS + ALL_I_ALU + LOAD_OPS + STORE_OPS + CSR_OPS  # 30
READERS_TWO = R_OPS + STORE_OPS                          # 13 (two-source)
IMM_OPS = ALL_I_ALU + LOAD_OPS + STORE_OPS               # 17
CHAIN_R = R_OPS                                          # 10

# Op-class predicates / helpers --------------------------------------------

def _is_r(op):     return op in R_OPS
def _is_i_alu(op): return op in I_ALU_OPS
def _is_shift(op): return op in SHIFT_IMM_OPS
def _is_load(op):  return op in LOAD_OPS
def _is_store(op): return op in STORE_OPS
def _is_csr(op):   return op in CSR_OPS

# The CSR encoders in isa_l4 use CSRRW/CSRRS/CSRRC(rd, rs1) so they are
# "two-arg" from the builder's viewpoint. CSR writes `rd`; `rs1` is the
# source operand (reader side).

# ---------------------------------------------------------------------------
# Memory base management.
# Loads/stores need a base register. We don't have the memory map, but
# retirement sampling happens even on traps; still, to make back-to-back
# retirement pairs robust we try to point load/store base registers at a
# low, word-aligned area (0x100) which is typically valid in Ibex sims.
# ---------------------------------------------------------------------------

_MEM_BASE = 0x100   # word-aligned low address used as default load/store base


def _load_imm(stream, rd, value):
    """Materialize a 32-bit value into `rd` using ADDI + SLLI + ADDI chain.

    We only need ≤ ~24-bit magnitudes here; keep it small/portable:
        rd = 0
        rd += hi12 ; rd <<= 12 ; rd += lo12
    This produces exactly: (hi12 << 12) | (lo12 & 0xfff) — fine for the
    0x100-class bases we use.
    """
    v = value & 0xFFFFFFFF
    hi12 = (v >> 12) & 0xFFF
    lo12 = v & 0xFFF
    # Treat hi12/lo12 as 12-bit signed values for ADDI. For our small
    # bases (0x100 => hi12=0, lo12=0x100) this is fine.
    # Convert to signed-12 if top bit set.
    def _s12(x):
        return x - 0x1000 if (x & 0x800) else x
    stream.append(ADDI(rd, 0, 0))                       # rd = 0
    if hi12:
        stream.append(ADDI(rd, rd, _s12(hi12)))         # rd = hi12
        stream.append(SLLI(rd, rd, 12))                 # rd <<= 12
    if lo12:
        stream.append(ADDI(rd, rd, _s12(lo12)))         # rd += lo12


def _init_mem_base(stream, reg=2):
    """Point `reg` at a safe word-aligned base for loads/stores."""
    _load_imm(stream, reg, _MEM_BASE)


# ---------------------------------------------------------------------------
# Generic builder utilities.
# ---------------------------------------------------------------------------

def _emit_reader(stream, op, rs_main, rd=10, rs2_other=None, imm=0, shamt=0):
    """Emit `op` so that it *reads* `rs_main` (as rs1).

    For two-source readers we also need an rs2; `rs2_other` is used (default 11).
    """
    if rs2_other is None:
        rs2_other = 11
    if _is_r(op):
        stream.append(op(rd=rd, rs1=rs_main, rs2=rs2_other))
    elif _is_i_alu(op):
        stream.append(op(rd=rd, rs1=rs_main, imm=imm))
    elif _is_shift(op):
        stream.append(op(rd=rd, rs1=rs_main, shamt=shamt & 0x1F))
    elif _is_load(op):
        stream.append(op(rd=rd, rs1=rs_main, imm=imm))
    elif _is_store(op):
        stream.append(op(rs2=rs2_other, rs1=rs_main, imm=imm))
    elif _is_csr(op):
        stream.append(op(rd=rd, rs1=rs_main))
    else:
        raise ValueError(f"unknown op {op}")


def _emit_reader_rs2(stream, op, rs_main, rd=10, rs1_other=None, imm=0, shamt=0):
    """Emit `op` so that it *reads* `rs_main` via rs2 (two-source ops only).

    For single-source readers (I-ALU, shifts, loads, CSR) rs2 doesn't exist,
    so the function is only valid for R-type / stores.
    """
    if rs1_other is None:
        rs1_other = 11
    if _is_r(op):
        stream.append(op(rd=rd, rs1=rs1_other, rs2=rs_main))
    elif _is_store(op):
        stream.append(op(rs2=rs_main, rs1=rs1_other, imm=imm))
    else:
        # Fallback: just read via rs1.
        _emit_reader(stream, op, rs_main, rd=rd, imm=imm, shamt=shamt)


def _emit_writer(stream, op, rd, rs1=1, rs2=2, imm=0, shamt=0):
    """Emit `op` so that it writes `rd` (producer).

    rs2 is used for R-type/stores; for stores `rd` is treated as the
    "nominal destination" but stores have no rd — so this helper should
    NOT be used for stores.
    """
    if _is_r(op):
        stream.append(op(rd=rd, rs1=rs1, rs2=rs2))
    elif _is_i_alu(op):
        stream.append(op(rd=rd, rs1=rs1, imm=imm))
    elif _is_shift(op):
        stream.append(op(rd=rd, rs1=rs1, shamt=shamt & 0x1F))
    elif _is_load(op):
        stream.append(op(rd=rd, rs1=rs1, imm=imm))
    elif _is_csr(op):
        stream.append(op(rd=rd, rs1=rs1))
    else:
        raise ValueError(f"writer not supported for {op}")


# A safe filler instruction (R-type, no memory, no x0-write side effects).
def _filler(rd=12, rs1=1, rs2=2):
    """A benign filler instruction (ADD x12, x1, x2) that neither reads nor
    writes any register we care about in a producer→consumer pair."""
    return ADD(rd=rd, rs1=rs1, rs2=rs2)


# =============================================================================
# 1. SEEN — every op retired at least once (30 bins).
# =============================================================================

def build_seen_all30_stream(rng):
    """Retire each of the 30 plan ops at least once.

    Targets: SEEN bins for all 30 ops. For loads/stores we initialise a
    memory base in x2 so the accesses are well-formed. CSR ops use
    mscratch which has no control-flow side-effects.
    """
    stream = []
    _init_mem_base(stream, reg=2)

    # R-type
    for op in R_OPS:
        stream.append(op(rd=10, rs1=1 + rng.randint(0, 14),
                         rs2=1 + rng.randint(0, 14)))
    # I-ALU
    for op in I_ALU_OPS:
        stream.append(op(rd=10, rs1=1 + rng.randint(0, 14),
                         imm=rng.randint(-2048, 2047)))
    # Shift-imm
    for op in SHIFT_IMM_OPS:
        stream.append(op(rd=10, rs1=1 + rng.randint(0, 14),
                         shamt=rng.randint(0, 31)))
    # Loads  (base = x2 = 0x100 ; small offsets)
    for op in LOAD_OPS:
        stream.append(op(rd=10, rs1=2, imm=(rng.randint(0, 7) * 4)))
    # Stores
    for op in STORE_OPS:
        stream.append(op(rs2=1 + rng.randint(0, 14), rs1=2,
                         imm=(rng.randint(0, 7) * 4)))
    # CSR
    for op in CSR_OPS:
        stream.append(op(rd=10, rs1=1 + rng.randint(0, 14)))
    return stream


# =============================================================================
# 2. ZERO_DST — every WRITER op with rd == x0 (27 bins).
# =============================================================================

def build_zero_dst_all_writers_stream(rng):
    """ZERO_DST for every writer op (27 bins).

    All 27 writers emitted with rd=x0. Loads use a base pointer in x2;
    the destination x0 discard still fires the ZERO_DST bin.
    """
    stream = []
    _init_mem_base(stream, reg=2)
    for op in R_OPS:
        stream.append(op(rd=0, rs1=1 + rng.randint(0, 14),
                         rs2=1 + rng.randint(0, 14)))
    for op in I_ALU_OPS:
        stream.append(op(rd=0, rs1=1 + rng.randint(0, 14),
                         imm=rng.randint(-2048, 2047)))
    for op in SHIFT_IMM_OPS:
        stream.append(op(rd=0, rs1=1 + rng.randint(0, 14),
                         shamt=rng.randint(0, 31)))
    for op in LOAD_OPS:
        stream.append(op(rd=0, rs1=2, imm=(rng.randint(0, 7) * 4)))
    for op in CSR_OPS:
        stream.append(op(rd=0, rs1=1 + rng.randint(0, 14)))
    return stream


# =============================================================================
# 3. ZERO_SRC — every READER op with at least one source = x0 (30 bins).
# =============================================================================

def build_zero_src_all_readers_stream(rng):
    """ZERO_SRC for all 30 readers.

    For each reader we emit it with rs1 = x0 (and for two-source readers
    we leave rs2 non-zero to avoid double-coverage). Stores additionally
    get a form with rs2=x0 to ensure we cover the rs2-source bin.
    """
    stream = []
    _init_mem_base(stream, reg=2)

    # Single-source readers (I-ALU, shifts, loads, CSR) → rs1 = x0
    for op in I_ALU_OPS:
        stream.append(op(rd=10, rs1=0, imm=rng.randint(-2048, 2047)))
    for op in SHIFT_IMM_OPS:
        stream.append(op(rd=10, rs1=0, shamt=rng.randint(0, 31)))
    for op in LOAD_OPS:
        # rs1=x0 means EA = sign-extended imm; harmless retirement either
        # way.
        stream.append(op(rd=10, rs1=0, imm=(rng.randint(0, 3) * 4)))
    for op in CSR_OPS:
        stream.append(op(rd=10, rs1=0))

    # R-type (two-source) → one bin fires if EITHER rs1 or rs2 == x0.
    # Emit each R-type with rs1=x0 to fire the ZERO_SRC bin.
    for op in R_OPS:
        stream.append(op(rd=10, rs1=0, rs2=1 + rng.randint(0, 14)))

    # Stores → rs1=x0 (base) covers ZERO_SRC; also one with rs2=x0 (data).
    for op in STORE_OPS:
        stream.append(op(rs2=1 + rng.randint(0, 14), rs1=0, imm=0))
        stream.append(op(rs2=0, rs1=2, imm=(rng.randint(0, 3) * 4)))
    return stream


# =============================================================================
# 4. SAME_SRC — two-source readers with rs1 == rs2 (13 bins).
# =============================================================================

def build_same_src_all_two_src_stream(rng):
    """SAME_SRC for R-type (10) and stores (3) — 13 bins."""
    stream = []
    _init_mem_base(stream, reg=2)
    # R-type with rs1 == rs2.
    for op in R_OPS:
        r = 1 + rng.randint(0, 14)
        stream.append(op(rd=10, rs1=r, rs2=r))
    # Stores: rs1 (base) == rs2 (data). Use x2 as both; base is valid,
    # the stored value is 0x100 which is harmless.
    for op in STORE_OPS:
        stream.append(op(rs2=2, rs1=2, imm=(rng.randint(0, 3) * 4)))
    return stream


# =============================================================================
# 5. IMM_BUCKETS — 17 imm-ops × 5 corner buckets (85 bins).
#   bucket 0: imm <= -1024
#   bucket 1: -1024 < imm < 0
#   bucket 2: imm == 0
#   bucket 3: 0 < imm < 1024
#   bucket 4: imm >= 1024
# Shifts bucket shamt: 0→2, 1..7→1, 8..30→3, 31→4.  Note: there is NO
# "bucket 0" reachable for shifts (shamt is unsigned 5-bit); we cover
# the 4 reachable buckets.
# =============================================================================

def build_imm_buckets_i_alu_stream(rng):
    """IMM_BUCKETS for 6 I-ALU imm ops × 5 buckets = 30 bins."""
    stream = []
    IMM_CORNERS = [
        -2048,                       # bucket 0 (very-neg)
        -1 - rng.randint(0, 1022),   # bucket 1 (small-neg)
        0,                           # bucket 2 (zero)
        1 + rng.randint(0, 1022),    # bucket 3 (small-pos)
        2047,                        # bucket 4 (very-pos)
    ]
    for op in I_ALU_OPS:
        for imm in IMM_CORNERS:
            stream.append(op(rd=10, rs1=1 + rng.randint(0, 14), imm=imm))
    return stream


def build_imm_buckets_shifts_stream(rng):
    """IMM_BUCKETS for 3 shift-imm ops × 5 buckets.

    Shamt (5-bit unsigned) buckets:
        0  → bucket 2
        1..7  → bucket 1
        8..30 → bucket 3
        31 → bucket 4
    (Bucket 0, imm<=-1024, is unreachable for shifts — included
    nevertheless with shamt=0, so the shift's imm-field extra bits take
    a negative encoding; harmless as the DUT still buckets the 5-bit
    shamt value in RISC-V semantics.)
    """
    stream = []
    for op in SHIFT_IMM_OPS:
        for shamt in [0,                                     # bucket 2
                      1 + rng.randint(0, 6),                 # bucket 1
                      8 + rng.randint(0, 22),                # bucket 3
                      31,                                    # bucket 4
                      0]:                                    # dup zero
            stream.append(op(rd=10, rs1=1 + rng.randint(0, 14), shamt=shamt))
    return stream


def build_imm_buckets_loads_stream(rng):
    """IMM_BUCKETS for 5 LOAD ops × 5 buckets = 25 bins.

    Loads use a safe base register (x2) so the EA = base + imm still has
    a decent chance of being in RAM. For bucket 0 (very-neg) and bucket
    4 (very-pos) the EA may fall outside DMEM; the retirement MONITOR
    still samples the bin either way because bucket classification uses
    the encoded immediate.
    """
    stream = []
    _init_mem_base(stream, reg=2)
    IMM_CORNERS = [
        -2048,                       # bucket 0
        -1 - rng.randint(0, 1022),   # bucket 1
        0,                           # bucket 2
        1 + rng.randint(0, 1022),    # bucket 3
        2047,                        # bucket 4
    ]
    for op in LOAD_OPS:
        for imm in IMM_CORNERS:
            stream.append(op(rd=10, rs1=2, imm=imm))
    return stream


def build_imm_buckets_stores_stream(rng):
    """IMM_BUCKETS for 3 STORE ops × 5 buckets = 15 bins."""
    stream = []
    _init_mem_base(stream, reg=2)
    IMM_CORNERS = [
        -2048,
        -1 - rng.randint(0, 1022),
        0,
        1 + rng.randint(0, 1022),
        2047,
    ]
    for op in STORE_OPS:
        for imm in IMM_CORNERS:
            stream.append(op(rs2=1 + rng.randint(0, 14), rs1=2, imm=imm))
    return stream


# =============================================================================
# RAW_DIST — producer N retirements before consumer that reads the written
# register. 27 writers × 30 readers × 3 distances = 2,430 bins.
# =============================================================================
#
# Strategy per (writer, reader, distance=N):
#   Emit: writer rd=Rprod, filler, ..., (N-1 fillers), reader reads Rprod.
#   • Rprod chosen outside x0 (writer actually writes a register).
#   • Writer sources & reader "other-source" picked to avoid clobbering
#     Rprod between producer and consumer. We use low temp register
#     x12 for fillers' rd and we use Rprod=x5 for the written value.
#
# Fillers are ADD x12, x1, x2 — they don't touch x5.
# Loads need a base. If the writer is a load, we use x2 (initialized to
# the mem base) as its rs1 — we must ensure x2 is still the base when the
# writer retires. Because fillers write x12 only, x2 is preserved.
#
# For CSR writers (CSRRW/CSRRS/CSRRC) the written rd=Rprod receives the
# CSR value. That's still a legitimate write-of-register producer.
#
# For I-ALU writers with imm, the imm is random-small so the producer
# value is random. The datapath value doesn't matter for RAW_DIST.

def _emit_producer(stream, op, rd):
    """Emit `op` as a producer writing `rd` (!= x0).
       Uses benign sources that won't disturb other state.
    """
    rs1 = 1   # x1 holds 1 after prelude (harmless source)
    rs2 = 3   # x3 holds 3 (harmless)
    if _is_r(op):
        stream.append(op(rd=rd, rs1=rs1, rs2=rs2))
    elif _is_i_alu(op):
        stream.append(op(rd=rd, rs1=rs1, imm=0))
    elif _is_shift(op):
        stream.append(op(rd=rd, rs1=rs1, shamt=0))
    elif _is_load(op):
        stream.append(op(rd=rd, rs1=2, imm=0))     # base = x2 (=0x100)
    elif _is_csr(op):
        stream.append(op(rd=rd, rs1=rs1))
    else:
        raise ValueError(f"producer not supported: {op}")


def _emit_consumer(stream, op, rs_read, rd=10):
    """Emit `op` so that it reads `rs_read` (via rs1 for single-src, via
    rs1 for two-src is fine because the bin fires when ANY source is
    `rs_read`). For stores and R-type we also pass a second source."""
    if _is_r(op):
        stream.append(op(rd=rd, rs1=rs_read, rs2=11))
    elif _is_i_alu(op):
        stream.append(op(rd=rd, rs1=rs_read, imm=0))
    elif _is_shift(op):
        stream.append(op(rd=rd, rs1=rs_read, shamt=0))
    elif _is_load(op):
        # rs1 = rs_read means EA might be garbage; that's OK — the reader
        # still retires (and even on trap, the preceding producer has
        # already retired, so the RAW_DIST pair still samples at the
        # trap-PC retirement). To be safe-ish we clamp: if rs_read is x2
        # we're fine; otherwise we accept possible access faults.
        stream.append(op(rd=rd, rs1=rs_read, imm=0))
    elif _is_store(op):
        stream.append(op(rs2=11, rs1=rs_read, imm=0))
    elif _is_csr(op):
        stream.append(op(rd=rd, rs1=rs_read))
    else:
        raise ValueError(f"consumer not supported: {op}")


def _raw_dist_group(stream, writers_subset, distance, rng):
    """Emit RAW_DIST patterns for (writers_subset × all 30 readers × one
    distance). Produces (len(writers_subset) * 30) coverage events."""
    for w in writers_subset:
        for r in READERS:
            # Per writer we keep the producer-register fixed (x5);
            # between emissions we re-init mem base in case a previous
            # consumer (e.g. a load with weird rs1) ... actually no, x2
            # is only ever touched by _init_mem_base. Keep as-is.
            Rprod = 5
            _emit_producer(stream, w, Rprod)
            for _ in range(distance - 1):
                stream.append(_filler())
            _emit_consumer(stream, r, Rprod)
    return stream


def _make_raw_dist_builder(distance, writer_slice_name, writer_slice):
    """Factory creating a builder for a given writer-category at a given
    RAW distance. Returns a function suitable for NEW_BUILDERS."""
    def _builder(rng):
        stream = []
        _init_mem_base(stream, reg=2)
        _raw_dist_group(stream, writer_slice, distance, rng)
        return stream
    _builder.__name__ = (
        f"build_raw_dist_d{distance}_{writer_slice_name}_stream"
    )
    _builder.__doc__ = (
        f"RAW_DIST at distance {distance} for writer-category "
        f"'{writer_slice_name}' × all 30 readers. "
        f"Each (writer op) → ({distance-1} filler(s)) → (reader op that "
        f"reads the written register). Together with the other "
        f"RAW_DIST builders this covers all 27×30×3 = 2,430 bins.\n\n"
        f"Random stimuli rarely hit specific (writer, reader, distance) "
        f"triples because each requires producer register = consumer "
        f"source and controlled retirement spacing."
    )
    return _builder


# Split the 27 writers into categories, AND for distance=3 we also split
# readers, to keep each builder under the 512-word cap.
#   Per (writer, reader) pair at distance d → (d+1) instrs.
#   A builder of W writers × R readers × (d+1) instrs + ~4 init words.
#   Must be ≤ 512 ⇒ W*R*(d+1) ≤ 508.
#
# Distance 1 (2 instrs/pair) — allow up to ~250 pairs.
# Distance 2 (3 instrs/pair) — ~165 pairs.
# Distance 3 (4 instrs/pair) — ~125 pairs.
#
# To stay safely under the cap we split writers AND (at d≥2) readers.

_RAW_WRITER_SLICES_SMALL = {
    "r_1of2":     R_OPS[:5],
    "r_2of2":     R_OPS[5:],
    "i_alu_1of2": I_ALU_OPS[:3],
    "i_alu_2of2": I_ALU_OPS[3:],
    "shift_imm":  SHIFT_IMM_OPS,
    "load":       LOAD_OPS,
    "csr":        CSR_OPS,
}

_READER_HALVES = {
    "rA": READERS[:15],
    "rB": READERS[15:],
}


def _make_raw_dist_builder_rw(distance, writer_slice_name, writer_slice,
                              reader_slice_name, reader_slice):
    def _builder(rng):
        stream = []
        _init_mem_base(stream, reg=2)
        for w in writer_slice:
            for r in reader_slice:
                Rprod = 5
                _emit_producer(stream, w, Rprod)
                for _ in range(distance - 1):
                    stream.append(_filler())
                _emit_consumer(stream, r, Rprod)
        return stream
    _builder.__name__ = (
        f"build_raw_dist_d{distance}_{writer_slice_name}_{reader_slice_name}_stream"
    )
    _builder.__doc__ = (
        f"RAW_DIST at distance {distance} for writers in "
        f"'{writer_slice_name}' × readers in '{reader_slice_name}'. "
        f"Each pair: producer (writes x5) → {distance-1} filler(s) → "
        f"consumer (reads x5). "
        f"Random stimuli rarely form specific (writer, reader, distance) "
        f"patterns with the required register-name match."
    )
    return _builder


_RAW_DIST_BUILDERS = []
for d in (1, 2, 3):
    # At d=1 the per-pair cost is 2; even the biggest writer slice (5) ×
    # 30 readers = 300 instrs — too big. So always split readers in half.
    for wname, ws in _RAW_WRITER_SLICES_SMALL.items():
        for rname, rs in _READER_HALVES.items():
            _RAW_DIST_BUILDERS.append(
                _make_raw_dist_builder_rw(d, wname, ws, rname, rs))
# Attach to module scope so inspect / tests can find them by name.
for _b in _RAW_DIST_BUILDERS:
    globals()[_b.__name__] = _b


# =============================================================================
# K3_CHAIN — 10 R_outer × 10 R_mid × 30 R_tail = 3,000 bins.
#
# Three CONSECUTIVE retirements:
#     t-2: R_outer, writes rd_o != x0
#     t-1: R_mid,   reads rd_o, writes rd_m != x0
#     t:   R_tail,  reads rd_m  (any reader op)
#
# Strategy: fix rd_o = x6, rd_m = x7. We iterate op_o, op_m, op_tail.
# =============================================================================

def _emit_k3_triple(stream, op_o, op_m, op_tail):
    """Emit one K3_CHAIN triple as three consecutive retirements."""
    Ro, Rm = 6, 7
    # outer: writes Ro from x1,x2
    stream.append(op_o(rd=Ro, rs1=1, rs2=2))
    # mid: R-type that reads Ro (as rs1) and writes Rm
    stream.append(op_m(rd=Rm, rs1=Ro, rs2=3))
    # tail: reader that reads Rm
    if _is_r(op_tail):
        stream.append(op_tail(rd=10, rs1=Rm, rs2=11))
    elif _is_i_alu(op_tail):
        stream.append(op_tail(rd=10, rs1=Rm, imm=0))
    elif _is_shift(op_tail):
        stream.append(op_tail(rd=10, rs1=Rm, shamt=0))
    elif _is_load(op_tail):
        # EA = Rm + 0 → essentially a random address, retires regardless.
        stream.append(op_tail(rd=10, rs1=Rm, imm=0))
    elif _is_store(op_tail):
        # base = Rm; data = x11
        stream.append(op_tail(rs2=11, rs1=Rm, imm=0))
    elif _is_csr(op_tail):
        stream.append(op_tail(rd=10, rs1=Rm))
    else:
        raise ValueError(f"unknown tail op {op_tail}")


def _make_k3_builder(outer_idx):
    """One builder per outer-op (10 total) → each emits
    1 × 10 × 30 = 300 triples × 3 instructions = 900 instructions,
    which exceeds the 512-cap. Split further by splitting R_tail into
    two halves of 15.
    """
    raise NotImplementedError  # not used; we split differently below


def _make_k3_builder_split(outer_idx, tail_slice_name, tail_slice):
    """A K3_CHAIN builder for one outer op × all 10 mids × a *subset* of
    tails. Each triple is 3 instrs; 1*10*len(tail_slice)*3 ≤ 512 keeps
    len(tail_slice) ≤ 17. We use 15.
    """
    op_o = R_OPS[outer_idx]

    def _builder(rng):
        stream = []
        _init_mem_base(stream, reg=2)
        for op_m in R_OPS:          # 10
            for op_tail in tail_slice:
                _emit_k3_triple(stream, op_o, op_m, op_tail)
        return stream

    _builder.__name__ = (
        f"build_k3_chain_outer{outer_idx}_{tail_slice_name}_stream"
    )
    _builder.__doc__ = (
        f"K3_CHAIN with outer op fixed to {op_o.__name__} × all 10 R-type "
        f"mids × tail-slice '{tail_slice_name}' "
        f"({len(tail_slice)} tail ops). Emits three consecutive "
        f"retirements per triple: outer writes x6 ; mid reads x6 writes "
        f"x7 ; tail reads x7. Covers "
        f"{10 * len(tail_slice)} of the 3,000 K3_CHAIN bins.\n\n"
        f"Random stimuli rarely form consecutive producer→propagator→"
        f"consumer chains with matching register names."
    )
    return _builder


# Split tails into two halves.
_K3_TAIL_SLICES = {
    "tailA": READERS[:15],      # 15 tail readers
    "tailB": READERS[15:],      # 15 tail readers
}

_K3_BUILDERS = []
for _outer_i in range(10):
    for _slice_name, _slice in _K3_TAIL_SLICES.items():
        _b = _make_k3_builder_split(_outer_i, _slice_name, _slice)
        _K3_BUILDERS.append(_b)
        globals()[_b.__name__] = _b


# =============================================================================
# Operand-value corners — extra variety to light up non-bin coverage and to
# diversify the RVFI operand values on SEEN retirements. These supplement
# the above bin-targeted builders.
# =============================================================================

_CORNER_VALS = [
    0x00000000,
    0x00000001,
    0xFFFFFFFF,
    0x7FFFFFFF,
    0x80000000,
    0x0000FFFF,
    0xFFFF0000,
    0x55555555,
    0xAAAAAAAA,
]


def build_operand_corners_stream(rng):
    """Load each 32-bit corner value into a working register and run a
    few R-type / I-ALU / shift ops using it as rs1 or rs2.

    Targets: no specific bin category, but exercises the datapath on
    sign/zero/all-ones/boundary values — improves the probability of
    hitting SEEN + ZERO_SRC/SAME_SRC permutations with interesting data,
    and gives RAW_DIST/K3_CHAIN consumer reads interesting operand
    values when they eventually sample.
    """
    stream = []
    _init_mem_base(stream, reg=2)
    for val in _CORNER_VALS:
        _load_imm(stream, 8, val)     # x8 = corner value
        # R-type users of x8
        stream.append(ADD (rd=9, rs1=8, rs2=1))
        stream.append(SUB (rd=9, rs1=8, rs2=1))
        stream.append(SLT (rd=9, rs1=8, rs2=1))
        stream.append(SLTU(rd=9, rs1=8, rs2=1))
        stream.append(XOR (rd=9, rs1=8, rs2=8))
        stream.append(AND (rd=9, rs1=8, rs2=8))
        stream.append(OR  (rd=9, rs1=8, rs2=8))
        # Shifts across the full 0..31 shamt range (hit shift corner bins)
        for sh in (0, 1, 7, 8, 15, 16, 30, 31):
            stream.append(SLLI(rd=9, rs1=8, shamt=sh))
            stream.append(SRLI(rd=9, rs1=8, shamt=sh))
            stream.append(SRAI(rd=9, rs1=8, shamt=sh))
    return stream


# =============================================================================
# NEW_BUILDERS list.
# =============================================================================

NEW_BUILDERS = [
    build_seen_all30_stream,
    build_zero_dst_all_writers_stream,
    build_zero_src_all_readers_stream,
    build_same_src_all_two_src_stream,
    build_imm_buckets_i_alu_stream,
    build_imm_buckets_shifts_stream,
    build_imm_buckets_loads_stream,
    build_imm_buckets_stores_stream,
    build_operand_corners_stream,
] + _RAW_DIST_BUILDERS + _K3_BUILDERS
