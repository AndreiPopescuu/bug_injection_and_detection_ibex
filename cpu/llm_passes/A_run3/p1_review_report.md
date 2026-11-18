# A_run3 pass 1 — adversarial review report

Reviewer verdict after re-deriving every encoder argument order, every
"immediately adjacent" claim in RAW_HAZARD, and every builder's
register-state assumption against the harness guarantee that only the
prelude's x1..x15={1..15} is implicit and that state is mutable across
builders.

## Per-builder verdicts

### `build_seen_all_14_stream` — CONFIRMED
Emits exactly one of each of the 10 R-type, 3 S-type, and 1 JAL plan
instructions. Operand register indices picked by rng from x1..x15 (SEEN
depends only on decoded opcode, not operand values, so no re-init
needed). Store base `rs1=0` → address 0, safe. JAL(rd=0, offset=+4) is a
fall-through jump to the next retiring instruction (the 2-NOP builder
separator). Argument order to each encoder (R: rd,rs1,rs2 ; S: rs2,rs1,imm
; J: rd,offset) matches `isa.py`. 14 words.

### `build_zero_dst_r_and_jal_stream` — CONFIRMED
10 R-type ops with rd=x0, followed by JAL(rd=0, offset=+4). Covers all
11 ZERO_DST bins. Does not depend on any specific register value (only
on operand register indices), so no re-init needed. 11 words.

### `build_zero_src_stream` — CONFIRMED
26 words. 10 R-type with rs1=0 (ZERO_SRC via rs1), 10 R-type with rs2=0
(ZERO_SRC via rs2), 3 stores with rs1=0 (base=0, zero data), 3 stores
with rs2=0 (zero data). All store addresses evaluate to 0 which is a safe
sentinel. Covers all 13 ZERO_SRC bins; also redundantly covers
ZERO_SRC/SAME_SRC side effects on stores. No value-dependent assumptions.

### `build_same_src_stream` — CONFIRMED (minor cosmetic finding only)
10 R-type with rs1=rs2=r (random r in x1..x15) and 3 stores with
rs1=rs2=x0. Covers all 13 SAME_SRC bins. The leading
`ADDI(rd=8, rs1=0, imm=8)` is dead code — the R-type loop uses a random
`r`, not x8, and the stores use x0 — but it is not buggy, so I left it.
No value-dependent assumption actually matters because SAME_SRC fires on
the sampled operand-index equality, not on the stored value.

### `build_jal_br_forwards_stream` — CONFIRMED
`JAL(rd, +8) ; NOP ; NOP`. From PC=0 the JAL lands on PC=8 (the second
NOP), skipping the first NOP. Lights BR_FORWARDS and JAL.SEEN. No
register-state dependency. 3 words.

### `build_jal_br_backwards_stream` — CONFIRMED
Trampoline-based safe backward JAL. Traced execution:
PC=0 JAL +12 → PC=12 (back-jal) → PC=4 (trampoline) → PC=16 (landing) →
falls through. The retirement at PC=12 has a negative offset, firing
BR_BACKWARDS. Escape is guaranteed by the trampoline forward JAL at
PC=4, which lands past the back-jal at PC=16. The NOP at offset 8 is
unreachable dead code but harmless. 5 words. No register-state
dependency (rd of back-jal can be any value including 0).

### `build_raw_hazard_matrix_stream` — CONFIRMED
143 (producer, consumer) pairs emitted back-to-back, 2 words per pair =
286 words total. Each pair:
- Fresh `r = rng.randint(1, 15)` (non-zero, so producer writes a real reg).
- Producer writes rd=r. For JAL, offset=+4 (jump-to-next-PC), so the
  JAL and the immediately following consumer retire consecutively; this
  is the required "immediately previous retired" invariant. For R-type
  producers, trivial fall-through.
- Consumer reads r: for R-type cons, r goes to rs1 or rs2 (coin flip);
  for store cons, r goes to rs2 (data) with rs1=x0 (safe base).
- No instruction, NOP, or boundary separates producer and consumer
  inside the returned list — adjacency verified. The producer of pair
  N explicitly overwrites r before pair N's consumer runs, so pair-N-1's
  consumer retirement does not shadow pair-N's hazard.
- Argument order to every encoder verified against `isa.py`.
- Builder is self-contained; harness NOP separators between builders do
  not cross any hazard.

### `build_r_type_corner_values_stream` — CONFIRMED
Explicitly re-initializes every corner register it depends on via ADDI
from x0 before use:
- x16=0, x17=−1 (0xFFFFFFFF), x18=1, x19=0x7FF, x21=31, x22=−2048.
- x20 is built as `ADDI x20,x0,1 ; SLL x20,x20,x21` — crucially, x21
  is set to 31 BEFORE the SLL, satisfying the operational-note
  requirement that a builder using a specific register value must
  explicitly re-initialize that register with ADDI before relying on it.
  So x20 reliably becomes 0x80000000 regardless of what earlier
  builders left in x20 or x21.
- Then 10 shuffled corner-pair operands fed to each of 10 R-type ops =
  100 instructions + 8 setup = 108 words. ADDI encoding of −1 (sign-
  extended 0xFFF) and −2048 (sign-extended 0x800) verified against the
  `_i` encoder which masks imm to 12 bits and the hardware sign-extends.

### `build_store_offset_alignment_stream` — CONFIRMED
Re-initializes x5 to 16 via `ADDI x5,x0,16` before using x5 as a store
base. SB spans offsets {0,1,2,3} (every low-2-bit alignment), SH spans
{0,2}, SW spans {0,4}. 9 words. No new plan bins but the builder is
well-formed and the re-init satisfies the "mutable across builders"
rule.

## "Cannot be hit" claims

The synthesis report explicitly states "None in pass 1". CONFIRMED — I
agree every one of the 196 plan bins has at least one deterministic
trigger across these nine builders.

## Edits applied

None. The generator is sound as submitted:
- All encoder argument orders match `isa.py`.
- All RAW_HAZARD pairs are strictly adjacent inside the one builder.
- The only two builders that depend on specific register values
  (`build_r_type_corner_values_stream` for x16..x22,
  `build_store_offset_alignment_stream` for x5) both re-initialize their
  dependencies via ADDI from x0 before use.
- The backward JAL has a correct trampoline-based escape.
- Determinism holds (all free fields from `rng`, no module-level
  randomness, no imports beyond the header).

## Checker

`CHECK OK: run A_run3, passes 1..1 import together (9 builders);
snapshot -> p1_review_snapshot.py`
