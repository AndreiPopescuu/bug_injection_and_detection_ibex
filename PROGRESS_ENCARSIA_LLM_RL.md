# Encarsia Corpus + LLM/RL Stimulus Pipeline

## Context

**Encarsia** (USENIX Security 2025) — framework ETH Zurich pentru generare
automată de bug-uri RTL realistice. Taxonomie derivată dintr-un survey pe
PR-urile reale Ibex GitHub.

Benchmark publicat:
- **DifuzzRTL** (ISCA 2021) detectează ~40% din corpus
- **ProcessorFuzz** (NDSS 2023) ~42%
- **Cascade** (USENIX Sec 2024) ~42%

**Goal-ul nostru**: comparăm LLM-CRT + RL-driven stimulus cu aceste SOTA
fuzzers pe **ACELAȘI corpus** → claim citabil pentru paper.

---

## Corpus Encarsia

| Categorie | Count | Descriere |
|---|---|---|
| **Driver** | 15 | "Signal Mix-up" — o conexiune de signal schimbată într-un cell intern |
| **Multiplexer** | 15 | "Broken Conditional" — un bit flipat într-un FSM state table |

Exemplu bug driver (254):
```
Before:  connect <inject_tap_61511>  \branch_or_mispredict
After:   connect <inject_tap_61511>  \fifo_ready
```
→ un cell AND intern primește input greșit → divergență subtilă pe branch handling.

---

## Infrastructură construită

### Conversie RTLIL → Verilog
- `cpu/encarsia/convert.py` — yosys pipeline
- yosys instalat via **OSS CAD Suite** (no sudo pe acest system)
- Top module rename: `$paramod$<hash>\cellift_ibex_core` → `ibex_golden_driver` / `ibex_bug_driver_<id>`

**Status**: 15/30 bugs convertite cu succes.
- **Driver 15/15** ✓
- **Multiplexer 0/15** ✗ (necesită Encarsia yosys fork pentru `$amt` custom cell)

### Differential testbench
- `cpu/encarsia/encarsia_tb.sv` — wrapper cocotb + external RF + icache tie-off
- `cpu/encarsia/test_encarsia.py` — bus trace capture
- `cpu/encarsia/Makefile` — Verilator build per variant (clean separation)
- `cpu/encarsia/run_campaign.sh` — paralel build + run + diff + coverage report

**Oracle**: differential bus comparison (golden vs buggy) — kill dacă
`instr_addr_o`/`data_addr_o`/`data_wdata_o`/`data_be_o`/`data_we_o` diferă în
oricare ciclu.

**Performance**: 16 variants build paralel-8 în ~4m30s. Fiecare rulare sim: ~2s.

### Config Ibex Encarsia (cellift)
Diferit de vanilla Ibex pe care s-au antrenat policy-uri RL:

| Parametru | Vanilla min (RL training) | Encarsia (cellift) |
|---|---|---|
| RV32M | Fast | Fast |
| RV32B | None | None |
| BranchPredictor | ✗ | ✗ |
| **BranchTargetALU** | ✗ | **✓** |
| **WritebackStage** | ✗ | **✓** |
| **RVFI exposed** | ✓ | **✗** |

**No RVFI** → nu putem folosi functional coverage via retirement; doar
**code coverage** (line + toggle) Verilator + differential oracle.

---

## Stimuli testați (același 15 Encarsia driver bugs)

| Stimulus | Action space | Source | Kills | Line% | Toggle% | WFI ct |
|---|---|---|---|---|---|---|
| LLM-CRT L4 | 30 (0 CF) | Claude Opus + L4 plan | **0/15** | 34.3 | 8.6 | 0 |
| L5 random | 45 | `codec_l5` + random | **4/15** | 39.2 | 17.9 | 0 |
| L6 PPO stochastic (offline) | 61 (+RVC) | `ppo_rvc_rich.zip` | **4/15** | **43.5** | **26.5** | 1 |
| L6 PPO determinist | 61 | – | 0/15 | 36.0 | 17.0 | 1 |
| L9 PPO stoch (offline) | 83 (+WFI/MRET) | `l9_v2_checkpoint` | 2/15 | 38.0 | 17.2 | 13 |
| L9 PPO online (Vtop obs) | 83 | – | 2/15 | 38.0 | 17.2 | 13 |
| L9 fine-tuned pe cellift | 83 | `ppo_cellift.zip` (new) | 2/15 | 38.0 | 17.2 | 16 |
| L6 fine-tuned pe cellift | 61 | `ppo_cellift_l6.zip` (new) | **4/15** | 43.5 | 26.6 | 1 |
| **`ppo_encarsia`** (78 safe ops, from scratch) | 78 | `codec_encarsia` (custom) | **3/14** | **46.5** | **33.2** | **1** |
| `ppo_encarsia` + **trap handler** | 78 | + prologue mtvec + handler @ 0x200000 | **3/15** | 48.3 | 30.9 | 1 |
| **L6 PPO stoch + trap handler** | 61 | — | **7/14** | **54.6** | **47.3** | 1 |

