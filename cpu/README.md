# CRT coverage — Ibex CPU (ibex_core)

Al doilea experiment din paper. Aceeași metodologie ca pe decoder
(`../decoder/`), dar pe CPU-ul complet:

- **Metrica funcțională** — planul ml4dv pe `ibex_cpu` (196 bins: SEEN,
  ZERO_DST, ZERO_SRC, SAME_SRC, BR, RAW_HAZARD), portat din
  `~/verilator/ml4dv/ibex_cpu/`. Sampling prin **RVFI** (RISC-V Formal
  Interface) pe `u_top.rvfi_*`.
- **Oracolul de buguri** — **Spike cosim** (lowRISC `cosim/spike_cosim`),
  integrat prin DPI direct în Verilator. Divergențe lockstep = buguri
  prinse. Infrastructura există în `~/ibex-coverage-experiments/cpu/src/`:
  `lowrisc_dv_cosim_0` + `lowrisc_dv_cosim_dpi_0` (nu avem nevoie de
  binarul `spike` din PATH, cosim-ul rulează ca libspike/libriscv linked
  în simulator).
- **Axa de detecție** — mutation kill rate pe `ibex_core`/ALU/LSU/
  controller: `pure_random vs. llm_crt` pe aceiași mutanți.

## Diferența față de decoder

Stimulul la decoder era **un cuvânt izolat de 32 biți per sample**. Aici
e **o secvență de instrucțiuni** scrisă în memoria de instrucțiuni, pe
care CPU-ul o execută. Monitorul samplează la fiecare `rvfi_valid=1`
(instrucțiune retrasă).

RAW_HAZARD cere două instrucțiuni consecutive cu dependență de date →
LLM-ul scrie generator de **secvențe**, nu de cuvinte independente.

## Starea curentă

| Componentă | Unde / sursă | Stare |
|---|---|---|
| Plan de coverage ml4dv (196 bins) | `instructions.py`, `instruction_monitor.py`, `shared_types.py` | ✔ portat + fix cocotb v2 LogicArray |
| RTL ibex_core + cosim + tracer | `~/ibex-coverage-experiments/cpu/src/` | ✔ refolosit prin `IBEX_CPU_ROOT` |
| Harness cocotb cu RVFI | folosim `cocotb_ibex.sv` din companion via `IBEX_CPU_ROOT`; `test_random_cpu.py` + `MemAgent` în repo | ✔ |
| Makefile (Verilator build) | `Makefile` derivat prin `_gen_makefile.py` | ✔ (`sim_build/Vtop` ~ 5-7 min) |
| Generator CRT random (baseline) | `crt/random_generator.py` + `test_random_cpu.py` | ✔ |
| Campanie random multi-seed | `scripts/baseline_random.sh` | ✔ |
| Spike cosim activat (DPI) | wire DPI peste `ibex_top_tracing`, saU switch la `ibex_simple_system_cosim` top | ⏳ next |
| Pipeline LLM-CRT A/B | `llm_pipeline.py` + `llm_passes/` | ⏳ |
| Mutation testing | `mutants/`, `run_mutation.py` | ⏳ |

**Baseline random pur (3 seed-uri × 10k instrucțiuni, fără JAL):**
- 175/196 bins per seed = 89.29%
- **Union: 179/196 = 91.33%** = plafonul teoretic (JAL și cross-după-JAL = 17 bins intangibile fără JAL inteligent)
- ~110s / seed pe Verilator (compilat o singură dată, `sim_build/Vtop` reutilizat).
- Comandă: `N_SEEDS=3 CRT_N=10000 bash scripts/baseline_random.sh`.

## Plan de atac (ordinea)

1. **Harness + random baseline** (tb/cocotb_ibex.sv + test_cpu_coverage.py
   portate, RTL via `IBEX_SRC_DIR`). Verific că atingem numărul din paper
   pe random pur.
2. **Spike cosim activat ca oracol** (DPI linked). Verific zero divergențe
   pe RTL golden.
3. **Pipeline LLM-CRT** — condițiile **A** (fără RTL) și **B** (cu RTL),
   3 rulări/condiție, subagent sinteză + review adversarial. Prompturile
   adaptate pentru plan **secvențe**, nu cuvinte.
4. **Mutanți manuali** pe ALU/LSU/controller/writeback. Măsurăm kill rate
   prin (a) coverage mismatch și (b) Spike cosim divergence.
5. **Comparație cu paper-ul LLM4DV** CPU: `PAPER_COMPARISON.md`.

## Referințe

- Metrica originală: `~/verilator/ml4dv/ibex_cpu/instructions.py` (14 instr,
  7 coverpoints).
- Harness și RTL de refolosit: `~/ibex-coverage-experiments/cpu/`
  (`cocotb_ibex.sv`, `test_cpu_coverage.py`, `src/`, `src_upstream/`).
- Metodologie și tabele: `../decoder/PAPER_COMPARISON.md`.
