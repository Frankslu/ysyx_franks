// Generated by CIRCT unknown git version
// external module Memory

module mem(	// <stdin>:7:10
  input         clock,
                reset,
  input  [31:0] io_w_rdata,
  output        io_r_en,
                io_r_wr,
  output [31:0] io_r_addr,
                io_r_wdata,
  output [3:0]  io_r_wstrb);

  Memory Memory (	// Mem.scala:12:24
    .w_rdata (io_w_rdata),
    .r_en    (io_r_en),
    .r_wr    (io_r_wr),
    .r_addr  (io_r_addr),
    .r_wdata (io_r_wdata),
    .r_wstrb (io_r_wstrb)
  );
endmodule


// ----- 8< ----- FILE "./vsrc/Memory.v" ----- 8< -----

module Memory(
 input  r_en,
 input  r_wr,
 input  [31:0]  r_addr,
 input  [31:0]  r_wdata,
 input  [3:0]   r_wstrb,
 output [31:0] w_rdata
 );
 import "DPI-C" function void pmem_read(
 input longint raddr, output longint rdata);
 import "DPI-C" function void pmem_write(
 input longint waddr, input longint wdata, input byte wmask);
 wire [63:0] rdata;
 always @(*) begin
   if(en) begin
     if(r_wr) begin
       pmem_read(r_addr, w_rdata);
     end else begin
       pmem_write(r_addr, r_wdata, r_wstrb);
     end
   end
end

endmodule
    

// ----- 8< ----- FILE "firrtl_black_box_resource_files.f" ----- 8< -----

// vsrc/vsrc/Memory.v
