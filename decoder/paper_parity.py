"""paper_parity.py -- prompts with EXACTLY the information level of the LLM4DV paper.

Two arms, built from the SAME pieces, copied verbatim from the ml4dv repo
(ZixiBenZhang/ml4dv, commit cloned 2026-10-06):

  S  "stimulus" arm  = the paper's method: the LLM answers with a list of hex
                        instructions; they are applied to the decoder.
  C  "CRT" arm       = the LLM answers with a Python constrained-random generator;
                        the generator produces the instructions.

Sources (verbatim):
  bins description      examples_ID/bins_description.txt  (= docs/ml4dv_bins_description.txt)
  system prompt         prompt_generators/prompt_generator_template_ID.py  TemplatePromptGenerator4ID1.generate_system_prompt
  initial prompt        ...template_ID.py  TemplatePromptGenerator4ID2.generate_initial_prompt
  iterative prompt      prompt_generators/prompt_generator_template.py  generate_iterative_prompt
                        + ID1._load_result_summary / _load_iter_question
  missed-bin messages   ID1._load_coverage_difference_prompts_dict  (incl. its bin_name[-1]
                        register bug, e.g. "..._reg_30" -> "register 0")
  missed-bin sampling   _sample_missed_bins_Mixed_Coverpoint_TypeBased_Random_Sampling_decoder
                        ("IDAdaNew", used by generate_stimulus.py main/budget experiments)
Verified against ibex_decoder/logs/20230907_201949_budget(...)/..._trial_1.txt.

What the C arm gets IN ADDITION (the minimum the paradigm needs, nothing about the
DUT or the plan):
  1. the answer format: a Python function `generate(rng)` instead of a hex list
  2. one sentence on how it is used (called repeatedly, all instructions applied)
Everything else -- DUT text, plan text, feedback content and sampling, no RTL,
no encoders, no bin total, no examples, no tools -- is identical.
"""
import random
from pathlib import Path

HERE = Path(__file__).resolve().parent
BINS_DESCRIPTION = (HERE / "docs" / "ml4dv_bins_description.txt").read_text()

# ---------------------------------------------------------------------------
# System prompts
# ---------------------------------------------------------------------------
SYSTEM_S = (  # verbatim, TemplatePromptGenerator4ID1.generate_system_prompt
    "Please output a list of hexadecimal integers only, "
    "each integer between 0x0 and 0xffffffff. \n"
    "Do not give any explanations. \n"
    "Output format: [a, b, c, ...]."
)
SYSTEM_C = (  # same constraints, code instead of a list
    "Please output Python code only: one function `generate(rng)` (plus any helper "
    "functions it needs) that returns a list of integers, each integer between 0x0 and "
    "0xffffffff. `rng` is a Python random.Random instance; use it for all randomness. "
    "Do not use imports. \n"
    "Do not give any explanations. \n"
    "Output format: a single ```python code block."
)

# ---------------------------------------------------------------------------
# Initial prompts (TemplatePromptGenerator4ID2.generate_initial_prompt)
# ---------------------------------------------------------------------------
_S_HEAD = ("Please generate a list of 32-bit instructions (i.e. hex integers between 0x0 and "
           "0xffffffff) for a RISC-V processor that satisfies these described bins "
           "(i.e. test cases):\n")
_S_TAIL = ("Please generate a list of 32-bit instructions (i.e. hex integers between 0x0 and "
           "0xffffffff) that satisfies the above conditions.")
_C_HEAD = ("Please write a constrained-random generator of 32-bit instructions (i.e. hex "
           "integers between 0x0 and 0xffffffff) for a RISC-V processor that satisfies these "
           "described bins (i.e. test cases):\n")
_C_TAIL = ("Please write the generator `generate(rng)` so that the instructions it produces "
           "satisfy the above conditions. It will be called repeatedly with different random "
           "seeds, and every instruction it returns is applied to the processor.")


def initial_prompt(arm):
    head, tail = (_S_HEAD, _S_TAIL) if arm == "S" else (_C_HEAD, _C_TAIL)
    return (head + "------\n" + "BINS DESCRIPTION\n" + BINS_DESCRIPTION + "------\n" + tail)


# ---------------------------------------------------------------------------
# Iterative prompts (TemplatePromptGenerator.generate_iterative_prompt + ID1 pieces)
# ---------------------------------------------------------------------------
def _result_summary(arm, response_invalid, no_new_hit, sampled):
    what = ("list of 32-bit instructions (i.e. hex integers between 0x0 and 0xffffffff)"
            if arm == "S" else "generator `generate(rng)` in a single ```python code block")
    some = "some of " if sampled else ""
    if response_invalid:
        return ("Your response doesn't answer my query. \n"
                f"Please generate a {what}, "
                + ("with output format: [a, b, c, ...].\n" if arm == "S" else "as requested.\n")
                + f"Here are {some}the unreached bins:\n")
    produced = "The new values you just provided" if arm == "S" else "The instructions your updated generator produced"
    prev = "previous response(s)"
    if no_new_hit:
        return (f"{produced} didn't cover any new bins. You need to try to cover as "
                "much of the described bins as you can.\n"
                f"You will see the result coverage of your {prev}, and then "
                + ("generate another list of 32-bit instructions" if arm == "S"
                   else "revise your generator")
                + " to cover the unreached bins (i.e. test cases)\n"
                f"Here are {some} the unreached bins:\n")
    return (("The values you provided" if arm == "S" else "The instructions your generator produced")
            + " failed to cover all the bins.\n"
            f"You will see the result coverage of your {prev}, and then "
            + ("generate another list of 32-bit instructions" if arm == "S" else "revise your generator")
            + " to cover the unreached bins (i.e. test cases)\n"
            f"Here are {some}the unreached bins:\n")


