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
 import "DPI-C" function void pmem_read(
 input int raddr, output int rdata);
 import "DPI-C" function void pmem_write(
 input int waddr, input int wdata, input byte wmask, output int rdata);
 always @(*) begin
   if(en) begin
     if(wr == 1'b0) begin
       pmem_read(addr, rdata);
     end else begin
       pmem_write(addr, wdata, wstrb, rdata);
     end
   end
end

endmodule
	