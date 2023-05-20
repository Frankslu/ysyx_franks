/* verilator lint_off UNUSEDSIGNAL */
 module Memory_inst(
 input wire  en,
 input wire  wr,
 input wire  [31:0]  addr,
 input wire  [31:0]  wdata,
 input wire  [3:0]   wstrb,
 output wire [31:0] rdata
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

	