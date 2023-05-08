package cpucore.memory

import chisel3._
import chisel3.util._
import cpucore.pipeline._

class dmem extends BlackBox with HasBlackBoxPath {
	val io = IO(new Bundle{
		val r = new sram_io_1
		val w = new sram_io_2}
	)

	// setInline("memory.v",
	// """module mem(
	// 	|	input r_en,
	// 	|	input r_wr,
	// 	|	input [31:0]  r_addr,
	// 	|	input [31:0]  r_wdata,
	// 	|	input [4:0]   r_wstrb,
	// 	|	output [31:0] w_rdata
	// 	|);
	// 	|import "DPI-C" function void pmem_read(
	// 	|	input longint raddr, output longint rdata);
	// 	|import "DPI-C" function void pmem_write(
	// 	|	input longint waddr, input longint wdata, input byte wmask);
	// 	|wire [63:0] rdata;
	// 	|always @(*) begin
	// 	|	if(en) begin
	// 	|		if(r_wr) begin
	// 	|			pmem_read(r_addr, w_rdata);
	// 	|		end else begin
	// 	|			pmem_write(r_addr, r_wdata, r_wstrb);
	// 	|		end
	// 	|	end
	// 	|end
	// 	|
	// 	|endmodule
	// """.stripMargin)
	addPath("/mem.v")
}