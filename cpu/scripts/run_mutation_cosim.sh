#!/usr/bin/env bash
# Cosim-based mutation campaign: Spike as oracle. A mutant is killed if the
# cocotb test FAILS (Spike mismatch triggers $fatal).
set -euo pipefail

HERE="$(cd "$(dirname "$0")/.." && pwd)"
cd "$HERE"

TEST_MODE="${TEST_MODE:-llm}"
N_SEEDS="${N_SEEDS:-1}"

case "$TEST_MODE" in
  llm)
    MODULE=test_llm_crt
    LLM_MODULES="$(python3 llm_pipeline.py modules --run "${RUN:-A_run1}" --pass "${PASS:-1}")"
    STIM_ENV="LLM_MODULES=$LLM_MODULES"
    STIM_NAME="llm_${RUN:-A_run1}_p${PASS:-1}"
    ;;
  llm_l4)
    MODULE=test_llm_crt_l4
    # L4 runs: the module name is passed directly (no pass-based numbering).
    LLM_MODULES="crt.llm_runs.${RUN:-L4_A_run1}_p${PASS:-1}"
    STIM_ENV="LLM_MODULES=$LLM_MODULES"
    STIM_NAME="l4_${RUN:-L4_A_run1}_p${PASS:-1}"
    ;;
  random)
    MODULE=test_random_cpu
    STIM_ENV="CRT_N=${CRT_N:-500}"
    STIM_NAME="random_n${CRT_N:-500}"
    ;;
  *)
    echo "unknown TEST_MODE=$TEST_MODE" >&2; exit 2
    ;;
esac

OUT_ROOT="results/mutation_cosim_${STIM_NAME}"
mkdir -p "$OUT_ROOT"
echo "[cosim-mut] stim=$STIM_NAME seeds=$N_SEEDS"

run_one() {
  local mut="$1"
  local out="$2"
  local mut_env=""
  mkdir -p "$out"
  if [[ -n "$mut" ]]; then
    mut_env="MUTANT=$mut"
  fi
  for ((s = 0; s < N_SEEDS; s++)); do
    local log="$out/seed${s}.log"
    env MODULE="$MODULE" CRT_SEED="$s" COSIM=1 $mut_env \
      bash -c "$STIM_ENV make -s" >"$log" 2>&1 && status="PASS" || status="FAIL"
    # Grep for cosim mismatch text — PASS means no mismatch (golden) or no mutant yet.
    local mismatch=""
    if grep -q 'Co-simulation mismatch\|FAILURE:' "$log"; then
      mismatch=$(grep -m 1 'FAILURE:' "$log" | sed 's/^.*FAILURE: *//')
    fi
    printf '    seed=%d status=%s %s\n' "$s" "$status" "$mismatch"
  done
}

echo "[cosim-mut] --- GOLDEN ---"
run_one "" "$OUT_ROOT/golden"

for mut in $(python3 -c "import json; print(' '.join(m['id'] for m in json.load(open('mutants/manifest.json'))['mutants']))"); do
  echo "[cosim-mut] --- $mut ---"
  run_one "$mut" "$OUT_ROOT/$mut"
done

echo ""
echo "[cosim-mut] kill summary:"
python3 - <<EOF
import glob, re
from pathlib import Path
root = Path("$OUT_ROOT")
mut_ids = ['golden'] + [m.name for m in sorted(root.glob('m0*'))]

def analyze(name):
    killed = 0
    total = 0
    reasons = []
    for log in sorted(root.glob(f"{name}/seed*.log")):
        total += 1
        txt = log.read_text()
        if "Co-simulation mismatch" in txt or "FAILURE:" in txt:
            killed += 1
            m = re.search(r"FAILURE:\s*(.+)$", txt, re.M)
            if m: reasons.append(m.group(1).strip())
    return killed, total, reasons

print(f"  {'mutant':<30s} {'killed':>8s}  reason(s)")
non_golden_killed = 0
non_golden_total = 0
for m in mut_ids:
    k, t, reasons = analyze(m)
    print(f"  {m:<30s} {k}/{t:<4}  {(reasons[0] if reasons else '')[:70]}")
    if m != 'golden':
        non_golden_total += 1
        if k: non_golden_killed += 1
print(f"\n  Kill rate (excl. golden): {non_golden_killed}/{non_golden_total} = {non_golden_killed/max(1,non_golden_total)*100:.0f}%")
EOF
