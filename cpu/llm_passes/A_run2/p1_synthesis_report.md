# A_run2, pass 1 — synthesis report

## Overview

15 builders written, targeting all 196 bins of the ml4dv ibex_cpu plan:

| Bin family | Count | Builder(s) |
|---|---|---|
| R-type SEEN (10) | 10 | `build_r_type_seen_and_variety_stream` |
| S-type SEEN (3) | 3 | `build_s_type_seen_stream` |
| JAL SEEN (1) | 1 | `build_jal_seen_and_br_forwards_stream` |
| ZERO_DST on 10 R-type + JAL | 11 | `build_r_type_zero_dst_stream`, `build_jal_zero_dst_stream` |
| ZERO_SRC on 10 R-type + 3 S-type | 13 | `build_r_type_zero_src_stream`, `build_s_type_zero_src_stream` |
| SAME_SRC on 10 R-type + 3 S-type | 13 | `build_r_type_same_src_stream`, `build_s_type_same_src_stream` |
| JAL.BR_FORWARDS | 1 | `build_jal_seen_and_br_forwards_stream` |
| JAL.BR_BACKWARDS | 1 | `build_jal_br_backwards_safe_loop_stream` |
| RAW_HAZARD 10 R-prod × 10 R-cons | 100 | `build_raw_hazard_r_r_stream` |
| RAW_HAZARD 10 R-prod × 3 S-cons | 30 | `build_raw_hazard_r_s_stream` |
| RAW_HAZARD 1 JAL-prod × 10 R-cons | 10 | `build_raw_hazard_jal_r_stream` |
| RAW_HAZARD 1 JAL-prod × 3 S-cons | 3 | `build_raw_hazard_jal_s_stream` |
| (operand-corner variety, no new bin) | 0 | `build_operand_corners_stream` |

Total: 14 + 11 + 13 + 13 + 2 + 143 = 196 bins directly targeted.

## Per-builder reasoning

### `build_r_type_seen_and_variety_stream`
Emits each of the 10 R-type ops four times with randomized but *non-zero* and
*distinct* `rs1`/`rs2`. Random stimulus hits SEEN quickly but we emit it
explicitly so pass 1 cannot fail SEEN due to pathological seeding. Keeping
`rs1!=rs2` and both non-zero isolates SEEN from accidentally lighting
SAME_SRC or ZERO_SRC on the same instruction (not strictly necessary, just
cleaner for later diagnosis).

### `build_s_type_seen_stream`
SB/SH/SW with a safe base register (x15, value 15) and word-aligned imms.
`rs1!=rs2`, both non-zero. Keeps base in low RAM so no exception.

### `build_jal_seen_and_br_forwards_stream`
JAL `offset=+8` with varied `rd`. BR_FORWARDS fires on positive offsets. The
landing pad is a NOP inside this builder so control flow stays local.

### `build_jal_br_backwards_safe_loop_stream` (CAUTION)
This is a 2-word INFINITE LOOP: `[0] NOP; [1] JAL x0, -4 → [0]`.

I could not find a way to make BR_BACKWARDS retire *and* escape cleanly with
only the plan instructions available (10 R-type ALU + 3 stores + 1 JAL + ADDI
glue). No conditional branches are in the ISA scope. Backward JAL always
loops forever once reached unless the memory image is self-modified, which
the harness does not allow. The prompt's suggested "backward JAL target
followed by a forward JAL that skips past it" structure does not actually
light BR_BACKWARDS: the forward JAL skips over the backward JAL on the first
and only pass through, so the backward JAL never retires.

