"""LLM-CRT run A_run1, pass 1 (condition A): written by the synthesis agent, reviewed and fixed in place by the review agent."""
from ..isa import ADD, SUB, SLL, SLT, SLTU, XOR, SRL, SRA, OR, AND, SB, SH, SW, JAL, ADDI, NOP, R_PLAN, S_PLAN  # noqa: F401


# --- helpers ----------------------------------------------------------------

# R-type names in a stable order (matches R_PLAN but we re-list to pin order).
_R_NAMES = ["ADD", "SUB", "SLL", "SLT", "SLTU", "XOR", "SRL", "SRA", "OR", "AND"]
_S_NAMES = ["SB", "SH", "SW"]


def _rand_nz(rng):
    """Return a random non-zero register index in 1..15 (prelude initialized)."""
    return rng.randint(1, 15)


# --- builders ---------------------------------------------------------------


def build_rtype_zero_dst_stream(rng):
    """Target `<R>.SEEN` + `<R>.ZERO_DST` for all 10 R-type instructions.

    For every R-type op we emit a single instance with rd=x0 and random
    non-zero sources. Setting rd=x0 is a 1/32 event under uniform random
    stimuli AND the instruction still appears to retire normally (writeback
    discards into x0), so pure CRT rarely hits ZERO_DST — this builder makes
    it deterministic for every R-type. SEEN is also lit as a free side effect.
    """
    stream = []
    for name in _R_NAMES:
        op = R_PLAN[name]
        rs1 = _rand_nz(rng)
        rs2 = _rand_nz(rng)
        # ensure rs1 != rs2 so SAME_SRC isn't accidentally what we hit here
        while rs2 == rs1:
            rs2 = _rand_nz(rng)
        stream.append(op(rd=0, rs1=rs1, rs2=rs2))
    return stream


def build_rtype_zero_src_stream(rng):
    """Target `<R>.ZERO_SRC` for all 10 R-type instructions.

    For every R-type op we emit two instances: one with rs1=x0 (random rs2)
    and one with rs2=x0 (random rs1). rd is a random non-zero register so the
    write is observable but we don't accidentally cover ZERO_DST here. Uniform
    CRT would need rs1 or rs2 to equal 0 (~2/32 chance per op per sample);
    across 10 ops the chance of covering every one in a short run is low.
    """
    stream = []
    for name in _R_NAMES:
        op = R_PLAN[name]
        rd_a = _rand_nz(rng)
        rd_b = _rand_nz(rng)
        rs2_a = _rand_nz(rng)
        rs1_b = _rand_nz(rng)
        stream.append(op(rd=rd_a, rs1=0, rs2=rs2_a))
        stream.append(op(rd=rd_b, rs1=rs1_b, rs2=0))
    return stream


def build_rtype_same_src_stream(rng):
    """Target `<R>.SAME_SRC` for all 10 R-type instructions.

    For every R-type op we emit one instance with rs1==rs2 drawn from the
    non-zero registers (to avoid double-counting ZERO_SRC here). SAME_SRC is a
    1/32 event under uniform random so pure CRT rarely hits it for all 10 ops.
    """
    stream = []
    for name in _R_NAMES:
        op = R_PLAN[name]
        rs = _rand_nz(rng)
        rd = _rand_nz(rng)
        stream.append(op(rd=rd, rs1=rs, rs2=rs))
    return stream


def build_store_coverage_stream(rng):
    """Target `<S>.SEEN`, `<S>.ZERO_SRC`, `<S>.SAME_SRC` for SB, SH, SW.

    Stores have no rd (so no ZERO_DST bin). For each of SB, SH, SW we emit:
      - a plain store with random non-zero rs1/rs2 and small imm (SEEN).
      - a store with rs1=x0 (base register x0 -> ZERO_SRC) and random rs2.
      - a store with rs2=x0 (data register x0 -> ZERO_SRC) and random rs1.
      - a store with rs1==rs2 (SAME_SRC).

    The stores target memory addresses computed from x0 or whatever base the
    prelude put in rs1 (x1..x15 = {1..15}). Those addresses are low scalars so
    the write may or may not succeed in simulation, but the key is that the
    instruction decodes and RETIRES, which is what RVFI samples. Pure CRT would
    rarely hit ZERO_SRC and SAME_SRC on all three store widths.
    """
    stream = []
    for name in _S_NAMES:
        op = S_PLAN[name]
        # SEEN: plain
        rs1 = _rand_nz(rng)
        rs2 = _rand_nz(rng)
        stream.append(op(rs2=rs2, rs1=rs1, imm=0))
        # ZERO_SRC via rs1 = x0
        stream.append(op(rs2=_rand_nz(rng), rs1=0, imm=0))
        # ZERO_SRC via rs2 = x0
        stream.append(op(rs2=0, rs1=_rand_nz(rng), imm=0))
        # SAME_SRC: rs1 == rs2 (non-zero)
        rs = _rand_nz(rng)
        stream.append(op(rs2=rs, rs1=rs, imm=0))
    return stream


