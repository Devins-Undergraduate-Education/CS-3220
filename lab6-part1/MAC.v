module mac #(
    parameter IN_WIDTH = 8,
    parameter IN_FRAC = 0,
    parameter OUT_WIDTH = 8,
    parameter OUT_FRAC = 0,
    parameter MULT_LAT = 3,
    parameter ADD_LAT = 1,
    parameter K = 1,
    parameter ROWS = 1,
    parameter COLS = 1,
    parameter COLS_IDX = 1,
    parameter ROWS_IDX = 1
)(
    input                      clk,
    input                      rst,
    input                      rst_accumulator_in,
    input                      stream_out_rdy_in,
    input       [IN_WIDTH-1:0] row_data_in,
    input       [IN_WIDTH-1:0] col_data_in,
    input      [OUT_WIDTH-1:0] bypass_data_in, 
    output reg  [IN_WIDTH-1:0] row_data_out,
    output reg  [IN_WIDTH-1:0] col_data_out,
    output reg                 rst_accumulator_out,
    output reg                 stream_out_rdy_out,
    output reg [OUT_WIDTH-1:0] psum_out
);


    //TODO: Signal declarations
    wire signed [OUT_WIDTH-1:0] mult_out;
    wire mult_done;
    wire signed [OUT_WIDTH-1:0] add_out;
    wire add_done;
    wire mul_en;
    wire [OUT_WIDTH-1:0] fifo_data_out;
    wire fifo_full;
    wire fifo_empty;
    reg fifo_w_en;
    reg fifo_r_en;
    localparam OPQ_W = 16;
    localparam COL_CNT_W = (COLS <= 1) ? 1 : $clog2(COLS);
    reg [OPQ_W-1:0] pending_ops;
    reg [COL_CNT_W-1:0] inject_cnt;
    reg capture_local;
    reg read_local;
    reg [COLS-1:0] stream_capture_pipe;
    wire stream_capture_pulse;
    localparam integer CAP_DELAY = (COLS > K) ? (COLS - K) : 0;
    wire stream_capture_bonus_pulse;

    wire signed [OUT_WIDTH-1:0] add_a_in;
    localparam integer OUT_DELAY = (COLS - COLS_IDX - 1 > 0) ? (COLS - COLS_IDX - 1) : 0;
    integer di;
    reg [OUT_WIDTH-1:0] psum_delay_line [0:COLS-1];
    assign mul_en = 1'b1;
    assign stream_capture_pulse = (COLS == 1) ? stream_out_rdy_in : stream_capture_pipe[COLS-1];
    assign stream_capture_bonus_pulse = stream_capture_pipe[CAP_DELAY];


    //TODO: multiplier instantiation
    multiplier #(
        .INPUT_A_WIDTH(IN_WIDTH),
        .INPUT_B_WIDTH(IN_WIDTH),
        .INPUT_A_FRAC(IN_FRAC),
        .INPUT_B_FRAC(IN_FRAC),
        .OUTPUT_WIDTH(OUT_WIDTH),
        .OUTPUT_FRAC(OUT_FRAC),
        .DELAY(MULT_LAT)
    ) u_multiplier (
        .clk(clk),
        .reset(rst),
        .en(mul_en),
        .stall(1'b0),
        .a_in(row_data_in),
        .b_in(col_data_in),
        .out(mult_out),
        .done(mult_done)
    );



    //TODO: adder instantiation
    assign add_a_in = (rst_accumulator_in) ? '0 : add_out;
    adder #(
        .INPUT_A_WIDTH(OUT_WIDTH),
        .INPUT_A_FRAC(OUT_FRAC),
        .INPUT_B_WIDTH(OUT_WIDTH),
        .INPUT_B_FRAC(OUT_FRAC),
        .OUTPUT_WIDTH(OUT_WIDTH),
        .OUTPUT_FRAC(OUT_FRAC),
        .DELAY(ADD_LAT)
    ) u_adder (
        .clk(clk),
        .reset(rst),
        .en(mult_done),
        .stall(1'b0),
        .a_in(add_a_in),
        .b_in(mult_out),
        .out(add_out),
        .done(add_done)
    );

    synchronous_fifo #(
        .DEPTH(2048),
        .DATA_WIDTH(OUT_WIDTH)
    ) u_out_fifo (
        .clk(clk),
        .rst_n(rst),
        .w_en(fifo_w_en),
        .r_en(fifo_r_en),
        .data_in(psum_delay_line[OUT_DELAY]),
        .data_out(fifo_data_out),
        .full(fifo_full),
        .half_full(),
        .empty(fifo_empty)
    );



    //TODO: signal propagation and synchronization
    //Major approaches to look out for:
    // 1. rst_accumulator and stream_out_rdy are major control signals that dictates the flow of the data and when to reset the accumulator between different matrix multiplications
    // 2. An important part of the following design is to figure out how the data from multipliers and adders should be paired with the above two control signals
    // 3. Mainly you need to know: should I pass the results of this very own MAC's accumulator to the next MAC's accumulator or should I pass the results of the previous MAC's accumulator to this MAC's accumulator and when to do so
    // 4. Also, when should be the exact time point to reset the accumulator so my current results will not be cleared by mistake and the next matrix multiplication can start cleanly.
    always @(posedge clk) begin
        if (rst) begin
            row_data_out <= '0;
            col_data_out <= '0;
            rst_accumulator_out <= 1'b0;
            stream_out_rdy_out <= 1'b0;
            psum_out <= '0;
            fifo_w_en <= 1'b0;
            fifo_r_en <= 1'b0;
            pending_ops <= '0;
            inject_cnt <= '0;
            stream_capture_pipe <= '0;
            for (di = 0; di < COLS; di = di + 1) begin
                psum_delay_line[di] <= '0;
            end
        end else begin
            row_data_out <= row_data_in;
            col_data_out <= col_data_in;
            rst_accumulator_out <= rst_accumulator_in;
            stream_out_rdy_out <= stream_out_rdy_in;
            stream_capture_pipe[0] <= stream_out_rdy_in;
            for (di = 1; di < COLS; di = di + 1) begin
                stream_capture_pipe[di] <= stream_capture_pipe[di-1];
            end
            psum_delay_line[0] <= add_out;
            for (di = 1; di < COLS; di = di + 1) begin
                psum_delay_line[di] <= psum_delay_line[di-1];
            end
            if (K >= COLS) begin
                fifo_w_en <= 1'b0;
                fifo_r_en <= 1'b0;
                pending_ops <= '0;
                inject_cnt <= '0;
                if (stream_out_rdy_in) begin
                    psum_out <= psum_delay_line[OUT_DELAY];
                end else begin
                    psum_out <= bypass_data_in;
                end
            end else begin
                capture_local = stream_capture_bonus_pulse & ~fifo_full;
                read_local = (pending_ops != 0) && (inject_cnt == 0) && ~fifo_empty;
                fifo_w_en <= capture_local;
                fifo_r_en <= read_local;
                pending_ops <= pending_ops + (capture_local ? OPQ_W'(1) : OPQ_W'(0)) - (read_local ? OPQ_W'(1) : OPQ_W'(0));
                if (read_local) begin
                    inject_cnt <= COL_CNT_W'(COLS-1);
                end else if (inject_cnt != 0) begin
                    inject_cnt <= inject_cnt - COL_CNT_W'(1);
                end else begin
                    inject_cnt <= '0;
                end

                if (read_local) begin
                    psum_out <= fifo_data_out;
                end else begin
                    psum_out <= bypass_data_in;
                end
            end
        end
    end


endmodule
