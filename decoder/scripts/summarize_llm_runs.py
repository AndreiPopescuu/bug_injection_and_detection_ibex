#!/usr/bin/env python3
"""Collect every paper-mode result (baselines + LLM runs/passes) into one table.

  python3 scripts/summarize_llm_runs.py [--md]
"""
import argparse
import json
import re
import statistics
from pathlib import Path

HERE = Path(__file__).resolve().parent.parent
RES = HERE / "results"
CHECK = [100, 300, 1000, 3000, 10000]


def load(d):
    files = sorted(d.glob("ml4dv_cov_seed*.json"))
    if not files:
        return None
    js = [json.load(open(f)) for f in files]
    per_seed = [j["hit"] for j in js]
    curve = {c: statistics.mean(j["curve"].get(str(c), j["hit"]) for j in js) for c in CHECK}
    code = {}
    cc = d / "code_cov.txt"
    if cc.exists():
        for line in cc.read_text().splitlines()[1:5]:
            m = re.match(r"\s+(v_\w+)\s+(\d+)/(\d+)", line)
            if m:
                code[m.group(1)] = (int(m.group(2)), int(m.group(3)))
    return {"seeds": len(js), "n": js[0]["n"], "max": max(per_seed), "curve": curve, "code": code}


def rows():
    out = []
    for label, tag in [("random (100k)", "paper_random"), ("random (1M)", "paper_random_1M"),
                       ("hand CRT", "paper_crt_default"), ("C_run1 p1", "paper_llm_pass1")]:
        r = load(RES / f"{tag}_e0_m2_b0")
        if r:
            out.append((label, r))
    for d in sorted(RES.glob("llm_*_p*_e0_m2_b0")):
        m = re.match(r"llm_(\w+_run\d+)_p(\d+)_", d.name)
        r = load(d)
        if r:
            out.append((f"{m.group(1)} p{m.group(2)}", r))
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--md", action="store_true")
    a = ap.parse_args()
    hdr = ["run", "max bins"] + [f"@{c}" for c in CHECK] + ["branch", "line", "toggle"]
    lines = []
    for label, r in rows():
        code = [f"{r['code'][k][0]}/{r['code'][k][1]}" if k in r["code"] else "-"
                for k in ("v_branch", "v_line", "v_toggle")]
        lines.append([label, str(r["max"])] + [f"{r['curve'][c]:.0f}" for c in CHECK] + code)
    if a.md:
        print("| " + " | ".join(hdr) + " |")
        print("|" + "---|" * len(hdr))
        for l in lines:
            print("| " + " | ".join(l) + " |")
    else:
        w = [max(len(x[i]) for x in [hdr] + lines) for i in range(len(hdr))]
        for l in [hdr] + lines:
            print("  ".join(s.ljust(w[i]) for i, s in enumerate(l)))


if __name__ == "__main__":
    main()
