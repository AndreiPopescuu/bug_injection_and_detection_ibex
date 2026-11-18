#!/usr/bin/env bash
# Parallel-build + run Encarsia campaign.
#
# For each bug variant (plus golden) in the manifest, build a Verilator
# binary and run with the same stimulus hex. Compare trace against golden.
#
# Usage:
#   PROGRAM_HEX=...  bash run_campaign.sh
#
# Env:
#   PROGRAM_HEX      stimulus hex path (absolute)
#   MAX_CYCLES       sim cycles (default: scales with program size)
#   PARALLEL         max parallel builds (default: nproc / 2)
#   OUT_DIR          output trace dir (default: ./traces)
set -euo pipefail

HERE=$(cd "$(dirname "$0")" && pwd)
cd "$HERE"

: "${PROGRAM_HEX:?PROGRAM_HEX env var required}"
: "${OUT_DIR:=$HERE/traces}"
: "${PARALLEL:=$(( $(nproc) / 2 ))}"
: "${MAX_CYCLES:=2000}"

mkdir -p "$OUT_DIR"

build_and_run() {
  local id=$1 verilog=$2 module=$3
  local log="$OUT_DIR/${id}.log"
  local trace="$OUT_DIR/${id}_trace.json"

  echo "[$id] building..." >> "$log"
  (
    make DUT_MODULE="$module" DUT_VERILOG="$verilog" BUILD="$id" \
         PROGRAM_HEX="$PROGRAM_HEX" TRACE_OUT="$trace" MAX_CYCLES="$MAX_CYCLES" \
         >> "$log" 2>&1
  ) && echo "[$id] OK" || echo "[$id] FAIL (see $log)"
}

export -f build_and_run
export OUT_DIR PROGRAM_HEX MAX_CYCLES

# Build list: golden + 15 bugs
JOBS=(
  "golden converted/reference_driver.v ibex_golden_driver"
)
for f in converted/driver_*.v; do
  bug_id=$(basename "$f" .v)
  JOBS+=("$bug_id $f ibex_bug_${bug_id}")
done

echo "=== Encarsia campaign: ${#JOBS[@]} variants, $PARALLEL parallel ==="
printf '%s\n' "${JOBS[@]}" | \
  xargs -n 3 -P "$PARALLEL" bash -c 'build_and_run "$@"' _

echo "=== Diff summary ==="
golden_trace="$OUT_DIR/golden_trace.json"
if [ ! -f "$golden_trace" ]; then
  echo "ERROR: golden trace missing — golden build failed?"
  exit 1
fi

{
  echo "{"
  echo '  "golden_trace": "golden_trace.json",'
  echo '  "results": ['
  first=1
  for j in "${JOBS[@]}"; do
    id=$(echo "$j" | awk '{print $1}')
    [ "$id" = "golden" ] && continue
    trace="$OUT_DIR/${id}_trace.json"
    if [ ! -f "$trace" ]; then
      verdict="FAIL_BUILD"
    elif cmp -s "$golden_trace" "$trace"; then
      verdict="SURVIVE"
    else
      verdict="KILLED"
    fi
    [ "$first" = 1 ] && first=0 || echo ','
    printf '    {"id": "%s", "verdict": "%s"}' "$id" "$verdict"
  done
  echo
  echo '  ]'
  echo "}"
} > "$OUT_DIR/campaign_summary.json"

echo
python3 - "$OUT_DIR/campaign_summary.json" <<'PY'
import json, sys
d = json.load(open(sys.argv[1]))
results = d["results"]
killed = sum(1 for r in results if r["verdict"] == "KILLED")
survived = sum(1 for r in results if r["verdict"] == "SURVIVE")
fail = sum(1 for r in results if r["verdict"] == "FAIL_BUILD")
total = len(results)
print(f"Total bugs: {total}")
print(f"Killed:   {killed} ({100*killed/total:.1f}%)")
print(f"Survived: {survived} ({100*survived/total:.1f}%)")
print(f"Build-fail: {fail}")
print()
print("Per-bug verdicts:")
for r in sorted(results, key=lambda r: r["id"]):
    print(f"  {r['id']:<30s} {r['verdict']}")
PY
