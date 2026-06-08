module systolic_array #(
    parameter IN_WIDTH          = 8,
    parameter IN_FRAC           = 0,
    parameter OUT_WIDTH         = 8,
    parameter OUT_FRAC          = 0,
    parameter MULT_LAT          = 3,
    parameter ACC_LAT           = 1,
    parameter ROWS              = 4,
    parameter K                 = 4,
    parameter COLS              = 4
)(
    input                       clk,
    input                       rst,
    input                       en,
    input                       flush,
    input                       rst_accumulator_rdy,
    input                       stream_out_rdy,
    input [IN_WIDTH*ROWS-1:0]   row_data_in,
    input                       row_data_in_vld,
    output                      row_data_in_rdy,
    input [IN_WIDTH*COLS-1:0]   col_data_in,
    input                       col_data_in_vld,
    output                      col_data_in_rdy,
    output [OUT_WIDTH*ROWS-1:0] row_data_out,
    output                      row_data_out_vld,
    input                       row_data_out_rdy
);
    wire _unused = en | flush;
    localparam integer MAC_FIFO_DEPTH    = 1024;
    localparam integer OUTPUT_FIFO_DEPTH = 2048;
    reg                         rst_q;
    reg                         rst_accumulator_rdy_q;
    reg                         stream_out_rdy_q;
    reg [IN_WIDTH*ROWS-1:0]     row_data_in_q;
    reg [IN_WIDTH*COLS-1:0]     col_data_in_q;
    always @(posedge clk) begin
        if (rst) begin
            rst_q                 <= 1'b1;
            rst_accumulator_rdy_q <= 1'b0;
            stream_out_rdy_q      <= 1'b0;
            row_data_in_q         <= '0;
            col_data_in_q         <= '0;
        end else begin
            rst_q                 <= rst;
            rst_accumulator_rdy_q <= rst_accumulator_rdy;
            stream_out_rdy_q      <= stream_out_rdy;
            if (row_data_in_vld && row_data_in_rdy) begin
                row_data_in_q <= row_data_in;
            end
            if (col_data_in_vld && col_data_in_rdy) begin
                col_data_in_q <= col_data_in;
            end
        end
    end

    assign row_data_in_rdy  = ~stall;
    assign col_data_in_rdy  = ~stall;

    wire            rst_accumulator_in  [0:ROWS][0:COLS];
    wire            rst_accumulator_out [0:ROWS][0:COLS];
    wire [COLS-1:0] control_rst_accumulator_rdy;

    wire            stream_out_rdy_in   [0:ROWS][0:COLS];
    wire            stream_out_rdy_out  [0:ROWS][0:COLS];
    wire [COLS-1:0] control_stream_out_rdy;

    wire [IN_WIDTH-1:0] mac_row_data_in  [0:COLS][0:ROWS];
    wire [IN_WIDTH-1:0] mac_row_data_out [0:COLS][0:ROWS];

    wire [IN_WIDTH-1:0] mac_col_data_in  [0:ROWS][0:COLS];
    wire [IN_WIDTH-1:0] mac_col_data_out [0:ROWS][0:COLS];

    wire [OUT_WIDTH-1:0] bypass_data_in  [0:ROWS][0:COLS];
    wire [OUT_WIDTH-1:0] bypass_data_out [0:ROWS][0:COLS];
    wire                 mac_psum_out_vld[0:ROWS][0:COLS];
    wire                 stall;

    wire                 mac_array_full_flag [0:ROWS][0:COLS];
    wire                 flag_found;

    wire [ROWS*COLS-1:0] flat_array;
    wire [ROWS*COLS-1:0] flat_psum_vld;
    genvar i, j;
    generate
        for (i = 0; i < ROWS; i = i + 1) begin
            for (j = 0; j < COLS; j = j + 1) begin
                assign flat_array[i*COLS + j] = mac_array_full_flag[i][j];
                assign flat_psum_vld[i*COLS + j] = mac_psum_out_vld[i][j];
            end
        end
    endgenerate

    assign flag_found = |flat_array;

    wire [ROWS-1:0] row_data_out_vld_per_row;
    wire [OUT_WIDTH*ROWS-1:0] row_data_out_tmp;
    wire row_data_out_vld_raw;
    wire [OUT_WIDTH*ROWS-1:0] row_data_out_fifo;
    wire row_data_out_fifo_full;
    wire row_data_out_fifo_empty;

    assign row_data_out_vld_raw = row_data_out_vld_per_row[0];
    assign row_data_out = row_data_out_fifo;
    assign row_data_out_vld = ~row_data_out_fifo_empty;
    assign stall = row_data_out_fifo_full;

    synchronous_fifo #(
        .DEPTH(OUTPUT_FIFO_DEPTH),
        .DATA_WIDTH(OUT_WIDTH*ROWS)
    ) row_output_fifo (
        .clk(clk),
        .rst_n(rst),
        .w_en(row_data_out_vld_raw),
        .r_en(row_data_out_vld && row_data_out_rdy),
        .data_in(row_data_out_tmp),
        .data_out(row_data_out_fifo),
        .full(row_data_out_fifo_full),
        .half_full(),
        .empty(row_data_out_fifo_empty)
    );

    generate
        genvar row, col;

        for (row = 0; row < ROWS; row = row + 1) begin: assign_row_data_in
            for (col = 0; col < COLS; col = col + 1) begin: assign_col_data_in
                if (row == 0) begin
                    assign mac_col_data_in[0][col]    = col_data_in_q[IN_WIDTH*col +: IN_WIDTH];
                    assign rst_accumulator_in[0][col] = control_rst_accumulator_rdy[col];
                    assign stream_out_rdy_in[0][col]  = control_stream_out_rdy[col];
                end else begin
                    assign mac_col_data_in[row][col]    = mac_col_data_out[row-1][col];
                    assign rst_accumulator_in[row][col] = rst_accumulator_out[row-1][col];
                    assign stream_out_rdy_in[row][col]  = stream_out_rdy_out[row-1][col];
                end

                if (col == 0) begin
                    assign mac_row_data_in[0][row] = row_data_in_q[IN_WIDTH*row +: IN_WIDTH];
                end else begin
                    assign mac_row_data_in[col][row] = mac_row_data_out[col-1][row];
                end

                assign bypass_data_in[row][col] = bypass_data_out[row][col+1];
            end
        end

        for (row = 0; row < ROWS; row = row + 1) begin: instantiate_mac_rows
            for (col = 0; col < COLS; col = col + 1) begin: instantiate_mac_cols
                mac #(
                    .IN_WIDTH(IN_WIDTH),
                    .IN_FRAC(IN_FRAC),
                    .OUT_WIDTH(OUT_WIDTH),
                    .OUT_FRAC(OUT_FRAC),
                    .MULT_LAT(MULT_LAT),
                    .ADD_LAT(ACC_LAT),
                    .K(COLS - col - 1),
                    .COLS(COLS),
                    .ROWS(ROWS),
                    .COLS_IDX(col),
                    .ROWS_IDX(row),
                    .FIFO_DEPTH(MAC_FIFO_DEPTH)
                ) mac_inst (
                    .clk(clk),
                    .rst(rst_q),
                    .stall(stall),
                    .rst_accumulator_in(rst_accumulator_in[row][col]),
                    .stream_out_rdy_in(stream_out_rdy_in[row][col]),
                    .row_data_in(mac_row_data_in[col][row]),
                    .col_data_in(mac_col_data_in[row][col]),
                    .bypass_data_in(bypass_data_in[row][col]),
                    .rst_accumulator_out(rst_accumulator_out[row][col]),
                    .stream_out_rdy_out(stream_out_rdy_out[row][col]),
                    .row_data_out(mac_row_data_out[col][row]),
                    .col_data_out(mac_col_data_out[row][col]),
                    .psum_out_vld(mac_psum_out_vld[row][col]),
                    .psum_out(bypass_data_out[row][col]),
                    .mac_full_flag(mac_array_full_flag[row][col])
                );
            end
        end

        for (row = 0; row < ROWS; row = row + 1) begin: data_out
            if ((ROWS - 1 - row) == 0) begin: no_align_delay
                assign row_data_out_tmp[OUT_WIDTH*row +: OUT_WIDTH] = bypass_data_out[row][0];
                assign row_data_out_vld_per_row[row] = mac_psum_out_vld[row][0];
            end else begin: with_align_delay
                localparam integer ALIGN_DELAY = ROWS - 1 - row;
                reg [OUT_WIDTH-1:0] align_pipe [0:ALIGN_DELAY-1];
                reg                 align_vld_pipe [0:ALIGN_DELAY-1];
                integer d;
                always @(posedge clk) begin
                    if (rst_q) begin
                        for (d = 0; d < ALIGN_DELAY; d = d + 1) begin
                            align_pipe[d]     <= '0;
                            align_vld_pipe[d] <= 1'b0;
                        end
                    end else if (!stall) begin
                        align_pipe[0] <= bypass_data_out[row][0];
                        align_vld_pipe[0] <= mac_psum_out_vld[row][0];
                        for (d = 1; d < ALIGN_DELAY; d = d + 1) begin
                            align_pipe[d]     <= align_pipe[d-1];
                            align_vld_pipe[d] <= align_vld_pipe[d-1];
                        end
                    end
                end
                assign row_data_out_tmp[OUT_WIDTH*row +: OUT_WIDTH] = align_pipe[ALIGN_DELAY-1];
                assign row_data_out_vld_per_row[row] = align_vld_pipe[ALIGN_DELAY-1];
            end
        end
    endgenerate

    ctrl #(
        .IN_WIDTH(IN_WIDTH),
        .OUT_WIDTH(OUT_WIDTH),
        .ROWS(ROWS),
        .COLS(COLS),
        .MULT_LAT(MULT_LAT),
        .ACC_LAT(ACC_LAT)
    ) ctrl_0 (
        .clk(clk),
        .rst(rst_q),
        .stall(stall),
        .input_rst_accumulator(rst_accumulator_rdy_q),
        .input_stream_out_rdy(stream_out_rdy_q),
        .rst_accumulator(control_rst_accumulator_rdy),
        .stream_out_rdy(control_stream_out_rdy)
    );

endmodule
