#!/usr/bin/env python3
"""paper_parity_run.py -- stimulus arm (S, the LLM4DV method) vs CRT arm (C) with an
open-source LLM, under EXACTLY the paper's information level (see paper_parity.py).

Everything except the answer format is shared by both arms and ported from ml4dv:
  prompts / feedback text / IDAdaNew missed-bin sampling   paper_parity.py
  conversation compression "best 3", STABLE buffer        models/llm_gpt.py + llm_base.py
  coverage score with harder (cross) bins x2.5             global_shared_types.get_coverage_score
  dialog reset rst_plan_Coverage_RateBased_Tolerance       agents/agent_LLM.py
  convergence stop _check_converge, gibberish check        agents/agent_LLM.py
  DumbExtractor + Filter(0, 0xffffffff)                    stimuli_extractor.py / stimuli_filter.py
  temperature 0.4, top_p 1                                  ChatGPT(...) in generate_stimulus.py
Coverage accumulates over the whole trial, like ml4dv's coverage database.

Arm C differences (forced by the paradigm): the answer is Python code, executed in
paper_parity_sandbox.py to produce --c-stim instructions per message; a response
whose code does not run is treated like ml4dv treats a gibberish response.

LLM backend: any OpenAI-compatible chat endpoint (Ollama, vLLM, llama.cpp server,
LM Studio), or `mock` to test the loop without a model.

  export LLM_API_KEY=...        # provider key, read from the environment
  python3 paper_parity_run.py --arm S --run S_llama3_70b_1 \\
      --base-url https://openrouter.ai/api/v1 --model meta-llama/llama-3-70b-instruct
  python3 paper_parity_run.py --arm C --run C_llama3_70b_1 \\
      --base-url https://openrouter.ai/api/v1 --model meta-llama/llama-3-70b-instruct
  python3 paper_parity_run.py --arm S --run test --backend mock --max-msgs 5
"""
import argparse
import json
import random
import re
import subprocess
import sys
import time
from pathlib import Path

import requests

from paper_parity import (SYSTEM_S, SYSTEM_C, initial_prompt, iterative_prompt,
                          IDAdaNewSampler)
from crt.ml4dv_coverage import plan_keys

HERE = Path(__file__).resolve().parent
OUT_ROOT = HERE / "results" / "paper_parity"
VENV_PY = "/home/andrei/ibex_env/bin/python3"
REMAIN_ITER_NUM = 3


# ---------------------------------------------------------------------------
# coverage database (cumulative over the trial)
# ---------------------------------------------------------------------------
class Coverage:
    def __init__(self):
        self.bins = dict.fromkeys(plan_keys(), 0)

    def add(self, batch):
        for k, v in batch.items():
            self.bins[k] += v

    def rate(self):
        return sum(1 for v in self.bins.values() if v), len(self.bins)

    def score(self, prioritise_harder_bins=True):  # global_shared_types.get_coverage_score
        hit = [k for k, v in self.bins.items() if v]
        if not prioritise_harder_bins:
            return len(hit)
        return sum(2.5 if "_x_" in k else 1 for k in hit)


def simulate(words, tag):
    """Apply words to the RTL (cocotb + Verilator) and return the batch bin counts."""
    tmp = OUT_ROOT / "_sim"
    tmp.mkdir(parents=True, exist_ok=True)
    stim, cov = tmp / f"{tag}.txt", tmp / f"{tag}.json"
    stim.write_text("\n".join(f"{w:08x}" for w in words))
    if cov.exists():
        cov.unlink()
    r = subprocess.run(
        ["make", "-s", "MODULE=test_stim_file", "RV32B=0", "RV32M=2",
         f"STIM_IN={stim}", f"COV_OUT={cov}"],
        cwd=HERE, capture_output=True, text=True,
        env={**__import__("os").environ, "STIM_IN": str(stim), "COV_OUT": str(cov),
             "PATH": f"/home/andrei/ibex_env/bin:{__import__('os').environ['PATH']}"})
    (HERE / "coverage.dat").unlink(missing_ok=True)
    if not cov.exists():
        raise RuntimeError("simulation failed:\n" + r.stdout[-3000:] + r.stderr[-3000:])
    return json.loads(cov.read_text())["bins"]


# ---------------------------------------------------------------------------
# LLM backends
# ---------------------------------------------------------------------------
class OpenAICompat:
    def __init__(self, base_url, model, temperature, top_p, max_tokens, api_key="none"):
        self.url = base_url.rstrip("/") + "/chat/completions"
        self.model, self.t, self.p, self.max_tokens = model, temperature, top_p, max_tokens
        self.key = api_key

    def __call__(self, messages):
        # Free tiers rate-limit hard: on HTTP 429 wait as long as the server asks
        # (Retry-After) and keep going; other errors get a bounded backoff.
        errors = 0
        while True:
            try:
                r = requests.post(self.url, timeout=600, headers={"Authorization": f"Bearer {self.key}"},
                                  json={"model": self.model, "messages": messages,
                                        "temperature": self.t, "top_p": self.p,
                                        "max_tokens": self.max_tokens})
                if r.status_code == 429:
                    wait = float(r.headers.get("retry-after", 30) or 30)
                    print(f"rate limited (429); waiting {wait:.0f}s", file=sys.stderr)
                    time.sleep(min(max(wait, 5), 3600))
                    continue
                r.raise_for_status()
                j = r.json()
                u = j.get("usage", {})
                return (j["choices"][0]["message"]["content"],
                        (u.get("prompt_tokens", 0), u.get("completion_tokens", 0)))
            except Exception as e:  # noqa: BLE001
                errors += 1
                if errors > 8:
                    raise RuntimeError(f"LLM backend unavailable: {e}") from e
                delay = 2 ** errors
                print(f"LLM error {e}; retry in {delay}s", file=sys.stderr)
                time.sleep(delay)


