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
	setInline("d_mem.v",
	"""/* verilator lint_off UNUSEDSIGNAL */
   | module d_mem(
   | input wire  en,
   | input wire  wr,
   | input wire  [31:0]  addr,
   | input wire  [31:0]  wdata,
   | input wire  [3:0]   wstrb,
   | output wire [31:0] rdata
   | );
   | /* verilator lint_off WIDTHEXPAND */
   | /* verilator lint_off LATCH */
   | import "DPI-C" function void vaddr_read_npc(
   | input int raddr, output int rdata);
   | import "DPI-C" function void vaddr_write_npc(
   | input int waddr, input int wdata, input byte wmask, output int rdata);
   | always @(*) begin
   |   if(en) begin
   |     if(wr == 1'b0) begin
   |       vaddr_read_npc(addr, rdata);
   |     end else begin
   |       vaddr_write_npc(addr, wdata, wstrb, rdata);
   |     end
   |   end
   |end
   |
   |endmodule
	|""".stripMargin)
}