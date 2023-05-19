module WB_stage(
  input         clock,
  input         reset,
  output        ws_ready, // @[src/src/cpucore/pipeline/WB_stage.scala 7:20]
  input         ws_valid, // @[src/src/cpucore/pipeline/WB_stage.scala 7:20]
  input  [31:0] ws_bits_pc, // @[src/src/cpucore/pipeline/WB_stage.scala 7:20]
  input         ws_bits_rf_we, // @[src/src/cpucore/pipeline/WB_stage.scala 7:20]
  input  [4:0]  ws_bits_rf_waddr, // @[src/src/cpucore/pipeline/WB_stage.scala 7:20]
  input  [31:0] ws_bits_rf_wdata, // @[src/src/cpucore/pipeline/WB_stage.scala 7:20]
  output [31:0] torf_pc, // @[src/src/cpucore/pipeline/WB_stage.scala 8:22]
  output        torf_rf_we, // @[src/src/cpucore/pipeline/WB_stage.scala 8:22]
  output [4:0]  torf_rf_waddr, // @[src/src/cpucore/pipeline/WB_stage.scala 8:22]
  output [31:0] torf_rf_wdata // @[src/src/cpucore/pipeline/WB_stage.scala 8:22]
);
  assign ws_ready = 1'h1; // @[src/src/cpucore/pipeline/WB_stage.scala 15:18]
  assign torf_pc = ws_bits_pc; // @[src/src/cpucore/pipeline/WB_stage.scala 10:17]
  assign torf_rf_we = ws_bits_rf_we; // @[src/src/cpucore/pipeline/WB_stage.scala 11:20]
  assign torf_rf_waddr = ws_bits_rf_waddr; // @[src/src/cpucore/pipeline/WB_stage.scala 12:23]
  assign torf_rf_wdata = ws_bits_rf_wdata; // @[src/src/cpucore/pipeline/WB_stage.scala 13:23]
endmodule
