module MEM_stage(
  input         clock,
  input         reset,
  output        ms_ready, // @[src/src/cpucore/pipeline/MEM_stage.scala 10:20]
  input         ms_valid, // @[src/src/cpucore/pipeline/MEM_stage.scala 10:20]
  input  [31:0] ms_bits_pc, // @[src/src/cpucore/pipeline/MEM_stage.scala 10:20]
  input  [31:0] ms_bits_alu_res, // @[src/src/cpucore/pipeline/MEM_stage.scala 10:20]
  input  [4:0]  ms_bits_inst_name, // @[src/src/cpucore/pipeline/MEM_stage.scala 10:20]
  input         ms_bits_res_from_mem, // @[src/src/cpucore/pipeline/MEM_stage.scala 10:20]
  input         ms_bits_rf_we, // @[src/src/cpucore/pipeline/MEM_stage.scala 10:20]
  input  [4:0]  ms_bits_rf_waddr, // @[src/src/cpucore/pipeline/MEM_stage.scala 10:20]
  input         tows_ready, // @[src/src/cpucore/pipeline/MEM_stage.scala 11:22]
  output        tows_valid, // @[src/src/cpucore/pipeline/MEM_stage.scala 11:22]
  output [31:0] tows_bits_pc, // @[src/src/cpucore/pipeline/MEM_stage.scala 11:22]
  output        tows_bits_rf_we, // @[src/src/cpucore/pipeline/MEM_stage.scala 11:22]
  output [4:0]  tows_bits_rf_waddr, // @[src/src/cpucore/pipeline/MEM_stage.scala 11:22]
  output [31:0] tows_bits_rf_wdata, // @[src/src/cpucore/pipeline/MEM_stage.scala 11:22]
  output        data_sram_en, // @[src/src/cpucore/pipeline/MEM_stage.scala 12:27]
  output        data_sram_wr, // @[src/src/cpucore/pipeline/MEM_stage.scala 12:27]
  output [31:0] data_sram_addr, // @[src/src/cpucore/pipeline/MEM_stage.scala 12:27]
  output [31:0] data_sram_wdata, // @[src/src/cpucore/pipeline/MEM_stage.scala 12:27]
  output [3:0]  data_sram_wstrb, // @[src/src/cpucore/pipeline/MEM_stage.scala 12:27]
  input  [31:0] data_sram_rdata // @[src/src/cpucore/pipeline/MEM_stage.scala 12:27]
);
  wire [7:0] _mem_rdata_sign_T = data_sram_rdata[7:0]; // @[src/src/myUtil/tool.scala 8:22]
  wire [31:0] _mem_rdata_T_1 = {{24{_mem_rdata_sign_T[7]}},_mem_rdata_sign_T}; // @[src/src/myUtil/tool.scala 9:14]
  wire [15:0] _mem_rdata_sign_T_1 = data_sram_rdata[15:0]; // @[src/src/myUtil/tool.scala 8:22]
  wire [31:0] _mem_rdata_T_4 = {{16{_mem_rdata_sign_T_1[15]}},_mem_rdata_sign_T_1}; // @[src/src/myUtil/tool.scala 9:14]
  wire [31:0] _mem_rdata_T_7 = 5'h6 == ms_bits_inst_name ? _mem_rdata_T_1 : 32'hdead; // @[src/src/cpucore/pipeline/MEM_stage.scala 15:64]
  wire [31:0] _mem_rdata_T_9 = 5'h9 == ms_bits_inst_name ? {{24'd0}, data_sram_rdata[7:0]} : _mem_rdata_T_7; // @[src/src/cpucore/pipeline/MEM_stage.scala 15:64]
  wire [31:0] _mem_rdata_T_11 = 5'h7 == ms_bits_inst_name ? _mem_rdata_T_4 : _mem_rdata_T_9; // @[src/src/cpucore/pipeline/MEM_stage.scala 15:64]
  wire [31:0] _mem_rdata_T_13 = 5'ha == ms_bits_inst_name ? {{16'd0}, data_sram_rdata[15:0]} : _mem_rdata_T_11; // @[src/src/cpucore/pipeline/MEM_stage.scala 15:64]
  wire [31:0] mem_rdata = 5'h8 == ms_bits_inst_name ? data_sram_rdata : _mem_rdata_T_13; // @[src/src/cpucore/pipeline/MEM_stage.scala 15:64]
  assign ms_ready = 1'h1; // @[src/src/cpucore/pipeline/MEM_stage.scala 28:18]
  assign tows_valid = 1'h1; // @[src/src/cpucore/pipeline/MEM_stage.scala 29:20]
  assign tows_bits_pc = ms_bits_pc; // @[src/src/cpucore/pipeline/MEM_stage.scala 23:22]
  assign tows_bits_rf_we = ms_bits_rf_we; // @[src/src/cpucore/pipeline/MEM_stage.scala 24:25]
  assign tows_bits_rf_waddr = ms_bits_rf_waddr; // @[src/src/cpucore/pipeline/MEM_stage.scala 25:28]
  assign tows_bits_rf_wdata = ms_bits_res_from_mem ? mem_rdata : ms_bits_alu_res; // @[src/src/cpucore/pipeline/MEM_stage.scala 26:34]
  assign data_sram_en = 1'h0;
  assign data_sram_wr = 1'h0;
  assign data_sram_addr = 32'h0;
  assign data_sram_wdata = 32'h0;
  assign data_sram_wstrb = 4'h0;
endmodule
