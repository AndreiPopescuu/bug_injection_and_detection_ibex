"""Run an LLM-written `generate(rng)` in a restricted namespace (separate process).

  python3 paper_parity_sandbox.py <code.py> <out.txt> <n_stimuli> <seed_base>
Exit code 0 and <out.txt> (one hex word per line) on success; otherwise the error
is printed on stderr. No imports, no file access, no builtins beyond basic ones.
"""
import random
import sys

SAFE = {n: __builtins__[n] if isinstance(__builtins__, dict) else getattr(__builtins__, n)
        for n in ["range", "len", "list", "dict", "set", "tuple", "int", "bool", "str",
                  "min", "max", "abs", "sum", "sorted", "reversed", "enumerate", "zip",
                  "map", "filter", "any", "all", "isinstance", "ValueError", "IndexError",
                  "KeyError", "Exception", "divmod", "pow", "hex", "bin", "round", "iter",
                  "next", "frozenset", "float", "chr", "ord", "print", "True", "False", "None"]
        if (isinstance(__builtins__, dict) and n in __builtins__) or hasattr(__builtins__, n)}


def main():
    code_path, out_path, n, seed_base = sys.argv[1], sys.argv[2], int(sys.argv[3]), int(sys.argv[4])
    code = open(code_path).read()
    ns = {"__builtins__": SAFE, "__name__": "llm_generator"}
    exec(compile(code, "<llm>", "exec"), ns)  # noqa: S102 -- restricted namespace, own process
    gen = ns.get("generate")
    if not callable(gen):
        sys.exit("no function generate(rng) defined")
    words, calls = [], 0
    while len(words) < n:
        calls += 1
        if calls > 20000:
            sys.exit("generate() keeps returning too few instructions")
        out = gen(random.Random(seed_base + calls))
        if not isinstance(out, (list, tuple)):
            sys.exit(f"generate() returned {type(out).__name__}, expected a list")
        for w in out:
            if isinstance(w, bool) or not isinstance(w, int) or not 0 <= w <= 0xFFFFFFFF:
                sys.exit(f"generate() returned a non 32-bit value: {w!r}")
        words.extend(out)
    with open(out_path, "w") as fh:
        fh.write("\n".join(f"{w:08x}" for w in words[:n]))


if __name__ == "__main__":
    main()
