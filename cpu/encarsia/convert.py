"""Convert Encarsia Ibex bug corpus (RTLIL) to Verilog via yosys.

For each bug directory:
  driver/<id>/reference_driver.rtlil  → reference.v
  driver/<id>/host_driver.rtlil       → host_<id>.v
  multiplexer/reference.rtlil         → reference.v  (shared)
  multiplexer/<id>/host_amt.rtlil     → host_<id>.v

Output layout: cpu/encarsia/converted/
  reference_driver.v
  reference_mux.v        (if mux conversion succeeds — needs Encarsia yosys fork)
  driver_<id>.v
  mux_<id>.v
  manifest.json

Multiplexer bugs currently fail because they use Encarsia's custom `$amt`
yosys cell type, which the standard yosys cannot lower. Only driver bugs
(15/30) are converted successfully with vanilla yosys.

After conversion, each output's top module is renamed via text substitution
to a clean name so the testbench can instantiate it without escaped idents.
"""
from __future__ import annotations

import json
import re
import shutil
import subprocess
from pathlib import Path

HERE = Path(__file__).resolve().parent
ENCARSIA_ROOT = Path("/tmp/encarsia_ibex/ibex")
OUT_DIR = HERE / "converted"

YOSYS_CANDIDATES = [
    Path("/home/andre/oss-cad-suite/bin/yosys"),
    Path("/usr/bin/yosys"),
]


def find_yosys() -> str:
    for c in YOSYS_CANDIDATES:
        if c.exists():
            return str(c)
    try:
        subprocess.run(["yosys", "-V"], check=True, capture_output=True)
        return "yosys"
    except Exception as e:
        raise RuntimeError("yosys not found") from e


def rtlil_to_verilog(yosys: str, rtlil_path: Path, out_v: Path) -> None:
    cmd = [
        yosys, "-q",
        "-p", f"read_rtlil {rtlil_path}; write_verilog -noattr {out_v}",
    ]
    r = subprocess.run(cmd, capture_output=True, text=True)
    if r.returncode != 0:
        raise RuntimeError(f"yosys fail on {rtlil_path.name}: {r.stderr[:300]}")


TOP_MODULE_PAT = re.compile(
    r"^module\s+\\\$paramod\$[0-9a-f]+\\cellift_ibex_core\b",
    re.M,
)


def rename_top(verilog_path: Path, new_top: str) -> None:
    """Rename the top paramod module to `new_top` for clean instantiation."""
    text = verilog_path.read_text()
    text, n = TOP_MODULE_PAT.subn(f"module {new_top}", text, count=1)
    if n != 1:
        raise RuntimeError(f"could not find top paramod in {verilog_path}")
    verilog_path.write_text(text)


def convert_all() -> dict:
    yosys = find_yosys()
    print(f"using yosys: {yosys}")

    if OUT_DIR.exists():
        shutil.rmtree(OUT_DIR)
    OUT_DIR.mkdir(parents=True)

    manifest: list[dict] = []
    skipped: list[dict] = []

    # -- Driver bugs -----------------------------------------------------
    driver_root = ENCARSIA_ROOT / "driver"
    first_bug = sorted(driver_root.iterdir())[0]
    ref_rtlil = first_bug / "reference_driver.rtlil"
    ref_v = OUT_DIR / "reference_driver.v"
    print(f"[driver] golden: {ref_rtlil}")
    rtlil_to_verilog(yosys, ref_rtlil, ref_v)
    rename_top(ref_v, "ibex_golden_driver")
    print(f"[driver] golden -> ibex_golden_driver  ({ref_v.stat().st_size // 1024} KB)")

    for bug_dir in sorted(driver_root.iterdir()):
        if not bug_dir.is_dir():
            continue
        bug_id = bug_dir.name
        host = bug_dir / "host_driver.rtlil"
        if not host.exists():
            skipped.append({"id": f"driver_{bug_id}", "reason": "no host file"})
            continue
        out_v = OUT_DIR / f"driver_{bug_id}.v"
        try:
            rtlil_to_verilog(yosys, host, out_v)
            rename_top(out_v, f"ibex_bug_driver_{bug_id}")
        except RuntimeError as e:
            skipped.append({"id": f"driver_{bug_id}", "reason": str(e)[:100]})
            print(f"[driver {bug_id}] FAIL: {e}")
            continue
        manifest.append({
            "id": f"driver_{bug_id}",
            "category": "driver",
            "subtype": "signal_mix_up",
            "encarsia_id": bug_id,
            "verilog": out_v.name,
            "golden": ref_v.name,
            "top_module": f"ibex_bug_driver_{bug_id}",
            "golden_top_module": "ibex_golden_driver",
        })
        print(f"[driver {bug_id}] OK ({out_v.stat().st_size // 1024} KB)")

    # -- Multiplexer bugs ------------------------------------------------
    # Expected to fail with vanilla yosys (uses Encarsia's custom $amt cell).
    mux_root = ENCARSIA_ROOT / "multiplexer"
    ref_mux_rtlil = mux_root / "reference.rtlil"
    ref_mux_v = OUT_DIR / "reference_mux.v"
    try:
        rtlil_to_verilog(yosys, ref_mux_rtlil, ref_mux_v)
        rename_top(ref_mux_v, "ibex_golden_mux")
        mux_ok = True
    except RuntimeError as e:
        mux_ok = False
        skipped.append({"id": "mux_reference", "reason": f"needs Encarsia yosys fork: {str(e)[:120]}"})
        print(f"[mux] reference SKIP (needs Encarsia yosys fork): {str(e)[:120]}")

    if mux_ok:
        for bug_dir in sorted(mux_root.iterdir()):
            if not bug_dir.is_dir():
                continue
            bug_id = bug_dir.name
            host = bug_dir / "host_amt.rtlil"
            if not host.exists():
                continue
            out_v = OUT_DIR / f"mux_{bug_id}.v"
            try:
                rtlil_to_verilog(yosys, host, out_v)
                rename_top(out_v, f"ibex_bug_mux_{bug_id}")
            except RuntimeError as e:
                skipped.append({"id": f"mux_{bug_id}", "reason": str(e)[:100]})
                continue
            manifest.append({
                "id": f"mux_{bug_id}",
                "category": "multiplexer",
                "subtype": "broken_conditional",
                "encarsia_id": bug_id,
                "verilog": out_v.name,
                "golden": ref_mux_v.name,
                "top_module": f"ibex_bug_mux_{bug_id}",
                "golden_top_module": "ibex_golden_mux",
            })
            print(f"[mux {bug_id}] OK")

    summary = {
        "n_bugs_converted": len(manifest),
        "n_skipped": len(skipped),
        "bugs": manifest,
        "skipped": skipped,
    }
    (OUT_DIR / "manifest.json").write_text(json.dumps(summary, indent=2))
    print(f"\n✓ {len(manifest)} bugs converted; {len(skipped)} skipped")
    print(f"  manifest: {OUT_DIR / 'manifest.json'}")
    return summary


if __name__ == "__main__":
    convert_all()
