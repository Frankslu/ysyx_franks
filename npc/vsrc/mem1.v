module mem1(
  input         clock,
  input         reset,
  input         io1_en, // @[src/src/memory/Mem.scala 17:17]
  input         io1_wr, // @[src/src/memory/Mem.scala 17:17]
  input  [31:0] io1_addr, // @[src/src/memory/Mem.scala 17:17]
  input  [31:0] io1_wdata, // @[src/src/memory/Mem.scala 17:17]
  input  [3:0]  io1_wstrb, // @[src/src/memory/Mem.scala 17:17]
  output [31:0] io1_rdata, // @[src/src/memory/Mem.scala 17:17]
  input         io2_en, // @[src/src/memory/Mem.scala 18:17]
  input         io2_wr, // @[src/src/memory/Mem.scala 18:17]
  input  [31:0] io2_addr, // @[src/src/memory/Mem.scala 18:17]
  input  [31:0] io2_wdata, // @[src/src/memory/Mem.scala 18:17]
  input  [3:0]  io2_wstrb, // @[src/src/memory/Mem.scala 18:17]
  output [31:0] io2_rdata // @[src/src/memory/Mem.scala 18:17]
);
  wire  memm_en; // @[src/src/memory/Mem.scala 19:22]
  wire  memm_wr; // @[src/src/memory/Mem.scala 19:22]
  wire [31:0] memm_addr; // @[src/src/memory/Mem.scala 19:22]
  wire [31:0] memm_wdata; // @[src/src/memory/Mem.scala 19:22]
  wire [3:0] memm_wstrb; // @[src/src/memory/Mem.scala 19:22]
  wire [31:0] memm_rdata; // @[src/src/memory/Mem.scala 19:22]
  d_mem memm ( // @[src/src/memory/Mem.scala 19:22]
    .en(memm_en),
    .wr(memm_wr),
    .addr(memm_addr),
    .wdata(memm_wdata),
    .wstrb(memm_wstrb),
    .rdata(memm_rdata)
  );
  assign io1_rdata = memm_rdata; // @[src/src/memory/Mem.scala 20:9]
  assign io2_rdata = memm_rdata; // @[src/src/memory/Mem.scala 21:9]
  assign memm_en = io2_en; // @[src/src/memory/Mem.scala 21:9]
  assign memm_wr = io2_wr; // @[src/src/memory/Mem.scala 21:9]
  assign memm_addr = io2_addr; // @[src/src/memory/Mem.scala 21:9]
  assign memm_wdata = io2_wdata; // @[src/src/memory/Mem.scala 21:9]
  assign memm_wstrb = io2_wstrb; // @[src/src/memory/Mem.scala 21:9]
endmodule