def build_jal_coverage_stream(rng):
    """Target `JAL.SEEN`, `JAL.ZERO_DST`, `JAL.BR_FORWARDS`, `JAL.BR_BACKWARDS`.

    Backward JAL is dangerous: naive emission creates an infinite loop. Random
    stimuli virtually never pick a backward offset that happens to also have a
    valid escape path, so BR_BACKWARDS is a hard-to-reach bin.

    Layout (word indices relative to the builder start, each word = 4 bytes):

        [0] JAL x0, +8    -> jumps past the backward JAL on first visit.
                             Also exercises BR_FORWARDS, ZERO_DST (rd=x0).
        [1] JAL x0, +8    -> ENTRY: this is the backward JAL's target. On
                             entry it jumps forward out of the loop. Also
                             BR_FORWARDS + ZERO_DST.
        [2] JAL x0, -4    -> backward JAL to word [1] (ENTRY). Covers
                             BR_BACKWARDS + ZERO_DST. Only executed via the
                             initial fall-through from [0]... wait no, [0]
                             jumps over [1] AND [2] directly to [3], so this
                             word is skipped on first execution.

    Actually the flow is:
      PC=0  (word[0]): JAL +8 -> jumps to PC=8 (word[2]).
      PC=8  (word[2]): JAL -4 -> jumps to PC=4 (word[1]).
      PC=4  (word[1]): JAL +8 -> jumps to PC=12 (word[3], the landing NOP).
      PC=12 (word[3]): NOP, fall-through to next builder.

    All three JALs retire. BR_FORWARDS fires on word[0] and word[1].
    BR_BACKWARDS fires on word[2]. All use rd=x0 -> JAL.ZERO_DST fires.
    JAL.SEEN fires on first retirement.

    We also emit a JAL with a non-zero rd and a tiny forward offset to make
    sure JAL with rd!=x0 is retired (relevant for the RAW_HAZARD matrix in a
    different builder). To keep this builder's control flow clean, this extra
    JAL is placed AFTER the landing pad with offset=+4 (jumps to immediate
    next word, which is just a NOP), and uses rd that the harness-prelude
    already overwrites downstream.

    Order emitted (indices):
        0: JAL x0, +8                 -- BR_FORWARDS, ZERO_DST
        1: JAL x0, +8                 -- BR_FORWARDS, ZERO_DST (ENTRY)
        2: JAL x0, -4                 -- BR_BACKWARDS, ZERO_DST
        3: NOP                        -- landing pad for word[1]'s jump
        4: JAL x5, +4                 -- extra: JAL with rd!=x0, forward
        5: NOP                        -- target of word[4]
    """
    # rng is only used symbolically here; the control-flow offsets must be
    # exact and are therefore not randomised. We still consume one rng value
    # so builders downstream see a different stream for different seeds.
    _ = rng.random()
    stream = [
        JAL(rd=0, offset=8),    # word[0]: forward over the backward JAL
        JAL(rd=0, offset=8),    # word[1]: ENTRY, forward out of loop
        JAL(rd=0, offset=-4),   # word[2]: backward to word[1]
        NOP(),                   # word[3]: landing pad for word[1]
        JAL(rd=5, offset=4),    # word[4]: JAL with rd!=x0, forward
        NOP(),                   # word[5]: landing pad for word[4]
    ]
    return stream


