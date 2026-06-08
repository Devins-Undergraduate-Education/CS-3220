import argparse
import random


def matmul(a, b):
    rows = len(a)
    k = len(a[0])
    cols = len(b[0])
    out = [[0 for _ in range(cols)] for _ in range(rows)]
    for i in range(rows):
        for j in range(cols):
            s = 0
            for t in range(k):
                s += a[i][t] * b[t][j]
            out[i][j] = s & 0xFF
    return out


def transpose(m):
    if not m:
        return []
    return [list(x) for x in zip(*m)]


def write_matrix_bytes(path, m):
    with open(path, "wb") as f:
        for row in m:
            f.write(bytes([x & 0xFF for x in row]))


def read_bytes(path):
    with open(path, "rb") as f:
        return list(f.read())


def reshape(flat, rows, cols):
    if rows * cols == 0:
        return []
    if len(flat) < rows * cols:
        flat = flat + [0] * (rows * cols - len(flat))
    flat = flat[: rows * cols]
    return [flat[i * cols : (i + 1) * cols] for i in range(rows)]


def concat_axis1(mats):
    # horizontal concat, same row count
    rows = len(mats[0])
    out = [[] for _ in range(rows)]
    for m in mats:
        for r in range(rows):
            out[r].extend(m[r])
    return out


def concat_axis0(mats):
    out = []
    for m in mats:
        out.extend(m)
    return out


def generate_random_data_for_4_4_systolic_array(a_size=(4, 4), b_size=(4, 4), c_size=(4, 4), data_bitwdith=3, num_test=4):
    if a_size[0] != c_size[0] or b_size[1] != c_size[1] or a_size[1] != b_size[0]:
        raise ValueError(f"Improper matrix dimensions: {a_size}, {b_size}, {c_size}")

    a_matrix_list = []
    b_matrix_list = []
    c_matrix_list = []
    for _ in range(num_test):
        a = [[random.randint(1, 2**data_bitwdith - 1) for _ in range(a_size[1])] for _ in range(a_size[0])]
        b = [[random.randint(1, 2**data_bitwdith - 1) for _ in range(b_size[1])] for _ in range(b_size[0])]
        c = matmul(a, b)
        a_matrix_list.append(a)
        b_matrix_list.append(b)
        c_matrix_list.append(c)

    a_matrix_merged = concat_axis1(a_matrix_list)
    b_matrix_merged = concat_axis0(b_matrix_list)
    c_matrix_merged = concat_axis1(c_matrix_list)

    k_direction = max(a_size[1] * num_test + a_size[0], b_size[0] * num_test + b_size[1])

    a_shift = [[0 for _ in range(k_direction)] for _ in range(a_size[0])]
    for r in range(a_size[0]):
        for c in range(a_size[1] * num_test):
            a_shift[r][r + c] = a_matrix_merged[r][c] & 0xFF

    b_shift = [[0 for _ in range(b_size[1])] for _ in range(k_direction)]
    for c in range(b_size[1]):
        for r in range(b_size[0] * num_test):
            b_shift[c + r][c] = b_matrix_merged[r][c] & 0xFF

    c_shift = [[0 for _ in range(c_size[1] * num_test + c_size[0] - 1)] for _ in range(c_size[0])]
    for r in range(c_size[0]):
        for c in range(c_size[1] * num_test):
            c_shift[r][r + c] = c_matrix_merged[r][c] & 0xFF

    write_matrix_bytes("a_matrix.bin", transpose(a_shift))
    write_matrix_bytes("b_matrix.bin", b_shift)
    write_matrix_bytes("c_matrix.bin", transpose(c_shift))
    write_matrix_bytes("d_matrix.bin", transpose(c_matrix_merged))


def rows_equal(a, b):
    if len(a) != len(b):
        return False
    for i in range(len(a)):
        if (a[i] & 0xFF) != (b[i] & 0xFF):
            return False
    return True


def verify_results(
    gold_data_file,
    result_data_file,
    a_matrix_file="a_matrix.bin",
    b_matrix_file="b_matrix.bin",
    row_size=4,
    col_size=4,
    k_size=4,
    num_tests=1,
):
    _ = (a_matrix_file, b_matrix_file, col_size, k_size, num_tests)
    gold_flat = read_bytes(gold_data_file)
    result_flat = read_bytes(result_data_file)

    if row_size == 0:
        return False
    gold_rows = reshape(gold_flat, len(gold_flat) // row_size, row_size)
    result_rows = reshape(result_flat, len(result_flat) // row_size, row_size)

    if not gold_rows:
        return False

    start_indicator = gold_rows[0]
    end_indicator = gold_rows[-1]

    start_idx = -1
    for i, row in enumerate(result_rows):
        if rows_equal(row, start_indicator):
            start_idx = i
            break
    if start_idx == -1:
        return False

    end_idx = -1
    for i in range(len(result_rows) - 1, -1, -1):
        if rows_equal(result_rows[i], end_indicator):
            end_idx = i
            break
    if end_idx == -1 or end_idx < start_idx:
        return False

    sliced = result_rows[start_idx : end_idx + 1]
    if len(sliced) != len(gold_rows):
        return False

    for i in range(len(gold_rows)):
        if not rows_equal(gold_rows[i], sliced[i]):
            return False
    return True


if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("--mode", type=str, default="gen_data", help="Mode to run the script")
    parser.add_argument("--a-size", type=str, default="4x4", help="matrix A dimensions")
    parser.add_argument("--b-size", type=str, default="4x4", help="Matrix B dimensions")
    parser.add_argument("--c-size", type=str, default="4x4", help="Matrix C dimensions")
    parser.add_argument("--num-tests", type=int, default=1, help="Number of tests to generate")
    parser.add_argument("--seed", default=1, type=int, help="Random seed")
    args = parser.parse_args()

    random.seed(args.seed)

    a_size = tuple(map(int, args.a_size.split("x")))
    b_size = tuple(map(int, args.b_size.split("x")))
    c_size = tuple(map(int, args.c_size.split("x")))

    if args.mode == "gen_data":
        generate_random_data_for_4_4_systolic_array(a_size=a_size, b_size=b_size, c_size=c_size, num_test=args.num_tests)
    else:
        result = verify_results(
            "c_matrix.bin",
            "results.bin",
            row_size=a_size[0],
            col_size=c_size[1],
            k_size=a_size[1],
            num_tests=args.num_tests,
        )
        if result:
            print("PASSED!")
        else:
            print("FAILED!")
