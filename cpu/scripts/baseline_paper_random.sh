#!/usr/bin/env bash
# Paper-mode random baseline (ml4dv RandomAgent4IC port).
#
# Usage:
#   N_SEEDS=3 CRT_CYCLES=100000 bash scripts/baseline_paper_random.sh
set -euo pipefail

HERE="$(cd "$(dirname "$0")/.." && pwd)"
cd "$HERE"

N_SEEDS="${N_SEEDS:-3}"
CRT_CYCLES="${CRT_CYCLES:-100000}"
TAG="${TAG:-paper_random}"
OUT_DIR="results/${TAG}_c${CRT_CYCLES}"

mkdir -p "$OUT_DIR"
echo "[baseline_paper_random] seeds=$N_SEEDS cycles=$CRT_CYCLES tag=$TAG out=$OUT_DIR"

for ((s = 0; s < N_SEEDS; s++)); do
  out_json="$OUT_DIR/seed${s}.json"
  echo "[baseline_paper_random] --- seed $s ---"
  MODULE=test_paper_random CRT_SEED="$s" CRT_CYCLES="$CRT_CYCLES" CRT_OUT="$out_json" \
    make -s 2>&1 | grep -E 'bins|cycle=|retirements|FAIL|Error' | tail -3
done

echo ""
echo "[baseline_paper_random] summary:"
python3 - <<EOF
import json, glob, statistics
paths = sorted(glob.glob("${OUT_DIR}/seed*.json"))
rows = []
for p in paths:
    d = json.load(open(p))
    rows.append((d["seed"], d["hit_bins"], d["total_bins"], d["coverage_pct"], d.get("retirements", "?")))
print(f"  {'seed':>4}  {'hit':>5}/{'total':>5}  {'%':>7}  {'retirements':>12}")
for s, h, t, pct, r in rows:
    print(f"  {s:>4}  {h:>5}/{t:>5}  {pct:>6.2f}%  {r:>12}")
if len(rows) > 1:
    print(f"  mean: hit={statistics.mean(r[1] for r in rows):.1f}  pct={statistics.mean(r[3] for r in rows):.2f}%")

all_bins = {}
for p in paths:
    for name, cnt in json.load(open(p))["bins"].items():
        all_bins[name] = all_bins.get(name, 0) + cnt
union_hit = sum(1 for v in all_bins.values() if v > 0)
print(f"  union: {union_hit}/{len(all_bins)} ({union_hit/len(all_bins)*100:.2f}%)")
EOF