class Mock:
    """Loop test without a model: S returns random R-type words, C a fixed generator."""
    def __init__(self, arm, seed):
        self.arm, self.rng = arm, random.Random(seed)

    def __call__(self, messages):
        if self.arm == "S":
            ws = [(self.rng.choice([0, 0x20]) << 25) | (self.rng.getrandbits(15) << 15)
                  | (self.rng.randrange(8) << 12) | (self.rng.randrange(32) << 7) | 0x33
                  for _ in range(20)]
            return "[" + ", ".join(f"0x{w:08x}" for w in ws) + "]", (100, 50)
        code = ("def generate(rng):\n"
                "    return [(rng.randrange(32) << 20) | (rng.randrange(32) << 15) | "
                "(rng.randrange(8) << 12) | (rng.randrange(32) << 7) | 0x33 for _ in range(64)]\n")
        return "```python\n" + code + "```", (100, 80)


# ---------------------------------------------------------------------------
# conversation with ml4dv's "best 3" compression (STABLE buffer)
# ---------------------------------------------------------------------------
class Conversation:
    def __init__(self, llm, system, rng):
        self.llm, self.system, self.rng = llm, system, rng
        self.best = []          # {"msg": (user, assistant), "hit": score, "id": n}
        self.total = 0
        self.reset()

    def reset(self):
        self.messages = [{"role": "system", "content": self.system}]

    def _compress(self):
        if len(self.messages) < 4 + 2 * REMAIN_ITER_NUM:
            return
        init = self.messages[:3]
        if len(self.best) < 3:
            sel = sorted(self.best, key=lambda d: d["id"])
        else:
            sel = sorted(self.rng.sample(self.best, 3), key=lambda d: d["id"])
        self.messages = init + [m for e in sel for m in e["msg"]]

    def ask(self, prompt):
        self._compress()
        self.messages.append({"role": "user", "content": prompt})
        text, toks = self.llm(self.messages)
        self.messages.append({"role": "assistant", "content": text})
        self.total += 1
        return text, toks

    def append_successful(self, prompt, response, score_before):
        self.best.append({"msg": ({"role": "user", "content": prompt},
                                  {"role": "assistant", "content": response}),
                          "hit": score_before, "id": self.total})

    def update_successful(self, score_after):
        self.best[-1]["hit"] = score_after - self.best[-1]["hit"]
        self.best.sort(key=lambda d: (d["hit"], d["id"]), reverse=True)
        n = REMAIN_ITER_NUM * 3
        if len(self.best) >= n and self.best[n - 1]["hit"] == self.best[0]["hit"]:
            self.best = [d for d in self.best if d["hit"] == self.best[0]["hit"]]
        else:
            self.best = self.best[:n]


def rst_plan(cov_hist, all_hist):  # rst_plan_Coverage_RateBased_Tolerance
    period = 4 if all_hist[-1] < 300 else 7
    return len(cov_hist) >= period and cov_hist[-1] - cov_hist[-period] < 3


def converged(all_hist):  # LLMAgent._check_converge
    return (len(all_hist) >= 25 and all_hist[-1] == all_hist[-25]
            or len(all_hist) >= 40 and all_hist[-1] - all_hist[-40] <= 2)


# ---------------------------------------------------------------------------
# response -> stimuli
# ---------------------------------------------------------------------------
_NUM = re.compile(r"(?:0x[\da-fA-F]+)|(?:-?\d+(?!\d)(?!\.)(?!:))", re.I)


def stimuli_S(text):
    nums = [int(x, 16) if x[:2].lower() == "0x" else int(x) for x in _NUM.findall(text)]
    words = [n for n in nums if 0 <= n <= 0xFFFFFFFF]
    lines = text.split("\n")
    blank_runs = sum(1 for a, b in zip(lines, lines[1:]) if len(a) == 0 and len(b) == 0)
    gibberish = len(words) == 0 or blank_runs > round(len(lines) / 3 * 2)
    return words, gibberish, None


