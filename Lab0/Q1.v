`timescale 1 ns/10 ps  // time-unit = 1 ns, precision = 10 ps

module combinational_circuits ( 
    input p1a, p1c, p1b, p1f, p1e, p1d,
    output p1y,
    input p2a, p2b, p2c, p2d,
    output p2y );

    wire p1_and0 = p1a & p1b & p1c;
    wire p1_and1 = p1d & p1e & p1f;
    wire p2_and0 = p2a & p2b;
    wire p2_and1 = p2c & p2d;

    assign p1y = p1_and0 | p1_and1;
    assign p2y = p2_and0 | p2_and1;

endmodule