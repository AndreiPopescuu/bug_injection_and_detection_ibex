"""LLM-CRT run A_run3, pass 1 (condition A): written by the synthesis agent, reviewed and fixed in place by the review agent."""
from ..isa import ADD, SUB, SLL, SLT, SLTU, XOR, SRL, SRA, OR, AND, SB, SH, SW, JAL, ADDI, NOP, R_PLAN, S_PLAN  # noqa: F401


# ─── Private helpers ──────────────────────────────────────────────────────────

# Ordered lists so we can iterate deterministically.
_R_NAMES = ["ADD", "SUB", "SLL", "SLT", "SLTU", "XOR", "SRL", "SRA", "OR", "AND"]
_S_NAMES = ["SB", "SH", "SW"]

# All 11 "producer" instructions (write a destination register).
_PRODUCERS = _R_NAMES + ["JAL"]
# All 13 "consumer" instructions (read source register(s)).
_CONSUMERS = _R_NAMES + _S_NAMES


def _emit_producer(name, rd, rs1, rs2):
    """Emit a producer instruction that writes `rd`. For JAL we use offset=4
    so execution falls through to the immediately following instruction
    (jump-to-next-pc) — this preserves the back-to-back retirement needed
    for RAW_HAZARD while still letting JAL write rd=PC+4.
    """
    if name == "JAL":
        return JAL(rd=rd, offset=4)
    return R_PLAN[name](rd=rd, rs1=rs1, rs2=rs2)


def _emit_consumer(name, rd, rs1, rs2):
    """Emit a consumer. For stores we must use `rs1` as the memory base and
    `rs2` as the data; the caller is expected to pass rs1=0 (so the base
    address is 0 — a safe sentinel) when the hazard-register must be the
    data register (rs2). When the hazard-register must be the base, we
    accept whatever address it computes to; a small imm is used to keep
    the resulting address inside the data memory window.
    """
    if name in _R_NAMES:
        return R_PLAN[name](rd=rd, rs1=rs1, rs2=rs2)
    # Store: use imm=0 (aligned). Byte-level unaligned coverage is handled
    # elsewhere.
    return S_PLAN[name](rs2=rs2, rs1=rs1, imm=0)


# ─── Builders ─────────────────────────────────────────────────────────────────

def build_seen_all_14_stream(rng):
    """Target `*.SEEN` for every one of the 14 plan instructions.

    Each instruction is emitted at least once with register operands drawn
    out of x1..x15 (which the prelude has initialized to {1..15}). SEEN is
    the easiest bin — this builder guarantees it fires for ADD, SUB, SLL,
    SLT, SLTU, XOR, SRL, SRA, OR, AND, SB, SH, SW, and JAL regardless of
    seed. Random stimuli that pick instructions uniformly would hit SEEN
    for every op quickly, but we make it deterministic here so pass-1
    coverage never regresses. JAL uses rd=x0 and offset=+8 (forward past
    the WFI-neighbor is impossible mid-builder, so +8 lands on the next
    retiring instruction and is harmless).
    """
    stream = []
    # R-type: one random rd/rs1/rs2 per op from x1..x15.
    for name in _R_NAMES:
        rd = rng.randint(1, 15)
        rs1 = rng.randint(1, 15)
        rs2 = rng.randint(1, 15)
        stream.append(R_PLAN[name](rd=rd, rs1=rs1, rs2=rs2))
    # S-type: use x0 as base (address 0) with imm=0; rs2 holds data.
    for name in _S_NAMES:
        rs2 = rng.randint(1, 15)
        stream.append(S_PLAN[name](rs2=rs2, rs1=0, imm=0))
    # JAL forward to the next instruction so execution falls through.
    stream.append(JAL(rd=0, offset=4))
    return stream


def build_zero_dst_r_and_jal_stream(rng):
    """Target `*.ZERO_DST` for the 10 R-type ops and `JAL.ZERO_DST`.

    An instruction fires ZERO_DST when rd=x0. For R-types this is a
    silent write (x0 is hardwired to zero) but the decoder still reports
    the opcode, so the monitor samples ZERO_DST. For JAL, rd=x0 is a
    "jump without link" — the return address is discarded. Random
    stimulus that samples rd uniformly from 0..31 only picks x0 1/32 of
    the time per op, so under few retirements this bin is often missed
    for several ops. We force rd=x0 for each of the 11 producers once.
    """
    stream = []
    for name in _R_NAMES:
        rs1 = rng.randint(1, 15)
        rs2 = rng.randint(1, 15)
        stream.append(R_PLAN[name](rd=0, rs1=rs1, rs2=rs2))
    # JAL rd=x0, forward offset.
    stream.append(JAL(rd=0, offset=4))
    return stream


