#!/bin/bash
# Reproduce every number in PAPER_COMPARISON.md (LLM4DV Table III, Ibex decoder).
# PAPER_MODE=1 ties side inputs exactly like ml4dv's ibex_decoder_wrap.sv.
# Runtime: ~2.5 min per 3x100k run, ~8 min for the 1M random run.
set -e
cd "$(dirname "$0")/.."
source /home/andrei/ibex_env/bin/activate

run() { PAPER_MODE=1 "$@" bash scripts/run_seeds.sh | grep -A4 "LLM4DV PLAN"; }

N_SEEDS=3 CRT_N=100000  CRT_PROFILE=pure_random TAG=paper_random     run   # paper's "100k" CRT
N_SEEDS=1 CRT_N=1000000 CRT_PROFILE=pure_random TAG=paper_random_1M  run   # what ml4dv code actually runs
N_SEEDS=3 CRT_N=100000  CRT_PROFILE=default     TAG=paper_crt_default run  # hand-written CRT
N_SEEDS=3 CRT_N=100000  CRT_PROFILE=llm_crt     TAG=paper_llm_pass1  run   # LLM-derived CRT
