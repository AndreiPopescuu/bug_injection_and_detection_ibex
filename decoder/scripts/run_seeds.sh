#!/bin/bash
# Run the CRT decoder test over several seeds, merge code + functional coverage.
#
#   bash scripts/run_seeds.sh                                  # 10 seeds x 2000, RV32B=0
#   N_SEEDS=20 CRT_N=5000 RV32B=3 TAG=full bash scripts/run_seeds.sh
#   CRT_PROFILE=pure_random TAG=baseline bash scripts/run_seeds.sh
#
# Output: results/<TAG>_e<E>_m<M>_b<B>/
#   coverage_seedN.dat  log_seedN.txt  func_cov_seedN.json
#   merged.dat  code_cov.txt  func_cov.txt  annotated/
set -euo pipefail

cd "$(dirname "$0")/.."
VENV=${VENV:-/home/andrei/ibex_env}
[ -f "$VENV/bin/activate" ] && source "$VENV/bin/activate"

N_SEEDS=${N_SEEDS:-10}
SEED0=${SEED0:-0}
CRT_N=${CRT_N:-2000}
CRT_PROFILE=${CRT_PROFILE:-default}
RV32E=${RV32E:-0}
RV32M=${RV32M:-2}
RV32B=${RV32B:-0}
TAG=${TAG:-$CRT_PROFILE}
export PAPER_MODE=${PAPER_MODE:-0}
OUT="$PWD/results/${TAG}_e${RV32E}_m${RV32M}_b${RV32B}"
mkdir -p "$OUT"

echo "CRT run: seeds=$SEED0..$((SEED0 + N_SEEDS - 1)) n=$CRT_N profile=$CRT_PROFILE RV32B=$RV32B -> $OUT"
for s in $(seq "$SEED0" $((SEED0 + N_SEEDS - 1))); do
    rm -f coverage.dat
    make -s RV32E="$RV32E" RV32M="$RV32M" RV32B="$RV32B" \
         CRT_SEED="$s" CRT_N="$CRT_N" CRT_PROFILE="$CRT_PROFILE" CRT_OUT="$OUT" \
         > "$OUT/log_seed$s.txt" 2>&1 || { echo "seed $s FAILED, see $OUT/log_seed$s.txt"; exit 1; }
    mv coverage.dat "$OUT/coverage_seed$s.dat"
    python3 scripts/cov_report.py "$OUT/coverage_seed$s.dat" | sed -n '2,10p' | tr '\n' ' ' | sed "s/^/seed $s: /"
    echo
done

verilator_coverage --write "$OUT/merged.dat" "$OUT"/coverage_seed*.dat
python3 scripts/cov_report.py "$OUT/merged.dat" --uncovered > "$OUT/code_cov.txt"
python3 scripts/merge_func_cov.py "$OUT"/func_cov_seed*.json --holes --out "$OUT/func_cov_merged.json" > "$OUT/func_cov.txt"
python3 scripts/merge_ml4dv_cov.py "$OUT"/ml4dv_cov_seed*.json --holes --label "$TAG" > "$OUT/ml4dv_cov.txt"
rm -rf "$OUT/annotated"
verilator_coverage --annotate "$OUT/annotated" --annotate-min 1 "$OUT/merged.dat" > /dev/null

echo
sed -n '1,8p' "$OUT/code_cov.txt"
echo
sed -n '1,30p' "$OUT/func_cov.txt" | grep -v '^$' | sed -n '1,26p'
echo
sed -n '1,20p' "$OUT/ml4dv_cov.txt"
echo
echo "Annotated RTL (uncovered lines marked with %): $OUT/annotated/"
