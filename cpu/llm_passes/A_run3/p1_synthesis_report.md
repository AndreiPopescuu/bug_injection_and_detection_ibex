# A_run3 pass 1 — synthesis report

## Overall strategy

Pass 1 has no coverage feedback, so builders are planned systematically to
cover every bin in the 196-bin plan at least once, from the prose description
in `docs/ml4dv_bins_description.txt`:

| Group                    | Count | Covered by builder(s)                            |
|--------------------------|------:|--------------------------------------------------|
| SEEN (14)                | 14    | `build_seen_all_14_stream`                       |
| ZERO_DST (10 R + JAL)    | 11    | `build_zero_dst_r_and_jal_stream`                |
| ZERO_SRC (10 R + 3 S)    | 13    | `build_zero_src_stream`                          |
| SAME_SRC (10 R + 3 S)    | 13    | `build_same_src_stream`                          |
| BR_FORWARDS              | 1     | `build_jal_br_forwards_stream` (also back-stream)|
| BR_BACKWARDS             | 1     | `build_jal_br_backwards_stream`                  |
| RAW_HAZARD 11 x 13       | 143   | `build_raw_hazard_matrix_stream`                 |
| **Total**                | 196   |                                                  |

Two further builders don't add fresh plan bins directly but exercise
operand-dependent datapath variety the brief explicitly recommends:

- `build_r_type_corner_values_stream` — corner-value operands (zero,
  all-ones, min signed, max signed, large negative, shift-amount 31) fed
  to every R-type op.
- `build_store_offset_alignment_stream` — SB across all four low-2-bit
  alignments, SH on both half-word alignments, SW word-aligned.

## Per-stream reasoning

### `build_seen_all_14_stream`
Emits exactly one instance of each of the 14 plan instructions with
operand registers chosen uniformly from x1..x15. Guarantees SEEN for
every instruction without relying on random selection. JAL at the end
uses `rd=x0, offset=+4` so execution falls through to the next builder
cleanly.

### `build_zero_dst_r_and_jal_stream`
11 instructions, each with `rd=x0`. For R-type ops this exercises the
decoder's reporting of ZERO_DST while the writeback silently discards.
For JAL, rd=x0 is "jump without link" and uses forward offset 4. Random
stimulus with uniform rd in 0..31 picks x0 only ~3% of the time per op,
so a systematic sweep makes this group reliable in one retirement each.

### `build_zero_src_stream`
Emits every R-type twice (once with rs1=x0, once with rs2=x0) and every
store twice (rs1=x0 variant and rs2=x0 variant). For stores, we keep
rs1=x0 as the base in both variants so the store address is always 0
(a safe sentinel); the rs2 position carries the "zero data" case. 26
instructions, covers all 13 ZERO_SRC bins.

### `build_same_src_stream`
13 instructions: R-types with rs1==rs2 (random single register from
x1..x15 after a local ADDI re-init of x8), stores with rs1==rs2==x0.
Using x0 for both store slots keeps the address at 0 and the stored
data at 0 — safe in any memory model. Random stimulus hits rs1==rs2
with probability 1/16 per op, so this bin block is a classic coverage
hole without a dedicated builder.

### `build_jal_br_forwards_stream`
`JAL rd, +8 ; NOP ; NOP` — the JAL skips the first NOP and lands on
the second. Lights BR_FORWARDS and JAL.SEEN (and if rd != 0, writes
link register normally). Three words.

### `build_jal_br_backwards_stream`
BR_BACKWARDS requires a JAL with a negative offset. A naive backward
JAL into previously-emitted code creates an infinite loop that only
exits by running out of simulation time, costing all later builders
their coverage. The safe pattern uses a tiny trampoline:

```
offset  0:  JAL x0, +12   ; skip trampoline on first entry
offset  4:  JAL x0, +12   ; trampoline: forward-escape past the back-jal
offset  8:  NOP            ; padding
offset 12:  JAL rd, -8    ; BACKWARD JAL to the trampoline at offset 4
offset 16:  NOP            ; landing from the trampoline's forward escape
```

