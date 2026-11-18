#!/bin/bash
# Exact number of stimuli until the LAST new plan bin was hit (= time to plateau),
# per run and per seed, paper mode. 10 seeds x 30k stimuli per run.
#   bash scripts/time_to_plateau.sh B_run1:1 B_run2:1 A_run1:2 hand
set -e
cd "$(dirname "$0")/.."
source /home/andrei/ibex_env/bin/activate
for spec in "$@"; do
    if [ "$spec" = "hand" ]; then
        prof=default; export LLM_MODULE=crt.llm_runs.C_run1_p1; tag=ttp_hand; n=100000
    else
        run=${spec%%:*}; k=${spec##*:}
        prof=llm_crt; export LLM_MODULE=$(python3 llm_pipeline.py modules --run "$run" --pass "$k")
        tag=ttp_${run}_p${k}; n=30000
    fi
    PAPER_MODE=1 N_SEEDS=10 CRT_N=$n CRT_PROFILE=$prof TAG=$tag bash scripts/run_seeds.sh > /dev/null
    python3 - "$tag" <<'EOF'
import json, sys, glob, statistics
tag = sys.argv[1]
js = [json.load(open(f)) for f in sorted(glob.glob(f"results/{tag}_e0_m2_b0/ml4dv_cov_seed*.json"))]
t = [j["last_new"] for j in js]
h = [j["hit"] for j in js]
print(f"{tag:<16} final bins {min(h)}..{max(h)}   stimuli to plateau: "
      f"min {min(t)}  median {int(statistics.median(t))}  mean {statistics.mean(t):.0f}  max {max(t)}")
EOF
done
