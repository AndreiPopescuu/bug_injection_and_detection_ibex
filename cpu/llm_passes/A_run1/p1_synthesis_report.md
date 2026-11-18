# A_run1 pass 1 — synthesis report

Condition A, pass 1. No simulation feedback yet; builders are designed from the
coverage-plan description and the `isa.py` encoder library alone.

## Coverage plan recap (196 bins)

- 14 `SEEN` (one per plan instruction).
- 11 `ZERO_DST` (10 R-type + JAL; stores have no rd).
- 13 `ZERO_SRC` (10 R-type + 3 S-type).
- 13 `SAME_SRC` (10 R-type + 3 S-type).
- 2 JAL branch-direction bins (`BR_FORWARDS`, `BR_BACKWARDS`).
- 143 `RAW_HAZARD` cross-product bins (11 producers × 13 consumers).

## Builders

### `build_rtype_zero_dst_stream`

Targets `<R>.SEEN` + `<R>.ZERO_DST` for all 10 R-type instructions
(ADD, SUB, SLL, SLT, SLTU, XOR, SRL, SRA, OR, AND).

- Emits one instance per R-type with `rd=x0`, random non-zero `rs1`, random
  non-zero `rs2`, with `rs1 != rs2` to avoid overlapping SAME_SRC in this
  dedicated builder (keeps the directed cover crisp per bin).
- Why random stimuli miss: `rd=x0` is a 1/32 event per instruction per sample;
  the probability of covering ZERO_DST on all 10 R-types in a short random run
  is ~ (1 - (31/32)^N)^10 which only approaches 1 after thousands of samples
  per op.

### `build_rtype_zero_src_stream`

Targets `<R>.ZERO_SRC` for all 10 R-type instructions.

- Emits two instances per op: one with `rs1=x0` and one with `rs2=x0`. `rd` is
  a random non-zero register so that we do not accidentally conflate ZERO_DST
  into this directed cover.
- Why random stimuli miss: `rs1=x0 or rs2=x0` is ~ 2/32 per op per sample;
  covering all 10 ops both via rs1 AND via rs2 (the encoder's bin is one
  union, but we exercise both halves to light up the single bin reliably)
  within a short random run is improbable.

### `build_rtype_same_src_stream`

Targets `<R>.SAME_SRC` for all 10 R-type instructions.

- Emits one instance per op with `rs1 == rs2`, drawn from `1..15` to avoid
  accidentally also lighting `ZERO_SRC` or `ZERO_DST` from this builder.
- Why random stimuli miss: `rs1==rs2` is a 1/32 event per op; same density
  argument as above.

### `build_store_coverage_stream`

Targets `SB.SEEN|ZERO_SRC|SAME_SRC`, `SH.SEEN|ZERO_SRC|SAME_SRC`,
`SW.SEEN|ZERO_SRC|SAME_SRC`.

- Stores have no `rd` so there is no `ZERO_DST` bin for them.
- Per store width: emit a plain store (SEEN), a store with `rs1=x0`
  (ZERO_SRC via base), a store with `rs2=x0` (ZERO_SRC via data), and a
  store with `rs1==rs2` (SAME_SRC).
- All stores use `imm=0`. The absolute address written is small (base is
  either `x0` = 0 or one of `x1..x15` initialised to `{1..15}` by the
  prelude), but RVFI samples RETIREMENT, not memory validity, so the
  coverpoints fire regardless of whether the write address is "real".
- Why random stimuli miss: ZERO_SRC and SAME_SRC are each ~1-2/32 per op;
  three ops multiply the sparsity.

### `build_jal_coverage_stream`

Targets `JAL.SEEN`, `JAL.ZERO_DST`, `JAL.BR_FORWARDS`, `JAL.BR_BACKWARDS`.

Six-word layout (word indices are 4-byte PC offsets from builder start):

```
word[0] PC=0:  JAL x0, +8    -- forward over the backward JAL
word[1] PC=4:  JAL x0, +8    -- ENTRY (target of the backward JAL); forward out
word[2] PC=8:  JAL x0, -4    -- backward JAL, target = PC=4 (ENTRY)
word[3] PC=12: NOP           -- landing for word[1]
word[4] PC=16: JAL x5, +4    -- extra: JAL with rd!=x0, small forward jump
word[5] PC=20: NOP           -- landing for word[4]
```

Execution trace:

1. PC=0 (word[0]) retires JAL +8 → next PC = 8. Covers BR_FORWARDS,
   ZERO_DST.
