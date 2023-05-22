package cpucore.Unit

import chisel3._
import chisel3.util._

class Exec extends HasBlackBoxInline{
	val io = IO(new Bundle {
		val valid = Input(Bool())
	})

	setInline("Exec.v",
	"""module Exec(
	|	input wire valid
	|)
	|
	|import "DPI-C" function void inst_exec_once(input byte valid);
	|
	|always @(*) begin
	|	inst_exec_once(valid);
	|end
	|
	|endmodule
	|""".stripMargin)
}