Execution flow: PC=0 jumps forward to PC=12 (back-jal), which jumps
backward to PC=4 (trampoline), which jumps forward to PC=16 (landing),
which falls through to the next builder. The back-jal AT PC=12 retires
with a negative offset → BR_BACKWARDS fires. Execution escapes cleanly
because the trampoline at PC=4 jumps forward past the back-jal.
This is the minimal safe scaffold; a random generator vanishingly rarely
constructs it.

### `build_raw_hazard_matrix_stream`
The 143-bin cross-cover (11 producers × 13 consumers) is the biggest
chunk of the plan by far and is impossible to hit systematically with
random stimuli. The invariant "immediately previous retired" means we
cannot rely on cross-builder adjacency (the harness inserts 2 NOPs
between builders, which breaks every hazard). All 143 pairs therefore
live inside this one builder.

Per pair:
- Pick a hazard register `r` uniformly in x1..x15 (non-zero — otherwise
  the producer has no write and no hazard).
- Emit the producer with `rd=r`. For R-type producers this is a normal
  ALU op; for JAL as producer, offset=+4 jumps to the immediately next
  PC so execution falls through to the consumer and the two retire
  back-to-back.
- Emit the consumer that reads `r`. For R-type consumers, half the time
  `r` is placed in `rs1`, half in `rs2` (which also diversifies which
  operand triggers the hazard-interlock path). For store consumers,
  `r` is always placed in `rs2` (data) with `rs1=x0` as the base — this
  avoids computing wild store addresses from arbitrary ALU results.

Note on sequencing: each pair is self-contained because the producer
line of pair N explicitly overwrites `r` before pair N's consumer runs,
so stale state from pair N-1 cannot shadow the intended hazard.

Total output: 11 × 13 × 2 = 286 instructions. Well inside the 512-word
per-builder limit.

### `build_r_type_corner_values_stream`
Does not add new bins directly (SEEN is already covered). Instead it
materializes datapath corner values into scratch registers x16..x22:

| Reg | Value          | Rationale                                   |
|-----|----------------|---------------------------------------------|
| x16 | 0x00000000     | zero                                        |
| x17 | 0xFFFFFFFF (-1)| all-ones / unsigned max                     |
| x18 | 0x00000001     | one                                         |
| x19 | 0x000007FF     | largest positive ADDI immediate             |
| x20 | 0x80000000     | min signed (sign-bit only) — built via SLL  |
| x21 | 0x0000001F (31)| max shift amount                            |
| x22 | 0xFFFFF800     | large negative (smallest ADDI immediate)    |

Then every R-type op is emitted 10 times across random pairs of these
corner regs. This stresses sign-sensitive compares (SLT, SLTU), shift
amount edge cases (SLL/SRL/SRA with shamt=31), subtraction underflow
(SUB x,0,1 = -1), and bitwise-with-all-ones (AND/OR/XOR vs 0xFFFFFFFF).
Per the brief: "operand variety is also useful within other builders"
and this is cheap insurance for operand-dependent cross-cover reruns.

### `build_store_offset_alignment_stream`
Stores across all four low-2-bit alignment classes for SB (offsets 0,1,2,3
from a known base in x5), half-word alignments for SH (0, 2), word
alignments for SW (0, 4). Does not add new plan bins directly, but it
hits the alignment variety the brief calls out and ensures the store
datapath is exercised at every byte-position-within-word for SB.
Unaligned SW on Ibex traps, so we only emit word-aligned SW.

## "Cannot be hit" conclusions

None in pass 1. Every one of the 196 plan bins has at least one
deterministic trigger across the builders listed above. If pass-2
coverage feedback reveals any bin stayed cold, the review agent or
pass-2 agent will investigate (likely a sequencing or harness-ordering
issue, not an unreachability claim).

## Determinism

Every free field in every builder is drawn from `rng` (the pipeline-
provided `random.Random`). No module-level randomness. No external
imports besides the header line. Each builder returns between 1 and
512 words (biggest is `raw_hazard_matrix` at 286).