2. PC=8 (word[2]) retires JAL -4 → next PC = 4. Covers BR_BACKWARDS,
   ZERO_DST.
3. PC=4 (word[1]) retires JAL +8 → next PC = 12. Covers BR_FORWARDS,
   ZERO_DST.
4. PC=12 (word[3]) is the landing NOP, falls through.
5. PC=16 (word[4]) retires JAL x5, +4 → next PC = 20.
6. PC=20 (word[5]) NOP, falls through to the inter-builder NOPs.

Every JAL retires, no infinite loop, control exits cleanly. The extra JAL at
word[4] with `rd=x5` is a safety instance to make sure `JAL` with a non-zero
`rd` is retired at least once in the pass (useful for the RAW_HAZARD
producer-side bin for JAL, in case the matrix builder is dropped).

Why random stimuli miss: `BR_BACKWARDS` requires a backward JAL whose target
is also inside the program AND whose execution does not trap the CPU in an
infinite loop. A random JAL stream with uniform offsets has ~50% chance of a
backward offset but near-zero chance of also providing a safe escape, so a
naïve CRT either misses the bin or spins until timeout.

### `build_raw_hazard_matrix_stream`

Targets the full 143-bin `RAW_HAZARD` cross-product (11 producers × 13
consumers).

- Producers: 10 R-type + JAL. All write `rd = REG_P = x5`.
- Consumers: 10 R-type + 3 S-type. Each reads `REG_P` as `rs1` or `rs2`
  (chosen by `rng`), with the other source being `REG_OTHER = x6`.
- Each pair is emitted as `[producer, consumer, NOP]` (3 words). The trailing
  NOP ensures the next pair's producer is NOT immediately preceded by this
  pair's consumer. NOP = `ADDI x0, x0, 0` writes x0, is not in the plan, so
  the pair `(NOP, next_producer)` is not a plan hazard bin, and the pair
  `(this_consumer, NOP)` is likewise not counted.
- JAL producer special case: encoded as `JAL(rd=REG_P, offset=+4)` so the
  jump target is the immediately following word, which IS the consumer. The
  retired order is `[JAL, consumer]`, back-to-back — exactly what
  `RAW_HAZARD` requires. If JAL had `offset=0` it would spin; if `offset>4`
  it would skip the consumer.
- Length: 143 × 3 = 429 words, below the 512-word per-builder cap.
- Why random stimuli miss: the harness inserts 2 NOPs between builders, so
  no inter-builder hazard pair is possible — every one of the 143 bins must
  be lit intra-builder. Random instruction selection is ~1/14 per slot per
  instruction, and the register match (`rs1 or rs2 == producer.rd`) is a
  further ~2/32 condition. The joint probability of covering every one of
  the 143 (producer, consumer) pairs in short random runs is combinatorially
  negligible; this is the hardest group in the plan and we encode it
  explicitly.

## Bins that are NOT separately targeted (and why)

- Per-instruction `SEEN` for the 10 R-types and 3 stores: already lit by
  `build_rtype_zero_dst_stream`, `build_rtype_zero_src_stream`,
  `build_rtype_same_src_stream`, and `build_store_coverage_stream` as a free
  side effect — every plan instruction is retired at least once across the
  five directed builders.
- `JAL.SEEN` is lit by `build_jal_coverage_stream` and additionally by every
  JAL producer in the RAW_HAZARD matrix builder.

## Non-targetable / "cannot be hit" conclusions

None. All 196 plan bins are reachable with the given ISA subset and the
builders above cover all of them deterministically. No bin is excluded.

## Open questions for the review agent

- `RAW_HAZARD` depends on RVFI's definition of "immediately previously
  retired instruction". If Ibex's RVFI reports pipeline bubbles between the
  JAL and the next retiring instruction (e.g., when the JAL causes a
  mis-predict and the fetch pipeline is drained), the (JAL, consumer) pair
  may not actually be back-to-back in the retirement stream even though no
  NOP exists between them. If that is the case, the 11 JAL-producer rows
  (13 bins) in the hazard matrix might fail to light. We cannot verify
  without RTL access in condition A; this is noted as a known risk and the
  review agent should keep the current encoding (there is no safer
  alternative without RTL/testbench visibility).
- All store addresses are small scalars. If the testbench rejects unaligned
  or out-of-range stores by not retiring them, `SH`/`SW` SEEN/ZERO_SRC/
  SAME_SRC bins could silently miss. The `imm=0` choice with base registers
  carrying small values is the safest guess with the information available
  (RVFI samples at retirement, and the plan description says retirement is
  what matters).
