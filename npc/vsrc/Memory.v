
 /* verilator lint_off UNUSEDSIGNAL */
 module Memory(
 input  r_en,
 input  r_wr,
 input  [31:0]  r_addr,
 input  [31:0]  r_wdata,
 input  [3:0]   r_wstrb,
 output [31:0] w_rdata
 );
 /* verilator lint_off WIDTHEXPAND */
 /* verilator lint_off LATCH */
 import "DPI-C" function void pmem_read(
 input int raddr, output int rdata);
 import "DPI-C" function void pmem_write(
 input int waddr, input int wdata, input byte wmask, output int rdata);
 always @(*) begin
   if(r_en) begin
     if(r_wr == 1'b0) begin
       pmem_read(r_addr, w_rdata);
     end else begin
       pmem_write(r_addr, r_wdata, r_wstrb, w_rdata);
     end
   end
end

endmodule
