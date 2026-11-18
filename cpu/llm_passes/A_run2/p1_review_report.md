# A_run2, pass 1 — review report

Independent adversarial review. I re-derived every claim against
`crt/isa.py` and the ml4dv bin description. I did NOT read any forbidden
file (no A_run1 snapshots, no `llm_pipeline.py`, no RTL, no ml4dv/decoder,
no `test_*.py`).

Verdict counts: 15 builders — 15 CONFIRMED, 0 NEEDS FIX, 0 REJECT.
Edits applied to `crt/llm_runs/A_run2_p1.py`: none.
Checker: `CHECK OK` (snapshot `p1_review_snapshot.py` created).

## Encoder-call verification (argument order & widths)

- `_emit_producer(name, rd, rs1, rs2)` → `R_PLAN[name](rd=rd, rs1=rs1, rs2=rs2)`.
  ISA signature `ADD/SUB/.../AND(rd, rs1, rs2)`. Matches (keyword call).
- `_emit_consumer_r(...)` same as producer. Matches.
- `_emit_consumer_s(name, rs2, rs1, imm=0)` → `S_PLAN[name](rs2=rs2, rs1=rs1, imm=imm)`.
  ISA signature `SB/SH/SW(rs2, rs1, imm=0)`. Matches (keyword call).
- `JAL(rd=X, offset=Y)` throughout. ISA signature `JAL(rd, offset)`. Matches.
- `ADDI(rd, rs1, imm)` positional calls in `build_operand_corners_stream`.
  All three positions match ISA `ADDI(rd, rs1, imm)`. Matches.
- All field widths OK: rd/rs1/rs2 in [0,31], JAL offsets within +/-2^20
  (offsets used: +4, +8, -4), store imms within signed 12-bit.

## Per-builder review

### `build_r_type_seen_and_variety_stream` — CONFIRMED
10 R-type ops × 4 reps, rd/rs1/rs2 in [1,15] with rs1 != rs2. SEEN lit for
all 10 ops. Does not accidentally light ZERO_SRC/ZERO_DST/SAME_SRC
(all operands non-zero, rs1 != rs2). rd may equal rs1 or rs2 — harmless.

### `build_s_type_seen_stream` — CONFIRMED
SB/SH/SW × 4 reps. rs1=x15 (prelude value 15 — safe low-RAM base), rs2 in
[1,14], imm in {0,4,...,60}. rs1 != rs2 (rs1=15 vs rs2 in [1,14]). Both
non-zero. SEEN lit for all three stores. imm & stride word-aligned, so
SH/SW alignment is safe.

### `build_jal_seen_and_br_forwards_stream` — CONFIRMED
Pattern `[JAL rd, offset=+8; NOP; NOP]` × 6. JAL at word-index k (byte
B=4k inside builder) with offset=+8 targets byte B+8 = word k+2, i.e.
the second NOP (landing). The first NOP is skipped (and never retires).
Fall-through from the landing NOP reaches the next JAL. Retired stream:
JAL, NOP, JAL, NOP, ... Fires JAL.SEEN and JAL.BR_FORWARDS repeatedly.
Control flow stays inside the builder for every hop.

### `build_jal_br_backwards_safe_loop_stream` — CONFIRMED (with caveat below)
Final layout is `[NOP; JAL(rd=0, offset=-4)]`. JAL at byte B+4 with
offset=-4 targets byte B = the preceding NOP in the SAME builder → valid
in-builder landing. The loop is intentionally infinite (NOP → JAL → NOP
→ JAL → ...), retiring BR_BACKWARDS on every second retirement.

Independent re-derivation of the "cannot cleanly escape" claim: with only
R-type ALU + S-type stores + JAL + ADDI available (no conditional branch,
no self-modifying memory), there is no way to execute a negative-offset
JAL exactly once and then bypass it. The prompt's suggested "backward JAL
+ preceding forward JAL" pattern does NOT light BR_BACKWARDS because the
forward JAL always wins the single pass. The author's chosen tradeoff —
put the loop LAST, trust the harness's cycle cap, accept that WFI and
anything after this builder will not retire — is the only option within
scope. I CONFIRM both the "cannot be cleanly escaped" claim and the
chosen tradeoff.

Caveat (not a NEEDS FIX): this relies on NEW_BUILDERS being honored in
list order by the harness. The prompt (brief/harness-mechanics section)
asserts "Builder outputs are concatenated in order," which I take as
given.

### `build_r_type_zero_dst_stream` — CONFIRMED
10 R-type ops × 3 reps, rd=0, rs1/rs2 in [1,15]. Lights ZERO_DST for all
10 ops. rs1/rs2 can collide, which would also light SAME_SRC, but that
bin is already targeted by its own builder — harmless over-coverage.

### `build_jal_zero_dst_stream` — CONFIRMED
`[JAL(rd=0, offset=+8); NOP; NOP]` × 6. Same hop geometry as the
BR_FORWARDS builder; rd=0 lights JAL.ZERO_DST. In-builder landing.

### `build_r_type_zero_src_stream` — CONFIRMED
10 R-type ops × 3 reps. Exactly one of rs1/rs2 is x0, the other is in
[1,15], rd in [1,15]. Lights ZERO_SRC without also lighting SAME_SRC
(the non-zero source is in [1,15] so rs1 != rs2) or ZERO_DST (rd != 0).

