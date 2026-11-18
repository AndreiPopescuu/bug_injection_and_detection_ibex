#!/usr/bin/env python3
"""
Summarise LLM4DV-plan (2107 bins) coverage over seeds.

  python3 scripts/merge_ml4dv_cov.py results/<run>/ml4dv_cov_seed*.json [--holes]

The paper reports the best single trial ("max coverage"), so per-seed
min/mean/max are printed next to the union over all seeds.
"""

import argparse
import json
import statistics

PAPER = [
    ("Formal (SymbiYosys)", 2106), ("Claude 3.5 Sonnet*", 2006), ("Claude 3 Sonnet*", 1512),
    ("GPT-3.5 Turbo*", 1466), ("CRT (100k random words)", 1154), ("Llama 3 70B*", 1135),
    ("CodeLlama 70B*", 417), ("Llama 2 70B*", 402),
]
TOTAL = 2107


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("files", nargs="+")
    ap.add_argument("--holes", action="store_true")
    ap.add_argument("--label", default="this run")
    a = ap.parse_args()

    per_seed, union, curves = [], None, []
    for f in a.files:
        d = json.load(open(f))
        per_seed.append(d["hit"])
        curves.append({int(k): v for k, v in d["curve"].items()})
        b = d["bins"]
        union = dict(b) if union is None else {k: union[k] + b[k] for k in union}
    u = sum(1 for v in union.values() if v)
    n = json.load(open(a.files[0]))["n"]

    print(f"LLM4DV PLAN ({TOTAL} bins)  {a.label}: {len(a.files)} seeds x {n} stimuli")
    print(f"  per seed: min {min(per_seed)}  mean {statistics.mean(per_seed):.1f}  "
          f"max {max(per_seed)} ({100.0 * max(per_seed) / TOTAL:.2f}%)")
    print(f"  union   : {u} ({100.0 * u / TOTAL:.2f}%)")
    pts = sorted(set().union(*curves))
    print("  mean curve: " + ", ".join(
        f"{p}:{statistics.mean(c[p] for c in curves if p in c):.0f}" for p in pts))
    print("\n  Paper Table III (best trial):")
    rows = PAPER + [(f">> {a.label} (best seed)", max(per_seed))]
    for name, h in sorted(rows, key=lambda r: -r[1]):
        print(f"    {name:<34} {h:>5}  {100.0 * h / TOTAL:6.2f}%")
    if a.holes:
        holes = [k for k, v in union.items() if not v]
        print(f"\n  union holes ({len(holes)}):")
        print("   " + " ".join(holes))


if __name__ == "__main__":
    main()
