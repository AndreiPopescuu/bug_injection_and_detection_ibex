# L4 A_run1 pass 1 — synthesis report

Condition **A** (no RTL, encoder library + plan description only).

## Output
- File written: `crt/llm_runs/L4_A_run1_p1.py`
- Header: exact 2-line header as specified (docstring + `from ..isa_l4 import ...`).
- `NEW_BUILDERS`: **71 builder functions**.
- Smoke check: `ok: 71 builders`
  - Max builder length: **452** instruction words (under the 512 cap).
  - Total instructions across all builders at seed 0: 16,922.

## Coverage strategy per bin category (5,615 bins total)

### 1. SEEN (30)
- `build_seen_all30_stream` — emits one retirement of each of the 30 plan
  ops (R-type, I-ALU, shifts, loads, stores, CSR) with a safe memory base
  set up in `x2`.

### 2. ZERO_DST (27)
- `build_zero_dst_all_writers_stream` — every WRITER op (R-type + I-ALU +
  shifts + loads + CSR) emitted with `rd = x0`.

### 3. ZERO_SRC (30)
- `build_zero_src_all_readers_stream` — every READER op emitted with a
  source register = `x0`. Stores get both rs1=x0 and rs2=x0 forms.

### 4. SAME_SRC (13)
- `build_same_src_all_two_src_stream` — R-type (10) and stores (3) with
  `rs1 == rs2`.

### 5. IMM_BUCKETS (85)
- `build_imm_buckets_i_alu_stream` — 6 I-ALU ops × 5 corner imms
  (−2048, random small-neg, 0, random small-pos, 2047) = 30 bins.
- `build_imm_buckets_shifts_stream` — 3 shift-imm ops × their 4 reachable
  shamt buckets (shamt=0, 1..7, 8..30, 31). Bucket 0 (imm≤−1024) is
  unreachable for shifts because shamt is 5-bit unsigned.
- `build_imm_buckets_loads_stream` — 5 load ops × 5 imm corners.
- `build_imm_buckets_stores_stream` — 3 store ops × 5 imm corners.

### 6. RAW_DIST (2,430)
Producer→consumer pairs at distance d ∈ {1,2,3}.
Writers split into 7 slices (R-first5, R-last5, I-ALU-first3, I-ALU-last3,
shift-imm, loads, CSR). Readers split into 2 halves (first 15 / last 15).
3 × 7 × 2 = **42 builder functions** named
`build_raw_dist_d{d}_{writer_slice}_{reader_slice}_stream`.
Together they cover 27 × 30 × 3 = 2,430 (writer, reader, distance) bins.
Each pair places a producer writing `x5`, then (d−1) ADD fillers that
only touch `x12`, then a consumer reading `x5`.

### 7. K3_CHAIN (3,000)
10 outer × 10 mid × 30 tail. One builder per (outer op × tail half):
10 × 2 = **20 builder functions** named
`build_k3_chain_outer{i}_tail{A|B}_stream`. Each emits 10 mids × 15 tails
= 150 K3 triples, 450 instrs. Chain pattern: outer R-type writes `x6`,
mid R-type reads `x6` and writes `x7`, tail reader reads `x7` — three
consecutive retirements.

### Supplementary
- `build_operand_corners_stream` — materialises 9 32-bit datapath corner
  values (0, 1, −1, max-signed, min-signed, 0x0000FFFF, 0xFFFF0000,
  0x55555555, 0xAAAAAAAA) into `x8` and runs R-type / shift ops against
  them for every shamt in {0,1,7,8,15,16,30,31}. Does not target bins
  directly but should improve operand-value distribution.

## Implementation notes
- Memory-base initialisation: each builder that uses loads/stores sets
  `x2 = 0x100` via a 3-instruction ADDI/SLLI/ADDI sequence. Fillers
  (`ADD x12, x1, x2`) only write `x12` so `x2` stays valid within a
  builder.
- No CSR writes that affect control flow (only `mscratch` 0x340).
- Register state across builders assumed volatile — every builder that
  needs a specific value reinitialises it locally.
- All randomness uses the passed-in `rng`, so the same seed produces the
  same byte stream (determinism requirement satisfied).

## Caveats / known risks
- Loads/stores with aggressive imm corners (−2048, 2047) may compute EAs
  outside the DMEM region. The RVFI retirement monitor still samples the
  bin at the trap-retirement, so IMM_BUCKETS should still fire. However
  if the harness aborts on fault, later builders might not retire — a
  small risk accepted here given the condition-A constraint (no RTL /
  mem-map info).
- Shift IMM_BUCKETS cannot reach bucket 0 by construction; those 3 bins
  are architecturally dead and not covered.
- RAW_DIST and K3_CHAIN depend on the retirement monitor's exact
  definition of "distance 1". We assume the prelude's 15 ADDIs and the
  2-NOP inter-builder separators do not alias into our (producer,
  consumer) register pattern — fillers use `x12` which is never used as
  `Rprod` (x5) or chain registers (x6/x7).
