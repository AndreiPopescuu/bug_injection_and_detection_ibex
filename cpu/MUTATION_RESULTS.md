# Mutation testing — ibex_core, 5 hand-picked mutants

## Setup

- **5 mutants** (`mutants/manifest.json`), each a 1–2 line edit on `ibex_alu.sv`
  or `ibex_load_store_unit.sv` in the companion repo golden RTL:
  - `m000_alu_add_as_sub` — ALU_ADD computes `a-b` (adder_op_b_negate=1 added
    to the ADD case).
  - `m001_alu_slt_inverted` — SLT/SLTU comparator drops the `~` and reports
    `is_greater_equal` directly.
  - `m002_alu_and_as_or` — bitwise AND/OR triggers swapped (AND op outputs OR
    result and vice versa).
  - `m003_lsu_sw_be_corrupt` — aligned 32-bit SW byte-enable is `4'b1110`
    instead of `4'b1111` (drops byte 0).
  - `m004_alu_sll_as_srl` — ALU_SLL sets `shift_left = 1'b0`, so SLL becomes
    a right shift.
- **Oracles:**
  - **cov**: 196-bin ml4dv coverage dict differs vs. golden run.
  - **trace**: `(pc, insn, rd_addr, rd_wdata)` RVFI retirement sequence
    differs vs. golden.
  - **Spike cosim** (planned, blocked, see `cosim/README.md`).
- **Build mechanic:** `MUTANT=<id>` in Makefile swaps the one mutated RTL
  file into `VERILOG_SOURCES`; each mutant has its own `sim_build_mut_<id>/`.
  Rebuild time per mutant: ~5 min first, cached after.
- **Runner:** `scripts/run_mutation.sh` runs the chosen stimulus against the
  golden + each mutant, writes per-seed JSON. `scripts/summarize_mutation.py`
  aggregates verdicts.

## Results

### Trace oracle (RTL-vs-RTL, 3 seeds / method)

| Mutant | random (N=500) | LLM-CRT A_run1_p1 |
|---|---|---|
| `m000_alu_add_as_sub` | 3/3 (trace) | 3/3 (cov,trace) |
| `m001_alu_slt_inverted` | 3/3 (trace) | 3/3 (trace) |
| `m002_alu_and_as_or` | 3/3 (crash,trace) | 3/3 (trace) |
| `m003_lsu_sw_be_corrupt` | **0/3** | **0/3** |
| `m004_alu_sll_as_srl` | 3/3 (trace) | 3/3 (trace) |

**Any-seed kill rate:** 4/5 = **80%** for both methods.

### Spike cosim oracle (1 seed, LLM-CRT A_run1_p1)

| Mutant | Verdict | First mismatch (sim time) |
|---|---|---|
| golden | PASS | (0 mismatches over 515 retirements) |
| `m000_alu_add_as_sub` | **KILLED** | 100ns (first ADDI in prelude: x1 = -1 instead of 1) |
| `m001_alu_slt_inverted` | **KILLED** | 760ns (first SLT) |
| `m002_alu_and_as_or` | **KILLED** | 960ns (first AND/OR with differing operands) |
| `m003_lsu_sw_be_corrupt` | **KILLED** | 1530ns ("DUT generated store at address 0 with BE e but BE f was expected") |
| `m004_alu_sll_as_srl` | **KILLED** | 1120ns (first SLL with non-zero shift) |

**Spike kill rate: 5/5 = 100%.** The LSU mutant m003 that survived the trace oracle is caught at the first aligned SW because Spike observes dside bus transactions via `notify_dside_access` and compares the DUT's byte-enable against the spec-expected value.

## Interpretation

1. **Kill rate is tied**: both methods detect the 4 ALU mutants, both miss
   the LSU one. The 196-bin ml4dv functional plan is a decoder-level metric
   (SEEN / ZERO_DST / ZERO_SRC / SAME_SRC / BR / RAW_HAZARD) — it does NOT
   track the executed VALUE, so a mutant that corrupts the ALU result but
   still retires the right instruction type is coverage-invisible. The trace
   oracle picks up those mutants via `rvfi_rd_wdata`, so m000–m002, m004 die.

2. **LLM-CRT is more efficient per instruction**:
   - LLM-CRT: 515 program words (6 builders), ~5 seconds / seed on cached
     Vtop.
   - Random (N=500): also 515 words after prelude, but produces ~400
     retirements of ALU/S-type ops (JAL excluded from random). LLM
     deterministically covers every operation + the RAW_HAZARD matrix in a
     short program.
   - Random at N=2000 (4× bigger program): also 4/5, no improvement.

3. **m003 is the oracle gap** — closed by Spike. LSU byte-enable corruption
   changes what gets WRITTEN to data memory but never affects any
   architectural register (no load reads it back; nothing in our stimulus
   does load-after-store with ADR+VALUE verification). The trace oracle
   misses it. Spike cosim catches it at the first aligned SW via
   `notify_dside_access`, which compares every dside bus transaction against
   the ISA model: *"DUT generated store at address 0 with BE e but BE f was
   expected"*. Spike wiring is now operational — see `cosim/README.md` for
   the setup.

## What's missing

- **More mutants**: these 5 are the easy ones. Realistic mutation campaigns
  use 50–200 mutants spread across the pipeline (controller FSM, hazard
  forwarding, PMP, CSR, writeback). This set is for the smoke test only.
- **Harder mutants where LLM should beat random**: e.g., a mutant that
  activates only when `rs1==rs2==x0` on a specific op, or that corrupts
  only misaligned loads. Random is unlikely to hit; LLM-CRT with targeted
  builders would.
- **Spike cosim**: closes the LSU oracle gap, enables detection of mutants
  that corrupt internal state without changing the architectural retirement
  trace. API-migration effort documented in `cosim/README.md`.

## How to reproduce

```bash
# From crt-coverage/cpu/
python3 mutator.py                      # regenerate mutant RTL files
TEST_MODE=llm RUN=A_run1 PASS=1 N_SEEDS=3 bash scripts/run_mutation.sh
TEST_MODE=random CRT_N=500 N_SEEDS=3 bash scripts/run_mutation.sh
python3 scripts/summarize_mutation.py \
  results/mutation_random_n500 results/mutation_llm_A_run1_p1
```
