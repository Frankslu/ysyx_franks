package cpucore.Unit

import chisel3._
import chisel3.util._

class npc_break extends HasBlackBoxInline{
	val io = IO(new Bundle{
		val is_break = Input(Bool())
	})

	setInline("npc_break.v",
	"""/* verilator lint_off WIDTHEXPAND */
	|module npc_break(
	|	input wire is_break
	|);
	|
	|import "DPI-C" function void npc_break(input byte is_break);
	|
	|always @(*) begin
	|	npc_break(is_break);
	|end
	|
	|endmodule
	|""".stripMargin)
}