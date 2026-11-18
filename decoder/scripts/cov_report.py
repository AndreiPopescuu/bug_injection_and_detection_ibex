#!/usr/bin/env python3
"""
Summarise a Verilator coverage.dat for one module (default: ibex_decoder).

  python3 scripts/cov_report.py results/run/merged.dat [--module ibex_decoder] [--uncovered]

coverage.dat lines look like:  C '<\x01key\x02value ...>' <count>
The 'page' key is e.g. "v_line/ibex_decoder", "v_toggle/ibex_decoder",
"v_branch/ibex_decoder" -> grouped per coverage type.
"""

import argparse
import re
from collections import defaultdict

LINE_RE = re.compile(r"^C '(.*)' (\d+)$")


def parse(path):
    pts = []
    with open(path, encoding="utf-8", errors="replace") as fh:
        for line in fh:
            m = LINE_RE.match(line.rstrip("\n"))
            if not m:
                continue
            kv = {}
            for item in m.group(1).split("\x01"):
                if "\x02" in item:
                    k, v = item.split("\x02", 1)
                    kv[k] = v
            kv["count"] = int(m.group(2))
            pts.append(kv)
    return pts


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("dat")
    ap.add_argument("--module", default="ibex_decoder")
    ap.add_argument("--uncovered", action="store_true", help="list uncovered points")
    a = ap.parse_args()

    by_type = defaultdict(lambda: [0, 0])
    unc = defaultdict(list)
    for p in parse(a.dat):
        page = p.get("page", "")
        if "/" not in page:
            continue
        typ, mod = page.split("/", 1)
        # parameterised modules get a suffix: ibex_decoder__Rz1_RB2_...
        if mod != a.module and not mod.startswith(a.module + "__"):
            continue
        by_type[typ][1] += 1
        if p["count"] > 0:
            by_type[typ][0] += 1
        else:
            unc[typ].append(f"{p.get('f', '?').split('/')[-1]}:{p.get('l', '?')}  {p.get('o', '')}")

    print(f"CODE COVERAGE  module={a.module}  file={a.dat}")
    th = tt = 0
    for typ in sorted(by_type):
        h, t = by_type[typ]
        th, tt = th + h, tt + t
        print(f"  {typ:<10} {h:>6}/{t:<6} {100.0 * h / t:6.2f}%")
    if tt:
        print(f"  {'all':<10} {th:>6}/{tt:<6} {100.0 * th / tt:6.2f}%")
    if a.uncovered:
        for typ in sorted(unc):
            print(f"\n-- uncovered {typ} ({len(unc[typ])}) --")
            for u in unc[typ]:
                print("  " + u)


if __name__ == "__main__":
    main()
