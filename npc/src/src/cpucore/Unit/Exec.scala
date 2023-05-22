package cpucore.Unit

import chisel3._
import chisel3.util._
import Config.Configs._

class Exec extends HasBlackBoxInline{
	val io = IO(new Bundle {
		val valid = Input(Bool())
		val inst = Input(UInt(DATA_WIDTH.W))
	})

	setInline("Exec.v",
	"""module Exec(
	|	input wire valid
	|);
	|
	|import "DPI-C" function void inst_exec_once(input byte valid, input int inst);
	|
	|always @(*) begin
	|	inst_exec_once(valid, inst);
	|end
	|
	|endmodule
	|""".stripMargin)
}