def build_zero_src_stream(rng):
    """Target `*.ZERO_SRC` for 10 R-type + 3 S-type = 13 bins.

    ZERO_SRC fires when rs1==x0 OR rs2==x0. For R-type we alternate which
    source is x0 so both decode paths are exercised. For stores, rs1 is
    the base address: using x0 means address 0, which is a safe sentinel
    in the Ibex sim memory model. rs2 is the data register; we also emit
    a second variant where rs2=x0 (data is zero) with a non-zero base
    register (we re-initialize x6 to a small value first so the base is
    predictable and the store lands inside data memory). Random stimuli
    rarely pick x0 for both sources — ~1/16 per source position when
    uniform in 0..15 — so systematic coverage is needed.
    """
    stream = []
    # R-type with rs1=x0.
    for name in _R_NAMES:
        rd = rng.randint(1, 15)
        rs2 = rng.randint(1, 15)
        stream.append(R_PLAN[name](rd=rd, rs1=0, rs2=rs2))
    # R-type with rs2=x0.
    for name in _R_NAMES:
        rd = rng.randint(1, 15)
        rs1 = rng.randint(1, 15)
        stream.append(R_PLAN[name](rd=rd, rs1=rs1, rs2=0))
    # S-type variant A: rs1=x0 (base is zero, data non-zero).
    for name in _S_NAMES:
        rs2 = rng.randint(1, 15)
        stream.append(S_PLAN[name](rs2=rs2, rs1=0, imm=0))
    # S-type variant B: rs2=x0 (data is zero) with rs1=x0 as a safe base.
    for name in _S_NAMES:
        stream.append(S_PLAN[name](rs2=0, rs1=0, imm=0))
    return stream


def build_same_src_stream(rng):
    """Target `*.SAME_SRC` for 10 R-type + 3 S-type = 13 bins.

    SAME_SRC fires when rs1==rs2. For R-types this is e.g. `SUB rd, x5, x5`
    (which always writes 0) — the ALU still decodes normally. For stores,
    rs1==rs2 means the same register is used for the base address AND the
    data value. We pick a random single register in x1..x15 (prelude
    initialized to a small positive value, but it may have been clobbered
    by earlier builders — ADDI it back to a known value first so the
    resulting store address is predictable). Random stimuli pick rs1==rs2
    with probability 1/16 per op, so systematic coverage is useful.
    """
    stream = []
    # Re-initialize a scratch register x8 to a small positive value so any
    # subsequent store that uses it as its own base lands in a predictable
    # low-address region. x8 was prelude-set to 8 but earlier builders may
    # have clobbered it.
    stream.append(ADDI(rd=8, rs1=0, imm=8))
    for name in _R_NAMES:
        rd = rng.randint(1, 15)
        r = rng.randint(1, 15)
        stream.append(R_PLAN[name](rd=rd, rs1=r, rs2=r))
    # Stores: use x0 for both so address and data are both zero (safest).
    for name in _S_NAMES:
        stream.append(S_PLAN[name](rs2=0, rs1=0, imm=0))
    return stream


def build_jal_br_forwards_stream(rng):
    """Target `JAL.BR_FORWARDS`.

    JAL with a positive byte offset. We emit a JAL that jumps forward by
    8 bytes (skipping one NOP that we also emit), landing on a second
    NOP that continues linear execution. Random stimuli that pick JAL
    offsets uniformly in both directions would hit this quickly, but we
    make it deterministic. Also folds in `JAL.SEEN`.
    """
    # JAL rd, +8 ; NOP (skipped) ; NOP (landing)
    rd = rng.randint(1, 15)
    return [JAL(rd=rd, offset=8), NOP(), NOP()]


