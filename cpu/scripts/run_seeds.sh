#!/usr/bin/env bash
# Multi-seed random baseline campaign for the ibex_cpu ml4dv coverage plan.
#
# Usage:
#   N_SEEDS=3 CRT_N=100000 bash scripts/run_seeds.sh
#
# Produces results/<TAG>/random_s<i>.json for each seed and a merged summary
# via scripts/merge_cpu_cov.py (TODO).
set -euo pipefail

HERE="$(cd "$(dirname "$0")/.." && pwd)"
cd "$HERE"

N_SEEDS="${N_SEEDS:-3}"
CRT_N="${CRT_N:-10000}"
TAG="${TAG:-random}"
OUT_DIR="results/${TAG}_n${CRT_N}"

mkdir -p "$OUT_DIR"

echo "[run_seeds] seeds=$N_SEEDS n_insn=$CRT_N tag=$TAG out=$OUT_DIR"

for ((s = 0; s < N_SEEDS; s++)); do
  out_json="$OUT_DIR/seed${s}.json"
  echo "[run_seeds] --- seed $s ---"
  CRT_SEED="$s" CRT_N="$CRT_N" CRT_OUT="$out_json" make -s 2>&1 | tail -20
done

echo "[run_seeds] done. results in $OUT_DIR/"
ls -1 "$OUT_DIR/"
