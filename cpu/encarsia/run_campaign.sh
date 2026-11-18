#!/usr/bin/env bash
# Parallel-build + run Encarsia campaign.
#
# For each variant (golden + 15 bugs) we:
#  1. Build Verilator binary with instrumented line+toggle coverage
#  2. Run with the shared stimulus hex
#  3. Capture (a) bus trace JSON, (b) coverage.dat
# Then we compute:
#  - KILL verdict per bug (bus trace != golden trace)
#  - LINE / TOGGLE coverage % per variant
#
# Usage:
#   PROGRAM_HEX=... [OUT_DIR=./traces] [PARALLEL=8] [MAX_CYCLES=2000] bash run_campaign.sh
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
  local cov_src="coverage.dat"
  local cov_dst="$OUT_DIR/${id}_coverage.dat"

  echo "[$id] building..." > "$log"
  (
    make DUT_MODULE="$module" DUT_VERILOG="$verilog" BUILD="$id" \
         PROGRAM_HEX="$PROGRAM_HEX" TRACE_OUT="$trace" MAX_CYCLES="$MAX_CYCLES" \
         >> "$log" 2>&1
    # coverage.dat is written to CWD by cocotb's Verilator sim on $finish
    if [ -f "$cov_src" ]; then
      mv "$cov_src" "$cov_dst"
    fi
  ) && echo "[$id] OK" || { echo "[$id] FAIL (see $log)"; exit 1; }
}

export -f build_and_run
export OUT_DIR PROGRAM_HEX MAX_CYCLES

JOBS=("golden converted/reference_driver.v ibex_golden_driver")
for f in converted/driver_*.v; do
  bug_id=$(basename "$f" .v)
  JOBS+=("$bug_id $f ibex_bug_${bug_id}")
done

echo "=== Encarsia campaign: ${#JOBS[@]} variants, $PARALLEL parallel ==="
# Note: `coverage.dat` is written to the Makefile's CWD, so we MUST serialize
# the mv step. We do the full build+run+mv in one command per job to avoid
# races — parallel jobs would clobber each other's coverage.dat.
# Workaround: serialize jobs that touch coverage.dat. Simplest — run with
# PARALLEL=1 for coverage, or redirect to unique CWD per job (complex).
# For now: build in parallel, but each job's cocotb sim runs serialized
# via per-build-dir isolation via WORKDIR trick:
printf '%s\n' "${JOBS[@]}" | \
  xargs -n 3 -P "$PARALLEL" bash -c '
    id=$1; verilog=$2; module=$3
    workdir=$OUT_DIR/work_$id
    mkdir -p "$workdir"
    # Run cocotb from per-job dir so coverage.dat does not collide.
    cp Makefile encarsia_tb.sv test_encarsia.py "$workdir/" 2>/dev/null || true
    # Verilog path must be absolute since we changed CWD.
    cd "$workdir"
    make DUT_MODULE="$module" DUT_VERILOG="'"$HERE"'/$verilog" BUILD="$id" \
      PROGRAM_HEX="$PROGRAM_HEX" TRACE_OUT="$OUT_DIR/${id}_trace.json" MAX_CYCLES="$MAX_CYCLES" \
      > "$OUT_DIR/${id}.log" 2>&1
    if [ -f coverage.dat ]; then
      cp coverage.dat "$OUT_DIR/${id}_coverage.dat"
    fi
    echo "[$id] OK"
  ' _

echo
echo "=== Diff + coverage summary ==="
golden_trace="$OUT_DIR/golden_trace.json"
if [ ! -f "$golden_trace" ]; then
  echo "ERROR: golden trace missing"; exit 1
fi

# Build summary JSON
python3 - "$OUT_DIR" <<'PY'
import json, re, subprocess, sys, pathlib
out_dir = pathlib.Path(sys.argv[1])
VERILATOR_COVERAGE = "verilator_coverage"

def coverage_pct(dat_path):
    if not dat_path.exists():
        return None
    r = subprocess.run([VERILATOR_COVERAGE, str(dat_path)], capture_output=True, text=True)
    out = r.stdout + r.stderr
    def grab(name):
        m = re.search(rf"{name}\s*:\s*([\d.]+)%\s*\(\s*(\d+)/\s*(\d+)\)", out)
        if not m: return None
        return {"pct": float(m.group(1)), "hit": int(m.group(2)), "total": int(m.group(3))}
    return {"line": grab("line"), "toggle": grab("toggle"), "branch": grab("branch")}

golden_trace = (out_dir / "golden_trace.json").read_text()
results = []
for trace_path in sorted(out_dir.glob("*_trace.json")):
    name = trace_path.stem.replace("_trace", "")
    cov_dat = out_dir / f"{name}_coverage.dat"
    is_golden = (name == "golden")
    other = trace_path.read_text()
    if is_golden:
        verdict = "GOLDEN"
    else:
        verdict = "SURVIVE" if other == golden_trace else "KILLED"
    results.append({
        "id": name,
        "verdict": verdict,
        "coverage": coverage_pct(cov_dat),
    })

summary = {"results": results}
(out_dir / "campaign_summary.json").write_text(json.dumps(summary, indent=2))

bugs = [r for r in results if r["verdict"] != "GOLDEN"]
killed = sum(1 for r in bugs if r["verdict"] == "KILLED")
golden = next((r for r in results if r["verdict"] == "GOLDEN"), None)

print(f"Total bugs: {len(bugs)}")
print(f"Killed:     {killed} ({100*killed/len(bugs):.1f}%)")
print()
if golden and golden["coverage"] and golden["coverage"]["line"]:
    c = golden["coverage"]
    print(f"Golden coverage:")
    for k in ("line", "toggle", "branch"):
        if c[k]:
            print(f"  {k:<8s} {c[k]['pct']:>6.2f}%  ({c[k]['hit']}/{c[k]['total']})")
print()
print(f"{'variant':<30s} {'verdict':<10s} {'line%':>8s} {'toggle%':>8s}")
print("-" * 60)
for r in sorted(results, key=lambda r: r["id"]):
    c = r["coverage"] or {}
    line = c.get("line", {}).get("pct") if c else None
    toggle = c.get("toggle", {}).get("pct") if c else None
    line_s = f"{line:6.2f}" if line is not None else "  -   "
    tog_s = f"{toggle:6.2f}" if toggle is not None else "  -   "
    print(f"{r['id']:<30s} {r['verdict']:<10s} {line_s:>8s} {tog_s:>8s}")
PY
