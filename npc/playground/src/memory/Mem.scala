package cpucore.memory

import chisel3._
import chisel3.util._
import cpucore.pipeline._

class dmem extends BlackBox with HasBlackBoxInline {
	val io = IO(new Bundle{
		val r = new sram_io_1
		val w = new sram_io_2}
	)

	setInline("memory.v",
	"""module mem(
		|	input en,
		|	input [3:0]   r_we,
		|	input [31:0]  r_addr,
		|	input [31:0]  r_wdata,
		|	input [4:0]   r_wstrb,
		|	output [31:0] w_rdata
		|);
		|import "DPI-C" function void pmem_read(
		|	input longint raddr, output longint rdata);
		|import "DPI-C" function void pmem_write(
		|	input longint waddr, input longint wdata, input byte wmask);
		|wire [63:0] rdata;
		|always @(*) begin
		|	if(en) begin
		|		if()
		|	pmem_read(raddr, rdata);
		|	pmem_write(waddr, wdata, wmask);
		|end
		|
	""".stripMargin)
}

class rdmem extends Module {

	val mem = Module(new dmem)
	val mem_io = IO(new Bundle{
		val r = new sram_io_1
		val w = new sram_io_2
	})
	mem.io <> mem_io
}