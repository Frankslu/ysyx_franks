module mem(
  input         clock,
  input         reset,
  input         io_en, // @[src/src/memory/Mem.scala 17:16]
  input         io_wr, // @[src/src/memory/Mem.scala 17:16]
  input  [31:0] io_addr, // @[src/src/memory/Mem.scala 17:16]
  input  [31:0] io_wdata, // @[src/src/memory/Mem.scala 17:16]
  input  [3:0]  io_wstrb, // @[src/src/memory/Mem.scala 17:16]
  output [31:0] io_rdata // @[src/src/memory/Mem.scala 17:16]
);
  wire  Memory_en; // @[src/src/memory/Mem.scala 19:28]
  wire  Memory_wr; // @[src/src/memory/Mem.scala 19:28]
  wire [31:0] Memory_addr; // @[src/src/memory/Mem.scala 19:28]
  wire [31:0] Memory_wdata; // @[src/src/memory/Mem.scala 19:28]
  wire [3:0] Memory_wstrb; // @[src/src/memory/Mem.scala 19:28]
  wire [31:0] Memory_rdata; // @[src/src/memory/Mem.scala 19:28]
  Memory Memory ( // @[src/src/memory/Mem.scala 19:28]
    .en(Memory_en),
    .wr(Memory_wr),
    .addr(Memory_addr),
    .wdata(Memory_wdata),
    .wstrb(Memory_wstrb),
    .rdata(Memory_rdata)
  );
  assign io_rdata = Memory_rdata; // @[src/src/memory/Mem.scala 20:19]
  assign Memory_en = io_en; // @[src/src/memory/Mem.scala 20:19]
  assign Memory_wr = io_wr; // @[src/src/memory/Mem.scala 20:19]
  assign Memory_addr = io_addr; // @[src/src/memory/Mem.scala 20:19]
  assign Memory_wdata = io_wdata; // @[src/src/memory/Mem.scala 20:19]
  assign Memory_wstrb = io_wstrb; // @[src/src/memory/Mem.scala 20:19]
endmodule
