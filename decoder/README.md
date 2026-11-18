# CRT coverage — Ibex decoder

Constrained Random Testing (CRT) pentru `ibex_decoder`, cu coverage de cod
(Verilator: line / branch / toggle) și coverage funcțional (Python). Pornește
de la setup-ul ml4dv din `../../decoder/` (același RTL și același flow
cocotb + Verilator), dar înlocuiește stimulii scriși de mână sau pur random
cu un generator CRT configurabil.

## De ce ai nevoie

| Componentă | Unde / ce | Stare |
|---|---|---|
| RTL decoder | `rtl/ibex_pkg.sv`, `rtl/ibex_decoder.sv` (copiate din `../../decoder/`, snapshot ml4dv) | ✔ |
| Simulator cu coverage | Verilator 5.028 (`verilator`, `verilator_coverage`) în WSL | ✔ |
| Testbench Python | cocotb 1.9.2 în venv-ul `/home/andrei/ibex_env` | ✔ |
| Wrapper top-level | `tb/ibex_decoder_crt_wrap.sv`: toate intrările decoderului sunt porturi, parametrii (RV32B/RV32M/...) se setează cu `-G` | ✔ |
| Generator CRT | `crt/isa.py` (tabel ISA + encodere), `crt/generator.py` (constrângeri + ponderi) | ✔ |
| Model de coverage funcțional | `crt/func_coverage.py` (coverpoints + bins, enum-urile citite din `ibex_pkg.sv`) | ✔ |
| Profile CRT | `profiles/*.json` (ponderi și constrângeri, fără să modifici codul) | ✔ |
| Rulare multi-seed + merge + raport | `scripts/run_seeds.sh`, `scripts/cov_report.py`, `scripts/merge_func_cov.py` | ✔ |

## Structură

```
crt-coverage/decoder/
├── Makefile                 # cocotb + Verilator --coverage, parametri RV32B/RV32M/...
├── test_crt_decoder.py      # testul cocotb: generator -> DUT -> sample
├── tb/ibex_decoder_crt_wrap.sv
├── rtl/                     # RTL-ul testat
├── crt/
│   ├── isa.py               # ~120 instrucțiuni RV32I/M/Zicsr/Priv/B + encodere
│   ├── generator.py         # CRTGenerator: legal / mutated / random_word
│   └── func_coverage.py     # DecoderCoverage
├── profiles/
│   ├── default.json         # mix: 80% legal, 15% mutații, 5% random
│   ├── pure_random.json     # baseline: cuvinte de 32 biți complet random
│   └── rv32im_only.json     # doar RV32IM + system, legal
├── scripts/
│   ├── run_seeds.sh         # N seed-uri -> merged.dat + rapoarte + RTL adnotat
│   ├── cov_report.py        # sumar coverage.dat pentru un modul (+ --uncovered)
│   └── merge_func_cov.py    # merge JSON-uri de coverage funcțional (+ --holes)
└── results/                 # (gitignored) ieșirile rulărilor
```

## Cum rulezi (din WSL)

```bash
source /home/andrei/ibex_env/bin/activate
cd ~/IBEX/ibex-coverage-experiments/crt-coverage/decoder

# un seed (coverage.dat + results/single/func_cov_seed0.json)
make CRT_SEED=0 CRT_N=2000

# campanie: 10 seed-uri x 2000 stimuli, merge, raport
N_SEEDS=10 CRT_N=2000 bash scripts/run_seeds.sh

# alte configurații RTL (fiecare are build-ul ei în sim_build_*)
RV32B=3 TAG=full bash scripts/run_seeds.sh          # bitmanip Full
RV32B=1 TAG=balanced bash scripts/run_seeds.sh

# baseline pentru comparație
CRT_PROFILE=pure_random TAG=baseline bash scripts/run_seeds.sh
```

Rezultatele ajung în `results/<TAG>_e<E>_m<M>_b<B>/`:
- `code_cov.txt`: line/branch/toggle pentru `ibex_decoder` și lista punctelor neacoperite
- `func_cov.txt`: coverage funcțional per coverpoint și golurile (holes)
- `annotated/ibex_decoder.sv`: RTL-ul adnotat (liniile neacoperite sunt marcate cu `%`)
- `merged.dat`: îl poți combina cu alte rulări (`verilator_coverage --write`)

Din Windows (Claude Code / Git Bash) se rulează prin
`MSYS_NO_PATHCONV=1 wsl -d Ubuntu -- bash /home/andrei/.../scripts/run_seeds.sh`.

## Cum funcționează generatorul CRT

Fiecare stimul alege o clasă după `class_weights`:

1. **legal**: alege o extensie după `ext_weights` (I, M, Zicsr, Priv, Zifencei, B),
   apoi o instrucțiune din ea, și completează câmpurile libere cu constrângeri:
   - registre: `reg_x0_prob` / `reg_x31_prob` (colțuri), restul uniform
   - imediați: `imm_corner_prob` → {0, ±1, ±2, min, max}, restul uniform
   - CSR: `csr_known_prob` → lista CSR-urilor Ibex, altfel adresă random
   - SYSTEM: `sys_dirty_prob` → rd/rs1 ≠ 0 (ramura ilegală)
2. **mutated**: o instrucțiune legală cu 1–3 biți flipați în opcode/funct3/funct7/funct12;
   lovește ramurile `illegal_insn = 1` aflate aproape de encodările legale.