def build_jal_br_backwards_stream(rng):
    """Target `JAL.BR_BACKWARDS`.

    A naive backward JAL to a previously-emitted instruction creates an
    infinite loop. The safe pattern is: forward-jump over a trampoline,
    land, then backward-jump to the trampoline, which contains a forward
    JAL that escapes past the backward JAL. Layout (offsets in bytes
    relative to this builder's base):
        0:  JAL x0, +12          ; skip the trampoline on first entry
        4:  JAL x0, +12           ; trampoline: forward-escape past the back-jal
        8:  NOP                   ; (padding so trampoline-forward lands cleanly)
       12:  JAL rd, -8           ; BACKWARD JAL to the trampoline at offset 4
       16:  NOP                   ; (landing from the trampoline escape)
    Execution order: PC=0 jumps to 12; PC=12 (back-jal) jumps to 4;
    PC=4 jumps forward to 16; PC=16 falls through to the next builder.
    This retires: forward-JAL(0), backward-JAL(12), forward-JAL(4). So
    BR_FORWARDS is also lit; BR_BACKWARDS fires on the retirement of
    the instruction at offset 12. Random stimuli almost never construct
    a safe backward JAL — this bin requires deliberate scaffolding.
    """
    rd = rng.randint(0, 15)
    return [
        JAL(rd=0, offset=12),   # offset 0: skip trampoline
        JAL(rd=0, offset=12),   # offset 4: trampoline (forward escape to 16)
        NOP(),                   # offset 8
        JAL(rd=rd, offset=-8),  # offset 12: BACKWARD JAL to offset 4
        NOP(),                   # offset 16: landing from trampoline
    ]


def build_raw_hazard_matrix_stream(rng):
    """Target `RAW_HAZARD.<producer>_<consumer>` — all 11 x 13 = 143 bins.

    RAW_HAZARD fires when a consumer reads a register whose MOST RECENT
    retired producer wrote it. The invariant is "immediately previous
    retired" — any instruction between (including a NOP) breaks it. The
    harness inserts 2 NOPs between builders, so each (producer, consumer)
    pair MUST sit back-to-back inside this single builder.

    Pattern per pair:
        producer: writes rd=r (r != 0, in x1..x15)
        consumer: reads r as rs1 (for R-type) or as rs2 (for stores — so
                  rs1 can stay x0 as a safe address base; this avoids
                  computing memory addresses from arbitrary ALU results).
    For JAL as producer we use offset=4 (jump to next PC) so the consumer
    retires immediately after. Random stimuli almost never generate 143
    specific back-to-back ordered pairs; this builder is the only way to
    cover this cross-product reliably.

    Note on `_PRODUCERS` × `_CONSUMERS`: this emits 11 x 13 x 2 = 286
    instructions, well inside the 512-word per-builder limit. Each pair
    is independent — the pair for (P_i, C_j) emits P_i then C_j; the C_j
    retirement from (P_{i-1}, C_{j'}) does NOT act as the producer for
    the NEXT pair's consumer, because the next pair's own producer runs
    first and overwrites the "most recent writer" of r. We also deliberately
    pick a fresh target register r per pair so unrelated earlier writes
    don't poison the hazard chain.
    """
    stream = []
    for prod in _PRODUCERS:
        for cons in _CONSUMERS:
            r = rng.randint(1, 15)  # hazard register, non-zero
            # Producer writes r.
            prod_rs1 = rng.randint(1, 15)
            prod_rs2 = rng.randint(1, 15)
            stream.append(_emit_producer(prod, rd=r, rs1=prod_rs1, rs2=prod_rs2))
            # Consumer reads r.
            if cons in _R_NAMES:
                # Half the time r is rs1, half the time rs2.
                if rng.randint(0, 1) == 0:
                    stream.append(R_PLAN[cons](rd=rng.randint(1, 15), rs1=r, rs2=rng.randint(1, 15)))
                else:
                    stream.append(R_PLAN[cons](rd=rng.randint(1, 15), rs1=rng.randint(1, 15), rs2=r))
            else:
                # Store consumer: put the hazard register in rs2 (data)
                # and keep rs1=x0 as the base to avoid wild stores.
                stream.append(S_PLAN[cons](rs2=r, rs1=0, imm=0))
    return stream


