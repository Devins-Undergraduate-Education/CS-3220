module fpu #(
    parameter DATA_WIDTH = 32,
    parameter INST_WIDTH = 1
)(
    input                   i_clk,
    input                   i_rst_n,
    input  [DATA_WIDTH-1:0] i_data_a,
    input  [DATA_WIDTH-1:0] i_data_b,
    input  [INST_WIDTH-1:0] i_inst,
    input                   i_valid,
    output [DATA_WIDTH-1:0] o_data,
    output                  o_valid
);

    reg [DATA_WIDTH-1:0] data_r;
    reg                  valid_r;

    reg [DATA_WIDTH-1:0] next_data;

    reg sign_big;
    reg sign_small;
    reg [7:0] exp_big;
    reg [7:0] exp_small;
    reg [23:0] mant_big;
    reg [23:0] mant_small;
    reg [7:0] exp_res;
    reg sign_res;
    reg [27:0] mant_big_ext;
    reg [27:0] mant_small_ext;
    reg [27:0] mant_small_shift;
    reg [27:0] sum_ext;
    reg [24:0] rounded;
    integer i;
    integer shift_left;

    reg [47:0] prod;
    reg [27:0] mant_grs;
    reg guard;
    reg rnd;
    reg sticky;

    wire sign_a = i_data_a[31];
    wire sign_b = i_data_b[31];
    wire [7:0] exp_a = i_data_a[30:23];
    wire [7:0] exp_b = i_data_b[30:23];
    wire [22:0] frac_a = i_data_a[22:0];
    wire [22:0] frac_b = i_data_b[22:0];

    wire a_zero = (i_data_a[30:0] == 31'd0);
    wire b_zero = (i_data_b[30:0] == 31'd0);

    wire [23:0] mant_a = {1'b1, frac_a};
    wire [23:0] mant_b = {1'b1, frac_b};

    function [27:0] shift_right_sticky;
        input [27:0] val;
        input [7:0] sh;
        reg sticky;
        integer j;
        begin
            if (sh == 0) begin
                shift_right_sticky = val;
            end else if (sh >= 28) begin
                sticky = |val;
                shift_right_sticky = 28'b0;
                shift_right_sticky[0] = sticky;
            end else begin
                sticky = 1'b0;
                for (j = 0; j < 28; j = j + 1) begin
                    if (j < sh)
                        sticky = sticky | val[j];
                end
                shift_right_sticky = val >> sh;
                shift_right_sticky[0] = shift_right_sticky[0] | sticky;
            end
        end
    endfunction

    function [24:0] round_mant;
        input [27:0] val;
        reg lsb;
        reg guard;
        reg rnd;
        reg sticky;
        reg inc;
        reg [23:0] mant;
        reg [24:0] mant_inc;
        begin
            mant = val[26:3];
            lsb = val[3];
            guard = val[2];
            rnd = val[1];
            sticky = val[0];
            inc = guard & (rnd | sticky | lsb);
            mant_inc = {1'b0, mant} + inc;
            round_mant = mant_inc;
        end
    endfunction

    always @(*) begin
        next_data = {DATA_WIDTH{1'b0}};
        if (i_inst == 1'b0) begin
            if (a_zero && b_zero) begin
                next_data = 32'd0;
            end else if (a_zero) begin
                next_data = i_data_b;
            end else if (b_zero) begin
                next_data = i_data_a;
            end else begin
                if (exp_a > exp_b) begin
                    sign_big = sign_a; sign_small = sign_b;
                    exp_big = exp_a;   exp_small = exp_b;
                    mant_big = mant_a; mant_small = mant_b;
                end else if (exp_b > exp_a) begin
                    sign_big = sign_b; sign_small = sign_a;
                    exp_big = exp_b;   exp_small = exp_a;
                    mant_big = mant_b; mant_small = mant_a;
                end else begin
                    if (mant_a >= mant_b) begin
                        sign_big = sign_a; sign_small = sign_b;
                        exp_big = exp_a;   exp_small = exp_b;
                        mant_big = mant_a; mant_small = mant_b;
                    end else begin
                        sign_big = sign_b; sign_small = sign_a;
                        exp_big = exp_b;   exp_small = exp_a;
                        mant_big = mant_b; mant_small = mant_a;
                    end
                end

                mant_big_ext = {1'b0, mant_big, 3'b000};
                mant_small_ext = {1'b0, mant_small, 3'b000};
                mant_small_shift = shift_right_sticky(mant_small_ext, exp_big - exp_small);

                exp_res = exp_big;
                if (sign_big == sign_small) begin
                    sum_ext = mant_big_ext + mant_small_shift;
                    sign_res = sign_big;
                    if (sum_ext[27]) begin
                        sum_ext = shift_right_sticky(sum_ext, 1);
                        exp_res = exp_res + 1'b1;
                    end
                end else begin
                    if (mant_big_ext >= mant_small_shift) begin
                        sum_ext = mant_big_ext - mant_small_shift;
                        sign_res = sign_big;
                    end else begin
                        sum_ext = mant_small_shift - mant_big_ext;
                        sign_res = sign_small;
                    end

                    if (sum_ext == 0) begin
                        next_data = 32'd0;
                        sum_ext = 28'd0;
                        exp_res = 8'd0;
                        sign_res = 1'b0;
                    end else begin
                        shift_left = 0;
                        for (i = 26; i >= 0; i = i - 1) begin
                            if (sum_ext[i]) begin
                                shift_left = 26 - i;
                                i = -1;
                            end
                        end
                        if (shift_left > 0) begin
                            sum_ext = sum_ext << shift_left;
                            exp_res = exp_res - shift_left[7:0];
                        end
                    end
                end

                if (sum_ext != 0) begin
                    rounded = round_mant(sum_ext);
                    if (rounded[24]) begin
                        exp_res = exp_res + 1'b1;
                        next_data = {sign_res, exp_res, rounded[23:1]};
                    end else begin
                        next_data = {sign_res, exp_res, rounded[22:0]};
                    end
                end
            end
        end else begin
            if (a_zero || b_zero) begin
                next_data = 32'd0;
            end else begin
                sign_res = sign_a ^ sign_b;
                exp_res = exp_a + exp_b - 8'd127;

                prod = mant_a * mant_b;
                if (prod[47]) begin
                    guard = prod[23];
                    rnd = prod[22];
                    sticky = |prod[21:0];
                    mant_grs = {1'b0, prod[47:24], guard, rnd, sticky};
                    exp_res = exp_res + 1'b1;
                end else begin
                    guard = prod[22];
                    rnd = prod[21];
                    sticky = |prod[20:0];
                    mant_grs = {1'b0, prod[46:23], guard, rnd, sticky};
                end

                rounded = round_mant(mant_grs);
                if (rounded[24]) begin
                    exp_res = exp_res + 1'b1;
                    next_data = {sign_res, exp_res, rounded[23:1]};
                end else begin
                    next_data = {sign_res, exp_res, rounded[22:0]};
                end
            end
        end
    end

    always @(posedge i_clk or negedge i_rst_n) begin
        if (!i_rst_n) begin
            data_r <= {DATA_WIDTH{1'b0}};
            valid_r <= 1'b0;
        end else begin
            if (i_valid) begin
                data_r <= next_data;
                valid_r <= 1'b1;
            end else begin
                valid_r <= 1'b0;
            end
        end
    end

    assign o_data = data_r;
    assign o_valid = valid_r;

endmodule