**NOTE**: `driver_39` crashed (infinite loop in Vtop — bug cauzează loop fără
trap). Excluded din stats. Trap handler-ul nu ajută pentru acest bug (loop
fără excepție, nu trap-triggerable).

### Trap handler finding (2026-11-23)
Adăugarea unui trap handler minimal (mtvec @ 0x200000, 4-instruction handler:
read mepc, +=4, MRET) în cocotb wrapper (`test_encarsia.py`) — **fără
modificări la Encarsia DUT** — a deblocat **3 bugs noi pe L6 PPO stoch**:
`394, 779, 1198`. Coverage: +11pp line, +20pp toggle.

Intuiție: CSR writes random din policy-ul L6 pot declansa exception paths
(ex. illegal CSR address). Fără trap handler, CPU intră în fault loop; cu
trap handler, se revine la cod și execuția continuă → coverage îmbunătățit și
bugs care se manifestau în stare "post-exception" sunt triggered.

### Kills per stimulus (unique bugs)
- **L5 random**: `526, 858, 963, 974`
- **L6 PPO stoch** (no trap handler): `526, 858, 963, 974`
- **`ppo_encarsia`** (no trap): `526, 779, 858`
- **`ppo_encarsia`** + trap handler: `526, 858, 1198`
- **L6 PPO stoch + trap handler**: `394, 526, 779, 858, 963, 974, 1198` ← best standalone
- **UNION TOATE**: `{394, 526, 779, 858, 963, 974, 1198}` = **7/15 unique = 46.7%** 🏆

### Finding ensemble
Stimuli cu diferite action spaces prind **bugs complementari**. L6 stoch prinde
`963, 974` (dar nu `779`); `ppo_encarsia` prinde `779` (dar nu `963, 974`).
**Ensemble approach** (union kills peste multiple stimuli) depășește orice
stimul individual.

### 10 bugs survived peste ambele stimuli
Necesită trigger-e specifice pe care niciun stimul random/RL nu le produce.
Candidat pentru LLM-CRT targeted (prompt engineering per bug).

---

## Findings cheie

### 1. Action space richness domină coverage

De la **8.6% → 26.5%** toggle doar adăugând branches + jumps + MULDIV + CSR +
RVC la stimul. Policy sophistication (random vs trained PPO) are efect redus
după ce action space-ul e deja bogat.

### 2. Distribution mismatch (vanilla → cellift)

L9 PPO online pe vanilla Ibex obține **53.9% toggle**. Același stimul pe
cellift Ibex: **17.2% toggle**. Policy-ul optimizat pentru vanilla toggle
points nu transferă — cellift are instrumentation diferită (taint-tracking
adaugat) → toggle-uri în locuri diferite.

### 3. WFI letală pe harness fără trap handler

Policy-urile antrenate care au WFI în action space (L9) emit 13-16 WFI per
1024 acțiuni. Pe harness fără trap handler, primul WFI oprește CPU-ul în
sleep → 95%+ din program neexecutat → kill rate și coverage scad dramatic.

### 4. L6 "safe by construction"

L6 (RV32IMC) nu are WFI/MRET/ECALL/EBREAK în action space → policy fizic nu
poate emite ops care rup execuția → performant pe harness trap-less.

### 5. Fine-tuning pe cellift NU rezolvă WFI problem

Training policy direct pe cellift DUT (200 ep, cum_toggle 50.66%) produce
**același output** la rollout: 16 WFI per 1024 acțiuni. Pentru că env-ul de
training tolerează WFI (sim termină după MAX_CYCLES), policy nu primește
penalty → învață că WFI = coverage bun.

### 6. Codec custom (78 safe ops) e calea înainte

