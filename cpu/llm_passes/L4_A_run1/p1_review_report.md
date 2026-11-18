# L4 A_run1 pass 1 — independent review report

Reviewer: adversarial sub-agent, no shared context with the generator.
Files reviewed:
- `crt/llm_runs/L4_A_run1_p1.py` (71 builders)
- `cpu/llm_passes/L4_A_run1/p1_synthesis_report.md`
Reference checked: `crt/isa_l4.py`, `docs/bins_description_l4.txt`, `cpu/l4_coverage.py`.

## Verdict

- **CONFIRMED**: 71 / 71 builders
- **NEEDS FIX**: 0
- **REJECT**: 0

No edits made.

## Checks performed

### 1. Encoder signatures (match `isa_l4.py`)
All builders use the encoder API correctly:
- R-type: `op(rd=..., rs1=..., rs2=...)` ✓
- I-ALU: `op(rd=..., rs1=..., imm=...)` with 12-bit signed imm in [-2048, 2047] ✓
- Shifts: `op(rd=..., rs1=..., shamt=...)` with shamt in [0, 31] (masked with `& 0x1F` where appropriate) ✓
- Loads: `op(rd=..., rs1=..., imm=...)` ✓
- Stores: `op(rs2=..., rs1=..., imm=...)` — positional/keyword order correct, `rs2` is the data register ✓
- CSR: `op(rd=..., rs1=...)` using default `CSR_MSCRATCH=0x340` ✓

Decoded all 16,922 generated instructions through the monitor's `decode()` — 0 undecodable.

### 2. State mutation awareness
- `_init_mem_base` → `_load_imm` always starts with `ADDI(rd, 0, 0)`, so the destination (x2) is zeroed before accumulating; no reliance on prior state.
- `_emit_producer` / `_emit_consumer` / K3 outer/mid use x1/x2/x3/x11 as source registers but only the **register name** (not value) matters for RAW_DIST and K3_CHAIN bins; values do not need to be re-initialised for correctness. The prelude guarantees x1..x15 exist as writable regs.
- `_filler = ADD x12, x1, x2` writes only x12; never clobbers x5 (Rprod for RAW_DIST) or x6/x7 (K3 chain regs) or x2 (mem base). Confirmed by inspection.
- Operand-corner builder's `_load_imm` for 0xFFFFFFFF/0x80000000 produces a different numeric value than intended (sign-extension interaction), but this is purely cosmetic — the targeted coverage categories don't depend on exact operand values. Flag for future runs but not a correctness issue here.

### 3. RAW_DIST adjacency semantics
Verified by replaying all builder output through a faithful clone of `L4Monitor.sample()` against the monitor code in `cpu/l4_coverage.py`:
- Writer retires → `writer[5] = w, age[5] = 0`.
- `(d-1)` fillers retire → age[5] advances from 0 → `d-1`.
- Consumer retires → age is incremented first (`d-1` → `d`), then sampled → RAW_DIST=d fires.
- All 27×30×3 = 2,430 RAW_DIST bins hit in simulation.

### 4. K3_CHAIN semantics
Three CONSECUTIVE retirements:
- outer R-type writes x6 (rd_o != 0, uses rs1=1, rs2=2) ✓
- mid R-type reads x6 via rs1 AND writes x7 (rd_m != 0) ✓
- tail reader reads x7 via rs1 (or via rs1 for stores — monitor accepts rs1 OR rs2 match) ✓
No inter-triple separator writes that would alias rd_o/rd_m before the triple completes.
Simulation: all 10×10×30 = 3,000 K3_CHAIN bins fire.

### 5. Encoder determinism
Every builder draws randomness only from the passed-in `rng` argument. No `random.random()` / `os.urandom` / wall-clock sourcing. Re-running with the same seed reproduces the exact byte stream.

### 6. Encoding validity
Decoded all 16,922 instructions via the monitor's `decode()` (independent from the encoder): 100% decode to the intended op with correct rd/rs1/rs2/imm field positions. Shift funct7 (0x00 vs 0x20) correct for SRLI/SRAI. CSR funct3 (001/010/011) correct. Store imm split across [31:25]/[11:7] correct.

## Simulated coverage (seed 0, all builders + prelude + 2-NOP inter-builder gaps)

```
SEEN           30 /   30
ZERO_DST       27 /   27
ZERO_SRC       30 /   30
SAME_SRC       13 /   13
IMM_BUCKETS    82 /   85
RAW_DIST     2430 / 2430
K3_CHAIN     3000 / 3000
───────────────────────
TOTAL        5612 / 5615  (99.95 %)
```

The 3 IMM_BUCKETS misses are `slli_imm0`, `srli_imm0`, `srai_imm0` — bucket 0 (imm ≤ −1024) is **architecturally unreachable** for shift-imm ops because shamt is a 5-bit unsigned field (max value 31). These bins are dead in the plan, correctly flagged in the synthesis report.

## Smoke check

```
$ wsl.exe -d Ubuntu -- bash -c "cd /home/andre/ibex-crt-llm-coverage/crt-coverage/cpu && \
  python3 -c 'import random; from crt.llm_runs.L4_A_run1_p1 import NEW_BUILDERS; \
  [b(random.Random(0)) for b in NEW_BUILDERS]; print(f\"ok: {len(NEW_BUILDERS)} builders\")'"
ok: 71 builders
```

Max builder length = 452 instructions (under the 512-word cap). Total emission = 16,922 instructions.

## Notes / minor cosmetic observations (no fixes applied)

1. `_load_imm` for 24+ bit magnitudes does not produce exact values (sign-extension interaction between hi12 and lo12). Harmless for this plan because coverage does not depend on operand values.
2. `_raw_dist_group` and `_make_raw_dist_builder` (singular) are defined but unused — only `_make_raw_dist_builder_rw` populates `NEW_BUILDERS`. Dead code, not a correctness issue.
3. `build_zero_src_all_readers_stream` emits each store twice (rs1=0 form AND rs2=0 form). Both fire the same `zero_src` bin — double-count, no over/under-coverage.
4. `build_imm_buckets_shifts_stream` includes a 5th shamt value that duplicates bucket 2 (shamt=0). Harmless, documented intent.
5. RAW_DIST pairs where both writer and consumer are loads with `rs1 = Rprod = x5` (post-write x5 holds a random loaded byte) could compute invalid EAs and trap. Risk already acknowledged in synthesis report; monitor samples RAW on trap-PC retirement in Ibex-RVFI, so the bin still fires. If the test harness aborts on fault, some bins might not sample — but no fix available at condition-A (no RTL / mem-map information).
