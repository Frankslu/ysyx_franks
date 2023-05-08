package cpucore.memory

import chisel3._
import chisel3.util._
import cpucore.pipeline._

class dmem extends BlackBox with HasBlackBoxInline {
	val io = IO(new Bundle{
		val rio = new sram_io_1
		val wio = new sram_io_2}
	)

	setInline("memory.v",
	"""module mem(
		|	input en,
		|	input [3:0]   we,
		|	input [31:0]  addr,
		|	input [31:0]  wdata,
		|	input [4:0]   wstrb,
		|	output [31:0] rdata
		|);
		|import "DPI-C" function void pmem_read(
		|	input longint raddr, output longint rdata);
		|import "DPI-C" function void pmem_write(
		|	input longint waddr, input longint wdata, input byte wmask);
		|wire [63:0] rdata;
		|always @(*) begin
		|	pmem_read(raddr, rdata);
		|	pmem_write(waddr, wdata, wmask);
		|end
		|
	""".stripMargin)
}

class rdmem extends Module {
	val mem_io = IO(new Bundle{
		val rio = new sram_io_1
		val wio = new sram_io_2
	})

	val mem = Module(new dmem)
	mem.io <> mem_io
}