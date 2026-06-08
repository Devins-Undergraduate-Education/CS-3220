module alu #(
    parameter DATA_WIDTH = 32,
    parameter INST_WIDTH = 4
)(
    input                   i_clk,
    input                   i_rst_n,
    input  [DATA_WIDTH-1:0] i_data_a,
    input  [DATA_WIDTH-1:0] i_data_b,
    input  [INST_WIDTH-1:0] i_inst,
    input                   i_valid,
    output [DATA_WIDTH-1:0] o_data,
    output                  o_overflow,
    output                  o_valid
);

    reg [DATA_WIDTH-1:0] data_r;
    reg                  overflow_r;
    reg                  valid_r;

    reg [DATA_WIDTH-1:0] next_data;
    reg                  next_overflow;

    wire signed [DATA_WIDTH-1:0] a_s = i_data_a;
    wire signed [DATA_WIDTH-1:0] b_s = i_data_b;
    wire        [DATA_WIDTH-1:0] a_u = i_data_a;
    wire        [DATA_WIDTH-1:0] b_u = i_data_b;

    wire signed [DATA_WIDTH:0] add_s_ext = {a_s[DATA_WIDTH-1], a_s} + {b_s[DATA_WIDTH-1], b_s};
    wire signed [DATA_WIDTH:0] sub_s_ext = {a_s[DATA_WIDTH-1], a_s} - {b_s[DATA_WIDTH-1], b_s};
    wire        [DATA_WIDTH:0] add_u_ext = {1'b0, a_u} + {1'b0, b_u};
    wire        [DATA_WIDTH:0] sub_u_ext = {1'b0, a_u} - {1'b0, b_u};

    wire signed [2*DATA_WIDTH-1:0] mul_s_ext = a_s * b_s;
    wire        [2*DATA_WIDTH-1:0] mul_u_ext = a_u * b_u;

    function [DATA_WIDTH-1:0] bit_reverse;
        input [DATA_WIDTH-1:0] in;
        integer i;
        begin
            for (i = 0; i < DATA_WIDTH; i = i + 1) begin
                bit_reverse[i] = in[DATA_WIDTH-1-i];
            end
        end
    endfunction

    always @(*) begin
        next_data = {DATA_WIDTH{1'b0}};
        next_overflow = 1'b0;
        case (i_inst)
            4'd0: begin // Signed Add
                next_data = add_s_ext[DATA_WIDTH-1:0];
                next_overflow = add_s_ext[DATA_WIDTH] ^ add_s_ext[DATA_WIDTH-1];
            end
            4'd1: begin // Signed Sub
                next_data = sub_s_ext[DATA_WIDTH-1:0];
                next_overflow = sub_s_ext[DATA_WIDTH] ^ sub_s_ext[DATA_WIDTH-1];
            end
            4'd2: begin // Signed Mul
                next_data = mul_s_ext[DATA_WIDTH-1:0];
                next_overflow = (mul_s_ext[2*DATA_WIDTH-1:DATA_WIDTH] != {DATA_WIDTH{mul_s_ext[DATA_WIDTH-1]}});
            end
            4'd3: begin // Signed Max
                next_data = (a_s >= b_s) ? a_s : b_s;
                next_overflow = 1'b0;
            end
            4'd4: begin // Signed Min
                next_data = (a_s <= b_s) ? a_s : b_s;
                next_overflow = 1'b0;
            end
            4'd5: begin // Unsigned Add
                next_data = add_u_ext[DATA_WIDTH-1:0];
                next_overflow = add_u_ext[DATA_WIDTH];
            end
            4'd6: begin // Unsigned Sub
                next_data = sub_u_ext[DATA_WIDTH-1:0];
                next_overflow = sub_u_ext[DATA_WIDTH];
            end
            4'd7: begin // Unsigned Mul
                next_data = mul_u_ext[DATA_WIDTH-1:0];
                next_overflow = |mul_u_ext[2*DATA_WIDTH-1:DATA_WIDTH];
            end
            4'd8: begin // Unsigned Max
                next_data = (a_u >= b_u) ? a_u : b_u;
                next_overflow = 1'b0;
            end
            4'd9: begin // Unsigned Min
                next_data = (a_u <= b_u) ? a_u : b_u;
                next_overflow = 1'b0;
            end
            4'd10: begin // And
                next_data = a_u & b_u;
                next_overflow = 1'b0;
            end
            4'd11: begin // Or
                next_data = a_u | b_u;
                next_overflow = 1'b0;
            end
            4'd12: begin // Xor
                next_data = a_u ^ b_u;
                next_overflow = 1'b0;
            end
            4'd13: begin // BitFlip
                next_data = ~a_u;
                next_overflow = 1'b0;
            end
            4'd14: begin // BitReverse
                next_data = bit_reverse(a_u);
                next_overflow = 1'b0;
            end
            default: begin
                next_data = {DATA_WIDTH{1'b0}};
                next_overflow = 1'b0;
            end
        endcase
    end

    always @(posedge i_clk or negedge i_rst_n) begin
        if (!i_rst_n) begin
            data_r <= {DATA_WIDTH{1'b0}};
            overflow_r <= 1'b0;
            valid_r <= 1'b0;
        end else begin
            if (i_valid) begin
                data_r <= next_data;
                overflow_r <= next_overflow;
                valid_r <= 1'b1;
            end else begin
                valid_r <= 1'b0;
            end
        end
    end

    assign o_data = data_r;
    assign o_overflow = overflow_r;
    assign o_valid = valid_r;

endmodule