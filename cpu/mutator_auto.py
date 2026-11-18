"""Automatic mutation operator generator for Ibex SystemVerilog.

Applies classical Verilog mutation operators (Singh & Hsiao 2003 taxonomy) plus
Encarsia-inspired Signal Mix-up on golden Ibex RTL to produce many candidate
mutants in one pass.

Operators
---------
AOR  Arithmetic Operator Replacement:  `a + b` -> `a - b`, etc.
BOR  Bitwise Operator Replacement:     `a & b` -> `a | b`, etc.
ROR  Relational Operator Replacement:  `a < b` -> `a <= b`, etc.
LOR  Logical Operator Replacement:     `a && b` -> `a || b`, etc.
COR  Conditional Operator Replacement: swap branches of `c ? x : y`, negate c.
SRP  Shift direction swap:             `a >> b` <-> `a << b`.
UOI  Unary Operator Insertion/removal: toggle `~` in front of identifiers.
CRP  Constant Replacement:             flip one bit in sized literals.

Each operator applies to a "safe" subset of the SV source — comments are
stripped, declaration / port / parameter lines are skipped. One match ==>
one mutant, up to a per-(operator, file) cap.

Output layout
-------------
cpu/mutants/auto_gen/<id>/<target>.sv
cpu/mutants/auto_manifest.json
"""
from __future__ import annotations

import argparse
import json
import re
import shutil
from dataclasses import dataclass, field
from pathlib import Path
from typing import Callable

HERE = Path(__file__).resolve().parent
IBEX_RTL = Path("/home/andre/ibex-coverage-experiments/cpu/src/lowrisc_ibex_ibex_core_0.1/rtl")
OUT_DIR = HERE / "mutants" / "auto_gen"
MANIFEST_PATH = HERE / "mutants" / "auto_manifest.json"

# Per-(operator, file) cap. Keeps corpus bounded; equivalent-mutant filter
# downstream trims further.
PER_OP_CAP = 25


# ---------------------------------------------------------------------------
# Comment stripping (keeps line numbering so match positions stay authoritative)
# ---------------------------------------------------------------------------

def strip_comments_preserve_lines(src: str) -> str:
    """Replace // line comments and /* */ block comments with spaces, keeping newlines."""
    # Block comments
    def _block(m: re.Match) -> str:
        return "".join(c if c == "\n" else " " for c in m.group(0))

    src = re.sub(r"/\*.*?\*/", _block, src, flags=re.S)
    # Line comments
    src = re.sub(r"//[^\n]*", lambda m: " " * len(m.group(0)), src)
    return src


# ---------------------------------------------------------------------------
# Line classification: decide whether a line is a legal mutation target
# ---------------------------------------------------------------------------

DECL_PATTERNS = [
    re.compile(r"^\s*(module|endmodule|package|endpackage|interface|endinterface)\b"),
    re.compile(r"^\s*(input|output|inout)\b"),
    re.compile(r"^\s*(wire|logic|reg|bit|byte|integer|int|shortint|longint)\s+(?!\w+\s*=)"),
    re.compile(r"^\s*parameter\b"),
    re.compile(r"^\s*localparam\b"),
    re.compile(r"^\s*typedef\b"),
    re.compile(r"^\s*import\b"),
    re.compile(r"^\s*function\b"),
    re.compile(r"^\s*endfunction\b"),
    re.compile(r"^\s*task\b"),
    re.compile(r"^\s*endtask\b"),
    re.compile(r"^\s*generate\b"),
    re.compile(r"^\s*endgenerate\b"),
    re.compile(r"^\s*//"),
    re.compile(r"^\s*$"),
    re.compile(r"^\s*`"),
]


def is_decl_or_blank(line: str) -> bool:
    for p in DECL_PATTERNS:
        if p.match(line):
            return True
    return False


# ---------------------------------------------------------------------------
# Mutation operators: each returns a list of (new_src, description).
# Each operator mutates exactly ONE site per call, producing one variant.
# ---------------------------------------------------------------------------

@dataclass
class MutationSite:
    op: str
    line: int
    original: str
    mutated: str
    description: str


