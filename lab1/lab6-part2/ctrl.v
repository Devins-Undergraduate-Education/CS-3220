module ctrl #(
    parameter IN_WIDTH = 8,
    parameter OUT_WIDTH = 16,
    parameter ROWS = 4,
    parameter COLS = 4,
    parameter MULT_LAT = 1,
    parameter ACC_LAT = 1
)(
    input clk,
    input rst,
    input stall,
    input input_rst_accumulator,
    input input_stream_out_rdy,
    output [COLS-1:0] rst_accumulator,
    output [COLS-1:0] stream_out_rdy
);

    localparam MULTIPLIER_DELAY_SLOTS = (MULT_LAT < 1 ? 2 : MULT_LAT + 1);
    wire comparator_out;

    reg [MULTIPLIER_DELAY_SLOTS-1:0] rst_accumulator_reg_0;
    reg [COLS-2:0] rst_accumulator_reg_1_to_rest;

    assign comparator_out = input_rst_accumulator;

    always @(posedge clk) begin
        if (rst) begin
            rst_accumulator_reg_0 <= '0;
        end else if (stall) begin
            rst_accumulator_reg_0 <= rst_accumulator_reg_0;
        end else begin
            rst_accumulator_reg_0[0] <= comparator_out;
        end
    end

    generate
        genvar j;
        for (j = 1; j <= MULTIPLIER_DELAY_SLOTS-1; j = j + 1) begin: rst_accumulator_reg_gen
            always @(posedge clk) begin
                if (rst) begin
                    rst_accumulator_reg_0[j] <= 1'b0;
                end else if (stall) begin
                    rst_accumulator_reg_0[j] <= rst_accumulator_reg_0[j];
                end else begin
                    rst_accumulator_reg_0[j] <= rst_accumulator_reg_0[j-1];
                end
            end
        end
    endgenerate

    assign rst_accumulator[0] = rst_accumulator_reg_0[MULTIPLIER_DELAY_SLOTS-1];

    always @(posedge clk) begin
        if (rst) begin
            rst_accumulator_reg_1_to_rest[0] <= 1'b0;
        end else if (stall) begin
            rst_accumulator_reg_1_to_rest[0] <= rst_accumulator_reg_1_to_rest[0];
        end else begin
            rst_accumulator_reg_1_to_rest[0] <= rst_accumulator_reg_0[MULTIPLIER_DELAY_SLOTS-1];
        end
    end

    generate
        genvar l;
        for (l = 1; l < COLS-1; l = l + 1) begin: rst_accumulator_out_reg_gen
            always @(posedge clk) begin
                if (rst) begin
                    rst_accumulator_reg_1_to_rest[l] <= 1'b0;
                end else if (stall) begin
                    rst_accumulator_reg_1_to_rest[l] <= rst_accumulator_reg_1_to_rest[l];
                end else begin
                    rst_accumulator_reg_1_to_rest[l] <= rst_accumulator_reg_1_to_rest[l-1];
                end
            end
        end
    endgenerate

    assign rst_accumulator[COLS-1:1] = rst_accumulator_reg_1_to_rest;

    reg [MULT_LAT+ACC_LAT+COLS-1:0] stream_out_rdy_delay;
    always @(posedge clk) begin
        if (rst) begin
            stream_out_rdy_delay[0] <= 1'b0;
        end else if (stall) begin
            stream_out_rdy_delay[0] <= stream_out_rdy_delay[0];
        end else begin
            stream_out_rdy_delay[0] <= input_stream_out_rdy;
        end
    end

    generate
        for (l = 1; l < MULT_LAT+ACC_LAT+COLS; l = l + 1) begin: stream_delay_gen
            always @(posedge clk) begin
                if (rst) begin
                    stream_out_rdy_delay[l] <= 1'b0;
                end else if (stall) begin
                    stream_out_rdy_delay[l] <= stream_out_rdy_delay[l];
                end else begin
                    stream_out_rdy_delay[l] <= stream_out_rdy_delay[l-1];
                end
            end
        end
    endgenerate

    reg [COLS-1:0] stream_out_rdy_reg;
    always @(posedge clk) begin
        if (rst) begin
            stream_out_rdy_reg <= '0;
        end else if (stall) begin
            stream_out_rdy_reg <= stream_out_rdy_reg;
        end else begin
            stream_out_rdy_reg <= {COLS{stream_out_rdy_delay[MULT_LAT+ACC_LAT+COLS-1]}};
        end
    end

    assign stream_out_rdy = stream_out_rdy_reg;

endmodule
