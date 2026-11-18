#!/usr/bin/env bash
# Random-stimulus baseline campaign for the ibex_cpu ml4dv coverage plan.
#
# Usage:
#   N_SEEDS=3 CRT_N=10000 bash scripts/baseline_random.sh
set -euo pipefail

HERE="$(cd "$(dirname "$0")/.." && pwd)"
cd "$HERE"

N_SEEDS="${N_SEEDS:-3}"
CRT_N="${CRT_N:-10000}"
TAG="${TAG:-pure_random}"
OUT_DIR="results/${TAG}_n${CRT_N}"

mkdir -p "$OUT_DIR"
echo "[baseline_random] seeds=$N_SEEDS n_insn=$CRT_N tag=$TAG out=$OUT_DIR"

for ((s = 0; s < N_SEEDS; s++)); do
  out_json="$OUT_DIR/seed${s}.json"
  echo "[baseline_random] --- seed $s ---"
  CRT_SEED="$s" CRT_N="$CRT_N" CRT_OUT="$out_json" make -s 2>&1 | grep -E 'bins|FAIL|Error' | tail -5
done

echo ""
echo "[baseline_random] summary:"
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
    pcts = [r[3] for r in rows]
    hits = [r[1] for r in rows]
    print(f"  mean: hit={statistics.mean(hits):.1f}  pct={statistics.mean(pcts):.2f}%")

# Union across seeds (bins hit by any seed)
all_bins = {}
for p in paths:
    for name, cnt in json.load(open(p))["bins"].items():
        all_bins[name] = all_bins.get(name, 0) + cnt
union_hit = sum(1 for v in all_bins.values() if v > 0)
print(f"  union across seeds: {union_hit}/{len(all_bins)} ({union_hit/len(all_bins)*100:.2f}%)")
EOF
