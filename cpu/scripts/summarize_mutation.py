"""Aggregate mutation kill-rate results across stimulus modes.

Usage:
  python3 scripts/summarize_mutation.py \
    results/mutation_random_n500 results/mutation_llm_A_run1_p1

Produces a markdown table of per-mutant kill verdicts and overall kill rates.
"""
from __future__ import annotations

import glob
import json
import re
import sys
from collections import defaultdict
from pathlib import Path


def load_run(path: Path):
    if not path.exists():
        return None
    try:
        d = json.load(open(path))
        return (d.get("bins"), d.get("retirement_trace"))
    except Exception:
        return None


def kill_analysis(root: Path, mut_ids: list[str]) -> dict:
    """Return {mutant_id: {'killed_seeds': [...], 'oracle_hits': {...}}} aggregated across seeds."""
    seed_jsons = sorted(glob.glob(str(root / "golden" / "seed*.json")))
    seeds = [int(re.search(r"seed(\d+)", s).group(1)) for s in seed_jsons]

    goldens = {s: load_run(root / "golden" / f"seed{s}.json") for s in seeds}
    out = {}
    for mut in mut_ids:
        killed_seeds: list[int] = []
        oracle_hits: set[str] = set()
        for s in seeds:
            g = goldens.get(s)
            m = load_run(root / mut / f"seed{s}.json")
            if g is None:
                continue
            if m is None:
                killed_seeds.append(s)
                oracle_hits.add("crash")
                continue
            gb, gt = g
            mb, mt = m
            found = False
            if gb and mb:
                gv = {k: int(v > 0) for k, v in gb.items()}
                mv = {k: int(v > 0) for k, v in mb.items()}
                if gv != mv:
                    oracle_hits.add("cov")
                    found = True
            if gt and mt:
                n = min(len(gt), len(mt))
                diffs_any = any(tuple(gt[i]) != tuple(mt[i]) for i in range(n))
                if diffs_any or len(gt) != len(mt):
                    oracle_hits.add("trace")
                    found = True
            if found:
                killed_seeds.append(s)
        out[mut] = {"killed_seeds": sorted(killed_seeds), "oracle_hits": sorted(oracle_hits), "n_seeds": len(seeds)}
    return out


def main():
    roots = [Path(a) for a in sys.argv[1:]]
    if not roots:
        print("usage: summarize_mutation.py <results_dir>...", file=sys.stderr)
        sys.exit(2)

    mut_ids = [m["id"] for m in json.load(open("mutants/manifest.json"))["mutants"]]

    # Per-root analysis
    analyses = {r: kill_analysis(r, mut_ids) for r in roots}

    print("# Mutation kill rate\n")
    print(f"| Mutant | " + " | ".join(r.name for r in roots) + " |")
    print(f"|---|" + "|".join("---" for _ in roots) + "|")
    for mut in mut_ids:
        cells = []
        for r in roots:
            a = analyses[r][mut]
            k = len(a["killed_seeds"])
            n = a["n_seeds"]
            oracles = ",".join(a["oracle_hits"]) if a["oracle_hits"] else "–"
            cells.append(f"{k}/{n} ({oracles})" if k else f"**{k}/{n}**")
        print(f"| `{mut}` | " + " | ".join(cells) + " |")

    print(f"\n**Any-seed kill rate per method:**")
    for r in roots:
        total_killed = sum(1 for a in analyses[r].values() if a["killed_seeds"])
        total = len(mut_ids)
        print(f"- `{r.name}`: {total_killed}/{total} = {total_killed/total*100:.1f}%")


if __name__ == "__main__":
    main()