### `build_s_type_zero_src_stream` — CONFIRMED
Stores with rs2=x0 (data=0), rs1=x10 (prelude value 10, safe base), imm
in {0,4,...,60} word-aligned → addresses in [10, 70]. Lights S-type
ZERO_SRC via the data register.

Independent re-derivation of the "cannot use rs1=x0" claim: using
rs1=x0 would form store address 0 + imm. Without a memory-map
guarantee, address 0 is likely instruction memory on Ibex and would
trap. Author's choice to light ZERO_SRC exclusively via rs2 is correct.
I CONFIRM the "cannot be safely hit via rs1=x0" claim.

### `build_r_type_same_src_stream` — CONFIRMED
10 R-type ops × 3 reps. rs1 == rs2 = s in [1,15], rd in [1,15] with
rd != s. Lights SAME_SRC without co-lighting ZERO_SRC (both sources
non-zero) or ZERO_DST (rd != 0).

### `build_s_type_same_src_stream` — CONFIRMED
SB/SH/SW × 3 reps with rs1 == rs2 == x15, imm in {0,4,...,64}.
Address = x15 (=15) + imm, so [15, 79]. Low RAM, should be safe on a
typical Ibex testbench memory layout. Lights S-type SAME_SRC.

### `build_raw_hazard_r_r_stream` — CONFIRMED
10 × 10 = 100 (producer, consumer) R→R cells. Per cell:
`[producer rd=rd_hz; consumer rs1_or_rs2=rd_hz; NOP]`.
Producer and consumer are at adjacent list positions → adjacent retire
positions. The alternating rs1/rs2 placement is harmless over-coverage.
The trailing NOP breaks the hazard before the next cell's producer.
Covers all 100 R-prod × R-cons RAW_HAZARD bins.

### `build_raw_hazard_r_s_stream` — CONFIRMED
10 × 3 = 30 (R-producer, S-consumer) cells. Per cell: producer writes
rd_hz; store `rs2=rd_hz, rs1=x15, imm=0`. Hazard carried on rs2 (data)
so there's no address-safety constraint on the producer's output value;
the store's address is always 15 (safe). Producer and store are adjacent.

### `build_raw_hazard_jal_r_stream` — CONFIRMED
10 (JAL-prod, R-cons) cells. Per cell: `JAL(rd=rd_hz, offset=+4)` then
R-type consumer with rs1=rd_hz. offset=+4 lands on the very next word,
which IS the consumer, so the consumer retires immediately after the
JAL. Independent re-derivation: JAL unconditionally writes rd=PC+4, so
the "degenerate offset=+4" case is still a real rd write — the hazard
pair fires correctly. The trailing NOP separates cells.

Covers all 10 JAL-prod × R-cons bins; co-lights JAL.BR_FORWARDS and
JAL.SEEN as bonus, which is fine.

### `build_raw_hazard_jal_s_stream` — CONFIRMED
3 (JAL-prod, S-cons) cells. Same construction. Hazard via rs2 of the
store (safe), rs1=x15.

### `build_operand_corners_stream` — CONFIRMED (does not add new 196-plan bins)
Only writes to scratch registers x16..x25, leaving the prelude pool
x1..x15 untouched for later builders. Verified each materialization:
  - x16 = 31 via `ADDI(16, 0, 31)` (imm 31 fits in 12-bit signed).
  - x17 = -1 via `SUB(17, 0, 1)` = x0 - x1 = -1.
  - x18 = 1 << 31 via `SLL(18, 1, 16)` using x16=31 → 0x80000000.
  - x19 = INT_MIN XOR -1 via `XOR(19, 18, 17)` → 0x7FFFFFFF.
  - Shift-by-32 via `ADDI(24, 0, 32)`: imm 32 fits in 12-bit signed.
    Ibex masks shift amount to low 5 bits per RV32I, so `SLL(25, 1, 24)`
    is a shift by 0. Author's annotation is correct.
No JAL inside this builder → linear control flow. No plan bin violation
risk. (Does not count toward the 196-bin target.)

### Determinism / Python surface (all builders) — CONFIRMED
- All builders return `list[int]`, nonempty, well under 512 words:
  checker report: 2..300 words per builder on seed 4. Program totals
  are well within the 1..512 word range.
- Only `rng` is consumed for free fields; no `random` global.
- No imports beyond the header.
- Header unchanged.

## "Cannot be hit" claims

1. **JAL.BR_BACKWARDS with a bounded, WFI-reaching program.** CONFIRMED.
   The ISA scope (no conditional branches, no self-modifying memory)
   does not permit executing a negative-offset JAL exactly once and
   then falling through to continue the program. The chosen fallback
   (tight infinite loop placed LAST so earlier bins have retired) is
   the only expressible resolution.
2. **S-type ZERO_SRC via rs1=x0.** CONFIRMED. Store to address `0 + imm`
   is almost certainly instruction memory on Ibex and would trap. The
   builder lights ZERO_SRC on stores via rs2=x0 instead, which is both
   architecturally correct for ZERO_SRC and safe.

## Edits applied

None. All 15 builders survive adversarial re-derivation. The code is
accepted as-is for pass 1.

## Checker result

```
CHECK OK: run A_run2, passes 1..1 import together (15 builders);
snapshot -> p1_review_snapshot.py
```
