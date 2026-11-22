# Mutation Testing cu LLM — Decoder + CPU full-core

## Context

Hand-crafted mutants injectați în Ibex RTL la două granularități (decoder izolat
+ full CPU), stimulus generat de Claude Opus (LLM-CRT), oracle via retirement
trace / Spike cosim DPI.

**Target paper**: comparare cu ml4dv (Nawaz et al.) — LLM-driven functional
coverage.

---

## Workstream 1 — Decoder izolat

**Scope**: `ibex_decoder.sv` extras și wrapped pentru testare izolată (modul
combinațional, ~1800 linii SV).

### Infrastructură
- `decoder/mutator.py` — bug injection pe decoder source
- `decoder/mutants/` — mutanți generați
- `decoder/run_mutation.py` — campaign runner
- `decoder/mutation_results/` — rezultate per campanie
- `decoder/PAPER_COMPARISON.md` — comparare cu baseline ml4dv

### Campanii LLM-CRT
**13 total** sub condiții experimentale:
- Condition A (fără RTL): `A_run1..6`, `A1_run1`
- Condition B: `B_run1..4`
- Condition C: `C_run1`
- Condition D: `D_run1`

Fiecare rulează Claude ca sub-agent cu prompt engineering, generează builders
Python ce construiesc stimul, evaluat pe plan 2107 bins (ml4dv paper).

### Rezultat cheie
**Paritate cu ml4dv** pe planul 2107-bin. LLM-CRT atinge coverage comparabil cu
baseline-ul paper-ului. Mutation kill rate ridicat pe mutanții decoder-specifici.

---

## Workstream 2 — CPU full-core

**Scope**: Ibex core complet executând programe în Verilator, cu oracle dual.

### Configurare Ibex
Config **vanilla minimal** (`cpu/cocotb_ibex.sv`):
- RV32M = Fast
- RV32B = None
- BranchPredictor = 0, BranchTargetALU = 0
- WritebackStage = 0
- SecureIbex = 0, ICache = 0, PMP = 0
- **RVFI = 1** (necesar pentru retirement sampling)

### Oracle-uri
1. **Trace retirement** — Python monitor pe RVFI (`rvfi_valid`, `rvfi_insn`,
   `rvfi_rd_*`, `rvfi_rs*_rdata`). Sample coverage bin per retirement.
2. **Spike cosim via DPI** — lowRISC `ibex_cosim` branch; Spike invocat prin
   DPI la fiecare retirement, compare Ibex vs Spike state.

### Planuri de coverage (functional)
| Plan | Bins | Descriere |
|---|---|---|
| 196-bin ml4dv | 196 | SEEN + ZERO_DST + ZERO_SRC + SAME_SRC + BR + RAW_HAZARD |
| L4 extended | **5,615** | SEEN + ZERO_DST + ZERO_SRC + SAME_SRC + IMM_BUCKETS + **RAW_DIST (2430)** + **K3_CHAIN (3000)** |

Extended L4 adaugă dependențe data-flow temporale (RAW cu distanță 1/2/3,
chain-uri de 3 retirements consecutive cu register chaining).

### Mutanți hand-crafted (20)
Stored în `cpu/mutants/manifest.json` + per-mutant RTL overlay în
`cpu/mutants/<id>/`.

