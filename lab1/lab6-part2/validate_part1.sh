#!/usr/bin/env bash
set -euo pipefail

cd /mnt/c/Users/devin/OneDrive/Documents/Georgia_Tech/CS3220/lab1/lab6-part2

cases=(
  "2 2 2 100 1 3"
  "2 2 2 100 2 3"
  "2 2 2 100 3 3"
  "2 2 2 100 4 3"
  "2 2 2 100 5 3"
  "4 4 4 10 1 3"
  "4 4 4 10 2 3"
  "4 4 4 10 3 3"
  "4 4 4 10 4 3"
  "4 4 4 10 5 3"
  "4 4 4 10 1 2"
  "4 4 4 10 1 3"
  "4 4 4 10 1 4"
  "4 4 4 10 1 5"
  "4 4 4 10 1 6"
  "4 8 8 10 1 3"
  "8 4 4 10 1 3"
  "2 4 4 10 1 3"
  "4 2 2 10 1 3"
  "8 8 8 10 1 3"
  "4 4 4 100 1 3"
  "2 16 8 100 5 2"
  "8 16 2 100 5 4"
)

i=0
total=${#cases[@]}
for c in "${cases[@]}"; do
  i=$((i+1))
  read -r ROWS COLS K NUM SEED MLAT <<< "$c"
  echo "[$i/$total] ROWS=$ROWS COLS=$COLS K=$K NUM=$NUM SEED=$SEED MULT_LAT=$MLAT"
  make clean >/dev/null
  make systolic_array \
    ROWS="$ROWS" \
    COLS="$COLS" \
    K="$K" \
    NUM_TESTS="$NUM" \
    SEED="$SEED" \
    MULT_LAT="$MLAT" \
    TEST_FILE=test_systolic_array.cpp \
    PYTHON=python3 \
    >/dev/null

  if ! grep -q "PASSED!" results.log; then
    echo "FAILED CASE ROWS=$ROWS COLS=$COLS K=$K NUM=$NUM SEED=$SEED MULT_LAT=$MLAT"
    cat results.log
    exit 1
  fi
done

echo "ALL_CASES_PASSED"