def build_r_type_corner_values_stream(rng):
    """Target the 10 R-type SEEN bins again, but with CORNER datapath values
    rather than small prelude values.

    The prelude gives x1..x15 small positive values {1..15}. R-type behavior
    (especially SLT/SLTU sign-sensitive comparisons, SRA sign-extension,
    SUB underflow, SLL/SRL/SRA shift amounts across 0..31) depends on
    whether operands sit at zero, ±1, max/min signed, max unsigned, or
    near sign-bit boundaries. Random stimuli that only draw register
    indices from a small pool exercise one slice of the datapath; this
    builder materializes a handful of corner values into scratch registers
    and feeds them to every R-type op. It does not add NEW plan bins
    directly — SEEN is already covered — but it stresses operand-dependent
    micro-behaviors that may be sampled by other cross-cover bins in
    future passes (and matches the brief's explicit "operand variety is
    also useful within OTHER builders" guidance).

    Scratch registers (re-initialized here, not relied on from prelude):
      x16 = 0            (via ADDI x16, x0, 0)
      x17 = -1 = 0xFFFFFFFF  (via ADDI x17, x0, -1)
      x18 = 1             (via ADDI x18, x0, 1)
      x19 = 0x7FF         (via ADDI x19, x0, 0x7FF)  — largest positive imm
      x20 = 1 << 31 = 0x80000000  (constructed: ADDI x20, x0, 1; SLL x20, x20, x21 where x21=31)
      x21 = 31            (via ADDI x21, x0, 31)
      x22 = -2048 = 0xFFFFF800 (via ADDI x22, x0, -2048) — smallest negative imm

    Then we iterate the 10 R-type ops across pairs of these corner-register
    operands. 7 corner regs x 10 ops = 70 instructions in the main loop,
    plus ~10 setup instructions — well inside the 512 limit.
    """
    stream = []
    # Materialize corner values.
    stream.append(ADDI(rd=16, rs1=0, imm=0))        # x16 = 0
    stream.append(ADDI(rd=17, rs1=0, imm=-1))       # x17 = 0xFFFFFFFF (all-ones)
    stream.append(ADDI(rd=18, rs1=0, imm=1))        # x18 = 1
    stream.append(ADDI(rd=19, rs1=0, imm=0x7FF))    # x19 = 0x7FF (max pos ADDI imm)
    stream.append(ADDI(rd=21, rs1=0, imm=31))       # x21 = 31 (max shift amount)
    stream.append(ADDI(rd=20, rs1=0, imm=1))        # x20 = 1  then
    stream.append(SLL(rd=20, rs1=20, rs2=21))       # x20 <<= 31  -> 0x80000000 (min signed)
    stream.append(ADDI(rd=22, rs1=0, imm=-2048))    # x22 = 0xFFFFF800 (large negative)

    corner_regs = [16, 17, 18, 19, 20, 21, 22]
    # For each R-type op, run it across a shuffled subset of corner-pair
    # operands so each op sees multiple sign-bit / overflow / shift-amount
    # configurations.
    for name in _R_NAMES:
        pairs = [(a, b) for a in corner_regs for b in corner_regs]
        rng.shuffle(pairs)
        # Take 10 pairs per op (70 instr for the whole loop — 10 ops * 10 = 100).
        for (a, b) in pairs[:10]:
            rd = rng.randint(1, 15)
            stream.append(R_PLAN[name](rd=rd, rs1=a, rs2=b))
    return stream


def build_store_offset_alignment_stream(rng):
    """Target the SEEN bins for SB/SH/SW with varied low-2-bit alignment.

    The brief notes "store addresses span both aligned and unaligned low
    2 bits (offsets 00, 01, 10, 11 from the base)". With rs1=x0 as the
    base, varying imm's low 2 bits across {0,1,2,3} covers all four
    byte-position-within-word cases. SW on an unaligned address traps on
    some RISC-V implementations; Ibex's data interface permits sub-word
    accesses for SB and SH but SW requires a word-aligned address — so
    we only use low-2-bits in {0,1,2,3} for SB, {0,2} for SH (half-word
    aligned), and {0} for SW (word aligned). This does not light NEW
    plan bins by itself but exercises the store datapath variety the
    brief recommends; subsequent passes may find it helps hit RAW_HAZARD
    cross-cover reruns where the hazard register is also a store base.
    """
    stream = []
    # Re-init x5 to a known small positive base so stores land in a
    # predictable region (x5 may have been clobbered by earlier builders).
    stream.append(ADDI(rd=5, rs1=0, imm=16))
    # SB with all 4 low-bit alignments.
    for off in [0, 1, 2, 3]:
        rs2 = rng.randint(1, 15)
        stream.append(SB(rs2=rs2, rs1=5, imm=off))
    # SH with half-word-aligned offsets.
    for off in [0, 2]:
        rs2 = rng.randint(1, 15)
        stream.append(SH(rs2=rs2, rs1=5, imm=off))
    # SW with word-aligned offsets (two of them, different absolute addresses).
    for off in [0, 4]:
        rs2 = rng.randint(1, 15)
        stream.append(SW(rs2=rs2, rs1=5, imm=off))
    return stream


NEW_BUILDERS = [
    build_seen_all_14_stream,
    build_zero_dst_r_and_jal_stream,
    build_zero_src_stream,
    build_same_src_stream,
    build_jal_br_forwards_stream,
    build_jal_br_backwards_stream,
    build_raw_hazard_matrix_stream,
    build_r_type_corner_values_stream,
    build_store_offset_alignment_stream,
]
