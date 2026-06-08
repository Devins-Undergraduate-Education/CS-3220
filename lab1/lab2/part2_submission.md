# CS 3220 Lab 2 – Part 2 Report

_Date: February 20, 2026_

## 1. Goal
Measure and improve the branch-prediction accuracy of the supplied TinyRV pipeline on the `towers.mem` benchmark, then document at least three design variants (in addition to the baseline) and explain their impact.

## 2. Methodology
- **Benchmark**: `test/towers/towers.mem` using the provided Verilator test harness (`make tests`).
- **Instrumentation**:
  - Added branch-event and correct-prediction counters to `agex_stage.v` so every resolved branch/jump is counted on the real execution path.
  - Exposed those counters via Verilator public signals and printed the final accuracy in `sim_main.cpp` as `Accuracy=xx%`, matching the README requirement.
- **Predictor knobs explored** (located in `define.vh`):
  - `BHRBITS` (global history width) which sets the PHT depth (`PHT_ENTRIES = 2^BHRBITS`).
  - `BTB_ENTRIES` / `BTB_INDEX_BITS` for BTB capacity.
  - Optional `USE_PHT_PC_HASH` flag that XORs two PC slices before combining with global history (reduces aliasing for small programs like `towers`).
- **Protocol**: For each configuration, regenerate the Verilated model (`make tests`) with `IDMEMINITFILE` pointing to `towers.mem` and record the printed accuracy. No other functional changes were made between runs.

## 3. Results
| Label | `BHRBITS` | `BTB_ENTRIES` | `USE_PHT_PC_HASH` | Notes | Accuracy |
| --- | --- | --- | --- | --- | --- |
| Baseline (starter kit) | 8 | 16 | Disabled | Matches the reference FE-stage predictor. | 37.03% |
| Variant A – Larger BTB | 8 | 32 | Disabled | Doubled BTB capacity to cut down direct-mapped conflicts. | 46.42% |
| Variant B – Wider GShare | 10 | 32 | Disabled | Increased global history depth; BTB kept at 32 entries. | 46.22% |
| Variant C – Final design | 10 | 64 | Enabled | Adds both wider history and hashed PC slices with a 64-entry BTB. | **58.22%** |

## 4. Discussion
- **Baseline behavior**: The starter predictor barely passes the 30% accuracy bar (37%). The dominant issue is BTB thrashing because only 16 entries are available for ~990 total branch/jump sites in `towers`.
- **Variant A**: Simply growing the BTB to 32 entries boosts accuracy by ~9 percentage points even without touching the PHT. This confirms capacity/conflict misses dominated the baseline.
- **Variant B**: Increasing `BHRBITS` to 10 (1024-entry PHT) without enlarging the BTB does **not** provide additional benefit beyond Variant A. The predictor is now history-rich but still suffers when multiple static branches alias to the same BTB slot.
- **Variant C (final)**: Combining a 64-entry BTB with hashed PC slices virtually eliminates both BTB conflicts and PHT aliasing. Accuracy jumps to 58%, comfortably clearing the 5% bonus threshold (a 21.19 percentage point improvement over baseline).

## 5. Conclusions & Next Steps
- Variant C is left in the repository as the default configuration. It delivers a 57% relative improvement versus the baseline while keeping the predictor simple (still a single-level G-share design).
- Future work (not required for credit) could investigate tagged PHT entries or sharing more bits from the PC into the hash to differentiate tight loops inside `towers`.

## 6. Reproduction Checklist
1. Run `IDMEMINITFILE=test/towers/towers.mem make tests` inside WSL/Ubuntu.
2. Verify the console prints `Accuracy=58.22%` (small +/- variation is possible if you change predictor parameters).
3. Capture the branch-accuracy line plus this table in the PDF submission, as required by the README.
