// Generated by CIRCT unknown git version
module SimpleDecoder(	// <stdin>:2:10
  input        clock,
               reset,
  input  [2:0] input_0,
  output       output_1);

  wire [2:0] output_invInputs = ~input_0;	// pla.scala:78:21
  assign output_1 = |{&{input_0[0], output_invInputs[1]}, &{output_invInputs[0], input_0[1],
                output_invInputs[2]}, &{output_invInputs[1], input_0[2]}, &{input_0[0], input_0[2]}};	// <stdin>:2:10, Cat.scala:33:92, pla.scala:78:21, :90:45, :91:29, :98:74, :114:39
endmodule
