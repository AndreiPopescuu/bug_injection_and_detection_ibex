# Session handoff — pentru următoarea sesiune Claude

**Ultima sesiune**: 2026-11-23
**Ultimul commit**: `cf2dc98` (pushed la origin/main)
**User instrucțiune**: "continuăm de pe alt PC, pornește de aici"

---

## Pentru Claude: citește întâi astea 2 în ordine

1. [`PROGRESS_MUTATION_LLM.md`](PROGRESS_MUTATION_LLM.md) — context decoder + CPU hand-crafted (20/20 kills via prompt engineering)
2. [`PROGRESS_ENCARSIA_LLM_RL.md`](PROGRESS_ENCARSIA_LLM_RL.md) — pipeline Encarsia + 9 stimuli testați + ensemble 5/15 (33.3%)

---

## Status actual

**Best result pe Encarsia**: 5/15 kills ensemble
- L6 PPO stoch kills: `{526, 858, 963, 974}`
- `ppo_encarsia` (78 safe ops) kills: `{526, 779, 858}`
- **UNION**: `{526, 779, 858, 963, 974}` = **5/15**

**10 bugs survived**: `254, 293, 394, 565, 619, 743, 820, 945, 1198` + `39` (infinite loop crash).

**Trend coverage**: line 34.3% → 46.5%, toggle 8.6% → 33.2% (monotonă crescătoare pe stimuli consecutivi).

---

## Next step decis (plan A + B)

### Pas A: Analize per-bug pe 10 bugs survived (prioritate 1)

Pentru fiecare bug, Encarsia furnizează `proof.vcd` (counterexample Jasper formal solver). Arată **exact ce sequence** face bug-ul să se manifeste.

Locație corpus: `/tmp/encarsia_ibex/ibex/driver/<ID>/proof.vcd`
(pe acest PC — pe alt PC trebuie re-clonat: `git clone --depth 1 https://github.com/comsec-group/encarsia /tmp/encarsia && tar xzf /tmp/encarsia/EnCorpus_ibex.tar.gz -C /tmp/encarsia_ibex`)

Workflow per bug:
1. `gtkwave /tmp/encarsia_ibex/ibex/driver/<ID>/proof.vcd` (sau parse Python)
2. Identifică signal-ul mutat (din diff RTLIL)
3. Trace back în waveform: ce input sequence produce prima divergență golden vs host
4. Document trigger condition

Timp estimat: ~2.5h pentru 10 bugs

Output așteptat: `cpu/encarsia/BUG_ANALYSIS.md` cu per-bug:
- Signal mutat
- Trigger condition (ex. "BLTU după store la adresă misaligned")
- Ops necesare (RISC-V instruction patterns)

### Pas B: LLM-CRT targeted (după A)

După analize, scriem prompt Claude cu fiecare trigger condition:
```
"Target this bug: when signal X is driven by Y instead of Z,
 the bug manifests under sequence: [..]. Write a builder that
 constructs exactly this sequence."
```

Expected kill rate: 10-13/15 (unlock majoritatea celor 10 survived).

---

## Comenzi utile pe orice PC

### Setup pe PC nou
```bash
cd ~
git clone https://github.com/AndreiPopescuu/bug_injection_and_detection_ibex
cd bug_injection_and_detection_ibex

# Encarsia corpus (pentru proof.vcd)
git clone --depth 1 https://github.com/comsec-group/encarsia /tmp/encarsia
mkdir -p /tmp/encarsia_ibex
tar xzf /tmp/encarsia/EnCorpus_ibex.tar.gz -C /tmp/encarsia_ibex

# yosys via OSS CAD Suite (fără sudo)
cd ~
curl -L -O https://github.com/YosysHQ/oss-cad-suite-build/releases/latest/download/oss-cad-suite-linux-x64-20261118.tgz
tar xzf oss-cad-suite-linux-x64-*.tgz
export PATH=~/oss-cad-suite/bin:$PATH
yosys -V  # smoke test

# Python env
python3 -m venv ibex_env
source ibex_env/bin/activate
pip install cocotb==2.0.1 stable-baselines3 gymnasium numpy

# Reproduce conversion
cd ~/bug_injection_and_detection_ibex/cpu/encarsia
python3 convert.py
```

### Rerun campaign (verifică că infrastructura merge)
```bash
cd ~/bug_injection_and_detection_ibex/cpu/encarsia
source ~/ibex_env/bin/activate
export PATH=~/oss-cad-suite/bin:$PATH
PROGRAM_HEX=$(pwd)/l5_random_s0.hex PARALLEL=8 MAX_CYCLES=25000 bash run_campaign.sh
# Expected: 4/15 kills
```

---

## State pe acest PC (pe care scrie nota)

Pentru referință, pe PC-ul curent există:
- `/home/andre/ibex-crt-llm-coverage/crt-coverage/` — repo privat (artifacte sim_build, mutanți etc.)
- `/home/andre/ibex-coverage-experiments/` — repo RL (ppo_rvc_rich.zip, l9_v2_checkpoint_model.zip etc.)
- `/home/andre/bug_injection_and_detection_ibex/` — repo public (acesta, conține TOT ce e necesar reproducible)
- `/tmp/encarsia_ibex/` — corpus extras
- `~/oss-cad-suite/` — yosys + verilator 5.055
- `~/ibex_env/` — Python venv cu cocotb + sb3

Policy-urile antrenate azi (committed în repo):
- `cpu/encarsia/ppo_cellift.zip` (L9 fine-tuned pe cellift)
- `cpu/encarsia/ppo_cellift_l6.zip` (L6 fine-tuned pe cellift)
- `cpu/encarsia/ppo_encarsia.zip` (78-op from-scratch)

Checkpoints intermediare în `cpu/encarsia/ppo_*_ckpts/` (gitignored).

---

## Open questions (pentru user, mâine)

1. **Analiza per-bug sau alt approach?** Default: A+B combo. Alternative: multiplexer bugs integration, LLM-CRT cu action space extins, novelty-reward training.
2. **Driver_39 infinite loop**: kill verdict sau tratament special? E un bug genuin dar oracle-ul differential nu-l prinde — necesită liveness timeout.
3. **Scope raportare**: toate rezultatele din PROGRESS_*.md sunt curente. Vrei grafice pentru paper?

---

**Pentru Claude pe PC nou**: după ce citești documentele, confirmă cu user planul și pornește cu Pas A (analize per-bug). Toate scripturile necesare sunt în `cpu/encarsia/`.