3. **random_word**: 32 de biți random, opțional cu opcode major legal.

Intrările laterale sunt și ele randomizate: `instr_first_cycle_i`, `branch_taken_i`,
`illegal_c_insn_i`. Pentru instrucțiunile multi-ciclu (ternare bitmanip) testul
reaplică ciclul 2 (`first_cycle=0`), ca să exercite calea rs3.

## Primele rezultate (smoke test, 2 seed-uri × 1000 stimuli)

| Config / profil | branch | line | toggle | funcțional |
|---|---|---|---|---|
| RV32B=0, `default` | 51.2% | 79.7% | 89.4% | 97.6% |
| RV32B=3, `default` | 64.5% | 95.5% | 90.3% | 98.4% |
| RV32B=0, `pure_random` | 26.2% | 34.0% | 86.2% | – |

Atenție: cu RV32B=0, o mare parte din ramurile bitmanip sunt **inaccesibile prin
construcție** (parametru constant), așa că 100% nu este ținta. Pasul următor de
coverage closure este să clasifici fiecare punct neacoperit din `code_cov.txt`
ca *reachable* (ajustezi constrângerile sau profilul) sau *unreachable*
(îl excluzi sau îl documentezi).

Goluri funcționale cunoscute:
- `OP_A_FWD` (`alu_op_a_mux_sel`) este setat de ID stage, nu de decoder, deci e probabil
  inaccesibil aici;
- `imm_b_mux_sel` 4/7: de verificat care valori le produce decoderul;
- `LUI:1` / `JAL:1`: se pot atinge doar prin `illegal_c_insn_i=1`; crește `illegal_c_prob`.

## Experimentul LLM-CRT pe condiții (A / B / C)

`llm_pipeline.py` rulează experimentul controlat. Fiecare condiție fixează ce primește
LLM-ul:
- **A**: ca în paper (descrierea bins + ISA + feedback);
- **B**: ca un expert (A + RTL);
- **C**: B + codul monitorului de coverage.

Fiecare rulare (`A_run1`, `B_run2`, ...) e independentă. **Doar subagenții editează CRT-ul**;
fiecare pass are trei pași:
1. **Subagentul de sinteză** gândește stream-urile și le scrie el în
   `crt/llm_runs/<run>_p<k>.py`. Apoi rulează `llm_pipeline.py check --stage synth`, care
   importă împreună toate pass-urile rulării (acesta e merge-ul), validează builderele și
   salvează un snapshot. La final își scrie raportul în `llm_passes/<run>/`.
2. **Alt subagent, de review,** verifică fișierul, îl repară direct, rulează
   `check --stage review` și își scrie review-ul.
3. **Orchestratorul** doar generează prompturile, măsoară și construiește feedback-ul.

```bash
python3 llm_pipeline.py synth  --run A_run1 --pass 1     # promptul pentru agentul de sinteză
python3 llm_pipeline.py review --run A_run1 --pass 1     # promptul pentru agentul de review
bash scripts/measure_llm_run.sh A_run1 1                 # după review: măsurare
python3 scripts/summarize_llm_runs.py --md               # tabelul tuturor rulărilor
```

Rezultatele și interpretarea sunt în `PAPER_COMPARISON.md`.

## LLM-CRT și comparația cu paper-ul LLM4DV (istoric: Pass 1 = rularea C_run1)

Aceeași metodologie ca în `rl-coverage/level11_maxconfig`: un agent izolat de sinteză
scrie funcțiile `build_*_stream(rng)` citind doar RTL-ul, `crt/isa.py` și descrierea
planului de coverage. Un agent izolat de review re-verifică fiecare citare și fiecare
encodare, iar funcțiile confirmate intră în `crt/llm_streams.py`. Prompturile sunt fixe
(`llm_crt_prompts.py`), iar fiecare pass e arhivat în `llm_passes/`.

- `crt/ml4dv_coverage.py`: metrica din paper (2107 bins), port exact din ml4dv.
- `PAPER_MODE=1`: intrările laterale legate ca în ml4dv.
- `profiles/llm_crt.json`: doar stimulii din stream-urile LLM.
- Rezultatele sunt în **`PAPER_COMPARISON.md`**; le reproduci cu `bash scripts/reproduce_paper_comparison.sh`.

Pe scurt: LLM-CRT atinge 2042/2107 (96.92%, plafonul real, pentru că SUBI nu există) în ≤3k
stimuli. Cel mai bun rezultat din paper e Claude 3.5 Sonnet cu 2006 (95.21%), după ~680 de mesaje.

## Pași următori

- Pentru fiecare hole: profil nou în `profiles/` (de ex. ponderi mari pe extensia lipsă)
  și o campanie separată; rezultatele se combină cu `verilator_coverage --write`.
- Curba coverage vs. număr de stimuli (CRT vs. `pure_random`): rulează cu
  `CRT_N` = 100, 500, 1000, 5000.
- RTL upstream: `make RTL_DIR=../../cpu/src_upstream/lowrisc_ibex_ibex_core_0.1/rtl`.
  Atenție: porturile `ibex_decoder` din upstream pot diferi, deci wrapper-ul s-ar putea
  să trebuiască adaptat.
- Același schelet (wrapper + isa + generator + func_coverage) se poate refolosi pentru
  alte module (`ibex_compressed_decoder`, `ibex_alu`, ...).