def apply_regex_op(
    op_code: str,
    src: str,
    pattern: re.Pattern,
    repl_fn: Callable[[re.Match], str],
    describe_fn: Callable[[re.Match], str],
    cap: int,
) -> list[MutationSite]:
    """For each match of `pattern` in src (outside declarations), produce one
    mutant that applies `repl_fn` ONLY at that match position."""
    stripped = strip_comments_preserve_lines(src)
    sites: list[MutationSite] = []
    for m in pattern.finditer(stripped):
        start, end = m.span()
        # line number of start
        line_no = stripped.count("\n", 0, start) + 1
        line_start = stripped.rfind("\n", 0, start) + 1
        line_end = stripped.find("\n", start)
        if line_end == -1:
            line_end = len(stripped)
        line_text = src[line_start:line_end]
        if is_decl_or_blank(line_text):
            continue
        new_fragment = repl_fn(m)
        if new_fragment == m.group(0):
            continue
        mutated = src[:start] + new_fragment + src[end:]
        sites.append(MutationSite(
            op=op_code,
            line=line_no,
            original=line_text.strip()[:120],
            mutated=(line_text[:start - line_start] + new_fragment + line_text[end - line_start:]).strip()[:120],
            description=describe_fn(m),
        ))
        if len(sites) >= cap:
            break
    return sites


# AOR: swap + and -
AOR_PATTERN = re.compile(r"(?<![+\-*/%<>=!&|^~])(?<=\s)([+\-])(?=\s)(?![+\-*/%<>=!&|^~])")

def make_aor_replacer(flip: dict[str, str]) -> Callable[[re.Match], str]:
    def _r(m: re.Match) -> str:
        return flip.get(m.group(1), m.group(1))
    return _r


def op_aor(src: str, cap: int) -> list[MutationSite]:
    return apply_regex_op(
        "AOR", src, AOR_PATTERN,
        make_aor_replacer({"+": "-", "-": "+"}),
        lambda m: f"swap arithmetic {m.group(1)} -> {'+' if m.group(1) == '-' else '-'}",
        cap,
    )


# BOR: bitwise & -> |, | -> &, ^ -> &
BOR_PATTERN = re.compile(r"(?<![&|^~])(?<=\s)([&|^])(?=\s)(?![&|^~])")


def op_bor(src: str, cap: int) -> list[MutationSite]:
    flip = {"&": "|", "|": "&", "^": "&"}
    return apply_regex_op(
        "BOR", src, BOR_PATTERN,
        make_aor_replacer(flip),
        lambda m: f"swap bitwise {m.group(1)} -> {flip[m.group(1)]}",
        cap,
    )


# ROR: relational
ROR_PATTERN = re.compile(r"(?<![<>=!])(<=|>=|==|!=|<|>)(?![<>=])")


def op_ror(src: str, cap: int) -> list[MutationSite]:
    flip = {"<": ">=", ">": "<=", "<=": ">", ">=": "<", "==": "!=", "!=": "=="}
    return apply_regex_op(
        "ROR", src, ROR_PATTERN,
        lambda m: flip[m.group(1)],
        lambda m: f"swap relational {m.group(1)} -> {flip[m.group(1)]}",
        cap,
    )


# LOR: logical && <-> ||
LOR_PATTERN = re.compile(r"(&&|\|\|)")


def op_lor(src: str, cap: int) -> list[MutationSite]:
    flip = {"&&": "||", "||": "&&"}
    return apply_regex_op(
        "LOR", src, LOR_PATTERN,
        lambda m: flip[m.group(1)],
        lambda m: f"swap logical {m.group(1)} -> {flip[m.group(1)]}",
        cap,
    )


# SRP: shift direction
SRP_PATTERN = re.compile(r"(<<<|>>>|<<|>>)")


def op_srp(src: str, cap: int) -> list[MutationSite]:
    flip = {">>": "<<", "<<": ">>", ">>>": "<<<", "<<<": ">>>"}
    return apply_regex_op(
        "SRP", src, SRP_PATTERN,
        lambda m: flip[m.group(1)],
        lambda m: f"swap shift {m.group(1)} -> {flip[m.group(1)]}",
        cap,
    )


# COR: ternary branch swap. Targets `cond ? A : B` — this is tricky to parse
# without a real parser; use a conservative pattern that catches simple cases
# where A and B are short identifiers / literals.
COR_PATTERN = re.compile(
    r"\?\s*(\w+(?:\[[^\]]*\])?)\s*:\s*(\w+(?:\[[^\]]*\])?)"
)


