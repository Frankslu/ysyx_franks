module IF_stage(
  input         clock,
  input         reset,
  input         tods_ready, // @[src/src/cpucore/pipeline/IF_stage.scala 8:18]
  output        tods_valid, // @[src/src/cpucore/pipeline/IF_stage.scala 8:18]
  output [31:0] tods_bits_pc, // @[src/src/cpucore/pipeline/IF_stage.scala 8:18]
  output [31:0] tods_bits_inst, // @[src/src/cpucore/pipeline/IF_stage.scala 8:18]
  output        inst_sram_en, // @[src/src/cpucore/pipeline/IF_stage.scala 9:23]
  output        inst_sram_wr, // @[src/src/cpucore/pipeline/IF_stage.scala 9:23]
  output [31:0] inst_sram_addr, // @[src/src/cpucore/pipeline/IF_stage.scala 9:23]
  output [31:0] inst_sram_wdata, // @[src/src/cpucore/pipeline/IF_stage.scala 9:23]
  output [3:0]  inst_sram_wstrb, // @[src/src/cpucore/pipeline/IF_stage.scala 9:23]
  input  [31:0] inst_sram_rdata, // @[src/src/cpucore/pipeline/IF_stage.scala 9:23]
  output        frompre_ready, // @[src/src/cpucore/pipeline/IF_stage.scala 10:21]
  input         frompre_valid, // @[src/src/cpucore/pipeline/IF_stage.scala 10:21]
  input  [31:0] frompre_bits_pc // @[src/src/cpucore/pipeline/IF_stage.scala 10:21]
);
  assign tods_valid = 1'h1; // @[src/src/cpucore/pipeline/IF_stage.scala 15:16]
  assign tods_bits_pc = frompre_bits_pc; // @[src/src/cpucore/pipeline/IF_stage.scala 14:18]
  assign tods_bits_inst = inst_sram_rdata; // @[src/src/cpucore/pipeline/IF_stage.scala 13:20]
  assign inst_sram_en = 1'h0;
  assign inst_sram_wr = 1'h0;
  assign inst_sram_addr = 32'h0;
  assign inst_sram_wdata = 32'h0;
  assign inst_sram_wstrb = 4'h0;
  assign frompre_ready = 1'h1; // @[src/src/cpucore/pipeline/IF_stage.scala 16:19]
endmodule
