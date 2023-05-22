module Exec(
	input wire valid
);

import "DPI-C" function void inst_exec_once(input byte valid, input int inst);

always @(*) begin
	inst_exec_once(valid, inst);
end

endmodule
