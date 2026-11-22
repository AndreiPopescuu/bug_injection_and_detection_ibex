"""Train PPO on the custom encarsia 78-op action space.

Uses codec_encarsia (L9 minus 5 trap-inducing ops) and the L9 env wrapped
with action-space remapping.

The underlying env (IbexL9V2Env) still has an 83-wide action space, but
the agent sees only 78 safe ops. A thin wrapper translates on every step.

From-scratch training (no warm-start since action space differs from any
existing saved policy).

Usage:
    python3 train_encarsia_ppo.py --episodes 300 --out ppo_encarsia.zip
"""
from __future__ import annotations

import argparse
import json
import os
import re
import subprocess
import sys
import time
from pathlib import Path

RL_ROOT = Path("/home/andre/ibex-coverage-experiments/rl-coverage")
L9_DIR = RL_ROOT / "level9_ops"
L5_DIR = RL_ROOT / "level5_real_rtl"
HERE = Path(__file__).resolve().parent
sys.path.insert(0, str(L9_DIR))
sys.path.insert(0, str(L5_DIR))
sys.path.insert(0, str(HERE))

import codec_encarsia  # noqa: E402  (our 78-op codec)
import env_l9_v2  # noqa: E402
import cov_parser  # noqa: E402

# ---- Cellift Vtop invocation ----------
_VTOP = HERE / "sim_build_rltrain" / "Vtop"
_COVDAT_DIR = HERE
_COCOTB_LIBS = "/home/andre/ibex_env/lib/python3.12/site-packages/cocotb/libs"
_PROGRAM_JSON = "/tmp/rl_cellift_enc.json"


def _run_program_cellift(actions):
    """Receives L9-space actions (already remapped by wrapper). Emits to cellift Vtop."""
    machine = env_l9_v2.emit_program(actions)  # L9's emit_program
    if not machine or machine[-1] != 0x10500073:
        machine = list(machine) + [0x10500073]
    with open(_PROGRAM_JSON, "w") as f:
        json.dump({"n": len(machine), "agent": "cellift_enc_rl",
                   "machine_code": [int(m) for m in machine]}, f)
    env = os.environ.copy()
    env["LD_LIBRARY_PATH"] = f"{_COCOTB_LIBS}:/usr/lib/x86_64-linux-gnu:" + env.get("LD_LIBRARY_PATH", "")
    env["PYTHONPATH"] = f"{HERE}:/home/andre/ibex_env/lib/python3.12/site-packages:" + env.get("PYTHONPATH", "")
    env["PYGPI_PYTHON_BIN"] = "/home/andre/ibex_env/bin/python3"
    env["MODULE"] = "test_encarsia_rl"
    env["COCOTB_TEST_MODULES"] = "test_encarsia_rl"
    env["RL_L9_JSON"] = _PROGRAM_JSON
    env["MAX_CYCLES"] = str(20 * len(machine) + 400)
    cov_dat = _COVDAT_DIR / "coverage.dat"
    proc = subprocess.run(
        [str(_VTOP)], cwd=str(_COVDAT_DIR), env=env,
        stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL, timeout=180,
    )
    if not cov_dat.exists():
        return None
    return cov_parser.parse(str(cov_dat))


env_l9_v2.run_program = _run_program_cellift

# ---- Cellift MODULES patch (same as before) ----------
_CELLIFT_MODULES = [
    "cellift_ibex_alu", "cellift_ibex_compressed_decoder", "cellift_ibex_controller",
    "cellift_ibex_counter", "cellift_ibex_cs_registers", "cellift_ibex_csr",
    "cellift_ibex_decoder", "cellift_ibex_ex_block", "cellift_ibex_fetch_fifo",
    "cellift_ibex_id_stage", "cellift_ibex_if_stage", "cellift_ibex_load_store_unit",
    "cellift_ibex_multdiv_fast", "cellift_ibex_prefetch_buffer", "cellift_ibex_wb_stage",
    "ibex_golden_driver", "encarsia_tb",
    "prim_generic_clock_gating", "prim_clock_gating", "prim_buf", "prim_generic_buf",
    "pad0", "pad1", "pad2", "pad3",
]
assert len(_CELLIFT_MODULES) == env_l9_v2.N_MODULES


def _module_of_cellift(key: str):
    m = re.search(r"page\x02v_toggle/([^\x01]+)\x01", key)
    if not m:
        return None
    raw = m.group(1).split("__")[0]
    for pat in (r"cellift_ibex_[a-z_]+", r"ibex_[a-z_]+", r"encarsia_[a-z_]+", r"prim_[a-z_]+"):
        m2 = re.search(pat, raw)
        if m2:
            return m2.group(0)
    return raw.rsplit("\\", 1)[-1]


env_l9_v2.MODULES = _CELLIFT_MODULES
env_l9_v2._module_of = _module_of_cellift

from env_l9_v2 import IbexL9V2Env  # noqa: E402
import gymnasium as gym  # noqa: E402
from gymnasium import spaces  # noqa: E402
import numpy as np  # noqa: E402


