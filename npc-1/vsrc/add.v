// Generated by CIRCT unknown git version
// external module Add

module add(	// <stdin>:8:10
  input         clock,
                reset,
  input  [63:0] io_in1,
                io_in2,
  output [63:0] io_out);

  Add my (	// test.scala:10:24
    .in1 (io_in1),
    .in2 (io_in2),
    .out (io_out)
  );
endmodule


// ----- 8< ----- FILE "./vsrc/BlackBoxRealAdd.v" ----- 8< -----

module BlackBoxRealAdd(
    input  [15:0] in1,
    input  [15:0] in2,
    output [15:0] out
);
always @* begin
  out <= $realtobits($bitstoreal(in1) + $bitstoreal(in2));
end
endmodule
	

// ----- 8< ----- FILE "firrtl_black_box_resource_files.f" ----- 8< -----

vsrc/vsrc/BlackBoxRealAdd.v
