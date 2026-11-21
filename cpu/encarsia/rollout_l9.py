"""Offline rollout of the L9 v2 PPO policy (83 ops incl. MRET/WFI/FENCE.I).

Mirror of rollout_rvc.py but for L9. Same Vtop-skip strategy — the env only
invokes Vtop on the last step, and the policy decisions are based on step
counter + zero-module-coverage obs anyway when run offline.
"""
from __future__ import annotations

import argparse
import sys
from pathlib import Path

RL_ROOT = Path("/home/andre/ibex-coverage-experiments/rl-coverage")
L9_DIR = RL_ROOT / "level9_ops"
sys.path.insert(0, str(L9_DIR))

import env_l9_v2  # noqa: E402

env_l9_v2.run_program = lambda actions: None

from env_l9_v2 import IbexL9V2Env  # noqa: E402
from codec_l9 import emit_program  # noqa: E402

from stable_baselines3 import PPO  # noqa: E402

POLICY_ZIP = L9_DIR / "l9_v2_checkpoint_model.zip"
BOOT_ADDR = 0x100080
WFI = 0x10500073


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--seed", type=int, default=0)
    ap.add_argument("--episode-steps", type=int, default=1024)
    ap.add_argument("--out", type=Path, required=True)
    ap.add_argument("--stochastic", action="store_true")
    args = ap.parse_args()

    if not POLICY_ZIP.exists():
        raise SystemExit(f"policy not found: {POLICY_ZIP}")

    print(f"loading policy: {POLICY_ZIP}")
    model = PPO.load(str(POLICY_ZIP))

    env = IbexL9V2Env(episode_steps=args.episode_steps, seed=args.seed)
    obs, _info = env.reset(seed=args.seed)

    mode = "stochastic" if args.stochastic else "deterministic"
    print(f"rolling out {args.episode_steps} steps ({mode})...")
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
