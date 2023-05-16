module mem(
  input         clock,
  input         reset,
  input         io_r_en,
  input         io_r_wr,
  input  [31:0] io_r_addr,
  input  [31:0] io_r_wdata,
  input  [3:0]  io_r_wstrb,
  output [31:0] io_w_rdata
);
  wire  Memory_r_en; // @[Mem.scala 19:28]
  wire  Memory_r_wr; // @[Mem.scala 19:28]
  wire [31:0] Memory_r_addr; // @[Mem.scala 19:28]
  wire [31:0] Memory_r_wdata; // @[Mem.scala 19:28]
  wire [3:0] Memory_r_wstrb; // @[Mem.scala 19:28]
  wire [31:0] Memory_w_rdata; // @[Mem.scala 19:28]
  Memory Memory ( // @[Mem.scala 19:28]
    .r_en(Memory_r_en),
    .r_wr(Memory_r_wr),
    .r_addr(Memory_r_addr),
    .r_wdata(Memory_r_wdata),
    .r_wstrb(Memory_r_wstrb),
    .w_rdata(Memory_w_rdata)
  );
  assign io_w_rdata = Memory_w_rdata; // @[Mem.scala 20:19]
  assign Memory_r_en = io_r_en; // @[Mem.scala 20:19]
  assign Memory_r_wr = io_r_wr; // @[Mem.scala 20:19]
  assign Memory_r_addr = io_r_addr; // @[Mem.scala 20:19]
  assign Memory_r_wdata = io_r_wdata; // @[Mem.scala 20:19]
  assign Memory_r_wstrb = io_r_wstrb; // @[Mem.scala 20:19]
endmodule
