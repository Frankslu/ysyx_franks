package cpucore.Unit

import chisel3._
import chisel3.util._
import Config.Configs._

class Exec extends HasBlackBoxInline{
	val io = IO(new Bundle {
		val clock = Input(Clock())
		val valid = Input(Bool())
		val inst = Input(UInt(DATA_WIDTH.W))
		val pc = Input(UInt(ADDR_WIDTH.W))
		val inv = Input(Bool())
		val ex = Input(Bool())
		val ertn = Input(Bool())
		val ecode = Input(UInt(6.W))
		val esubcode = Input(UInt(9.W))
		val ex_pc = Input(UInt(DATA_WIDTH.W))
	})

	setInline("Exec.v",
	"""/* verilator lint_off WIDTHEXPAND */
	|module Exec(
	|	input wire clock,
	|	input wire valid,
	|	input wire [31:0] pc,
	|	input wire [31:0] inst,
	|	input wire inv,
	|	input wire ex,
	|	input wire ertn,
	|	input wire [5:0] ecode,
	|	input wire [8:0] esubcode,
	|	input wire [31:0] ex_pc
	|);
	|
	|import "DPI-C" function void inst_exec_once(input byte valid, input byte inv, input int inst, input int pc);
	|import "DPI-C" function void record_exception(input byte ex, input byte ertn, input int ecode, input int esubcode, input int pc);
	|
	|always @(*) begin
	|	inst_exec_once(valid, inv, inst, pc);
	|end
	|
	|always @(posedge clock) begin
	|	record_exception(ex, ertn, ecode, esubcode, ex_pc);
	|end
	|
	|endmodule
	|""".stripMargin)
}