def stimuli_C(text, run_dir, msg_no, n):
    m = re.findall(r"```(?:python)?\s*\n(.*?)```", text, re.S)
    code = m[-1] if m else text
    code_file = run_dir / f"gen_msg{msg_no:03d}.py"
    code_file.write_text(code)
    out = run_dir / "_stim_tmp.txt"
    try:
        r = subprocess.run([VENV_PY, str(HERE / "paper_parity_sandbox.py"), str(code_file),
                            str(out), str(n), str(msg_no * 100000)],
                           capture_output=True, text=True, timeout=60)
    except subprocess.TimeoutExpired:
        return [], True, "timeout"
    if r.returncode != 0 or not out.exists():
        return [], True, (r.stderr or r.stdout)[-500:]
    return [int(w, 16) for w in out.read_text().split()], False, None


# ---------------------------------------------------------------------------
def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--arm", choices=["S", "C"], required=True)
    ap.add_argument("--run", required=True, help="run id, e.g. S_qwen14b_1")
    ap.add_argument("--backend", choices=["openai", "mock"], default="openai")
    ap.add_argument("--base-url", default="http://localhost:11434/v1", help="Ollama default")
    ap.add_argument("--model", default="qwen2.5-coder:14b")
    ap.add_argument("--api-key", default=__import__("os").environ.get("LLM_API_KEY", "none"),
                    help="default: $LLM_API_KEY (keep keys out of the command line)")
    ap.add_argument("--temperature", type=float, default=0.4)
    ap.add_argument("--top-p", type=float, default=1.0)
    ap.add_argument("--max-tokens", type=int, default=2048, help="same cap for both arms")
    ap.add_argument("--max-msgs", type=int, default=100, help="dialog_bound")
    ap.add_argument("--c-stim", type=int, default=1000, help="arm C: instructions per message")
    ap.add_argument("--seed", type=int, default=0)
    a = ap.parse_args()

    rng = random.Random(a.seed)
    run_dir = OUT_ROOT / a.run
    run_dir.mkdir(parents=True, exist_ok=True)
    log = (run_dir / "log.jsonl").open("w")
    llm = (Mock(a.arm, a.seed) if a.backend == "mock" else
           OpenAICompat(a.base_url, a.model, a.temperature, a.top_p, a.max_tokens, a.api_key))
    conv = Conversation(llm, SYSTEM_S if a.arm == "S" else SYSTEM_C, rng)
    sampler = IDAdaNewSampler(rng)
    cov = Coverage()
    hist, all_hist = [], []
    prev_rate, state, invalid, dialog = (0, -1), "INIT", False, 1
    tok_in = tok_out = stim_total = 0
    stop = "max dialog number"
    json.dump(vars(a), (run_dir / "config.json").open("w"), indent=1)

    while conv.total < a.max_msgs:
        if state == "INIT":
            prompt = initial_prompt(a.arm)
        else:
            prompt, prev_rate = iterative_prompt(a.arm, cov.bins, prev_rate, sampler,
                                                 response_invalid=invalid)
        score_before = cov.score()
        text, (ti, to) = conv.ask(prompt)
        tok_in, tok_out = tok_in + ti, tok_out + to
        if state == "ITER":
            conv.append_successful(prompt, text, score_before)
        msg_no = conv.total
        if a.arm == "S":
            words, invalid, err = stimuli_S(text)
        else:
            words, invalid, err = stimuli_C(text, run_dir, msg_no, a.c_stim)
        if not invalid:
            cov.add(simulate(words, f"{a.run}_{msg_no}"))
            stim_total += len(words)
        if state == "ITER":
            conv.update_successful(cov.score())
        state = "ITER"
        rate = cov.rate()
        hist.append(rate[0])
        all_hist.append(rate[0])
        rec = {"msg": msg_no, "dialog": dialog, "tokens_in": ti, "tokens_out": to,
               "invalid": invalid, "error": err, "n_stimuli": len(words),
               "stimuli_total": stim_total, "hit": rate[0], "prompt": prompt, "response": text}
        log.write(json.dumps(rec) + "\n")
        log.flush()
        print(f"[{a.run}] msg {msg_no:3d} dialog {dialog} stim {len(words):5d} "
              f"cov {rate[0]}/{rate[1]} tokens {tok_in}+{tok_out}" + (" INVALID" if invalid else ""))
        if rate[0] == rate[1]:
            stop = "done"
            break
        if converged(all_hist):
            stop = "model converged"
            break
        if rst_plan(hist, all_hist):  # dialog reset, like LLMAgent.reset()
            conv.reset()
            hist.clear()
            state, prev_rate, invalid, dialog = "INIT", (0, -1), False, dialog + 1

    summary = {"run": a.run, "arm": a.arm, "model": a.model, "backend": a.backend,
               "messages": conv.total, "dialogs": dialog, "stop": stop,
               "tokens_in": tok_in, "tokens_out": tok_out, "stimuli": stim_total,
               "hit": cov.rate()[0], "total": cov.rate()[1],
               "curve_by_msg": all_hist}
    (run_dir / "summary.json").write_text(json.dumps(summary, indent=1))
    (run_dir / "final_bins.json").write_text(json.dumps(cov.bins))
    print(json.dumps({k: v for k, v in summary.items() if k != "curve_by_msg"}, indent=1))


if __name__ == "__main__":
    main()