class EncarsiaActionWrapper(gym.Env):
    """Wraps IbexL9V2Env with a 78-op action space (encarsia safe subset).

    Actions produced by the agent are indices into codec_encarsia._SAFE_L9,
    which are then translated to L9 op indices before being forwarded to the
    inner env.
    """
    metadata = {"render_modes": []}

    def __init__(self, episode_steps: int = 1024, seed: int | None = None):
        super().__init__()
        self._inner = IbexL9V2Env(episode_steps=episode_steps, seed=seed)
        self.action_space = spaces.MultiDiscrete(
            [codec_encarsia.N_OPS, 32, 32, 32, codec_encarsia.IMM_BUCKETS]
        )
        self.observation_space = self._inner.observation_space
        self._safe_l9 = codec_encarsia._SAFE_L9  # list mapping enc_idx -> L9 idx

    def reset(self, *, seed=None, options=None):
        return self._inner.reset(seed=seed, options=options)

    def step(self, action):
        a = list(action)
        a[0] = int(self._safe_l9[int(a[0])])
        return self._inner.step(np.array(a, dtype=action.dtype))

    def __getattr__(self, name):
        # Delegate reads of inner attributes (e.g. _actions)
        return getattr(self._inner, name)


from stable_baselines3 import PPO  # noqa: E402
from stable_baselines3.common.callbacks import BaseCallback  # noqa: E402


class EpisodeLogger(BaseCallback):
    def __init__(self, total_episodes, ckpt_every=50, ckpt_dir=None):
        super().__init__()
        self.total_episodes = total_episodes
        self.ckpt_every = ckpt_every
        self.ckpt_dir = ckpt_dir
        self.history: list[dict] = []
        self.t0 = time.time()

    def _on_step(self):
        info = self.locals.get("infos", [{}])[0]
        if "ep_pct" not in info:
            return True
        ep = len(self.history) + 1
        new_hits = info.get("new_hits_vs_cum", info.get("new_hits", 0))
        self.history.append({
            "ep": ep,
            "ep_pct": float(info["ep_pct"]),
            "cum_pct": float(info["cum_pct"]),
            "new_hits": int(new_hits),
        })
        dt = time.time() - self.t0
        eta = dt / ep * (self.total_episodes - ep)
        print(f"  ep {ep:>4}/{self.total_episodes} | ep%={info['ep_pct']:>6.2f} | "
              f"cum%={info['cum_pct']:>6.2f} | new={new_hits:>5} | "
              f"t+={dt/60:.1f}min eta={eta/60:.1f}min", flush=True)
        if self.ckpt_every > 0 and self.ckpt_dir is not None and ep % self.ckpt_every == 0:
            ckpt = self.ckpt_dir / f"ppo_encarsia_ep{ep:04d}.zip"
            self.model.save(str(ckpt))
            print(f"  >>> checkpoint: {ckpt}", flush=True)
        return True


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--episodes", type=int, default=300)
    ap.add_argument("--episode-steps", type=int, default=1024)
    ap.add_argument("--seed", type=int, default=0)
    ap.add_argument("--out", type=Path, default=HERE / "ppo_encarsia.zip")
    ap.add_argument("--log", type=Path, default=HERE / "ppo_encarsia_train.json")
    ap.add_argument("--ckpt-every", type=int, default=50)
    ap.add_argument("--ckpt-dir", type=Path, default=HERE / "ppo_encarsia_ckpts")
    args = ap.parse_args()

    if not _VTOP.exists():
        raise SystemExit(f"cellift training Vtop not found: {_VTOP}")

    env = EncarsiaActionWrapper(episode_steps=args.episode_steps, seed=args.seed)
    print(f"action space: {env.action_space}")
    print(f"obs space:    {env.observation_space}")

    print("PPO from scratch (78-op action space, no compatible warm-start)")
    model = PPO("MlpPolicy", env, verbose=0, seed=args.seed)

    total_timesteps = args.episodes * args.episode_steps
    args.ckpt_dir.mkdir(parents=True, exist_ok=True)
    cb = EpisodeLogger(args.episodes, ckpt_every=args.ckpt_every, ckpt_dir=args.ckpt_dir)
    print(f"training {args.episodes} episodes × {args.episode_steps} steps")
    print(f"checkpoints every {args.ckpt_every} episodes -> {args.ckpt_dir}/")

    t0 = time.time()
    model.learn(total_timesteps=total_timesteps, callback=cb, reset_num_timesteps=True)
    print(f"\ndone in {(time.time()-t0)/60:.1f} min")

    model.save(str(args.out))
    print(f"saved: {args.out}")
    args.log.write_text(json.dumps({
        "episodes": cb.history,
        "total_episodes": args.episodes,
        "action_space_size": codec_encarsia.N_OPS,
    }, indent=2))
    print(f"log: {args.log}")


if __name__ == "__main__":
    main()
