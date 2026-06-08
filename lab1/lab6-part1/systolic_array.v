module systolic_array #(
    parameter IN_WIDTH          = 8,
    parameter IN_FRAC           = 0,
    parameter OUT_WIDTH         = 8,
    parameter OUT_FRAC          = 0,
    parameter MULT_LAT          = 3,                 // Multiplication latency
    parameter ACC_LAT           = 1,                 // Addition latency (<=1, not support pipelined acc)
    parameter ROWS              = 4,                 // Row number of systolic array
    parameter K                 = 4,
    parameter COLS              = 4                  // Column number of systolic array
)(
    input                       clk,
    input                       rst_in,
    input                       rst_accumulator_rdy_in, // If 1, reset accumulator in array
    input                       stream_out_rdy_in_in,      // If 1, stream acc result out

    input [IN_WIDTH*ROWS-1:0]   row_data_in_in,         
    input [IN_WIDTH*COLS-1:0]   col_data_in_in,         
    output [OUT_WIDTH*ROWS-1:0] row_data_out
);
    //TODO: Signal declarations
    // register inputs // something todo with verilator timing issue
    reg       rst;
    reg       rst_accumulator_rdy;
    reg       stream_out_rdy;
    reg [IN_WIDTH*ROWS-1:0] row_data_in;
    reg [IN_WIDTH*COLS-1:0] col_data_in;
    wire [COLS-1:0] rst_accumulator_top;
    wire [COLS-1:0] stream_out_rdy_top;
    wire ctrl_rst_req;
    wire ctrl_stream_req;

    wire [IN_WIDTH-1:0] row_data_pipe [0:ROWS-1][0:COLS-1];
    wire [IN_WIDTH-1:0] col_data_pipe [0:ROWS-1][0:COLS-1];
    wire [OUT_WIDTH-1:0] psum_pipe [0:ROWS-1][0:COLS-1];
    wire                 rst_acc_pipe [0:ROWS-1][0:COLS-1];
    wire                 stream_pipe [0:ROWS-1][0:COLS-1];

    assign ctrl_rst_req = rst_accumulator_rdy;
    assign ctrl_stream_req = stream_out_rdy;

    integer i;
    always @(posedge clk) begin
        rst <= rst_in;
        rst_accumulator_rdy <= rst_accumulator_rdy_in;
        stream_out_rdy <= stream_out_rdy_in_in;
        row_data_in <= row_data_in_in;
        col_data_in <= col_data_in_in;
    end



    //TODO: MAC units instantiation
    // - Image you are drawing a spatial diagram of the MAC units; how should you connect the wires of them?
    // - Use generate block to realize the spatial diagram (You are not required to use generate block though)
    genvar r, c;
    generate
        for (r = 0; r < ROWS; r = r + 1) begin : gen_rows
            for (c = 0; c < COLS; c = c + 1) begin : gen_cols
                wire [IN_WIDTH-1:0] row_data_in_mac;
                wire [IN_WIDTH-1:0] col_data_in_mac;
                wire [OUT_WIDTH-1:0] bypass_data_in_mac;
                wire rst_acc_in_mac;
                wire stream_in_mac;

                assign row_data_in_mac = (c == 0) ? row_data_in[IN_WIDTH*r +: IN_WIDTH] : row_data_pipe[r][c-1];
                assign col_data_in_mac = (r == 0) ? col_data_in[IN_WIDTH*c +: IN_WIDTH] : col_data_pipe[r-1][c];
                assign bypass_data_in_mac = (c == COLS-1) ? '0 : psum_pipe[r][c+1];
                assign rst_acc_in_mac = (r == 0) ? rst_accumulator_top[c] : rst_acc_pipe[r-1][c];
                assign stream_in_mac = (r == 0) ? stream_out_rdy_top[c] : stream_pipe[r-1][c];

                mac #(
                    .IN_WIDTH(IN_WIDTH),
                    .IN_FRAC(IN_FRAC),
                    .OUT_WIDTH(OUT_WIDTH),
                    .OUT_FRAC(OUT_FRAC),
                    .MULT_LAT(MULT_LAT),
                    .ADD_LAT(ACC_LAT),
                    .K(K),
                    .ROWS(ROWS),
                    .COLS(COLS),
                    .COLS_IDX(c),
                    .ROWS_IDX(r)
                ) u_mac (
                    .clk(clk),
                    .rst(rst),
                    .rst_accumulator_in(rst_acc_in_mac),
                    .stream_out_rdy_in(stream_in_mac),
                    .row_data_in(row_data_in_mac),
                    .col_data_in(col_data_in_mac),
                    .bypass_data_in(bypass_data_in_mac),
                    .row_data_out(row_data_pipe[r][c]),
                    .col_data_out(col_data_pipe[r][c]),
                    .rst_accumulator_out(rst_acc_pipe[r][c]),
                    .stream_out_rdy_out(stream_pipe[r][c]),
                    .psum_out(psum_pipe[r][c])
                );
            end
            assign row_data_out[OUT_WIDTH*r +: OUT_WIDTH] = psum_pipe[r][0];
        end
    endgenerate


    

    //TODO: Ctrl unit instantiation
    // generate rst accmulator and bypass enable control signals
    ctrl #(
        .IN_WIDTH(IN_WIDTH),
        .OUT_WIDTH(OUT_WIDTH),
        .ROWS(ROWS),
        .COLS(COLS),
        .K(K),
        .MULT_LAT(MULT_LAT),
        .ACC_LAT(ACC_LAT)
    ) u_ctrl (
        .clk(clk),
        .rst(rst),
        .input_rst_accumulator(ctrl_rst_req),
        .input_stream_out_rdy(ctrl_stream_req),
        .rst_accumulator(rst_accumulator_top),
        .stream_out_rdy(stream_out_rdy_top)
    );
    

endmodule
