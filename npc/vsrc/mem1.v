module mem1(
  input         clock,
  input         reset,
  input         io1_en, // @[src/src/memory/Mem.scala 17:17]
  input         io1_wr, // @[src/src/memory/Mem.scala 17:17]
  input  [31:0] io1_addr, // @[src/src/memory/Mem.scala 17:17]
  input  [31:0] io1_wdata, // @[src/src/memory/Mem.scala 17:17]
  input  [3:0]  io1_wstrb, // @[src/src/memory/Mem.scala 17:17]
  output [31:0] io2_rdata // @[src/src/memory/Mem.scala 18:17]
);
  wire  Memory_en; // @[src/src/memory/Mem.scala 20:28]
  wire  Memory_wr; // @[src/src/memory/Mem.scala 20:28]
  wire [31:0] Memory_addr; // @[src/src/memory/Mem.scala 20:28]
  wire [31:0] Memory_wdata; // @[src/src/memory/Mem.scala 20:28]
  wire [3:0] Memory_wstrb; // @[src/src/memory/Mem.scala 20:28]
  wire [31:0] Memory_rdata; // @[src/src/memory/Mem.scala 20:28]
  d_mem Memory ( // @[src/src/memory/Mem.scala 20:28]
    .en(Memory_en),
    .wr(Memory_wr),
    .addr(Memory_addr),
    .wdata(Memory_wdata),
    .wstrb(Memory_wstrb),
    .rdata(Memory_rdata)
  );
  assign io2_rdata = Memory_rdata; // @[src/src/memory/Mem.scala 22:32]
  assign Memory_en = io1_en; // @[src/src/memory/Mem.scala 21:36]
  assign Memory_wr = io1_wr; // @[src/src/memory/Mem.scala 21:36]
  assign Memory_addr = io1_addr; // @[src/src/memory/Mem.scala 21:36]
  assign Memory_wdata = io1_wdata; // @[src/src/memory/Mem.scala 21:36]
  assign Memory_wstrb = io1_wstrb; // @[src/src/memory/Mem.scala 21:36]
endmodule
