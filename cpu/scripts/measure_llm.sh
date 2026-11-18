#!/usr/bin/env bash
# Measure a merged LLM-CRT run's coverage (3 seeds by default).
#
# Usage:
#   bash scripts/measure_llm.sh A_run1 1
set -euo pipefail

RUN="${1:?usage: measure_llm.sh <run> <pass>}"
PASS="${2:?usage: measure_llm.sh <run> <pass>}"

HERE="$(cd "$(dirname "$0")/.." && pwd)"
cd "$HERE"

N_SEEDS="${N_SEEDS:-3}"
TAG="llm_${RUN}_p${PASS}"
OUT_DIR="results/${TAG}"
mkdir -p "$OUT_DIR"

LLM_MODULES="$(python3 llm_pipeline.py modules --run "$RUN" --pass "$PASS")"
echo "[measure_llm] tag=$TAG seeds=$N_SEEDS modules=$LLM_MODULES"

for ((s = 0; s < N_SEEDS; s++)); do
  out_json="$OUT_DIR/seed${s}.json"
  echo "[measure_llm] --- seed $s ---"
  MODULE=test_llm_crt LLM_MODULES="$LLM_MODULES" CRT_SEED="$s" CRT_OUT="$out_json" \
    make -s 2>&1 | grep -E 'bins|program|cycles|FAIL|Error' | tail -5
done

echo ""
echo "[measure_llm] summary:"
python3 - <<EOF
import json, glob, statistics
paths = sorted(glob.glob("${OUT_DIR}/seed*.json"))
rows = []
for p in paths:
    d = json.load(open(p))
    rows.append((d["seed"], d["hit_bins"], d["total_bins"], d["coverage_pct"]))
print(f"  {'seed':>4}  {'hit':>5}/{'total':>5}  {'%':>7}")
for s, h, t, pct in rows:
    print(f"  {s:>4}  {h:>5}/{t:>5}  {pct:>6.2f}%")
if len(rows) > 1:
    print(f"  mean: hit={statistics.mean(r[1] for r in rows):.1f}  pct={statistics.mean(r[3] for r in rows):.2f}%")

all_bins = {}
for p in paths:
    for name, cnt in json.load(open(p))["bins"].items():
        all_bins[name] = all_bins.get(name, 0) + cnt
union_hit = sum(1 for v in all_bins.values() if v > 0)
print(f"  union: {union_hit}/{len(all_bins)} ({union_hit/len(all_bins)*100:.2f}%)")
EOF
