module Exec(
	input wire valid
);

import "DPI-C" function void inst_exec_once(input byte valid);

always @(*) begin
	inst_exec_once(valid);
end

endmodule
