"""Offline rollout of the encarsia 78-op PPO policy (trained from scratch).

Uses codec_encarsia for action encoding, no Vtop invocation (monkey-patch).
"""
from __future__ import annotations

import argparse
import sys
from pathlib import Path

HERE = Path(__file__).resolve().parent
sys.path.insert(0, str(HERE))
RL_ROOT = Path("/home/andre/ibex-coverage-experiments/rl-coverage")
sys.path.insert(0, str(RL_ROOT / "level9_ops"))
sys.path.insert(0, str(RL_ROOT / "level5_real_rtl"))

import codec_encarsia  # noqa: E402
import env_l9_v2  # noqa: E402

env_l9_v2.run_program = lambda actions: None

from train_encarsia_ppo import EncarsiaActionWrapper  # noqa: E402
from stable_baselines3 import PPO  # noqa: E402

BOOT_ADDR = 0x100080
WFI = 0x10500073


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--policy", type=Path, required=True)
    ap.add_argument("--seed", type=int, default=0)
    ap.add_argument("--episode-steps", type=int, default=1024)
    ap.add_argument("--out", type=Path, required=True)
    ap.add_argument("--deterministic", action="store_true")
    args = ap.parse_args()

    print(f"loading {args.policy}")
    model = PPO.load(str(args.policy))
    model.set_random_seed(args.seed)

    env = EncarsiaActionWrapper(episode_steps=args.episode_steps, seed=args.seed)
    obs, _ = env.reset(seed=args.seed)

    mode = "deterministic" if args.deterministic else "stochastic"
    print(f"rolling out {args.episode_steps} steps ({mode})...")
    for _ in range(args.episode_steps):
        action, _ = model.predict(obs, deterministic=args.deterministic)
        obs, _r, terminated, truncated, _ = env.step(action)
        if terminated or truncated:
            break

    # env._inner._actions holds the L9-remapped actions (post-wrapper translation)
    machine = env_l9_v2.emit_program(env._inner._actions)
    if machine[-1] != WFI:
        machine = list(machine) + [WFI]
    print(f"encoded to {len(machine)} machine words")

    lines = [f"{BOOT_ADDR + i*4:08x} {w:08x}" for i, w in enumerate(machine)]
    args.out.write_text("\n".join(lines) + "\n")
    print(f"wrote {args.out}")


if __name__ == "__main__":
    main()
