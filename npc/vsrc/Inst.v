/* verilator lint_off UNUSEDSIGNAL */
 module Memory(
 input  en,
 input  wr,
 input  [31:0]  addr,
 input  [31:0]  wdata,
 input  [3:0]   wstrb,
 output [31:0] rdata
 );
 /* verilator lint_off WIDTHEXPAND */
 /* verilator lint_off LATCH */
 import "DPI-C" function void pmem_fetch(
 input int raddr, output int rdata);
 always @(*) begin
   if(en) begin
       pmem_fetch(addr, rdata);
   end
end

endmodule

	