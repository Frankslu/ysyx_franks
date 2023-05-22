/* verilator lint_off UNUSEDSIGNAL */
 module d_mem(
 input wire  en,
 input wire  wr,
 input wire  [31:0]  addr,
 input wire  [31:0]  wdata,
 input wire  [3:0]   wstrb,
 output wire [31:0] rdata
 );
 /* verilator lint_off WIDTHEXPAND */
 /* verilator lint_off LATCH */
 import "DPI-C" function void vaddr_read(
 input int raddr, output int rdata);
 import "DPI-C" function void vaddr_write(
 input int waddr, input int wdata, input byte wmask, output int rdata);
 always @(*) begin
   if(en) begin
     if(wr == 1'b0) begin
       vaddr_read(addr, rdata);
     end else begin
       vaddr_write(addr, wdata, wstrb, rdata);
     end
   end
end

endmodule