| ID | Target | Difficulty | Descriere scurtă |
|---|---|---|---|
| m000 | ibex_alu.sv | easy | ADD computes a-b (add ALU_ADD to adder_op_b_negate list) |
| m001 | ibex_alu.sv | easy | SLT/SLTU inverted (drop ~ on cmp_result) |
| m002 | ibex_alu.sv | easy | AND ↔ OR triggers swapped |
| m003 | ibex_load_store_unit.sv | medium | SW drops byte 0 (BE 4'b1111 → 4'b1110) |
| m004 | ibex_alu.sv | easy | SLL becomes right shift |
| m005 | ibex_alu.sv | easy | XOR falls into AND default case |
| m006 | ibex_alu.sv | easy | AND falls through to XOR default |
| m007 | ibex_alu.sv | medium | SRA becomes SRL (loses sign extension) |
| m008 | ibex_alu.sv | medium | SLT behaves as SLTU |
| m009 | ibex_alu.sv | medium | Shift amount forced even |
| m010 | ibex_load_store_unit.sv | medium | SH BE drops byte 1 |
| m011 | ibex_load_store_unit.sv | medium | SB BE shifted |
| m012 | ibex_alu.sv | **hard** | SRA -1 corrupted (needs 0xFFFFFFFF in rs1) |
| m013 | ibex_alu.sv | **hard** | SLT INT_MIN corner (needs 0x80000000) |
| m014 | ibex_alu.sv | easy | SUB wires to XOR path |
| m015 | ibex_alu.sv | medium | XOR same-src returns 0xFFFFFFFF |
| m016 | ibex_alu.sv | medium | AND zero-src returns 0xFFFFFFFF |
| m017 | ibex_alu.sv | **hard** | SRL leaks arith on negative rs1 |
| m018 | ibex_alu.sv | medium | OR same-src returns ~operand_a |
| m019 | ibex_load_store_unit.sv | **hard** | LSU byte rotation offset 01/10 swap |

### Campanii LLM-CRT executate
| Plan | Run | Prompt change |
|---|---|---|
| 196-bin | `A_run1` | baseline |
| 196-bin | `A_run2` | – |
| 196-bin | `A_run3` | + "register state is mutable across builders" advice |
| 5615-bin | `L4_A_run1` | L4 plan intro |
| 5615-bin | `L4_A_run2` | + "helper semantics: verify what you compose" advice |

### Rezultate kill rate

| Run | Plan | Kill rate | Note |
|---|---|---|---|
| Random baseline n2000 | 196 | ~14/20 (70%) | pure random, upper bound al random |
| `A_run1_p1` | 196 | 13/20 (65%) | first LLM attempt |
| `A_run2_p1` | 196 | 14/20 (70%) | – |
| **`A_run3_p1`** | **196** | **20/20 (100%)** | post-prompt engineering |
| `L4_A_run1_p1` | 5615 | 15/20 (75%) | buggy `_load_imm` helper for 0xFFFFFFFF |
| **`L4_A_run2_p1`** | **5615** | **20/20 (100%)** | post-"helper semantics" advice |

### Claim principal
**Prompt engineering crește kill rate 70% → 100% fără modificare manuală de
cod stimulus.** Doar advice generic DV adăugat în prompt:
- "Register state is mutable across builders"
- "Helper semantics: verify what you compose"
- "Operand corner coverage required"

Cele 3 bug-uri **hard** (m012 SRA-neg-one, m013 INT_MIN, m017 SRL-neg) necesită
LLM să genereze operand corners (0xFFFFFFFF, 0x80000000) — proof că operand
diversity e prerequisit.

### Blocker rezolvat în timpul workstream-ului
Spike cosim DPI inițial blocat pe migrare API Spike (`DEFAULT_VARCH`,
`set_ibex_flags` scos în versiunile moderne). Rezolvat prin refactorizare la
nou API — status 2026-10-26.

---

## Comparare cu ml4dv paper

| Metric | ml4dv (Claude 3.5 Sonnet) | Noi (Claude Opus + prompt eng.) |
|---|---|---|
| Coverage 196-bin | 5.61% best reported | 100% (A_run3 final) |
| Kill rate | neraportat | 20/20 hand-crafted |
| Coverage 5615-bin | n/a (planul lor) | 98%+ |

---

## Fișiere relevante în repo

```
decoder/
  mutator.py                  decoder bug injector
  mutants/                    generated mutant RTL
  run_mutation.py             campaign runner
  PAPER_COMPARISON.md         ml4dv comparison

cpu/
  mutator.py                  20 hand-crafted CPU mutants
  mutants/manifest.json       mutant metadata
  mutants/<id>/*.sv           RTL overlays
  MUTATION_RESULTS.md         campaign results
  cosim/                      Spike DPI harness
  crt/isa_l4.py              encoder library for L4 plan
  crt/llm_runs/               LLM-generated builders
  l4_coverage.py              5615-bin monitor
  docs/bins_description_l4.txt
  llm_passes/                 LLM prompts + reports per run
```
