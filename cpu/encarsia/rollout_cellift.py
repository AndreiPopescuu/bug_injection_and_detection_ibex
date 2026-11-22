"""Offline rollout of the cellift-trained PPO policy.

Loads `ppo_cellift.zip` (fine-tuned on cellift DUT via train_cellift_ppo.py),
rolls out ONE episode stochastically (no Vtop — fast deterministic-ish run),
emits Encarsia hex.

Usage:
    python3 rollout_cellift.py --policy ppo_cellift.zip --seed 0 --out ppo_cellift_s0.hex
"""
from __future__ import annotations

import argparse
import sys
from pathlib import Path

RL_ROOT = Path("/home/andre/ibex-coverage-experiments/rl-coverage")
L9_DIR = RL_ROOT / "level9_ops"
L5_DIR = RL_ROOT / "level5_real_rtl"
sys.path.insert(0, str(L9_DIR))
sys.path.insert(0, str(L5_DIR))

import env_l9_v2  # noqa: E402

env_l9_v2.run_program = lambda actions: None

from env_l9_v2 import IbexL9V2Env  # noqa: E402
from codec_l9 import emit_program  # noqa: E402
from stable_baselines3 import PPO  # noqa: E402

BOOT_ADDR = 0x100080
WFI = 0x10500073


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--policy", type=Path, required=True)
    ap.add_argument("--seed", type=int, default=0)
    ap.add_argument("--episode-steps", type=int, default=1024)
    ap.add_argument("--out", type=Path, required=True)
    ap.add_argument("--deterministic", action="store_true",
                    help="Use greedy predict instead of stochastic sampling.")
    args = ap.parse_args()

    print(f"loading {args.policy}")
    model = PPO.load(str(args.policy))
    model.set_random_seed(args.seed)

    env = IbexL9V2Env(episode_steps=args.episode_steps, seed=args.seed)
    obs, _ = env.reset(seed=args.seed)

    mode = "deterministic" if args.deterministic else "stochastic"
    print(f"rolling out {args.episode_steps} steps ({mode})...")
    for _ in range(args.episode_steps):
        action, _ = model.predict(obs, deterministic=args.deterministic)
        obs, _r, terminated, truncated, _info = env.step(action)
        if terminated or truncated:
            break

    machine = emit_program(env._actions)
    if machine[-1] != WFI:
        machine = list(machine) + [WFI]
    print(f"encoded to {len(machine)} machine words")

    lines = [f"{BOOT_ADDR + i*4:08x} {w:08x}" for i, w in enumerate(machine)]
    args.out.write_text("\n".join(lines) + "\n")
    print(f"wrote {args.out}")


if __name__ == "__main__":
    main()