def _iter_question(arm, response_invalid):
    if response_invalid:
        return ("Please generate a list of 32-bit instructions (i.e. hex integers between "
                "0x0 and 0xffffffff) , with output format: [a, b, c, ...]." if arm == "S" else
                "Please write the generator `generate(rng)` in a single ```python code block.")
    if arm == "S":
        return ("Please regenerate a 32-bit instruction for each of these unreached bins "
                "according to the BINS DESCRIPTION.")
    return ("Please revise your generator `generate(rng)` (return the complete code) so that it "
            "also produces instructions for these unreached bins according to the BINS DESCRIPTION.")


def _difference_messages():
    """Verbatim port of ID1._load_coverage_difference_prompts_dict (incl. the [-1] bug)."""
    alu = ["ADD", "SUB", "AND", "OR", "XOR", "SLL", "SRL", "SRA", "SLT", "SLTU"]
    op_bins = alu + [f"{s}I" for s in alu] + ["LW", "LH", "LB", "SW", "SH", "SB"]
    ports = {"read_A_reg_": "read_A", "read_B_reg_": "read_B", "write_reg_": "write"}
    reg_bins = {f"{port}{i}": name for i in range(32) for port, name in ports.items()}
    cross = {f"{op}_x_{reg}": (op, name) for reg, name in reg_bins.items() for op in op_bins}
    d = {op: f"- {op}: there's no instruction that performs the operation {op}.\n" for op in op_bins}
    d.update({p: f"- {p}: there's no instruction that uses the {n} port of register {p[-1]}.\n"
              for p, n in reg_bins.items()})
    d.update({b: f"- {b}: there's no operation that performs the operation {op} using the "
                 f"{n} port of register {b[-1]}.\n" for b, (op, n) in cross.items()})
    return d


DIFF = _difference_messages()


class IDAdaNewSampler:
    """Verbatim port of the 'IDAdaNew' missed-bin sampling (numpy -> random.Random)."""

    def __init__(self, rng):
        self.rng = rng
        self.cur = None
        self.hist = []

    def _choice(self, seq, k):
        return self.rng.sample(list(seq), k)

    def _determ(self, mb):
        return mb[:2] + self._choice(mb[2:], 5)

    def _mild(self, mb):
        return mb[:2] + self._choice(mb[2:100], 3) + self._choice(mb[100:], 2)

    def _random(self, mb):
        return self._choice(mb, 7)

    def _id_newest(self, mb, rate):
        if len(mb) >= 40:
            return self._mild(mb) if rate[0] / rate[1] <= 1 / 20 else self._determ(mb)
        if len(mb) > 7:
            return self._determ(mb)
        return mb

    def _idadas(self, mb, rate):
        def resolve():
            if self.cur is None:
                return self._mild
            if len(self.hist) < 4:
                return self.cur
            if self.hist[-1] - self.hist[-4] < 3:
                self.hist.clear()
                return {self._mild.__name__: self._determ, self._random.__name__: self._determ,
                        self._determ.__name__: self._random}[self.cur.__name__]
            return self.cur
        if rate[0] <= 10:
            self.cur = self._mild
        elif len(mb) >= 40:
            self.cur = resolve()
        elif len(mb) >= 7:
            self.cur = self._random
        else:
            return list(mb)
        return self.cur(mb)

    def sample(self, missed, rate):
        self.hist.append(rate[0])
        if rate[0] < 300:
            return self._id_newest(missed, rate)
        return self._idadas(missed, rate)


def iterative_prompt(arm, plan_bins, prev_rate, sampler, response_invalid=False):
    """plan_bins: {bin_name: hits} in ml4dv plan order (crt.ml4dv_coverage.plan_keys)."""
    rate = (sum(1 for v in plan_bins.values() if v), len(plan_bins))
    missed = [b for b, v in plan_bins.items() if v == 0]
    missed = sampler.sample(missed, rate)
    # ml4dv's dictionary has no message for illegal_instruction (it would raise
    # KeyError there); in practice the bin is hit at once, so it never appears.
    diff = "".join(DIFF[b] for b in missed if b in DIFF)
    text = (_result_summary(arm, response_invalid, rate == prev_rate, True)
            + "------\n" "UNREACHED BINS\n" + diff + "------\n"
            + _iter_question(arm, response_invalid))
    return text, rate


if __name__ == "__main__":
    from crt.ml4dv_coverage import plan_keys
    bins = dict.fromkeys(plan_keys(), 0)
    for b in list(bins)[:120]:
        bins[b] = 1
    for arm in ("S", "C"):
        print(f"================ ARM {arm}: SYSTEM ================\n" + (SYSTEM_S if arm == "S" else SYSTEM_C))
        print(f"================ ARM {arm}: INITIAL ================\n" + initial_prompt(arm))
        txt, _ = iterative_prompt(arm, bins, (0, -1), IDAdaNewSampler(random.Random(0)))
        print(f"================ ARM {arm}: ITERATIVE (example) ================\n" + txt + "\n")
