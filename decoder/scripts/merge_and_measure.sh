#!/bin/bash
# After the review of pass K: merge llm_passes/<RUN>/p<K>_final_block.py and measure.
#   bash scripts/merge_and_measure.sh A_run1 1
set -e
cd "$(dirname "$0")/.."
source /home/andrei/ibex_env/bin/activate
python3 llm_pipeline.py merge --run "$1" --pass "$2"
bash scripts/measure_llm_run.sh "$1" "$2"
