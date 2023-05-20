module break(
	input wire is_break
);

import "DPI-C" function void npc_break();

always @(*) begin
	if(is_break) begin
		npc_break();
	end
end

endmodule
