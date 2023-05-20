package memory

import chisel3._
import chisel3.util._

// class io1 extends Bundle{
//   val en = Input(Bool())
//   val wr = Input(Bool())
//   val addr = Input(UInt(32.W))
//   val wdata = Input(UInt(32.W))
//   val wstrb = Input(UInt(4.W))
//   val rdata = Output(UInt(32.W))
// }

// class mem1 extends Module{
//     val io1 = IO(Flipped(new sram_io))
//     val io2 = IO(Flipped(new sram_io))
//     val memm = Module(new d_mem)
//     io2 <> memm.io
//     io1 <> memm.io
// }

class d_mem extends BlackBox with HasBlackBoxInline {
	val io = IO(Flipped(new sram_io))
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
   | import "DPI-C" function void pmem_read(
   | input int raddr, output int rdata);
   | import "DPI-C" function void pmem_write(
   | input int waddr, input int wdata, input byte wmask, output int rdata);
   | always @(*) begin
   |   if(en) begin
   |     if(wr == 1'b0) begin
   |       pmem_read(addr, rdata);
   |     end else begin
   |       pmem_write(addr, wdata, wstrb, rdata);
   |     end
   |   end
   |end
   |
   |endmodule
	""".stripMargin)
}