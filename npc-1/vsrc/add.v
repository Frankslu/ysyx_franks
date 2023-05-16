module add(
  input         clock,
  input         reset,
  input  [63:0] io_in1,
  input  [63:0] io_in2,
  output [63:0] io_out
);
  wire [63:0] my_in1; // @[test.scala 10:24]
  wire [63:0] my_in2; // @[test.scala 10:24]
  wire [63:0] my_out; // @[test.scala 10:24]
  Add1 my ( // @[test.scala 10:24]
    .in1(my_in1),
    .in2(my_in2),
    .out(my_out)
  );
  assign io_out = my_out; // @[test.scala 13:16]
  assign my_in1 = io_in1; // @[test.scala 11:19]
  assign my_in2 = io_in2; // @[test.scala 12:19]
endmodule
