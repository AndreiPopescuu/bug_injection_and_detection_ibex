#!/usr/bin/env bash
# For each mutant in mutants/manifest.json, build the mutant RTL and run a
# stimulus set. Compare the resulting coverage dict against the golden run.
# A mutant is "killed" if its coverage dict differs OR the test crashes.
#
# Usage:
#   TEST_MODE=random    bash scripts/run_mutation.sh      # linear random
#   TEST_MODE=paper     bash scripts/run_mutation.sh      # paper-mode random
#   TEST_MODE=llm RUN=A_run1 PASS=1 bash scripts/run_mutation.sh
set -euo pipefail

HERE="$(cd "$(dirname "$0")/.." && pwd)"
cd "$HERE"

TEST_MODE="${TEST_MODE:-llm}"
N_SEEDS="${N_SEEDS:-3}"

case "$TEST_MODE" in
  random)
    MODULE=test_random_cpu
    STIM_ENV="CRT_N=${CRT_N:-10000}"
    STIM_NAME="random_n${CRT_N:-10000}"
    ;;
  paper)
    MODULE=test_paper_random
    STIM_ENV="CRT_CYCLES=${CRT_CYCLES:-100000}"
    STIM_NAME="paper_c${CRT_CYCLES:-100000}"
    ;;
  llm)
    MODULE=test_llm_crt
    LLM_MODULES="$(python3 llm_pipeline.py modules --run "${RUN:-A_run1}" --pass "${PASS:-1}")"
    STIM_ENV="LLM_MODULES=$LLM_MODULES"
    STIM_NAME="llm_${RUN:-A_run1}_p${PASS:-1}"
    ;;
  llm_l4)
    MODULE=test_llm_crt_l4
    LLM_MODULES="crt.llm_runs.${RUN:-L4_A_run1}_p${PASS:-1}"
    STIM_ENV="LLM_MODULES=$LLM_MODULES"
    STIM_NAME="l4_${RUN:-L4_A_run1}_p${PASS:-1}"
    ;;
  *)
    echo "unknown TEST_MODE=$TEST_MODE" >&2; exit 2
    ;;
esac

OUT_ROOT="results/mutation_${STIM_NAME}"
mkdir -p "$OUT_ROOT"
echo "[run_mutation] stim=$STIM_NAME seeds=$N_SEEDS"

run_one() {
  # $1 = mutant_id ("" for golden), $2 = output dir
  local mut="$1"
  local out="$2"
  local mut_env=""
  mkdir -p "$out"
  if [[ -n "$mut" ]]; then
    mut_env="MUTANT=$mut"
  fi
  for ((s = 0; s < N_SEEDS; s++)); do
    local out_json="$out/seed${s}.json"
    env MODULE="$MODULE" CRT_SEED="$s" CRT_OUT="$out_json" $mut_env \
      bash -c "$STIM_ENV make -s" >"$out/seed${s}.log" 2>&1 \
      && echo "    seed=$s OK" \
      || echo "    seed=$s CRASH (exit $?)"
  done
}

echo "[run_mutation] --- GOLDEN ---"
run_one "" "$OUT_ROOT/golden"

for mut in $(python3 -c "import json; print(' '.join(m['id'] for m in json.load(open('mutants/manifest.json'))['mutants']))"); do
  echo "[run_mutation] --- $mut ---"
  run_one "$mut" "$OUT_ROOT/$mut"
done

echo ""
echo "[run_mutation] kill matrix:"
python3 - <<EOF
import glob, json, os
from pathlib import Path

root = Path("$OUT_ROOT")
mut_ids = [m["id"] for m in json.load(open("mutants/manifest.json"))["mutants"]]
seeds = range($N_SEEDS)

def load_run(path):
    if not path.exists():
        return None
    try:
        d = json.load(open(path))
        return (d.get("bins"), d.get("retirement_trace"))
    except Exception:
        return None

golden = {s: load_run(root / "golden" / f"seed{s}.json") for s in seeds}

print(f"  {'mutant':<30s}  {'killed':>7s}  {'oracle':<16s}  reason")
total_killed = 0
for mut in mut_ids:
    killed_seeds = []
    reasons = []
    oracle_hits = set()
    for s in seeds:
        g = golden[s]
        m = load_run(root / mut / f"seed{s}.json")
        if g is None:
            reasons.append("golden-missing"); continue
        if m is None:
            killed_seeds.append(s); oracle_hits.add("crash"); reasons.append(f"s{s}:crash"); continue
        gb, gt = g
        mb, mt = m
        reason_bits = []
        # Oracle A: hit-bin vector differs
        if gb and mb:
            gv = {k: int(v > 0) for k, v in gb.items()}
            mv = {k: int(v > 0) for k, v in mb.items()}
            if gv != mv:
                diffs = [k for k in gv if gv[k] != mv[k]]
                reason_bits.append(f"cov({len(diffs)})"); oracle_hits.add("cov")
        # Oracle B: retirement trace differs
        if gt and mt:
            # Allow truncation (CPU may halt earlier under mutant). Compare the
            # shortest common prefix: if any position disagrees, kill.
            n = min(len(gt), len(mt))
            diffs = [i for i in range(n) if tuple(gt[i]) != tuple(mt[i])]
            if diffs or len(gt) != len(mt):
                reason_bits.append(f"trace(first@{diffs[0] if diffs else 'len'}; {len(mt)}vs{len(gt)})")
                oracle_hits.add("trace")
        if reason_bits:
            killed_seeds.append(s); reasons.append(f"s{s}:{','.join(reason_bits)}")
    killed = len(killed_seeds) > 0
    total_killed += int(killed)
    marker = "YES" if killed else " no"
    oracles = ",".join(sorted(oracle_hits)) if oracle_hits else "-"
    print(f"  {mut:<30s}  {marker:>7s}  {oracles:<16s}  {'; '.join(reasons[:3])}")

stim_name = "${STIM_NAME}"
print(f"\n  Kill rate ({stim_name}): {total_killed}/{len(mut_ids)} = {total_killed/len(mut_ids)*100:.1f}%")
EOF
