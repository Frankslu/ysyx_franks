/* verilator lint_off WIDTHTRUNC */
/* verilator lint_off EOFNEWLINE */
/* verilator lint_off UNUSEDSIGNAL */
module left(
	input [31:0] a,
	input [31:0] b,
	output [31:0] c
);

assign c = {32'b0, a} >> b[4:0];

endmodule
