"""Offline rollout of the L6 RVC PPO policy, emit an Encarsia hex program.

Reuses:
  /home/andre/ibex-coverage-experiments/rl-coverage/level6_rvc/env_rvc_rich.py
  /home/andre/ibex-coverage-experiments/rl-coverage/level6_rvc/codec_rvc.py
  /home/andre/ibex-coverage-experiments/rl-coverage/level6_rvc/ppo_rvc_rich.zip

The env's run_program() is monkey-patched to return None so Vtop is never
invoked. Confirmed from exploration: the policy only sees step counter +
module-coverage observations, and module-coverage stays zero until step 1024.
Thus skipping Vtop produces an action sequence identical to a policy run where
Vtop happened to crash — the policy's decisions depend only on the step index
and (zero) obs for all 1024 steps.

Usage:
    python3 rollout_rvc.py --seed 0 --out rvc_s0.hex
"""
from __future__ import annotations

import argparse
import sys
from pathlib import Path

RL_ROOT = Path("/home/andre/ibex-coverage-experiments/rl-coverage")
L6_DIR = RL_ROOT / "level6_rvc"
sys.path.insert(0, str(L6_DIR))

import env_rvc_rich  # noqa: E402

# Monkey-patch: skip Vtop entirely during rollout.
env_rvc_rich.run_program = lambda actions: None

from env_rvc_rich import IbexRVCRichEnv  # noqa: E402
from codec_rvc import emit_program  # noqa: E402

from stable_baselines3 import PPO  # noqa: E402

POLICY_ZIP = L6_DIR / "ppo_rvc_rich.zip"
BOOT_ADDR = 0x100080
WFI = 0x10500073


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--seed", type=int, default=0)
    ap.add_argument("--episode-steps", type=int, default=1024)
    ap.add_argument("--out", type=Path, required=True)
    ap.add_argument("--stochastic", action="store_true",
                    help="Sample from policy distribution instead of greedy argmax.")
    args = ap.parse_args()

    if not POLICY_ZIP.exists():
        raise SystemExit(f"policy not found: {POLICY_ZIP}")

    print(f"loading policy: {POLICY_ZIP}")
    model = PPO.load(str(POLICY_ZIP))

    env = IbexRVCRichEnv(episode_steps=args.episode_steps, seed=args.seed)
    obs, _info = env.reset(seed=args.seed)

    mode = "stochastic" if args.stochastic else "deterministic"
    print(f"rolling out {args.episode_steps} steps ({mode})...")
    # Seed the policy's RNG for reproducible stochastic sampling
    model.set_random_seed(args.seed)
    for i in range(args.episode_steps):
        action, _ = model.predict(obs, deterministic=not args.stochastic)
        obs, _r, terminated, truncated, _info = env.step(action)
        if terminated or truncated:
            break

    actions = env._actions
    print(f"captured {len(actions)} actions")

    machine = emit_program(actions)
    if machine[-1] != WFI:
        machine = list(machine) + [WFI]
    print(f"encoded to {len(machine)} machine words")

    lines = [f"{BOOT_ADDR + i*4:08x} {w:08x}" for i, w in enumerate(machine)]
    args.out.write_text("\n".join(lines) + "\n")
    print(f"wrote {args.out}")


if __name__ == "__main__":
    main()
