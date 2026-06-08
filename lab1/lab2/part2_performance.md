# Lab 2 Part 2 Performance Notes

This file explains how to collect the branch-prediction accuracy that the README requires. The instrumentation already prints a line such as `Accuracy=37.12%` at the end of every Verilator run. The table below captures the numbers from the four configurations I measured on February 20, 2026.

## How to run towers.mem
1. Ensure Verilator + g++ are available (the TA-provided flow expects Ubuntu/WSL).
2. From `lab2/`, make sure `define.vh` points `IDMEMINITFILE` at `test/towers/towers.mem` (already set).
3. Invoke `make` (or `./run_tests.sh towers`) inside WSL: `IDMEMINITFILE=test/towers/towers.mem make`.
4. Copy the final `Accuracy=xx%` line from the console into the table.

## Configuration knobs
- `BHRBITS` / `PHT_ENTRIES`: width of the global history register and the PHT size.
- `BTB_ENTRIES` / `BTB_INDEX_BITS`: direct-mapped BTB capacity.
- `USE_PHT_PC_HASH`: when defined, the predictor XORs two PC slices before combining with the BHR to reduce aliasing. Undefine it to reproduce the baseline `PC[9:2] XOR BHR` index.

## Results
| Label | `BHRBITS` | `BTB_ENTRIES` | `USE_PHT_PC_HASH` | Notes | Accuracy |
| --- | --- | --- | --- | --- | --- |
| Baseline (as provided) | 8 | 16 | Disabled | Reference predictor from the starter kit. | 37.03% |
| Variant A – Larger BTB | 8 | 32 | Disabled | Only change `BTB_ENTRIES=32`, `BTB_INDEX_BITS=5` to see the effect of capacity. | 46.42% |
| Variant B – Wider GShare | 10 | 32 | Disabled | Set `BHRBITS=10` / `BTB_ENTRIES=32` to isolate the benefit of a deeper history. | 46.22% |
| Variant C – Final design | 10 | 64 | Enabled | Uses wider history, larger BTB, and hashed PC slices (current repo state). | **58.22%** |

Once you have the numbers, keep the best-performing row (Variant C) as the final configuration in the repo and cite the table in your PDF.
