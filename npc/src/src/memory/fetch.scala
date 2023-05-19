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

class mem2 extends Module {
    val io = IO(Flipped(new sram_io(1,1)))
	// val io = IO(new io1)
	val Memory = Module(new i_mem())
	Memory.io <> io

}

class i_mem extends BlackBox with HasBlackBoxInline {
	val io = IO(Flipped(new sram_io(1,1)))
	// val io = IO(new io1)
	setInline("Memory.v",
	"""/* verilator lint_off UNUSEDSIGNAL */
   | module Memory(
   | input  en,
   | input  wr,
   | input  [31:0]  addr,
   | input  [31:0]  wdata,
   | input  [3:0]   wstrb,
   | output [31:0] rdata
   | );
   | /* verilator lint_off WIDTHEXPAND */
   | /* verilator lint_off LATCH */
   | import "DPI-C" function void pmem_fetch(
   | input int raddr, output int rdata);
   | always @(*) begin
   |   if(en) begin
   |       pmem_fetch(addr, rdata);
   |   end
   |end
   |
   |endmodule
   |
	""".stripMargin)
}