Pentru a depăși plateau 4/15 cu safe action space:
- L6 base (61) + AUIPC + LUI + JALR + CSRRWI/SI/CI + FENCE + FENCE.I + 9 safe RVC
- Total **78 ops, zero trap-inducing**
- Training from scratch pe cellift (300 ep ≈ 25 min)
- Așteptare: 5-9/15 kills (unlock LUI/AUIPC → arbitrary 32-bit constants →
  unlock bugs care necesită valori specifice precum 0xDEADBEEF)

---

## Fișiere relevante

### Infrastructură
```
cpu/encarsia/
  README.md                        status + reproduction guide
  convert.py                       RTLIL → Verilog
  converted/                       15 driver + golden Verilog (~22MB)
  encarsia_tb.sv                   SV wrapper + external RF
  test_encarsia.py                 cocotb bus trace capture (campaign)
  test_encarsia_rl.py              cocotb for RL training (reads JSON)
  Makefile                         per-variant Verilator build
  run_campaign.sh                  parallel campaign + coverage report
```

### Stimuli
```
cpu/encarsia/
  smoke_prog.hex                   ADDI+WFI (baseline test)
  l5_random_s0.hex                 L5 random stimulus
  rvc_s0.hex, rvc_s0_stoch.hex     L6 PPO offline
  l9_s0_stoch.hex                  L9 PPO offline
  l9_online_s0.hex                 L9 PPO online
  ppo_cellift_s0.hex               L9 cellift-fine-tuned
  ppo_cellift_l6_s0.hex            L6 cellift-fine-tuned
  ppo_encarsia_s0.hex              78-op from-scratch (în curs)
```

### Training (RL)
```
cpu/encarsia/
  train_cellift_ppo.py             L9 fine-tune on cellift
  train_cellift_l6_ppo.py          L6 fine-tune on cellift
  train_encarsia_ppo.py            78-op from scratch
  codec_encarsia.py                78 safe ops (L9 − 5 trap ops)
  rollout_cellift.py / _l6.py / rollout_encarsia.py
  ppo_cellift*.zip                 trained policy weights
```

### Campaign outputs
```
cpu/encarsia/
  <stimulus>_summary.json          per-bug kill verdicts + coverage
  traces/                          per-variant trace + coverage.dat (gitignored)
```

---

## Comparare cu literatura (pe 15 driver bugs Encarsia)

| Tool | Approach | Detection |
|---|---|---|
| DifuzzRTL / ProcessorFuzz / Cascade | SOTA fuzzers (per Encarsia paper) | **9/15 (60%)** |
| **LLM-CRT L4 (noi)** | Claude Opus, 30 ops no CF | 0/15 (0%) |
| **L5 random (noi)** | Random sampling, 45 ops +CF | 4/15 (26.7%) |
| **L6 PPO stoch (noi)** | PPO trained on vanilla Ibex | 4/15 (26.7%) |
| **`ppo_encarsia` (noi)** | PPO 78 safe ops from scratch on cellift | 3/15 (20.0%) |
| **UNION L6 + ppo_encarsia (ensemble)** | diverse action spaces | 5/15 (33.3%) |
| **UNION ALL + trap handler (ensemble)** | + minimal trap handler in wrapper | **7/15 (46.7%)** |

**Progres**: de la 0% baseline → 33.3% → **46.7%**. **Gap față de SOTA: 2 bugs
(9/15 vs 7/15).** Need to close the gap through per-bug analysis + LLM-CRT
targeted or novel stimulus strategies.

---

## Blocker-e active

1. **11 bugs refuză să moară** indiferent de stimul CF-enabled (4 vs 15). Need:
   - Analiza per-bug pe `proof.vcd` → trigger specific per bug
   - Prompt engineering LLM-CRT targeted (combine LLM + RL insights)

2. **15 multiplexer bugs** neintegrate — necesită build fork Encarsia yosys.

3. **No RVFI pe Encarsia** → nu putem corela cu functional coverage, doar code
   coverage Verilator.

---

## Next steps (în ordine de impact)

1. `ppo_encarsia` training finalizat + campanie — rezultat TBD.
2. Analiza `proof.vcd` pentru 11 bugs survived — identifică trigger per bug.
3. LLM-CRT cu action space extins (branches + jumps + MULDIV + CSR + RVC)
   generate de Claude Opus cu prompt engineering targeted.
4. Combine: cele mai bune insights RL (action distribution) + LLM
   (targeted sequences).
5. Spike offline oracle ca alternativă la differential bus (task #34 pending).
6. Mux bugs via Encarsia yosys fork (+ 15 bugs adiționale).