def build_raw_hazard_matrix_stream(rng):
    """Target the full 143-bin `RAW_HAZARD` cross-product.

    RAW_HAZARD is a (producer, consumer) cross:
      - 11 producers: ADD..AND (10) + JAL.
      - 13 consumers: ADD..AND (10) + SB, SH, SW (3).
      - 11 * 13 = 143 bins.

    The hazard fires when the consumer reads (rs1 or rs2) a register that was
    written by the IMMEDIATELY PREVIOUSLY RETIRED instruction. We emit each
    pair as [producer, consumer] back-to-back and insert a NOP between pairs
    so the next pair's producer is not preceded by the previous pair's
    consumer (NOP writes x0 and is not in the plan, so NOP->producer_B does
    not count as an unintended plan pair).

    Random stimulus almost never achieves a specific (producer, consumer)
    back-to-back pair because the harness inserts 2 NOPs between builders
    (breaking inter-builder hazards) and random instruction choice has ~1/14
    chance per slot of each specific instruction, times a specific register
    match -- the full 143 matrix is combinatorially unreachable in a short
    random run.

    Per-pair layout (3 words):
        producer: writes rd = REG_P (chosen non-zero, != base register the
                  consumer uses for the "other" source).
        consumer: reads rs1 = REG_P (for R-type) or uses rs1 = REG_P or
                  rs2 = REG_P (for stores).
        NOP:      separates this pair from the next producer.

    JAL producer: we use JAL(rd=REG_P, offset=+4) so that after the JAL
    retires, control transfers to the very next word (which is the consumer),
    exactly as if we had fallen through. This guarantees back-to-back
    retirement of (JAL, consumer).

    IMPORTANT: for the JAL producer, overwriting a register that was part of
    the prelude is fine -- we only need the hazard pair sample. We route the
    JAL's rd through REG_P so the consumer's source register matches.

    Total length: 143 * 3 = 429 words. Below the 512 cap.
    """
    REG_P = 5   # producer destination = consumer source
    REG_OTHER = 6  # other source for the consumer (non-zero, != REG_P)
    stream = []

    # consumer list: (name, is_rtype)
    consumers = [(n, True) for n in _R_NAMES] + [(n, False) for n in _S_NAMES]
    # producer list: (name_or_"JAL", is_rtype)
    producers = [(n, True) for n in _R_NAMES] + [("JAL", False)]

    for p_name, p_is_r in producers:
        for c_name, c_is_r in consumers:
            # Producer: writes REG_P.
            if p_is_r:
                p_op = R_PLAN[p_name]
                # use two random-ish non-zero sources (consume rng)
                prs1 = _rand_nz(rng)
                prs2 = _rand_nz(rng)
                stream.append(p_op(rd=REG_P, rs1=prs1, rs2=prs2))
            else:
                # JAL producer with rd=REG_P, offset=+4 (jump to next word).
                stream.append(JAL(rd=REG_P, offset=4))

            # Consumer: must read REG_P as rs1 or rs2.
            if c_is_r:
                c_op = R_PLAN[c_name]
                # Alternate which source is REG_P via rng for variety.
                if rng.randint(0, 1) == 0:
                    stream.append(c_op(rd=REG_OTHER, rs1=REG_P, rs2=REG_OTHER))
                else:
                    stream.append(c_op(rd=REG_OTHER, rs1=REG_OTHER, rs2=REG_P))
            else:
                # Store consumer: rs1 is base address, rs2 is data.
                c_op = S_PLAN[c_name]
                # Alternate which of rs1/rs2 is REG_P.
                if rng.randint(0, 1) == 0:
                    stream.append(c_op(rs2=REG_OTHER, rs1=REG_P, imm=0))
                else:
                    stream.append(c_op(rs2=REG_P, rs1=REG_OTHER, imm=0))

            # Separator NOP so the next pair's producer is not preceded by
            # this pair's consumer (which could create an unintended hazard
            # pair; NOP writes x0 and is not in the plan).
            stream.append(NOP())

    return stream


NEW_BUILDERS = [
    build_rtype_zero_dst_stream,
    build_rtype_zero_src_stream,
    build_rtype_same_src_stream,
    build_store_coverage_stream,
    build_jal_coverage_stream,
    build_raw_hazard_matrix_stream,
]
