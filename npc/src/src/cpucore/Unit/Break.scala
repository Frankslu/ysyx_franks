package cpucore.Unit

import chisel3._
import chisel3.util._

class Break extends HasBlackBoxInline{
	val io = IO(new Bundle{
		val is_break = Input(Bool())
	})

	setInline("Break.v",
	"""module break(
	|	input wire is_break
	|);
	|
	|import "DPI-C" function void npc_break();
	|
	|always @(*) begin
	|	if(is_break) begin
	|		npc_break();
	|	end
	|end
	|
	|endmodule
	|""".stripMargin)
}