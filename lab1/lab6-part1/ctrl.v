module ctrl #(
    parameter IN_WIDTH = 8,
    parameter OUT_WIDTH = 16,
    parameter ROWS = 4,
    parameter COLS = 4,
    parameter K = 4,
    parameter MULT_LAT = 1,
    parameter ACC_LAT = 1
)(
    input clk,
    input rst,
    input input_rst_accumulator,
    input input_stream_out_rdy,
    output [COLS-1:0] rst_accumulator,
    output [COLS-1:0] stream_out_rdy
);

    localparam RST_BASE = (MULT_LAT > 0) ? (MULT_LAT - 1) : 0;
    localparam STREAM_BASE = ((MULT_LAT + ACC_LAT) > 0) ? ((MULT_LAT + ACC_LAT) - 1) : 0;
    localparam RST_LAST = RST_BASE + (COLS - 1);
    localparam STREAM_LAST = STREAM_BASE;
    localparam MAX_LAST = (RST_LAST > STREAM_LAST) ? RST_LAST : STREAM_LAST;
    localparam PIPE_LEN = MAX_LAST + 1;

    reg [PIPE_LEN-1:0] rst_pipe;
    reg [PIPE_LEN-1:0] stream_pipe;
    reg input_rst_accumulator_d;
    reg input_stream_out_rdy_d;
    wire rst_pulse;
    wire stream_pulse;

    assign rst_pulse = input_rst_accumulator & ~input_rst_accumulator_d;
    assign stream_pulse = input_stream_out_rdy & ~input_stream_out_rdy_d;

    integer i;
    always @(posedge clk) begin
        if (rst) begin
            rst_pipe <= '0;
            stream_pipe <= '0;
            input_rst_accumulator_d <= 1'b0;
            input_stream_out_rdy_d <= 1'b0;
        end else begin
            input_rst_accumulator_d <= input_rst_accumulator;
            input_stream_out_rdy_d <= input_stream_out_rdy;
            rst_pipe[0] <= rst_pulse;
            stream_pipe[0] <= stream_pulse;
            for (i = 1; i < PIPE_LEN; i = i + 1) begin
                rst_pipe[i] <= rst_pipe[i-1];
                stream_pipe[i] <= stream_pipe[i-1];
            end
        end
    end

    genvar c;
    generate
        for (c = 0; c < COLS; c = c + 1) begin : gen_ctrl_out
            assign rst_accumulator[c] = rst_pipe[RST_BASE + c];
            assign stream_out_rdy[c] = stream_pipe[STREAM_BASE];
        end
    endgenerate

endmodule