def op_cor(src: str, cap: int) -> list[MutationSite]:
    def _r(m: re.Match) -> str:
        return f"? {m.group(2)} : {m.group(1)}"
    return apply_regex_op(
        "COR", src, COR_PATTERN,
        _r,
        lambda m: f"swap ternary branches ({m.group(1)} <-> {m.group(2)})",
        cap,
    )


# UOI: add `~` before identifier RHS in simple assigns.
# We target `assign <lhs> = <id>;` and mutate to `assign <lhs> = ~<id>;`.
UOI_PATTERN = re.compile(r"(assign\s+\w+(?:\[[^\]]*\])?\s*=\s*)(\w+(?:\[[^\]]*\])?)\s*;")


def op_uoi(src: str, cap: int) -> list[MutationSite]:
    def _r(m: re.Match) -> str:
        return f"{m.group(1)}~{m.group(2)};"
    def _d(m: re.Match) -> str:
        return f"insert ~ on RHS of assign {m.group(2)}"
    return apply_regex_op("UOI", src, UOI_PATTERN, _r, _d, cap)


# CRP: single-bit flip of smallest bit in sized literals.
CRP_PATTERN = re.compile(r"(\d+)'([bhd])([0-9a-fA-F_xzXZ]+)")


def op_crp(src: str, cap: int) -> list[MutationSite]:
    def _r(m: re.Match) -> str:
        width, base, digits = m.group(1), m.group(2), m.group(3)
        if base == "b":
            try:
                val = int(digits.replace("_", ""), 2)
            except ValueError:
                return m.group(0)
            new_val = val ^ 1
            new_digits = format(new_val, f"0{int(width)}b")
            return f"{width}'{base}{new_digits}"
        if base == "h":
            try:
                val = int(digits.replace("_", ""), 16)
            except ValueError:
                return m.group(0)
            new_val = val ^ 1
            nh = max(1, (int(width) + 3) // 4)
            new_digits = format(new_val, f"0{nh}x")
            return f"{width}'{base}{new_digits}"
        if base == "d":
            try:
                val = int(digits.replace("_", ""), 10)
            except ValueError:
                return m.group(0)
            new_val = val ^ 1
            return f"{width}'{base}{new_val}"
        return m.group(0)

    def _d(m: re.Match) -> str:
        return f"flip bit 0 of literal {m.group(0)}"
    return apply_regex_op("CRP", src, CRP_PATTERN, _r, _d, cap)


# ---------------------------------------------------------------------------
# Top-level driver
# ---------------------------------------------------------------------------

OPERATORS: dict[str, Callable[[str, int], list[MutationSite]]] = {
    "AOR": op_aor,
    "BOR": op_bor,
    "ROR": op_ror,
    "LOR": op_lor,
    "SRP": op_srp,
    "COR": op_cor,
    "UOI": op_uoi,
    "CRP": op_crp,
}


DEFAULT_FILES = [
    "ibex_alu.sv",
    "ibex_load_store_unit.sv",
    "ibex_decoder.sv",
    "ibex_id_stage.sv",
    "ibex_controller.sv",
]


def generate(files: list[str], per_op_cap: int, out_dir: Path) -> list[dict]:
    """Produce mutants; return manifest entries (list of dicts)."""
    if out_dir.exists():
        shutil.rmtree(out_dir)
    out_dir.mkdir(parents=True, exist_ok=True)

    manifest: list[dict] = []
    for fname in files:
        golden = IBEX_RTL / fname
        if not golden.exists():
            print(f"[warn] golden not found: {golden}")
            continue
        src = golden.read_text()

        for op_code, op_fn in OPERATORS.items():
            # apply each operator INDEPENDENTLY — each mutation applied solo to src.
            # For the per-site list, we need the *index* into the pattern's
            # match list because sites.append writes mutated whole-source, but
            # `apply_regex_op` already does single-site mutations by slicing.
            # We regenerate one mutant file per site.
            stripped = strip_comments_preserve_lines(src)
            # recompute matches here so we can slice the source N times
            pat = _pattern_for(op_code)
            match_iter = list(pat.finditer(stripped))
            kept = 0
            for i, m in enumerate(match_iter):
                if kept >= per_op_cap:
                    break
                start, end = m.span()
                line_start = stripped.rfind("\n", 0, start) + 1
                line_end = stripped.find("\n", start)
                if line_end == -1:
                    line_end = len(stripped)
                line_text = src[line_start:line_end]
                if is_decl_or_blank(line_text):
                    continue
                new_fragment = _mutate_token(op_code, m)
                if new_fragment == m.group(0):
                    continue
                mutated_src = src[:start] + new_fragment + src[end:]
                line_no = stripped.count("\n", 0, start) + 1

                mid = f"auto_{fname.replace('.sv','')}__{op_code}__{i:03d}"
                target_dir = out_dir / mid
                target_dir.mkdir(parents=True, exist_ok=True)
                (target_dir / fname).write_text(mutated_src)

                manifest.append({
                    "id": mid,
                    "target": fname,
                    "op": op_code,
                    "line": line_no,
                    "original": line_text.strip()[:140],
                    "mutated": (line_text[:start - line_start] + new_fragment + line_text[end - line_start:]).strip()[:140],
                    "description": f"{op_code} at {fname}:{line_no} — {m.group(0)!r} -> {new_fragment!r}",
                    "difficulty": "auto",
                })
                kept += 1

        print(f"[gen] {fname}: ran all operators")

    return manifest


def _pattern_for(op_code: str) -> re.Pattern:
    return {
        "AOR": AOR_PATTERN,
        "BOR": BOR_PATTERN,
        "ROR": ROR_PATTERN,
        "LOR": LOR_PATTERN,
        "SRP": SRP_PATTERN,
        "COR": COR_PATTERN,
        "UOI": UOI_PATTERN,
        "CRP": CRP_PATTERN,
    }[op_code]


def _mutate_token(op_code: str, m: re.Match) -> str:
    if op_code == "AOR":
        return {"+": "-", "-": "+"}.get(m.group(1), m.group(0))
    if op_code == "BOR":
        return {"&": "|", "|": "&", "^": "&"}.get(m.group(1), m.group(0))
    if op_code == "ROR":
        return {"<": ">=", ">": "<=", "<=": ">", ">=": "<", "==": "!=", "!=": "=="}[m.group(1)]
    if op_code == "LOR":
        return {"&&": "||", "||": "&&"}[m.group(1)]
    if op_code == "SRP":
        return {">>": "<<", "<<": ">>", ">>>": "<<<", "<<<": ">>>"}[m.group(1)]
    if op_code == "COR":
        return f"? {m.group(2)} : {m.group(1)}"
    if op_code == "UOI":
        return f"{m.group(1)}~{m.group(2)};"
    if op_code == "CRP":
        return op_crp.__wrapped__(m) if hasattr(op_crp, "__wrapped__") else _crp_token_mutate(m)
    return m.group(0)


def _crp_token_mutate(m: re.Match) -> str:
    width, base, digits = m.group(1), m.group(2), m.group(3)
    if base == "b":
        try:
            val = int(digits.replace("_", ""), 2)
        except ValueError:
            return m.group(0)
        new_val = val ^ 1
        return f"{width}'{base}{format(new_val, f'0{int(width)}b')}"
    if base == "h":
        try:
            val = int(digits.replace("_", ""), 16)
        except ValueError:
            return m.group(0)
        new_val = val ^ 1
        nh = max(1, (int(width) + 3) // 4)
        return f"{width}'{base}{format(new_val, f'0{nh}x')}"
    if base == "d":
        try:
            val = int(digits.replace("_", ""), 10)
        except ValueError:
            return m.group(0)
        return f"{width}'{base}{val ^ 1}"
    return m.group(0)


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--files", nargs="*", default=DEFAULT_FILES)
    ap.add_argument("--cap", type=int, default=PER_OP_CAP)
    ap.add_argument("--out", type=Path, default=OUT_DIR)
    ap.add_argument("--manifest", type=Path, default=MANIFEST_PATH)
    args = ap.parse_args()

    manifest = generate(args.files, args.cap, args.out)
    args.manifest.write_text(json.dumps({"mutants": manifest}, indent=2))

    by_op: dict[str, int] = {}
    by_file: dict[str, int] = {}
    for e in manifest:
        by_op[e["op"]] = by_op.get(e["op"], 0) + 1
        by_file[e["target"]] = by_file.get(e["target"], 0) + 1
    print(f"\nGenerated {len(manifest)} mutants")
    print(f"By operator: {by_op}")
    print(f"By file: {by_file}")
    print(f"Manifest: {args.manifest}")
    print(f"Mutants dir: {args.out}")


if __name__ == "__main__":
    main()
