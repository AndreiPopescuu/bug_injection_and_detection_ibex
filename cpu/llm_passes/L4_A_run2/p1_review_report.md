# L4_A_run2 p1 review report

Reviewer: adversarial, treating draft as unverified. Source: `cpu/crt/llm_runs/L4_A_run2_p1.py` vs brief `cpu/llm_passes/L4_A_run2/p1_synthesis_prompt.md` and encoder `cpu/crt/isa_l4.py`.

## 1. Encoder-signature audit

All call sites traced against `isa_l4.py`:

- R-type `op(rd, rs1, rs2)`: matches (used by SEEN, ZERO_DST, ZERO_SRC, SAME_SRC, RAW, K3 helpers).
- I-ALU non-shift `op(rd, rs1, imm)`: matches.
- I-ALU shift `op(rd, rs1, shamt)`: matches (helper uses keyword `shamt=`).
- Load `op(rd, rs1, imm)`: matches.
- Store `op(rs2, rs1, imm)`: matches (helper correctly swaps: `_emit_reader` for STORE_OPS writes `rs2=rd_dst, rs1=rs1_pref`).
- CSR `op(rd, rs1)`: matches (encoder defaults csr=mscratch).

CONFIRMED: encoder argument orders correct everywhere.

## 2. CRITICAL: `_init_reg` helper trace for edge-case inputs

Algorithm: `v = value & 0xFFFFFFFF`; split into `c3` (bits 31:30, 0..3), `c2`/`c1`/`c0` (10-bit non-negative chunks); build `c3 -> <<10 -> +c2 -> <<10 -> +c1 -> <<10 -> +c0`.

Traced for each input in `build_operand_corners_stream`:

- `0x00000000` -> c3=0,c2=0,c1=0,c0=0 -> ADDI(0)+SLLI+SLLI+SLLI = 0. CORRECT.
- `0x00000001` -> c3=0,c2=0,c1=0,c0=1 -> ...+ADDI(1) = 1. CORRECT.
- `0xFFFFFFFF` -> c3=3,c2=0x3FF,c1=0x3FF,c0=0x3FF. All ADDI imms in [0,1023] (12-bit signed-safe). Final reg = (3<<30)|(0x3FF<<20)|(0x3FF<<10)|0x3FF = 0xFFFFFFFF. CORRECT.
- `0x80000000` -> c3=2,c2=0,c1=0,c0=0 -> rd=2, <<10 -> 0x800, <<10 -> 0x200000, <<10 -> 0x80000000. CORRECT.
- `0x7FFFFFFF` -> c3=1,c2=0x3FF,c1=0x3FF,c0=0x3FF. Build -> 0x7FFFFFFF. CORRECT.
- `0x80000001` -> c3=2,c2=0,c1=0,c0=1 -> 0x80000001. CORRECT.
- `0x7FFFFFFE` -> c3=1,c2=0x3FF,c1=0x3FF,c0=0x3FE. CORRECT.
- `0x00008000` / `0xFFFF8000` / `0x00010000` / `0x40000000` -> all traced; no ADDI imm ever exceeds 1023, so no accidental sign-extension of the immediate. Each produces the intended bit pattern.

The critical invariant the brief warned about (ADDI sign-extension flipping high-bit values) is correctly dodged: every chunk is masked to <= 10 bits, so every ADDI immediate is in `[0, 1023]`, firmly inside the 12-bit signed positive range `[0, 2047]`. The high-order bit of the final 32-bit register content is placed by the final `SLLI`, never by an ADDI immediate.

CONFIRMED: `_init_reg` correct for the entire 32-bit domain.

## 3. RAW_DIST distance semantics

`_raw_dist_block` emits writer, then `distance - 1` fillers (`ADDI(x30, x0, 0)`), then consumer.

- Distance 1: 0 fillers, writer immediately precedes reader. CORRECT.
- Distance 2: 1 filler. CORRECT.
- Distance 3: 2 fillers. CORRECT.

Filler `ADDI(x30, x0, 0)` neither reads nor writes `x29` (RD_PRODUCED), so distance between writer and reader is preserved; it also does not write x0, so it is a real retirement.

LOAD-writer special case: emits `ADDI(28, 0, 0x100)` before the load so the load's rs1 is a legal register. The ADDI(x28,...) is a retirement BEFORE the writer load, but RAW_DIST is defined on the write of the consumer's source register (x29), not x28 — so the pre-setup instruction does not change the producer-consumer distance.

Minor non-issue: between consecutive `_raw_dist_block` emissions, the consumer of block N is followed immediately by the writer of block N+1. This can incidentally generate additional RAW_DIST samples (writer of N+1 vs consumer of N), but those are coincidental extra bins, not corruption of the intended samples.

