#!/usr/bin/env python3
"""
Merge functional-coverage JSON dumps from several seeds and print the report.

  python3 scripts/merge_func_cov.py results/run/func_cov_seed*.json [--holes]
"""

import argparse
import json
from collections import defaultdict


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("files", nargs="+")
    ap.add_argument("--holes", action="store_true", help="list bins never hit")
    ap.add_argument("--out", help="write merged JSON here")
    a = ap.parse_args()

    merged = defaultdict(lambda: defaultdict(int))
    stats = defaultdict(int)
    cfg = None
    for f in a.files:
        d = json.load(open(f))
        c = (d["rv32b"], d["rv32m"])
        if cfg and c != cfg:
            raise SystemExit(f"{f}: config {c} differs from {cfg} - do not merge across configs")
        cfg = c
        for k, v in d["stats"].items():
            stats[k] += v
        for cp, bins in d["coverpoints"].items():
            for b, n in bins.items():
                merged[cp][b] += n

    print("=" * 64)
    print(f"MERGED FUNCTIONAL COVERAGE  ({len(a.files)} seeds, RV32B={cfg[0]}, RV32M={cfg[1]})")
    print(f"stimuli={stats['total']}  illegal={stats['illegal']}")
    print("-" * 64)
    th = tt = 0
    for cp, bins in merged.items():
        h = sum(1 for n in bins.values() if n)
        th, tt = th + h, tt + len(bins)
        print(f"  {cp:<24} {h:>5}/{len(bins):<5} {100.0 * h / len(bins):6.2f}%")
    print("-" * 64)
    print(f"  {'TOTAL':<24} {th:>5}/{tt:<5} {100.0 * th / tt:6.2f}%")
    print("=" * 64)
    if a.holes:
        for cp, bins in merged.items():
            holes = [b for b, n in bins.items() if not n]
            if holes:
                print(f"\n{cp} holes ({len(holes)}): {', '.join(holes)}")
    if a.out:
        json.dump({"rv32b": cfg[0], "rv32m": cfg[1], "stats": stats,
                   "coverpoints": merged}, open(a.out, "w"), indent=1)


if __name__ == "__main__":
    main()
