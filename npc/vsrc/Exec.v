/* verilator lint_off WIDTHEXPAND */
module Exec(
	input wire valid,
	input wire [31:0] pc,
	input wire [31:0] inst
);

import "DPI-C" function void inst_exec_once(input byte valid, input int inst, input int pc);

always @(*) begin
	inst_exec_once(valid, inst, pc);
end

endmodule