CONFIRMED.

## 4. K3_CHAIN triple structure

`_k3_triple` emits exactly 3 instructions: outer R-type writing x27, mid R-type reading x27 as rs1 and writing x29, tail reading x29. Adjacency within the triple is guaranteed by the harness ("Two consecutive instructions in the returned list retire back-to-back").

- Outer rd = x27 (non-zero). CORRECT.
- Mid reads rs1=x27 (one of mid's sources is rd_o). CORRECT.
- Mid rd = x29 (non-zero, != x27). CORRECT.
- Tail reads x29 as rs1 (for loads/CSR/I-ALU/stores) or both rs1 and rs2 (for R-type). CORRECT.

Across triples, the tail of triple N is followed by the outer of triple N+1. That outer writes x27 using x1, x2 as sources — it does not read x29 and thus does not itself form a k3 triple with the previous block's mid/tail. Correctly scoped.

Dead-code observation: `build_k3_chain_core_stream` assigns `mids = [SUB, AND, SRL, ADDI]` and immediately overwrites with `mids = [SUB, AND, SRL, SLT]`. Not a bug (ADDI would have been wrong because `_k3_triple` always calls `mid(rd=RD_M, rs1=RD_O, rs2=1)` which matches only R-type signatures). The overwrite salvages correctness. Left as-is; harmless.

CONFIRMED.

## 5. Determinism

Found one real bug on first read: `build_raw_dist_core_stream` used `hash((writer.__name__, reader.__name__))` to pick a distance per pair. Python string hashing is randomized per process (unless `PYTHONHASHSEED` is set), so distances would differ across runs with the same seed, violating the determinism requirement from the brief.

NEEDS FIX -> fixed: replaced `hash(...)` with a monotonic `counter` that cycles `d = 1 + (counter % 3)`.

Verified post-fix by smoke-running the module twice with `random.Random(0)` across all 20 builders — outputs are bit-identical (`deterministic: True`).

All other randomness flows through `rng` (passed as `random.Random`) — `rng.randint`, `rng.choice`, `rng.shuffle` — all deterministic given the seed.

NEEDS FIX (fixed).

## 6. No imports beyond header

Only `from ..isa_l4 import ...` at line 2. No other imports. CONFIRMED.

## Per-builder verdicts

- `build_seen_r_type_stream` — CONFIRMED
- `build_seen_i_alu_stream` — CONFIRMED
- `build_seen_loads_stream` — CONFIRMED
- `build_seen_stores_stream` — CONFIRMED
- `build_seen_csr_stream` — CONFIRMED
- `build_zero_dst_stream` — CONFIRMED
- `build_zero_src_stream` — CONFIRMED
- `build_same_src_stream` — CONFIRMED
- `build_imm_buckets_stream` — CONFIRMED (shamt=0 hits bucket 2, shamt in 1..7 hits 1, shamt in 8..30 hits 3, shamt=31 hits 4; no bucket 0 is unreachable by spec)
- `build_imm_variety_stream` — CONFIRMED
- `build_shift_amount_sweep_stream` — CONFIRMED (depends on `_init_reg`, which is verified correct for small values 16/24/31)
- `build_operand_corners_stream` — CONFIRMED (depends on `_init_reg`, verified above for all corner values)
- `build_raw_dist_core_stream` — NEEDS FIX (fixed: deterministic distance selection)
- `build_raw_dist_d1_stream` — CONFIRMED
- `build_raw_dist_d2_stream` — CONFIRMED
- `build_raw_dist_d3_stream` — CONFIRMED
- `build_k3_chain_core_stream` — CONFIRMED (dead-code noted but harmless)
- `build_k3_chain_wide_outer_stream` — CONFIRMED
- `build_k3_chain_wide_mid_stream` — CONFIRMED
- `build_combo_csr_stream` — CONFIRMED

## "Cannot be hit" claims

No explicit "cannot be hit" assertion in the file. The closest is a note in `build_imm_buckets_stream` that shift ops have no "very negative" (bucket 0) because shamt is 5-bit unsigned. This matches the plan spec (SLLI/SRLI/SRAI shamt buckets are {2,1,3,4} only). CONFIRMED.

## Summary

- 20 builders total.
- 19 CONFIRMED.
- 1 NEEDS FIX (fixed in file): `build_raw_dist_core_stream` used non-deterministic `hash()` of string names to choose distance; replaced with a deterministic counter.
- 0 REJECT.
- Smoke test post-fix: 20 builders run, 4017 total words, deterministic across two `Random(0)` runs.
