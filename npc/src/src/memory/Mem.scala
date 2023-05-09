package cpucore.memory

import chisel3._
import chisel3.util._
import chisel3.experimental._
import cpucore.pipeline._

class mem extends Module {
	val io = IO(Flipped(new Bundle{
	val r = new sram_io_1
	val w = new sram_io_2
  }))
	val Memory = Module(new Memory())
	Memory.io <> io
	
}

class Memory extends Module with HasBlackBoxInline {
  val io = IO(Flipped(new Bundle{
	val r = new sram_io_1
	val w = new sram_io_2
  }))
	setInline("Memory","Memory.v",
	s"""module Memory(
	|	input  r_en,
	|	input  r_wr,
	| 	input  [31:0]  r_addr,
	| 	input  [31:0]  r_wdata,
	| 	input  [3:0]   r_wstrb,
	| 	output [31:0] w_rdata
	|);
	| 	import "DPI-C" function void pmem_read(
	| 	input int raddr, output int rdata);
	| 	import "DPI-C" function void pmem_write(
	| 	input int waddr, input int wdata, input byte wmask);
	| 	wire [63:0] rdata;
	| 	always @(*) begin
	|   	if(r_en) begin
	|			if(r_wr) begin
	|				pmem_read(r_addr, w_rdata);
	|			end else begin
	|				pmem_write(r_addr, r_wdata, r_wstrb);
	|			end
	|		end
	|	end
	|
	|endmodule
	""".stripMargin)

	// Define resources for MyBlackBox
	val myBlackBoxResource = new Resource("Memory")
	myBlackBoxResource.add("Memory.v", getClass.getResource("/Memory.v").getPath())

	// Add resources to Chisel annotation
	addResource(myBlackBoxResource)

	// Use blackbox
	val blackbox = Module(new Memory)
	blackbox.io.r_en := io.r.en
	blackbox.io.r_wr := io.r.wr
	blackbox.io.r_addr := io.r.addr
	blackbox.io.r_wdata := io.r.wdata
	blackbox.io.r_wstrb := io.r.wstrb
	io.w.rdata := blackbox.io.w_rdata
}