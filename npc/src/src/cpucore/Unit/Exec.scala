package cpucore.Unit

import chisel3._
import chisel3.util._
import Config.Configs._

class Exec extends HasBlackBoxInline{
	val io = IO(new Bundle {
		val valid = Input(Bool())
		val inst = Input(UInt(DATA_WIDTH.W))
		val pc = Input(UInt(ADDR_WIDTH.W))
	})

	setInline("Exec.v",
	"""/* verilator lint_off WIDTHEXPAND */
	|module Exec(
	|	input wire valid,
	|	input wire [31:0] pc,
	|	input wire [31:0] inst
	|);
	|
	|import "DPI-C" function void inst_exec_once(input byte valid, input int inst, input int pc);
	|
	|always @(*) begin
	|	inst_exec_once(valid, inst, pc);
	|end
	|
	|endmodule
	|""".stripMargin)
}