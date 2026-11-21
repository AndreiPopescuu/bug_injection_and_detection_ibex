"""Online rollout of the L9 v2 PPO policy with real Vtop observations.

Unlike rollout_l9.py (offline, Vtop monkey-patched), this version keeps the
env's Vtop invocation so the policy receives *real* coverage observations
after each episode. Over N episodes the policy adapts its action distribution
based on what's already covered — avoiding the "spam WFI without feedback"
failure mode we saw offline.

Output:
  * Per-episode log of cumulative/episode coverage %
  * Hex of the best-episode action list (highest new-coverage contribution)

Usage:
    python3 rollout_l9_online.py --episodes 30 --seed 0 --out l9_online_s0.hex
"""
from __future__ import annotations

import argparse
import json
import sys
import time
from pathlib import Path

RL_ROOT = Path("/home/andre/ibex-coverage-experiments/rl-coverage")
L9_DIR = RL_ROOT / "level9_ops"
L5_DIR = RL_ROOT / "level5_real_rtl"  # cov_parser lives here
sys.path.insert(0, str(L9_DIR))
sys.path.insert(0, str(L5_DIR))

import env_l9_v2  # noqa: E402
from codec_l9 import emit_program  # noqa: E402
import cov_parser  # noqa: E402
import os, json, subprocess  # noqa: E402

# The env's run_program() has hardcoded paths referencing user `andrei` plus a
# missing PYGPI_PYTHON_BIN. Replace it with a corrected version that works on
# this machine.
_ML4DV = Path("/home/andre/ibex-coverage-experiments/cpu").resolve()
_VTOP = _ML4DV / "sim_build" / "Vtop"
_COVDAT = _ML4DV / "coverage.dat"
_PROGRAM_JSON = "/tmp/rl_l9_v2.json"
_COCOTB_LIBS = "/home/andre/ibex_env/lib/python3.12/site-packages/cocotb/libs"


def _run_program_fixed(actions):
    machine = emit_program(actions)
    with open(_PROGRAM_JSON, "w") as f:
        json.dump({"n": len(machine), "agent": "l8",
                   "machine_code": [int(m) for m in machine]}, f)
    env = os.environ.copy()
    env["LD_LIBRARY_PATH"] = f"{_COCOTB_LIBS}:/usr/lib/x86_64-linux-gnu:" + env.get("LD_LIBRARY_PATH", "")
    env["PYTHONPATH"] = f"{_ML4DV}:/home/andre/ibex_env/lib/python3.12/site-packages:" + env.get("PYTHONPATH", "")
    env["PYGPI_PYTHON_BIN"] = "/home/andre/ibex_env/bin/python3"
    env["MODULE"] = "test_run_for_l8"                 # cocotb 1.x
    env["COCOTB_TEST_MODULES"] = "test_run_for_l8"    # cocotb 2.x
    env["RL_L8_JSON"] = _PROGRAM_JSON
    proc = subprocess.run(
        [str(_VTOP)], cwd=str(_ML4DV), env=env,
        capture_output=True, text=True, timeout=180,
    )
    if not _COVDAT.exists():
        return None
    return cov_parser.parse(str(_COVDAT))


env_l9_v2.run_program = _run_program_fixed

from env_l9_v2 import IbexL9V2Env  # noqa: E402

from stable_baselines3 import PPO  # noqa: E402

POLICY_ZIP = L9_DIR / "l9_v2_checkpoint_model.zip"
BOOT_ADDR = 0x100080
WFI = 0x10500073


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--episodes", type=int, default=30)
    ap.add_argument("--seed", type=int, default=0)
    ap.add_argument("--episode-steps", type=int, default=1024)
    ap.add_argument("--out", type=Path, required=True)
    ap.add_argument("--stochastic", action="store_true")
    ap.add_argument("--log", type=Path, default=None,
                    help="Optional JSON log of per-episode coverage")
    args = ap.parse_args()

    if not POLICY_ZIP.exists():
        raise SystemExit(f"policy not found: {POLICY_ZIP}")

    print(f"loading policy: {POLICY_ZIP}")
    model = PPO.load(str(POLICY_ZIP))
    model.set_random_seed(args.seed)

    env = IbexL9V2Env(episode_steps=args.episode_steps, seed=args.seed)

    best = {"ep": -1, "new_hits": 0, "actions": None, "ep_pct": -1.0, "cum_pct": 0.0}
    log = []

    mode = "stochastic" if args.stochastic else "deterministic"
    print(f"running {args.episodes} episodes ({mode}, real Vtop obs)...")

    t0 = time.time()
    for ep_idx in range(args.episodes):
        obs, _info = env.reset(seed=args.seed + ep_idx)
        ep_actions = []
        for _ in range(args.episode_steps):
            action, _ = model.predict(obs, deterministic=not args.stochastic)
            ep_actions.append(tuple(int(a) for a in action))
            obs, _r, terminated, truncated, info = env.step(action)
            if terminated or truncated:
                break

        ep_pct = info.get("ep_pct", 0.0)
        cum_pct = info.get("cum_pct", 0.0)
        new_hits = info.get("new_hits", 0)
        elapsed = time.time() - t0
        print(f"  ep {ep_idx:>3} | new_hits={new_hits:>5} | ep%={ep_pct:>6.2f} | cum%={cum_pct:>6.2f} | t+={elapsed:>5.1f}s",
              flush=True)
        log.append({"ep": ep_idx, "new_hits": int(new_hits),
                    "ep_pct": float(ep_pct), "cum_pct": float(cum_pct)})
        # Prefer ep_pct for best-selection (new_hits parsing has issues on
        # cocotb 2.x; ep_pct from `summary.by_kind["toggle"]` is reliable).
        if ep_pct > best["ep_pct"]:
            best = {"ep": ep_idx, "new_hits": int(new_hits),
                    "actions": ep_actions, "ep_pct": float(ep_pct),
                    "cum_pct": float(cum_pct)}

    print(f"\nbest episode: ep{best['ep']} new_hits={best['new_hits']} ep%={best['ep_pct']:.2f}")

    machine = emit_program(best["actions"])
    if machine[-1] != WFI:
        machine = list(machine) + [WFI]
    print(f"encoded to {len(machine)} machine words")

    lines = [f"{BOOT_ADDR + i*4:08x} {w:08x}" for i, w in enumerate(machine)]
    args.out.write_text("\n".join(lines) + "\n")
    print(f"wrote {args.out}")

    if args.log:
        args.log.write_text(json.dumps({
            "episodes": log,
            "best": {k: v for k, v in best.items() if k != "actions"},
        }, indent=2))
        print(f"wrote log {args.log}")


if __name__ == "__main__":
    main()
