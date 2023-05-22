module npc_break(
	input wire is_break
);

import "DPI-C" function void npc_break(input byte is_break);

always @(*) begin
	npc_break(is_break);
end

endmodule
