#!/bin/bash
# Measure an LLM-CRT run after pass K (all passes 1..K active), paper mode, 3 seeds x 100k.
#   bash scripts/measure_llm_run.sh A_run1 2
set -e
cd "$(dirname "$0")/.."
source /home/andrei/ibex_env/bin/activate
RUN=$1; K=$2
export LLM_MODULE=$(python3 llm_pipeline.py modules --run "$RUN" --pass "$K")
TAG=$(python3 llm_pipeline.py tag --run "$RUN" --pass "$K")
PAPER_MODE=1 N_SEEDS=3 CRT_N=100000 CRT_PROFILE=llm_crt TAG="$TAG" bash scripts/run_seeds.sh > /dev/null
OUT=results/${TAG}_e0_m2_b0
echo "== $RUN pass $K  ($LLM_MODULE)"
sed -n '2,5p' "$OUT/code_cov.txt"
sed -n '2,4p' "$OUT/ml4dv_cov.txt"
