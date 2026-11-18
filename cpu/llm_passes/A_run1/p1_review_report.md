# A_run1 pass 1 — review report

Independent adversarial review of the draft generator at
`crt/llm_runs/A_run1_p1.py`. The draft submission was re-derived from the
coverage plan description and `crt/isa.py` only; no RTL or testbench visibility
was used.

## Methodology

- Verified every encoder call's argument order and widths against
  `crt/isa.py`. R-type uses `(rd, rs1, rs2)`; S-type uses `(rs2, rs1, imm)`;
  JAL uses `(rd, offset)`. All call sites in the draft use keyword arguments,
  which eliminates argument-order risk entirely.
- Traced control flow (word index -> PC -> next PC) for every JAL emission.
- Checked RAW_HAZARD adjacency inside each builder's returned list.
- Verified builders return `list[int]` of 1..512 32-bit words, are
  deterministic in `rng`, and do not import outside the fixed header.
- Checker (`llm_pipeline.py check --stage review`) returns `CHECK OK` with the
  reviewed snapshot `p1_review_snapshot.py`.

## Per-function verdicts

### `build_rtype_zero_dst_stream` — CONFIRMED

- Emits exactly 10 R-type instances, each with `rd=x0`, `rs1=_rand_nz(rng)`,
  `rs2=_rand_nz(rng)` and `rs1 != rs2`. Lights `<R>.ZERO_DST` and `<R>.SEEN`
  for every R-type op.
- Argument order verified: `op(rd=0, rs1=rs1, rs2=rs2)` uses keywords.
- No adjacent instance writes a register the next instance reads
  (`rd=0`, so no false RAW_HAZARD leak into the matrix bins).

### `build_rtype_zero_src_stream` — CONFIRMED

- Emits 20 R-type instances (two per op), half with `rs1=x0`, half with
  `rs2=x0`. `rd` is non-zero so ZERO_DST is not conflated.
- `<R>.ZERO_SRC` is a single bin per op defined as "rs1 OR rs2 = x0"; emitting
  both halves is redundant for the bin but harmless (no bug — the plan
  description makes this clear).
- Argument order via keywords; verified.

### `build_rtype_same_src_stream` — CONFIRMED

- Emits 10 R-type instances with `rs1 == rs2`, both non-zero, random `rd`.
  Lights `<R>.SAME_SRC` for every R-type.
- Keyword arg call; verified.

### `build_store_coverage_stream` — CONFIRMED

- For each of SB, SH, SW emits 4 instances: plain (SEEN), `rs1=x0`
  (ZERO_SRC via base), `rs2=x0` (ZERO_SRC via data), `rs1==rs2` (SAME_SRC).
- Argument order verified: `op(rs2=..., rs1=..., imm=0)` matches
  `isa._s(imm, rs2, rs1, funct3)` through the SB/SH/SW thin wrappers which
  take `(rs2, rs1, imm)`. All call sites use keywords, so even an ordering
  slip would not produce a wrong encoding.
- Caveat (NOT a fix — out of scope under condition A): the draft notes that
  if the testbench rejects out-of-range or unaligned stores by not retiring
  them, SH/SW bins could silently miss. With `imm=0` and base `x0` or small
  base from the prelude (addresses 0..15), stores are byte-aligned for SB,
  half-aligned if the base is even for SH, word-aligned only if the base is a
  multiple of 4 for SW. Not all SW instances are word-aligned (e.g. base x1=1,
  x3=3 would be misaligned). This is a known risk and not fixable without
  RTL/testbench visibility. The plan description says retirement is what
  matters; a misaligned SW may trap, in which case SEEN/ZERO_SRC/SAME_SRC for
  SW could miss on specific instances. However at least one of the four SW
  emissions uses a non-zero even base (via `_rand_nz`) with ~some probability
  of being word-aligned; and the `rs1=x0` instance stores at address 0 which
  IS word-aligned. So SW.SEEN and SW.ZERO_SRC will light; SW.SAME_SRC uses a
  random non-zero base which may be misaligned. Logged as a known risk, not a
  code-level bug.