My resolution: place this builder LAST in `NEW_BUILDERS` (immediately before
the harness's WFI terminator), accept that the sim will not reach WFI, and
rely on the harness's cycle cap (~20 × program_words) to tear down the sim
after many iterations of the tight loop. Every other builder retires
*before* this one, so their coverage is safe. The loop retires BR_BACKWARDS
on every second cycle, so it is sampled abundantly.

### `build_r_type_zero_dst_stream`
R-type with `rd=x0` for all 10 ops, 3 reps each. Non-zero distinct sources
to isolate from ZERO_SRC/SAME_SRC.

### `build_jal_zero_dst_stream`
JAL with `rd=x0, offset=+8` repeated 6×. The jump is still forward so
control flow stays sane; `rd=x0` discards the return-address write.

### `build_r_type_zero_src_stream`
R-type with randomly either `rs1=x0` or `rs2=x0` (but not both). `rd` kept
non-zero and the other source non-zero and different, so SAME_SRC/ZERO_DST
don't co-fire.

### `build_s_type_zero_src_stream`
Stores need a VALID address, so we cannot use `rs1=x0` (that would attempt
to store to address 0, which may be in instruction memory or trap). We
light ZERO_SRC on stores by setting `rs2=x0` (storing the value 0) with
`rs1=x10` as a safe base. This is the only safe way to hit S-type ZERO_SRC
without inducing a load/store exception.

### `build_r_type_same_src_stream`
`rs1==rs2` (same non-zero register), `rd` different from the source and
non-zero.

### `build_s_type_same_src_stream`
`rs1==rs2==x15`. The store address is `15 + imm` with `imm` in
`[0, 64]` → address range `[15, 79]`, which is low RAM and should be safe
on Ibex. Data written equals the base-register value, which is harmless.

### `build_raw_hazard_r_r_stream`
10×10 = 100 pairs. For each `(producer_op, consumer_op)` cell: emit
`producer rd=rd_hz, ...` then `consumer rs1_or_rs2=rd_hz, ...`, then a
NOP separator before the next cell. Alternating rs1 vs rs2 across cells
is bonus, not required (plan only cares that the pair retired adjacently).

### `build_raw_hazard_r_s_stream`
10×3 = 30 pairs. The store carries the hazard via `rs2` (data), not `rs1`
(address), so no exception risk regardless of the producer's result value.
Base is x15.

### `build_raw_hazard_jal_r_stream`
1×10 = 10 pairs. JAL `rd=rd_hz, offset=+4` falls through to the very next
word while still writing `rd=PC+4`. The following R-type consumer reads
`rd_hz` as rs1. Because `offset=+4` is positive, this ALSO co-fires
BR_FORWARDS repeatedly — fine, that bin's already addressed elsewhere.
This is the hardest "coupon" in the plan: random generation would need
each of the 10 (JAL, R-type) pairs to land back-to-back with the correct
register dependency, which is astronomically unlikely.

### `build_raw_hazard_jal_s_stream`
Same trick, 1×3 = 3 pairs. Store rs2 = JAL rd. rs1 = x15 for safe address.

### `build_operand_corners_stream`
No new 196-plan bins — but materializes -1, INT_MIN (0x80000000), INT_MAX,
powers of two, and shift-by-0/by-32 in scratch registers (x16..x25) and
exercises sign-sensitive paths: SLT/SLTU on cross-sign operand pairs, SRA
vs SRL on 0x80000000, ADD/SUB overflow. This is prophylactic for future
passes that may unmask value-corner cross coverage not visible in pass 1's
feedback. Writes only touch scratch registers so it does not disturb the
x1..x15 prelude values used by later builders. (Builder order places this
BEFORE the backward-JAL loop so it still retires.)

## "Cannot be hit" conclusions

- **JAL.BR_BACKWARDS as a bounded-execution bin**: cannot be hit without
  self-modifying code or a conditional branch. The chosen tradeoff is to
  accept an infinite tight loop at the end of the program and let the
  harness cycle cap end the sim. See `build_jal_br_backwards_safe_loop_stream`
  for the full argument.
- **S-type ZERO_SRC via `rs1=x0`**: cannot be safely hit — would require
  a legal address of 0, which is likely trap-inducing. Only `rs2=x0`
  path is used.

## Open risks (for the review agent)

1. If the harness orders builders by something other than `NEW_BUILDERS`
   list order (e.g. alphabetical), the backward-JAL builder might not be
   last, and preceding builders would still be fine but LATER builders
   would starve. Worth checking whether the harness documents its sort.
2. `build_s_type_same_src_stream` writes to addresses `[15, 79]`. If Ibex's
   data memory in this testbench starts at some higher address, these
   stores might miss. The prompt gives no memory map, so I assumed the
   same default as a typical ibex_simple_system layout where low RAM is
   writable.
3. The `offset=+4` trick in `build_raw_hazard_jal_r/s_stream` relies on
   JAL writing `rd` even when it effectively falls through. This is
   architecturally correct (JAL always writes PC+4), but if the monitor
   somehow filters JALs that have `offset==+4` as "degenerate", the bin
   would not be lit. The plan description makes no such exclusion.
