"""Fine-tune the L6 RVC PPO policy on the cellift Encarsia DUT.

Mirror of train_cellift_ppo.py (which uses L9) but switched to L6:
  env:    IbexRVCRichEnv (61 ops, no trap-inducing instructions)
  codec:  codec_rvc.emit_program
  policy: ppo_rvc_rich.zip (L6 vanilla-trained)

Advantage over L9 variant: L6 action space has NO WFI/MRET/FENCE.I/ECALL,
so the policy physically CANNOT emit program-halting instructions. Avoids
the "WFI spam kills execution on trap-less harness" failure mode.
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
L6_DIR = RL_ROOT / "level6_rvc"
L5_DIR = RL_ROOT / "level5_real_rtl"
HERE = Path(__file__).resolve().parent
sys.path.insert(0, str(L6_DIR))
sys.path.insert(0, str(L5_DIR))

import env_rvc_rich  # noqa: E402
from codec_rvc import emit_program  # noqa: E402
import cov_parser  # noqa: E402


# ---- Cellift Vtop invocation (same as L9 variant) ----------
_VTOP = HERE / "sim_build_rltrain" / "Vtop"
_COVDAT_DIR = HERE
_COCOTB_LIBS = "/home/andre/ibex_env/lib/python3.12/site-packages/cocotb/libs"
_PROGRAM_JSON = "/tmp/rl_cellift_l6.json"


def _run_program_cellift(actions):
    machine = emit_program(actions)
    if not machine or machine[-1] != 0x10500073:
        machine = list(machine) + [0x10500073]
    with open(_PROGRAM_JSON, "w") as f:
        json.dump({"n": len(machine), "agent": "cellift_l6_rl",
                   "machine_code": [int(m) for m in machine]}, f)
    env = os.environ.copy()
    env["LD_LIBRARY_PATH"] = f"{_COCOTB_LIBS}:/usr/lib/x86_64-linux-gnu:" + env.get("LD_LIBRARY_PATH", "")
    env["PYTHONPATH"] = f"{HERE}:/home/andre/ibex_env/lib/python3.12/site-packages:" + env.get("PYTHONPATH", "")
    env["PYGPI_PYTHON_BIN"] = "/home/andre/ibex_env/bin/python3"
    env["MODULE"] = "test_encarsia_rl"
    env["COCOTB_TEST_MODULES"] = "test_encarsia_rl"
    env["RL_L9_JSON"] = _PROGRAM_JSON  # test_encarsia_rl accepts L9/L8/L7/L5 JSON
    env["MAX_CYCLES"] = str(20 * len(machine) + 400)
    cov_dat = _COVDAT_DIR / "coverage.dat"
    proc = subprocess.run(
        [str(_VTOP)], cwd=str(_COVDAT_DIR), env=env,
        stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL, timeout=180,
    )
    if not cov_dat.exists():
        return None
    return cov_parser.parse(str(cov_dat))


env_rvc_rich.run_program = _run_program_cellift


# ---- Patch MODULES + _module_of for cellift (same as L9 variant) ----------
_CELLIFT_MODULES = [
    "cellift_ibex_alu",
    "cellift_ibex_compressed_decoder",
    "cellift_ibex_controller",
    "cellift_ibex_counter",
    "cellift_ibex_cs_registers",
    "cellift_ibex_csr",
    "cellift_ibex_decoder",
    "cellift_ibex_ex_block",
    "cellift_ibex_fetch_fifo",
    "cellift_ibex_id_stage",
    "cellift_ibex_if_stage",
    "cellift_ibex_load_store_unit",
    "cellift_ibex_multdiv_fast",
    "cellift_ibex_prefetch_buffer",
    "cellift_ibex_wb_stage",
    "ibex_golden_driver",
    "encarsia_tb",
    "prim_generic_clock_gating",
    "prim_clock_gating",
    "prim_buf",
    "prim_generic_buf",
    # Pad to env_rvc_rich's expected N_MODULES = 28
    "pad0", "pad1", "pad2", "pad3", "pad4", "pad5", "pad6",
]
assert len(_CELLIFT_MODULES) == env_rvc_rich.N_MODULES, \
    f"MODULES len {len(_CELLIFT_MODULES)} != env {env_rvc_rich.N_MODULES}"


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


env_rvc_rich.MODULES = _CELLIFT_MODULES
env_rvc_rich._module_of = _module_of_cellift


from env_rvc_rich import IbexRVCRichEnv  # noqa: E402
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

    def _on_step(self) -> bool:
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
            ckpt_path = self.ckpt_dir / f"ppo_cellift_l6_ep{ep:04d}.zip"
            self.model.save(str(ckpt_path))
            print(f"  >>> checkpoint saved: {ckpt_path}", flush=True)
        return True


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--episodes", type=int, default=200)
    ap.add_argument("--episode-steps", type=int, default=1024)
    ap.add_argument("--seed", type=int, default=0)
    ap.add_argument("--starting-policy", type=Path,
                    default=L6_DIR / "ppo_rvc_rich.zip")
    ap.add_argument("--out", type=Path, default=HERE / "ppo_cellift_l6.zip")
    ap.add_argument("--log", type=Path, default=HERE / "ppo_cellift_l6_train.json")
    ap.add_argument("--ckpt-every", type=int, default=50)
    ap.add_argument("--ckpt-dir", type=Path, default=HERE / "ppo_cellift_l6_ckpts")
    ap.add_argument("--from-scratch", action="store_true")
    args = ap.parse_args()

    if not _VTOP.exists():
        raise SystemExit(f"cellift training Vtop not found: {_VTOP}")

    env = IbexRVCRichEnv(episode_steps=args.episode_steps, seed=args.seed)

    if args.from_scratch:
        print("PPO from scratch")
        model = PPO("MlpPolicy", env, verbose=0, seed=args.seed)
    else:
        if not args.starting_policy.exists():
            raise SystemExit(f"starting policy not found: {args.starting_policy}")
        print(f"fine-tuning from {args.starting_policy}")
        model = PPO.load(str(args.starting_policy), env=env)

    total_timesteps = args.episodes * args.episode_steps
    args.ckpt_dir.mkdir(parents=True, exist_ok=True)
    cb = EpisodeLogger(args.episodes, ckpt_every=args.ckpt_every, ckpt_dir=args.ckpt_dir)
    print(f"training {args.episodes} episodes × {args.episode_steps} steps")
    if args.ckpt_every > 0:
        print(f"checkpoints every {args.ckpt_every} episodes -> {args.ckpt_dir}/")

    t0 = time.time()
    model.learn(total_timesteps=total_timesteps, callback=cb, reset_num_timesteps=True)
    print(f"\ndone in {(time.time()-t0)/60:.1f} min")

    model.save(str(args.out))
    print(f"saved: {args.out}")

    args.log.write_text(json.dumps({
        "episodes": cb.history,
        "starting_policy": str(args.starting_policy),
        "from_scratch": args.from_scratch,
        "total_episodes": args.episodes,
    }, indent=2))
    print(f"log: {args.log}")


if __name__ == "__main__":
    main()
