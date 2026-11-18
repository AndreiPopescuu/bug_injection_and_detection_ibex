"""Run a Gemma generation on the L4 condition-A prompt.

Reads the prompt, streams Gemma output via Google GenAI API, saves the raw
response, extracts the first fenced Python code block, and writes it as a
builder module under crt/llm_runs/<name>_p1.py with the required header.

Usage:
    python3 run_gemma_l4.py <run_name>

Env:
    GEMINI_API_KEY   from /home/andre/ibex-crt-llm-coverage/crt-coverage/decoder/.env
    GEMINI_MODEL     default: "gemma-3-27b-it" (biggest Gemma 3 instruction-tuned)
"""
from __future__ import annotations

import os
import re
import sys
import time
from pathlib import Path

HERE = Path(__file__).resolve().parent
PROMPT = HERE / "gemma_prompts" / "l4_condition_a.md"


def _load_env():
    env_path = HERE / ".." / "decoder" / ".env"
    if not env_path.exists():
        return
    for line in env_path.read_text().splitlines():
        line = line.strip()
        if not line or line.startswith("#") or "=" not in line:
            continue
        k, v = line.split("=", 1)
        os.environ.setdefault(k.strip(), v.strip())


def extract_code(text: str) -> str | None:
    """Return the body of the FIRST ```python ... ``` block in text, or None."""
    m = re.search(r"```python\s*\n(.*?)```", text, re.S)
    if m:
        return m.group(1).rstrip()
    m = re.search(r"```\s*\n(.*?)```", text, re.S)
    if m:
        return m.group(1).rstrip()
    return None


HEADER = ('"""LLM-CRT L4 run {run} (Gemma, condition A). '
          'Generated via Google GenAI API."""\n'
          "from ..isa_l4 import (ADD, SUB, SLL, SLT, SLTU, XOR, SRL, SRA, OR, AND,\n"
          "    ADDI, SLTI, SLTIU, XORI, ORI, ANDI, SLLI, SRLI, SRAI,\n"
          "    LB, LH, LW, LBU, LHU, SB, SH, SW, CSRRW, CSRRS, CSRRC, NOP)\n")


def main():
    if len(sys.argv) < 2:
        print("usage: run_gemma_l4.py <run_name>", file=sys.stderr)
        sys.exit(2)
    run = sys.argv[1]

    _load_env()
    api_key = os.environ.get("GEMINI_API_KEY")
    if not api_key:
        sys.exit("GEMINI_API_KEY not set (check decoder/.env)")
    model = os.environ.get("GEMINI_MODEL", "gemma-3-27b-it")

    from google import genai  # type: ignore
    client = genai.Client(api_key=api_key)

    prompt = PROMPT.read_text()
    print(f"[gemma] model={model}  prompt={len(prompt)} chars  run={run}")

    t0 = time.time()
    chunks = []
    for chunk in client.models.generate_content_stream(model=model, contents=prompt):
        s = chunk.text or ""
        chunks.append(s)
        sys.stdout.write(s)
        sys.stdout.flush()
    full = "".join(chunks)
    dt = time.time() - t0
    print(f"\n[gemma] done in {dt:.1f}s, {len(full)} chars output")

    # Save raw response.
    out_dir = HERE / "llm_passes" / f"gemma_{run}"
    out_dir.mkdir(parents=True, exist_ok=True)
    (out_dir / "p1_raw_response.md").write_text(full)

    # Extract code.
    code = extract_code(full)
    if code is None:
        print("[gemma] WARNING: no python code block found; nothing to install")
        return
    (out_dir / "p1_extracted_code.py").write_text(code)

    # Install as builder module with header.
    runs_dir = HERE / "crt" / "llm_runs"
    runs_dir.mkdir(exist_ok=True)
    (runs_dir / "__init__.py").touch()
    target = runs_dir / f"gemma_{run}_p1.py"
    target.write_text(HEADER.format(run=run) + "\n" + code + "\n")
    print(f"[gemma] installed -> {target}")
    print(f"[gemma] run with: MODULE=test_llm_crt_l4 LLM_MODULES=crt.llm_runs.gemma_{run}_p1 make")


if __name__ == "__main__":
    main()
