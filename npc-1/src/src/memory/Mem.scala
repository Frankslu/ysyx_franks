package cpucore.memory

import chisel3._
import chisel3.util._
import cpucore.pipeline._

// class io1 extends Bundle{
//   val en = Input(Bool())
//   val wr = Input(Bool())
//   val addr = Input(UInt(32.W))
//   val wdata = Input(UInt(32.W))
//   val wstrb = Input(UInt(4.W))
//   val rdata = Output(UInt(32.W))
// }

class mem extends Module {
    val io = IO(Flipped(new sram_io))
	// val io = IO(new io1)
	val Memory = Module(new Memory())
	Memory.io <> io
	
}

class Memory extends BlackBox with HasBlackBoxInline {
	val io = IO(Flipped(new sram_io))
	// val io = IO(new io1)
	setInline("Memory.v",
	"""module Memory(
		| input  r_en,
		| input  r_wr,
		| input  [31:0]  r_addr,
		| input  [31:0]  r_wdata,
		| input  [3:0]   r_wstrb,
		| output [31:0] w_rdata
	  | );
	  | import "DPI-C" function void pmem_read(
		| input int raddr, output int rdata);
	  | import "DPI-C" function void pmem_write(
		| input int waddr, input int wdata, input byte wmask);
	  | wire [63:0] rdata;
	  | always @(*) begin
		|   if(r_en) begin
		  |     if(r_wr) begin
			|       pmem_read(r_addr, w_rdata);
		  |     end else begin
			|       pmem_write(r_addr, r_wdata, r_wstrb);
		  |     end
		|   end
	  |end
	  |
	  |endmodule
	""".stripMargin)
}