### `build_jal_coverage_stream` — CONFIRMED

Control-flow trace (PC relative to builder start, each word = 4 bytes):

- Retire word[0] at PC=0: `JAL x0, +8` -> PC=8 (word[2]). BR_FORWARDS,
  JAL.ZERO_DST.
- Retire word[2] at PC=8: `JAL x0, -4` -> PC=4 (word[1]). BR_BACKWARDS,
  JAL.ZERO_DST.
- Retire word[1] at PC=4: `JAL x0, +8` -> PC=12 (word[3]). BR_FORWARDS,
  JAL.ZERO_DST.
- Retire word[3] at PC=12: NOP -> PC=16 (word[4]).
- Retire word[4] at PC=16: `JAL x5, +4` -> PC=20 (word[5]). BR_FORWARDS.
- Retire word[5] at PC=20: NOP -> fall through.

All four plan bins (JAL.SEEN, JAL.ZERO_DST, JAL.BR_FORWARDS,
JAL.BR_BACKWARDS) light. No infinite loop; exit is clean. The in-code
docstring has one confused mid-comment about "this word is skipped on first
execution" followed by a correct "Actually the flow is:" trace; the emitted
stream matches the correct trace. Comment is noisy but not misleading overall.

### `build_raw_hazard_matrix_stream` — CONFIRMED (with one open risk)

- 11 producers (10 R-type + JAL) x 13 consumers (10 R-type + 3 S-type) = 143
  pairs, each emitted as `[producer, consumer, NOP]` -> 429 words, under the
  512 cap.
- All producers write `rd = REG_P = x5`. All consumers read `REG_P` on either
  `rs1` or `rs2` (the other source is `REG_OTHER = x6`). Both regs are
  initialised by the prelude.
- Adjacency: producer and consumer are at indices `3k` and `3k+1` with no
  instruction between them. The NOP at `3k+2` separates the pair from the next
  producer so (consumer, next_producer) and (NOP, next_producer) do not form
  accidental plan hazards (NOP writes x0, next producer reads non-zero
  randoms, so no match).
- JAL producer: `JAL(rd=REG_P, offset=+4)`. After JAL retires at PC=X, the
  next retired instruction is at PC=X+4 which is the consumer. The retirement
  stream is (JAL, consumer) — back-to-back — matching the plan's RAW_HAZARD
  definition.
- Open risk (synthesis agent flagged, review agent concurs): on a taken JAL,
  Ibex's RVFI retirement stream MIGHT include a bubble between the JAL and
  the next retiring instruction (depending on fetch-pipeline draining). If
  the "immediately previous retired instruction" is defined strictly over
  RVFI retire ticks, this is still fine (bubbles are not retirements). If the
  monitor instead uses some other adjacency semantics, the 13 JAL-producer
  bins could silently miss. Without RTL visibility under condition A this is
  not fixable; the current encoding is the correct best-effort attempt and
  there is no safer alternative. Kept as-is.

## "Cannot be hit" claims

The synthesis report lists NONE. CONFIRMED — every plan bin is reachable with
the ISA subset and prelude available, and every bin is directly targeted by
one or more builders. There are no exclusions to dispute.

## Fixes applied

None. The draft is correct in all encoder calls, control flow, and hazard
adjacency. No builder was rejected; no builder was modified.

## Checker

`llm_pipeline.py check --run A_run1 --pass 1 --stage review` -> `CHECK OK`,
snapshot `p1_review_snapshot.py` written.

## Verdict summary

- 6 CONFIRMED, 0 NEEDS FIX, 0 REJECT.
- 0 "cannot be hit" DISPUTE (none claimed).
- 2 non-fixable known risks logged (store misalignment on SW; RVFI JAL
  retirement adjacency).
