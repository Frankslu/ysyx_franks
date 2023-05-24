module preIF(
  input         clock,
  input         reset,
  input         br_taken, // @[src/src/cpucore/pipeline/preIF.scala 11:16]
  input  [31:0] br_target, // @[src/src/cpucore/pipeline/preIF.scala 11:16]
  output        inst_sram_en, // @[src/src/cpucore/pipeline/preIF.scala 12:23]
  output [31:0] inst_sram_addr, // @[src/src/cpucore/pipeline/preIF.scala 12:23]
  output        tofs_valid, // @[src/src/cpucore/pipeline/preIF.scala 13:18]
  output [31:0] tofs_bits_pc, // @[src/src/cpucore/pipeline/preIF.scala 13:18]
  output [31:0] tofs_bits_next_pc // @[src/src/cpucore/pipeline/preIF.scala 13:18]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] pc; // @[src/src/cpucore/pipeline/preIF.scala 15:21]
  wire [31:0] snpc = pc + 32'h4; // @[src/src/cpucore/pipeline/preIF.scala 16:19]
  reg  inst_sram_en_REG; // @[src/src/cpucore/pipeline/preIF.scala 19:28]
  assign inst_sram_en = inst_sram_en_REG; // @[src/src/cpucore/pipeline/preIF.scala 19:18]
  assign inst_sram_addr = pc; // @[src/src/cpucore/pipeline/preIF.scala 21:20]
  assign tofs_valid = ~reset; // @[src/src/cpucore/pipeline/preIF.scala 26:19]
  assign tofs_bits_pc = pc; // @[src/src/cpucore/pipeline/preIF.scala 25:18]
  assign tofs_bits_next_pc = br_taken ? br_target : snpc; // @[src/src/cpucore/pipeline/preIF.scala 27:29]
  always @(posedge clock) begin
    if (reset) begin // @[src/src/cpucore/pipeline/preIF.scala 15:21]
      pc <= 32'h1bfffffc; // @[src/src/cpucore/pipeline/preIF.scala 15:21]
    end else if (br_taken) begin // @[src/src/cpucore/pipeline/preIF.scala 17:14]
      pc <= br_target;
    end else begin
      pc <= snpc;
    end
    inst_sram_en_REG <= ~reset; // @[src/src/cpucore/pipeline/preIF.scala 19:29]
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  pc = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  inst_sram_en_REG = _RAND_1[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module IF_stage(
  output        tods_valid, // @[src/src/cpucore/pipeline/IF_stage.scala 11:18]
  output [31:0] tods_bits_pc, // @[src/src/cpucore/pipeline/IF_stage.scala 11:18]
  output [31:0] tods_bits_inst, // @[src/src/cpucore/pipeline/IF_stage.scala 11:18]
  output [31:0] tods_bits_next_pc, // @[src/src/cpucore/pipeline/IF_stage.scala 11:18]
  input  [31:0] inst_sram_rdata, // @[src/src/cpucore/pipeline/IF_stage.scala 12:23]
  input         fs_valid, // @[src/src/cpucore/pipeline/IF_stage.scala 13:16]
  input  [31:0] fs_bits_pc, // @[src/src/cpucore/pipeline/IF_stage.scala 13:16]
  input  [31:0] fs_bits_next_pc // @[src/src/cpucore/pipeline/IF_stage.scala 13:16]
);
  assign tods_valid = fs_valid; // @[src/src/cpucore/pipeline/IF_stage.scala 19:16]
  assign tods_bits_pc = fs_bits_pc; // @[src/src/cpucore/pipeline/IF_stage.scala 17:18]
  assign tods_bits_inst = inst_sram_rdata; // @[src/src/cpucore/pipeline/IF_stage.scala 16:20]
  assign tods_bits_next_pc = fs_bits_next_pc; // @[src/src/cpucore/pipeline/IF_stage.scala 18:23]
endmodule
module regfile(
  input         clock,
  input  [4:0]  io_raddr1, // @[src/src/cpucore/Unit/regfile.scala 27:16]
  input  [4:0]  io_raddr2, // @[src/src/cpucore/Unit/regfile.scala 27:16]
  output [31:0] io_rdata1, // @[src/src/cpucore/Unit/regfile.scala 27:16]
  output [31:0] io_rdata2, // @[src/src/cpucore/Unit/regfile.scala 27:16]
  input  [4:0]  io_waddr, // @[src/src/cpucore/Unit/regfile.scala 27:16]
  input  [31:0] io_wdata, // @[src/src/cpucore/Unit/regfile.scala 27:16]
  input         io_wen, // @[src/src/cpucore/Unit/regfile.scala 27:16]
  input  [31:0] io_rf_pc, // @[src/src/cpucore/Unit/regfile.scala 27:16]
  input         io_is_break, // @[src/src/cpucore/Unit/regfile.scala 27:16]
  input         io_valid, // @[src/src/cpucore/Unit/regfile.scala 27:16]
  input  [31:0] io_inst // @[src/src/cpucore/Unit/regfile.scala 27:16]
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
  reg [31:0] rf [0:31]; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire  rf_io_rdata1_MPORT_en; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [4:0] rf_io_rdata1_MPORT_addr; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [31:0] rf_io_rdata1_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire  rf_io_rdata2_MPORT_en; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [4:0] rf_io_rdata2_MPORT_addr; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [31:0] rf_io_rdata2_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire  rf_difftest_io_rf_1_MPORT_en; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [4:0] rf_difftest_io_rf_1_MPORT_addr; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [31:0] rf_difftest_io_rf_1_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire  rf_difftest_io_rf_2_MPORT_en; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [4:0] rf_difftest_io_rf_2_MPORT_addr; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [31:0] rf_difftest_io_rf_2_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire  rf_difftest_io_rf_3_MPORT_en; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [4:0] rf_difftest_io_rf_3_MPORT_addr; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [31:0] rf_difftest_io_rf_3_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire  rf_difftest_io_rf_4_MPORT_en; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [4:0] rf_difftest_io_rf_4_MPORT_addr; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [31:0] rf_difftest_io_rf_4_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire  rf_difftest_io_rf_5_MPORT_en; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [4:0] rf_difftest_io_rf_5_MPORT_addr; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [31:0] rf_difftest_io_rf_5_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire  rf_difftest_io_rf_6_MPORT_en; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [4:0] rf_difftest_io_rf_6_MPORT_addr; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [31:0] rf_difftest_io_rf_6_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire  rf_difftest_io_rf_7_MPORT_en; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [4:0] rf_difftest_io_rf_7_MPORT_addr; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [31:0] rf_difftest_io_rf_7_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire  rf_difftest_io_rf_8_MPORT_en; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [4:0] rf_difftest_io_rf_8_MPORT_addr; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [31:0] rf_difftest_io_rf_8_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire  rf_difftest_io_rf_9_MPORT_en; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [4:0] rf_difftest_io_rf_9_MPORT_addr; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [31:0] rf_difftest_io_rf_9_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire  rf_difftest_io_rf_10_MPORT_en; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [4:0] rf_difftest_io_rf_10_MPORT_addr; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [31:0] rf_difftest_io_rf_10_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire  rf_difftest_io_rf_11_MPORT_en; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [4:0] rf_difftest_io_rf_11_MPORT_addr; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [31:0] rf_difftest_io_rf_11_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire  rf_difftest_io_rf_12_MPORT_en; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [4:0] rf_difftest_io_rf_12_MPORT_addr; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [31:0] rf_difftest_io_rf_12_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire  rf_difftest_io_rf_13_MPORT_en; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [4:0] rf_difftest_io_rf_13_MPORT_addr; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [31:0] rf_difftest_io_rf_13_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire  rf_difftest_io_rf_14_MPORT_en; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [4:0] rf_difftest_io_rf_14_MPORT_addr; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [31:0] rf_difftest_io_rf_14_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire  rf_difftest_io_rf_15_MPORT_en; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [4:0] rf_difftest_io_rf_15_MPORT_addr; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [31:0] rf_difftest_io_rf_15_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire  rf_difftest_io_rf_16_MPORT_en; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [4:0] rf_difftest_io_rf_16_MPORT_addr; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [31:0] rf_difftest_io_rf_16_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire  rf_difftest_io_rf_17_MPORT_en; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [4:0] rf_difftest_io_rf_17_MPORT_addr; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [31:0] rf_difftest_io_rf_17_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire  rf_difftest_io_rf_18_MPORT_en; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [4:0] rf_difftest_io_rf_18_MPORT_addr; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [31:0] rf_difftest_io_rf_18_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire  rf_difftest_io_rf_19_MPORT_en; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [4:0] rf_difftest_io_rf_19_MPORT_addr; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [31:0] rf_difftest_io_rf_19_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire  rf_difftest_io_rf_20_MPORT_en; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [4:0] rf_difftest_io_rf_20_MPORT_addr; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [31:0] rf_difftest_io_rf_20_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire  rf_difftest_io_rf_21_MPORT_en; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [4:0] rf_difftest_io_rf_21_MPORT_addr; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [31:0] rf_difftest_io_rf_21_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire  rf_difftest_io_rf_22_MPORT_en; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [4:0] rf_difftest_io_rf_22_MPORT_addr; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [31:0] rf_difftest_io_rf_22_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire  rf_difftest_io_rf_23_MPORT_en; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [4:0] rf_difftest_io_rf_23_MPORT_addr; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [31:0] rf_difftest_io_rf_23_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire  rf_difftest_io_rf_24_MPORT_en; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [4:0] rf_difftest_io_rf_24_MPORT_addr; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [31:0] rf_difftest_io_rf_24_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire  rf_difftest_io_rf_25_MPORT_en; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [4:0] rf_difftest_io_rf_25_MPORT_addr; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [31:0] rf_difftest_io_rf_25_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire  rf_difftest_io_rf_26_MPORT_en; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [4:0] rf_difftest_io_rf_26_MPORT_addr; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [31:0] rf_difftest_io_rf_26_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire  rf_difftest_io_rf_27_MPORT_en; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [4:0] rf_difftest_io_rf_27_MPORT_addr; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [31:0] rf_difftest_io_rf_27_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire  rf_difftest_io_rf_28_MPORT_en; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [4:0] rf_difftest_io_rf_28_MPORT_addr; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [31:0] rf_difftest_io_rf_28_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire  rf_difftest_io_rf_29_MPORT_en; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [4:0] rf_difftest_io_rf_29_MPORT_addr; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [31:0] rf_difftest_io_rf_29_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire  rf_difftest_io_rf_30_MPORT_en; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [4:0] rf_difftest_io_rf_30_MPORT_addr; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [31:0] rf_difftest_io_rf_30_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire  rf_difftest_io_rf_31_MPORT_en; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [4:0] rf_difftest_io_rf_31_MPORT_addr; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [31:0] rf_difftest_io_rf_31_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [31:0] rf_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [4:0] rf_MPORT_addr; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire  rf_MPORT_mask; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire  rf_MPORT_en; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  wire [31:0] difftest_rf_0; // @[src/src/cpucore/Unit/regfile.scala 46:26]
  wire [31:0] difftest_rf_1; // @[src/src/cpucore/Unit/regfile.scala 46:26]
  wire [31:0] difftest_rf_2; // @[src/src/cpucore/Unit/regfile.scala 46:26]
  wire [31:0] difftest_rf_3; // @[src/src/cpucore/Unit/regfile.scala 46:26]
  wire [31:0] difftest_rf_4; // @[src/src/cpucore/Unit/regfile.scala 46:26]
  wire [31:0] difftest_rf_5; // @[src/src/cpucore/Unit/regfile.scala 46:26]
  wire [31:0] difftest_rf_6; // @[src/src/cpucore/Unit/regfile.scala 46:26]
  wire [31:0] difftest_rf_7; // @[src/src/cpucore/Unit/regfile.scala 46:26]
  wire [31:0] difftest_rf_8; // @[src/src/cpucore/Unit/regfile.scala 46:26]
  wire [31:0] difftest_rf_9; // @[src/src/cpucore/Unit/regfile.scala 46:26]
  wire [31:0] difftest_rf_10; // @[src/src/cpucore/Unit/regfile.scala 46:26]
  wire [31:0] difftest_rf_11; // @[src/src/cpucore/Unit/regfile.scala 46:26]
  wire [31:0] difftest_rf_12; // @[src/src/cpucore/Unit/regfile.scala 46:26]
  wire [31:0] difftest_rf_13; // @[src/src/cpucore/Unit/regfile.scala 46:26]
  wire [31:0] difftest_rf_14; // @[src/src/cpucore/Unit/regfile.scala 46:26]
  wire [31:0] difftest_rf_15; // @[src/src/cpucore/Unit/regfile.scala 46:26]
  wire [31:0] difftest_rf_16; // @[src/src/cpucore/Unit/regfile.scala 46:26]
  wire [31:0] difftest_rf_17; // @[src/src/cpucore/Unit/regfile.scala 46:26]
  wire [31:0] difftest_rf_18; // @[src/src/cpucore/Unit/regfile.scala 46:26]
  wire [31:0] difftest_rf_19; // @[src/src/cpucore/Unit/regfile.scala 46:26]
  wire [31:0] difftest_rf_20; // @[src/src/cpucore/Unit/regfile.scala 46:26]
  wire [31:0] difftest_rf_21; // @[src/src/cpucore/Unit/regfile.scala 46:26]
  wire [31:0] difftest_rf_22; // @[src/src/cpucore/Unit/regfile.scala 46:26]
  wire [31:0] difftest_rf_23; // @[src/src/cpucore/Unit/regfile.scala 46:26]
  wire [31:0] difftest_rf_24; // @[src/src/cpucore/Unit/regfile.scala 46:26]
  wire [31:0] difftest_rf_25; // @[src/src/cpucore/Unit/regfile.scala 46:26]
  wire [31:0] difftest_rf_26; // @[src/src/cpucore/Unit/regfile.scala 46:26]
  wire [31:0] difftest_rf_27; // @[src/src/cpucore/Unit/regfile.scala 46:26]
  wire [31:0] difftest_rf_28; // @[src/src/cpucore/Unit/regfile.scala 46:26]
  wire [31:0] difftest_rf_29; // @[src/src/cpucore/Unit/regfile.scala 46:26]
  wire [31:0] difftest_rf_30; // @[src/src/cpucore/Unit/regfile.scala 46:26]
  wire [31:0] difftest_rf_31; // @[src/src/cpucore/Unit/regfile.scala 46:26]
  wire  npc_brk_is_break; // @[src/src/cpucore/Unit/regfile.scala 52:25]
  wire  inst_exec_once_valid; // @[src/src/cpucore/Unit/regfile.scala 55:32]
  wire [31:0] inst_exec_once_inst; // @[src/src/cpucore/Unit/regfile.scala 55:32]
  wire [31:0] inst_exec_once_pc; // @[src/src/cpucore/Unit/regfile.scala 55:32]
  Difftest difftest ( // @[src/src/cpucore/Unit/regfile.scala 46:26]
    .rf_0(difftest_rf_0),
    .rf_1(difftest_rf_1),
    .rf_2(difftest_rf_2),
    .rf_3(difftest_rf_3),
    .rf_4(difftest_rf_4),
    .rf_5(difftest_rf_5),
    .rf_6(difftest_rf_6),
    .rf_7(difftest_rf_7),
    .rf_8(difftest_rf_8),
    .rf_9(difftest_rf_9),
    .rf_10(difftest_rf_10),
    .rf_11(difftest_rf_11),
    .rf_12(difftest_rf_12),
    .rf_13(difftest_rf_13),
    .rf_14(difftest_rf_14),
    .rf_15(difftest_rf_15),
    .rf_16(difftest_rf_16),
    .rf_17(difftest_rf_17),
    .rf_18(difftest_rf_18),
    .rf_19(difftest_rf_19),
    .rf_20(difftest_rf_20),
    .rf_21(difftest_rf_21),
    .rf_22(difftest_rf_22),
    .rf_23(difftest_rf_23),
    .rf_24(difftest_rf_24),
    .rf_25(difftest_rf_25),
    .rf_26(difftest_rf_26),
    .rf_27(difftest_rf_27),
    .rf_28(difftest_rf_28),
    .rf_29(difftest_rf_29),
    .rf_30(difftest_rf_30),
    .rf_31(difftest_rf_31)
  );
  npc_break npc_brk ( // @[src/src/cpucore/Unit/regfile.scala 52:25]
    .is_break(npc_brk_is_break)
  );
  Exec inst_exec_once ( // @[src/src/cpucore/Unit/regfile.scala 55:32]
    .valid(inst_exec_once_valid),
    .inst(inst_exec_once_inst),
    .pc(inst_exec_once_pc)
  );
  assign rf_io_rdata1_MPORT_en = 1'h1;
  assign rf_io_rdata1_MPORT_addr = io_raddr1;
  assign rf_io_rdata1_MPORT_data = rf[rf_io_rdata1_MPORT_addr]; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  assign rf_io_rdata2_MPORT_en = 1'h1;
  assign rf_io_rdata2_MPORT_addr = io_raddr2;
  assign rf_io_rdata2_MPORT_data = rf[rf_io_rdata2_MPORT_addr]; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  assign rf_difftest_io_rf_1_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_1_MPORT_addr = 5'h1;
  assign rf_difftest_io_rf_1_MPORT_data = rf[rf_difftest_io_rf_1_MPORT_addr]; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  assign rf_difftest_io_rf_2_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_2_MPORT_addr = 5'h2;
  assign rf_difftest_io_rf_2_MPORT_data = rf[rf_difftest_io_rf_2_MPORT_addr]; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  assign rf_difftest_io_rf_3_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_3_MPORT_addr = 5'h3;
  assign rf_difftest_io_rf_3_MPORT_data = rf[rf_difftest_io_rf_3_MPORT_addr]; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  assign rf_difftest_io_rf_4_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_4_MPORT_addr = 5'h4;
  assign rf_difftest_io_rf_4_MPORT_data = rf[rf_difftest_io_rf_4_MPORT_addr]; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  assign rf_difftest_io_rf_5_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_5_MPORT_addr = 5'h5;
  assign rf_difftest_io_rf_5_MPORT_data = rf[rf_difftest_io_rf_5_MPORT_addr]; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  assign rf_difftest_io_rf_6_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_6_MPORT_addr = 5'h6;
  assign rf_difftest_io_rf_6_MPORT_data = rf[rf_difftest_io_rf_6_MPORT_addr]; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  assign rf_difftest_io_rf_7_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_7_MPORT_addr = 5'h7;
  assign rf_difftest_io_rf_7_MPORT_data = rf[rf_difftest_io_rf_7_MPORT_addr]; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  assign rf_difftest_io_rf_8_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_8_MPORT_addr = 5'h8;
  assign rf_difftest_io_rf_8_MPORT_data = rf[rf_difftest_io_rf_8_MPORT_addr]; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  assign rf_difftest_io_rf_9_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_9_MPORT_addr = 5'h9;
  assign rf_difftest_io_rf_9_MPORT_data = rf[rf_difftest_io_rf_9_MPORT_addr]; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  assign rf_difftest_io_rf_10_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_10_MPORT_addr = 5'ha;
  assign rf_difftest_io_rf_10_MPORT_data = rf[rf_difftest_io_rf_10_MPORT_addr]; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  assign rf_difftest_io_rf_11_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_11_MPORT_addr = 5'hb;
  assign rf_difftest_io_rf_11_MPORT_data = rf[rf_difftest_io_rf_11_MPORT_addr]; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  assign rf_difftest_io_rf_12_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_12_MPORT_addr = 5'hc;
  assign rf_difftest_io_rf_12_MPORT_data = rf[rf_difftest_io_rf_12_MPORT_addr]; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  assign rf_difftest_io_rf_13_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_13_MPORT_addr = 5'hd;
  assign rf_difftest_io_rf_13_MPORT_data = rf[rf_difftest_io_rf_13_MPORT_addr]; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  assign rf_difftest_io_rf_14_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_14_MPORT_addr = 5'he;
  assign rf_difftest_io_rf_14_MPORT_data = rf[rf_difftest_io_rf_14_MPORT_addr]; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  assign rf_difftest_io_rf_15_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_15_MPORT_addr = 5'hf;
  assign rf_difftest_io_rf_15_MPORT_data = rf[rf_difftest_io_rf_15_MPORT_addr]; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  assign rf_difftest_io_rf_16_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_16_MPORT_addr = 5'h10;
  assign rf_difftest_io_rf_16_MPORT_data = rf[rf_difftest_io_rf_16_MPORT_addr]; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  assign rf_difftest_io_rf_17_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_17_MPORT_addr = 5'h11;
  assign rf_difftest_io_rf_17_MPORT_data = rf[rf_difftest_io_rf_17_MPORT_addr]; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  assign rf_difftest_io_rf_18_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_18_MPORT_addr = 5'h12;
  assign rf_difftest_io_rf_18_MPORT_data = rf[rf_difftest_io_rf_18_MPORT_addr]; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  assign rf_difftest_io_rf_19_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_19_MPORT_addr = 5'h13;
  assign rf_difftest_io_rf_19_MPORT_data = rf[rf_difftest_io_rf_19_MPORT_addr]; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  assign rf_difftest_io_rf_20_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_20_MPORT_addr = 5'h14;
  assign rf_difftest_io_rf_20_MPORT_data = rf[rf_difftest_io_rf_20_MPORT_addr]; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  assign rf_difftest_io_rf_21_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_21_MPORT_addr = 5'h15;
  assign rf_difftest_io_rf_21_MPORT_data = rf[rf_difftest_io_rf_21_MPORT_addr]; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  assign rf_difftest_io_rf_22_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_22_MPORT_addr = 5'h16;
  assign rf_difftest_io_rf_22_MPORT_data = rf[rf_difftest_io_rf_22_MPORT_addr]; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  assign rf_difftest_io_rf_23_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_23_MPORT_addr = 5'h17;
  assign rf_difftest_io_rf_23_MPORT_data = rf[rf_difftest_io_rf_23_MPORT_addr]; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  assign rf_difftest_io_rf_24_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_24_MPORT_addr = 5'h18;
  assign rf_difftest_io_rf_24_MPORT_data = rf[rf_difftest_io_rf_24_MPORT_addr]; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  assign rf_difftest_io_rf_25_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_25_MPORT_addr = 5'h19;
  assign rf_difftest_io_rf_25_MPORT_data = rf[rf_difftest_io_rf_25_MPORT_addr]; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  assign rf_difftest_io_rf_26_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_26_MPORT_addr = 5'h1a;
  assign rf_difftest_io_rf_26_MPORT_data = rf[rf_difftest_io_rf_26_MPORT_addr]; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  assign rf_difftest_io_rf_27_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_27_MPORT_addr = 5'h1b;
  assign rf_difftest_io_rf_27_MPORT_data = rf[rf_difftest_io_rf_27_MPORT_addr]; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  assign rf_difftest_io_rf_28_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_28_MPORT_addr = 5'h1c;
  assign rf_difftest_io_rf_28_MPORT_data = rf[rf_difftest_io_rf_28_MPORT_addr]; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  assign rf_difftest_io_rf_29_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_29_MPORT_addr = 5'h1d;
  assign rf_difftest_io_rf_29_MPORT_data = rf[rf_difftest_io_rf_29_MPORT_addr]; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  assign rf_difftest_io_rf_30_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_30_MPORT_addr = 5'h1e;
  assign rf_difftest_io_rf_30_MPORT_data = rf[rf_difftest_io_rf_30_MPORT_addr]; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  assign rf_difftest_io_rf_31_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_31_MPORT_addr = 5'h1f;
  assign rf_difftest_io_rf_31_MPORT_data = rf[rf_difftest_io_rf_31_MPORT_addr]; // @[src/src/cpucore/Unit/regfile.scala 40:17]
  assign rf_MPORT_data = io_wdata;
  assign rf_MPORT_addr = io_waddr;
  assign rf_MPORT_mask = 1'h1;
  assign rf_MPORT_en = io_wen;
  assign io_rdata1 = io_raddr1 == 5'h0 ? 32'h0 : rf_io_rdata1_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 42:21]
  assign io_rdata2 = io_raddr2 == 5'h0 ? 32'h0 : rf_io_rdata2_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 43:21]
  assign difftest_rf_0 = 32'h0; // @[src/src/cpucore/Unit/regfile.scala 47:23]
  assign difftest_rf_1 = 5'h1 == io_waddr ? io_wdata : rf_difftest_io_rf_1_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 49:33]
  assign difftest_rf_2 = 5'h2 == io_waddr ? io_wdata : rf_difftest_io_rf_2_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 49:33]
  assign difftest_rf_3 = 5'h3 == io_waddr ? io_wdata : rf_difftest_io_rf_3_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 49:33]
  assign difftest_rf_4 = 5'h4 == io_waddr ? io_wdata : rf_difftest_io_rf_4_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 49:33]
  assign difftest_rf_5 = 5'h5 == io_waddr ? io_wdata : rf_difftest_io_rf_5_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 49:33]
  assign difftest_rf_6 = 5'h6 == io_waddr ? io_wdata : rf_difftest_io_rf_6_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 49:33]
  assign difftest_rf_7 = 5'h7 == io_waddr ? io_wdata : rf_difftest_io_rf_7_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 49:33]
  assign difftest_rf_8 = 5'h8 == io_waddr ? io_wdata : rf_difftest_io_rf_8_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 49:33]
  assign difftest_rf_9 = 5'h9 == io_waddr ? io_wdata : rf_difftest_io_rf_9_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 49:33]
  assign difftest_rf_10 = 5'ha == io_waddr ? io_wdata : rf_difftest_io_rf_10_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 49:33]
  assign difftest_rf_11 = 5'hb == io_waddr ? io_wdata : rf_difftest_io_rf_11_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 49:33]
  assign difftest_rf_12 = 5'hc == io_waddr ? io_wdata : rf_difftest_io_rf_12_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 49:33]
  assign difftest_rf_13 = 5'hd == io_waddr ? io_wdata : rf_difftest_io_rf_13_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 49:33]
  assign difftest_rf_14 = 5'he == io_waddr ? io_wdata : rf_difftest_io_rf_14_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 49:33]
  assign difftest_rf_15 = 5'hf == io_waddr ? io_wdata : rf_difftest_io_rf_15_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 49:33]
  assign difftest_rf_16 = 5'h10 == io_waddr ? io_wdata : rf_difftest_io_rf_16_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 49:33]
  assign difftest_rf_17 = 5'h11 == io_waddr ? io_wdata : rf_difftest_io_rf_17_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 49:33]
  assign difftest_rf_18 = 5'h12 == io_waddr ? io_wdata : rf_difftest_io_rf_18_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 49:33]
  assign difftest_rf_19 = 5'h13 == io_waddr ? io_wdata : rf_difftest_io_rf_19_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 49:33]
  assign difftest_rf_20 = 5'h14 == io_waddr ? io_wdata : rf_difftest_io_rf_20_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 49:33]
  assign difftest_rf_21 = 5'h15 == io_waddr ? io_wdata : rf_difftest_io_rf_21_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 49:33]
  assign difftest_rf_22 = 5'h16 == io_waddr ? io_wdata : rf_difftest_io_rf_22_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 49:33]
  assign difftest_rf_23 = 5'h17 == io_waddr ? io_wdata : rf_difftest_io_rf_23_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 49:33]
  assign difftest_rf_24 = 5'h18 == io_waddr ? io_wdata : rf_difftest_io_rf_24_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 49:33]
  assign difftest_rf_25 = 5'h19 == io_waddr ? io_wdata : rf_difftest_io_rf_25_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 49:33]
  assign difftest_rf_26 = 5'h1a == io_waddr ? io_wdata : rf_difftest_io_rf_26_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 49:33]
  assign difftest_rf_27 = 5'h1b == io_waddr ? io_wdata : rf_difftest_io_rf_27_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 49:33]
  assign difftest_rf_28 = 5'h1c == io_waddr ? io_wdata : rf_difftest_io_rf_28_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 49:33]
  assign difftest_rf_29 = 5'h1d == io_waddr ? io_wdata : rf_difftest_io_rf_29_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 49:33]
  assign difftest_rf_30 = 5'h1e == io_waddr ? io_wdata : rf_difftest_io_rf_30_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 49:33]
  assign difftest_rf_31 = 5'h1f == io_waddr ? io_wdata : rf_difftest_io_rf_31_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 49:33]
  assign npc_brk_is_break = io_is_break; // @[src/src/cpucore/Unit/regfile.scala 53:25]
  assign inst_exec_once_valid = io_valid; // @[src/src/cpucore/Unit/regfile.scala 56:29]
  assign inst_exec_once_inst = io_inst; // @[src/src/cpucore/Unit/regfile.scala 57:28]
  assign inst_exec_once_pc = io_rf_pc; // @[src/src/cpucore/Unit/regfile.scala 58:26]
  always @(posedge clock) begin
    if (rf_MPORT_en & rf_MPORT_mask) begin
      rf[rf_MPORT_addr] <= rf_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 40:17]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {1{`RANDOM}};
  for (initvar = 0; initvar < 32; initvar = initvar+1)
    rf[initvar] = _RAND_0[31:0];
`endif // RANDOMIZE_MEM_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module ID_stage(
  input         clock,
  output        toes_valid, // @[src/src/cpucore/pipeline/ID_stage.scala 13:18]
  output [31:0] toes_bits_alu_src1, // @[src/src/cpucore/pipeline/ID_stage.scala 13:18]
  output [31:0] toes_bits_alu_src2, // @[src/src/cpucore/pipeline/ID_stage.scala 13:18]
  output [4:0]  toes_bits_alu_op, // @[src/src/cpucore/pipeline/ID_stage.scala 13:18]
  output [4:0]  toes_bits_rf_waddr, // @[src/src/cpucore/pipeline/ID_stage.scala 13:18]
  output        toes_bits_rf_we, // @[src/src/cpucore/pipeline/ID_stage.scala 13:18]
  output [1:0]  toes_bits_mem_we, // @[src/src/cpucore/pipeline/ID_stage.scala 13:18]
  output [4:0]  toes_bits_inst_name, // @[src/src/cpucore/pipeline/ID_stage.scala 13:18]
  output [31:0] toes_bits_mem_wdata, // @[src/src/cpucore/pipeline/ID_stage.scala 13:18]
  output        toes_bits_dpi_c_is_break, // @[src/src/cpucore/pipeline/ID_stage.scala 13:18]
  output [31:0] toes_bits_dpi_c_inst, // @[src/src/cpucore/pipeline/ID_stage.scala 13:18]
  output [31:0] toes_bits_dpi_c_next_pc, // @[src/src/cpucore/pipeline/ID_stage.scala 13:18]
  input         ds_valid, // @[src/src/cpucore/pipeline/ID_stage.scala 14:16]
  input  [31:0] ds_bits_pc, // @[src/src/cpucore/pipeline/ID_stage.scala 14:16]
  input  [31:0] ds_bits_inst, // @[src/src/cpucore/pipeline/ID_stage.scala 14:16]
  input  [31:0] ds_bits_next_pc, // @[src/src/cpucore/pipeline/ID_stage.scala 14:16]
  input         torf_rf_we, // @[src/src/cpucore/pipeline/ID_stage.scala 15:18]
  input  [4:0]  torf_rf_waddr, // @[src/src/cpucore/pipeline/ID_stage.scala 15:18]
  input  [31:0] torf_rf_wdata, // @[src/src/cpucore/pipeline/ID_stage.scala 15:18]
  input         torf_valid, // @[src/src/cpucore/pipeline/ID_stage.scala 15:18]
  input         torf_dpi_c_is_break, // @[src/src/cpucore/pipeline/ID_stage.scala 15:18]
  input  [31:0] torf_dpi_c_inst, // @[src/src/cpucore/pipeline/ID_stage.scala 15:18]
  input  [31:0] torf_dpi_c_next_pc, // @[src/src/cpucore/pipeline/ID_stage.scala 15:18]
  output        br_taken, // @[src/src/cpucore/pipeline/ID_stage.scala 16:18]
  output [31:0] br_target // @[src/src/cpucore/pipeline/ID_stage.scala 16:18]
);
  wire  reg__clock; // @[src/src/cpucore/pipeline/ID_stage.scala 53:21]
  wire [4:0] reg__io_raddr1; // @[src/src/cpucore/pipeline/ID_stage.scala 53:21]
  wire [4:0] reg__io_raddr2; // @[src/src/cpucore/pipeline/ID_stage.scala 53:21]
  wire [31:0] reg__io_rdata1; // @[src/src/cpucore/pipeline/ID_stage.scala 53:21]
  wire [31:0] reg__io_rdata2; // @[src/src/cpucore/pipeline/ID_stage.scala 53:21]
  wire [4:0] reg__io_waddr; // @[src/src/cpucore/pipeline/ID_stage.scala 53:21]
  wire [31:0] reg__io_wdata; // @[src/src/cpucore/pipeline/ID_stage.scala 53:21]
  wire  reg__io_wen; // @[src/src/cpucore/pipeline/ID_stage.scala 53:21]
  wire [31:0] reg__io_rf_pc; // @[src/src/cpucore/pipeline/ID_stage.scala 53:21]
  wire  reg__io_is_break; // @[src/src/cpucore/pipeline/ID_stage.scala 53:21]
  wire  reg__io_valid; // @[src/src/cpucore/pipeline/ID_stage.scala 53:21]
  wire [31:0] reg__io_inst; // @[src/src/cpucore/pipeline/ID_stage.scala 53:21]
  wire [4:0] rj = ds_bits_inst[9:5]; // @[src/src/cpucore/pipeline/ID_stage.scala 19:18]
  wire [4:0] rd = ds_bits_inst[4:0]; // @[src/src/cpucore/pipeline/ID_stage.scala 20:18]
  wire [4:0] rk = ds_bits_inst[14:10]; // @[src/src/cpucore/pipeline/ID_stage.scala 21:18]
  wire [11:0] imm12u = ds_bits_inst[21:10]; // @[src/src/cpucore/pipeline/ID_stage.scala 23:22]
  wire [11:0] _imm12_sign_T = ds_bits_inst[21:10]; // @[src/src/myUtil/tool.scala 8:22]
  wire [31:0] imm12 = {{20{_imm12_sign_T[11]}},_imm12_sign_T}; // @[src/src/myUtil/tool.scala 9:14]
  wire [31:0] imm20 = {ds_bits_inst[24:5],12'h0}; // @[src/src/cpucore/pipeline/ID_stage.scala 26:21]
  wire [25:0] imm26 = {rj,rd,ds_bits_inst[25:10]}; // @[src/src/cpucore/pipeline/ID_stage.scala 27:21]
  wire [31:0] decode_res_invInputs = ~ds_bits_inst; // @[src/main/scala/chisel3/util/pla.scala 78:21]
  wire  decode_res_andMatrixInput_0 = decode_res_invInputs[15]; // @[src/main/scala/chisel3/util/pla.scala 91:29]
  wire  decode_res_andMatrixInput_1 = decode_res_invInputs[16]; // @[src/main/scala/chisel3/util/pla.scala 91:29]
  wire  decode_res_andMatrixInput_2 = decode_res_invInputs[17]; // @[src/main/scala/chisel3/util/pla.scala 91:29]
  wire  decode_res_andMatrixInput_3 = ds_bits_inst[20]; // @[src/main/scala/chisel3/util/pla.scala 90:45]
  wire  decode_res_andMatrixInput_4 = decode_res_invInputs[21]; // @[src/main/scala/chisel3/util/pla.scala 91:29]
  wire  decode_res_andMatrixInput_5 = decode_res_invInputs[22]; // @[src/main/scala/chisel3/util/pla.scala 91:29]
  wire  decode_res_andMatrixInput_6 = decode_res_invInputs[23]; // @[src/main/scala/chisel3/util/pla.scala 91:29]
  wire  decode_res_andMatrixInput_7 = decode_res_invInputs[24]; // @[src/main/scala/chisel3/util/pla.scala 91:29]
  wire  decode_res_andMatrixInput_8 = decode_res_invInputs[25]; // @[src/main/scala/chisel3/util/pla.scala 91:29]
  wire  decode_res_andMatrixInput_9 = decode_res_invInputs[26]; // @[src/main/scala/chisel3/util/pla.scala 91:29]
  wire  decode_res_andMatrixInput_10 = decode_res_invInputs[27]; // @[src/main/scala/chisel3/util/pla.scala 91:29]
  wire  decode_res_andMatrixInput_11 = decode_res_invInputs[28]; // @[src/main/scala/chisel3/util/pla.scala 91:29]
  wire  decode_res_andMatrixInput_12 = decode_res_invInputs[29]; // @[src/main/scala/chisel3/util/pla.scala 91:29]
  wire  decode_res_andMatrixInput_13 = decode_res_invInputs[30]; // @[src/main/scala/chisel3/util/pla.scala 91:29]
  wire  decode_res_andMatrixInput_14 = decode_res_invInputs[31]; // @[src/main/scala/chisel3/util/pla.scala 91:29]
  wire [6:0] decode_res_lo = {decode_res_andMatrixInput_8,decode_res_andMatrixInput_9,decode_res_andMatrixInput_10,
    decode_res_andMatrixInput_11,decode_res_andMatrixInput_12,decode_res_andMatrixInput_13,decode_res_andMatrixInput_14}
    ; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire [14:0] _decode_res_T = {decode_res_andMatrixInput_0,decode_res_andMatrixInput_1,decode_res_andMatrixInput_2,
    decode_res_andMatrixInput_3,decode_res_andMatrixInput_4,decode_res_andMatrixInput_5,decode_res_andMatrixInput_6,
    decode_res_andMatrixInput_7,decode_res_lo}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_1 = &_decode_res_T; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire  decode_res_andMatrixInput_3_1 = decode_res_invInputs[18]; // @[src/main/scala/chisel3/util/pla.scala 91:29]
  wire [7:0] decode_res_lo_1 = {decode_res_andMatrixInput_7,decode_res_andMatrixInput_8,decode_res_andMatrixInput_9,
    decode_res_andMatrixInput_10,decode_res_andMatrixInput_11,decode_res_andMatrixInput_12,decode_res_andMatrixInput_13,
    decode_res_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire [15:0] _decode_res_T_2 = {decode_res_andMatrixInput_0,decode_res_andMatrixInput_1,decode_res_andMatrixInput_2,
    decode_res_andMatrixInput_3_1,decode_res_andMatrixInput_3,decode_res_andMatrixInput_4,decode_res_andMatrixInput_5,
    decode_res_andMatrixInput_6,decode_res_lo_1}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_3 = &_decode_res_T_2; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire  decode_res_andMatrixInput_2_2 = decode_res_invInputs[19]; // @[src/main/scala/chisel3/util/pla.scala 91:29]
  wire [14:0] _decode_res_T_4 = {decode_res_andMatrixInput_0,decode_res_andMatrixInput_2,decode_res_andMatrixInput_2_2,
    decode_res_andMatrixInput_3,decode_res_andMatrixInput_4,decode_res_andMatrixInput_5,decode_res_andMatrixInput_6,
    decode_res_andMatrixInput_7,decode_res_lo}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_5 = &_decode_res_T_4; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [15:0] _decode_res_T_6 = {decode_res_andMatrixInput_0,decode_res_andMatrixInput_1,decode_res_andMatrixInput_3_1,
    decode_res_andMatrixInput_2_2,decode_res_andMatrixInput_3,decode_res_andMatrixInput_4,decode_res_andMatrixInput_5,
    decode_res_andMatrixInput_6,decode_res_lo_1}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_7 = &_decode_res_T_6; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire  decode_res_andMatrixInput_1_4 = ds_bits_inst[16]; // @[src/main/scala/chisel3/util/pla.scala 90:45]
  wire [15:0] _decode_res_T_8 = {decode_res_andMatrixInput_0,decode_res_andMatrixInput_1_4,decode_res_andMatrixInput_2,
    decode_res_andMatrixInput_2_2,decode_res_andMatrixInput_3,decode_res_andMatrixInput_4,decode_res_andMatrixInput_5,
    decode_res_andMatrixInput_6,decode_res_lo_1}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_9 = &_decode_res_T_8; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire  decode_res_andMatrixInput_1_5 = ds_bits_inst[17]; // @[src/main/scala/chisel3/util/pla.scala 90:45]
  wire [15:0] _decode_res_T_10 = {decode_res_andMatrixInput_1,decode_res_andMatrixInput_1_5,
    decode_res_andMatrixInput_3_1,decode_res_andMatrixInput_2_2,decode_res_andMatrixInput_3,decode_res_andMatrixInput_4,
    decode_res_andMatrixInput_5,decode_res_andMatrixInput_6,decode_res_lo_1}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_11 = &_decode_res_T_10; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [16:0] _decode_res_T_12 = {decode_res_andMatrixInput_0,decode_res_andMatrixInput_1,decode_res_andMatrixInput_1_5,
    decode_res_andMatrixInput_3_1,decode_res_andMatrixInput_2_2,decode_res_andMatrixInput_3,decode_res_andMatrixInput_4,
    decode_res_andMatrixInput_5,decode_res_andMatrixInput_6,decode_res_lo_1}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_13 = &_decode_res_T_12; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire  decode_res_andMatrixInput_0_7 = ds_bits_inst[15]; // @[src/main/scala/chisel3/util/pla.scala 90:45]
  wire [16:0] _decode_res_T_14 = {decode_res_andMatrixInput_0_7,decode_res_andMatrixInput_1,
    decode_res_andMatrixInput_1_5,decode_res_andMatrixInput_3_1,decode_res_andMatrixInput_2_2,
    decode_res_andMatrixInput_3,decode_res_andMatrixInput_4,decode_res_andMatrixInput_5,decode_res_andMatrixInput_6,
    decode_res_lo_1}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_15 = &_decode_res_T_14; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire  decode_res_andMatrixInput_2_8 = ds_bits_inst[18]; // @[src/main/scala/chisel3/util/pla.scala 90:45]
  wire [14:0] _decode_res_T_16 = {decode_res_andMatrixInput_0,decode_res_andMatrixInput_2,decode_res_andMatrixInput_2_8,
    decode_res_andMatrixInput_3,decode_res_andMatrixInput_4,decode_res_andMatrixInput_5,decode_res_andMatrixInput_6,
    decode_res_andMatrixInput_7,decode_res_lo}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_17 = &_decode_res_T_16; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [14:0] _decode_res_T_18 = {decode_res_andMatrixInput_1,decode_res_andMatrixInput_2,decode_res_andMatrixInput_2_8,
    decode_res_andMatrixInput_3,decode_res_andMatrixInput_4,decode_res_andMatrixInput_5,decode_res_andMatrixInput_6,
    decode_res_andMatrixInput_7,decode_res_lo}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_19 = &_decode_res_T_18; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [15:0] _decode_res_T_20 = {decode_res_andMatrixInput_0,decode_res_andMatrixInput_2,decode_res_andMatrixInput_2_8,
    decode_res_andMatrixInput_2_2,decode_res_andMatrixInput_3,decode_res_andMatrixInput_4,decode_res_andMatrixInput_5,
    decode_res_andMatrixInput_6,decode_res_lo_1}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_21 = &_decode_res_T_20; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [16:0] _decode_res_T_22 = {decode_res_andMatrixInput_0_7,decode_res_andMatrixInput_1,decode_res_andMatrixInput_2,
    decode_res_andMatrixInput_2_8,decode_res_andMatrixInput_2_2,decode_res_andMatrixInput_3,decode_res_andMatrixInput_4,
    decode_res_andMatrixInput_5,decode_res_andMatrixInput_6,decode_res_lo_1}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_23 = &_decode_res_T_22; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [15:0] _decode_res_T_24 = {decode_res_andMatrixInput_0,decode_res_andMatrixInput_1_4,decode_res_andMatrixInput_2,
    decode_res_andMatrixInput_2_8,decode_res_andMatrixInput_3,decode_res_andMatrixInput_4,decode_res_andMatrixInput_5,
    decode_res_andMatrixInput_6,decode_res_lo_1}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_25 = &_decode_res_T_24; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [14:0] _decode_res_T_26 = {decode_res_andMatrixInput_1_4,decode_res_andMatrixInput_2_8,
    decode_res_andMatrixInput_2_2,decode_res_andMatrixInput_3,decode_res_andMatrixInput_4,decode_res_andMatrixInput_5,
    decode_res_andMatrixInput_6,decode_res_andMatrixInput_7,decode_res_lo}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_27 = &_decode_res_T_26; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [15:0] _decode_res_T_28 = {decode_res_andMatrixInput_0,decode_res_andMatrixInput_1_4,
    decode_res_andMatrixInput_2_8,decode_res_andMatrixInput_2_2,decode_res_andMatrixInput_3,decode_res_andMatrixInput_4,
    decode_res_andMatrixInput_5,decode_res_andMatrixInput_6,decode_res_lo_1}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_29 = &_decode_res_T_28; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [15:0] _decode_res_T_30 = {decode_res_andMatrixInput_0_7,decode_res_andMatrixInput_1_4,
    decode_res_andMatrixInput_2_8,decode_res_andMatrixInput_2_2,decode_res_andMatrixInput_3,decode_res_andMatrixInput_4,
    decode_res_andMatrixInput_5,decode_res_andMatrixInput_6,decode_res_lo_1}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_31 = &_decode_res_T_30; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [15:0] _decode_res_T_32 = {decode_res_andMatrixInput_1_4,decode_res_andMatrixInput_1_5,
    decode_res_andMatrixInput_2_8,decode_res_andMatrixInput_2_2,decode_res_andMatrixInput_3,decode_res_andMatrixInput_4,
    decode_res_andMatrixInput_5,decode_res_andMatrixInput_6,decode_res_lo_1}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_33 = &_decode_res_T_32; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [16:0] _decode_res_T_34 = {decode_res_andMatrixInput_0_7,decode_res_andMatrixInput_1_4,
    decode_res_andMatrixInput_1_5,decode_res_andMatrixInput_2_8,decode_res_andMatrixInput_2_2,
    decode_res_andMatrixInput_3,decode_res_andMatrixInput_4,decode_res_andMatrixInput_5,decode_res_andMatrixInput_6,
    decode_res_lo_1}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_35 = &_decode_res_T_34; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire  decode_res_andMatrixInput_3_18 = ds_bits_inst[19]; // @[src/main/scala/chisel3/util/pla.scala 90:45]
  wire [15:0] _decode_res_T_36 = {decode_res_andMatrixInput_0,decode_res_andMatrixInput_1,decode_res_andMatrixInput_2,
    decode_res_andMatrixInput_3_18,decode_res_andMatrixInput_3,decode_res_andMatrixInput_4,decode_res_andMatrixInput_5,
    decode_res_andMatrixInput_6,decode_res_lo_1}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_37 = &_decode_res_T_36; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [16:0] _decode_res_T_38 = {decode_res_andMatrixInput_0,decode_res_andMatrixInput_1,decode_res_andMatrixInput_2,
    decode_res_andMatrixInput_3_1,decode_res_andMatrixInput_3_18,decode_res_andMatrixInput_3,decode_res_andMatrixInput_4
    ,decode_res_andMatrixInput_5,decode_res_andMatrixInput_6,decode_res_lo_1}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_39 = &_decode_res_T_38; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [15:0] _decode_res_T_40 = {decode_res_andMatrixInput_0,decode_res_andMatrixInput_2,decode_res_andMatrixInput_2_8,
    decode_res_andMatrixInput_3_18,decode_res_andMatrixInput_3,decode_res_andMatrixInput_4,decode_res_andMatrixInput_5,
    decode_res_andMatrixInput_6,decode_res_lo_1}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_41 = &_decode_res_T_40; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [15:0] _decode_res_T_42 = {decode_res_andMatrixInput_1,decode_res_andMatrixInput_2,decode_res_andMatrixInput_2_8,
    decode_res_andMatrixInput_3_18,decode_res_andMatrixInput_3,decode_res_andMatrixInput_4,decode_res_andMatrixInput_5,
    decode_res_andMatrixInput_6,decode_res_lo_1}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_43 = &_decode_res_T_42; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [16:0] _decode_res_T_44 = {decode_res_andMatrixInput_0_7,decode_res_andMatrixInput_1,decode_res_andMatrixInput_2,
    decode_res_andMatrixInput_2_8,decode_res_andMatrixInput_3_18,decode_res_andMatrixInput_3,decode_res_andMatrixInput_4
    ,decode_res_andMatrixInput_5,decode_res_andMatrixInput_6,decode_res_lo_1}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_45 = &_decode_res_T_44; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire  decode_res_andMatrixInput_3_23 = decode_res_invInputs[20]; // @[src/main/scala/chisel3/util/pla.scala 91:29]
  wire  decode_res_andMatrixInput_4_23 = ds_bits_inst[21]; // @[src/main/scala/chisel3/util/pla.scala 90:45]
  wire [14:0] _decode_res_T_46 = {decode_res_andMatrixInput_2,decode_res_andMatrixInput_3_1,
    decode_res_andMatrixInput_2_2,decode_res_andMatrixInput_3_23,decode_res_andMatrixInput_4_23,
    decode_res_andMatrixInput_5,decode_res_andMatrixInput_6,decode_res_andMatrixInput_7,decode_res_lo}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_47 = &_decode_res_T_46; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [15:0] _decode_res_T_48 = {decode_res_andMatrixInput_0_7,decode_res_andMatrixInput_2,
    decode_res_andMatrixInput_3_1,decode_res_andMatrixInput_2_2,decode_res_andMatrixInput_3_23,
    decode_res_andMatrixInput_4_23,decode_res_andMatrixInput_5,decode_res_andMatrixInput_6,decode_res_lo_1}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_49 = &_decode_res_T_48; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [15:0] _decode_res_T_50 = {decode_res_andMatrixInput_1_4,decode_res_andMatrixInput_2,
    decode_res_andMatrixInput_3_1,decode_res_andMatrixInput_2_2,decode_res_andMatrixInput_3_23,
    decode_res_andMatrixInput_4_23,decode_res_andMatrixInput_5,decode_res_andMatrixInput_6,decode_res_lo_1}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_51 = &_decode_res_T_50; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [16:0] _decode_res_T_52 = {decode_res_andMatrixInput_0,decode_res_andMatrixInput_1,decode_res_andMatrixInput_1_5,
    decode_res_andMatrixInput_3_1,decode_res_andMatrixInput_3_18,decode_res_andMatrixInput_3_23,
    decode_res_andMatrixInput_4_23,decode_res_andMatrixInput_5,decode_res_andMatrixInput_6,decode_res_lo_1}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_53 = &_decode_res_T_52; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire  decode_res_andMatrixInput_6_27 = ds_bits_inst[22]; // @[src/main/scala/chisel3/util/pla.scala 90:45]
  wire [15:0] _decode_res_T_54 = {decode_res_andMatrixInput_0_7,decode_res_andMatrixInput_1,decode_res_andMatrixInput_2,
    decode_res_andMatrixInput_3_1,decode_res_andMatrixInput_3_23,decode_res_andMatrixInput_4,
    decode_res_andMatrixInput_6_27,decode_res_andMatrixInput_6,decode_res_lo_1}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_55 = &_decode_res_T_54; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [15:0] _decode_res_T_56 = {decode_res_andMatrixInput_0_7,decode_res_andMatrixInput_1,decode_res_andMatrixInput_2,
    decode_res_andMatrixInput_2_2,decode_res_andMatrixInput_3_23,decode_res_andMatrixInput_4,
    decode_res_andMatrixInput_6_27,decode_res_andMatrixInput_6,decode_res_lo_1}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_57 = &_decode_res_T_56; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [16:0] _decode_res_T_58 = {decode_res_andMatrixInput_0_7,decode_res_andMatrixInput_1,decode_res_andMatrixInput_2,
    decode_res_andMatrixInput_2_8,decode_res_andMatrixInput_2_2,decode_res_andMatrixInput_3_23,
    decode_res_andMatrixInput_4,decode_res_andMatrixInput_6_27,decode_res_andMatrixInput_6,decode_res_lo_1}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_59 = &_decode_res_T_58; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [16:0] _decode_res_T_60 = {decode_res_andMatrixInput_0_7,decode_res_andMatrixInput_1,decode_res_andMatrixInput_2,
    decode_res_andMatrixInput_3_1,decode_res_andMatrixInput_3_18,decode_res_andMatrixInput_3_23,
    decode_res_andMatrixInput_4,decode_res_andMatrixInput_6_27,decode_res_andMatrixInput_6,decode_res_lo_1}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_61 = &_decode_res_T_60; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire  decode_res_andMatrixInput_2_31 = ds_bits_inst[25]; // @[src/main/scala/chisel3/util/pla.scala 90:45]
  wire [8:0] _decode_res_T_62 = {decode_res_andMatrixInput_5,decode_res_andMatrixInput_7,decode_res_andMatrixInput_2_31,
    decode_res_andMatrixInput_9,decode_res_andMatrixInput_10,decode_res_andMatrixInput_11,decode_res_andMatrixInput_12,
    decode_res_andMatrixInput_13,decode_res_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_63 = &_decode_res_T_62; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [8:0] _decode_res_T_64 = {decode_res_andMatrixInput_6,decode_res_andMatrixInput_7,decode_res_andMatrixInput_2_31,
    decode_res_andMatrixInput_9,decode_res_andMatrixInput_10,decode_res_andMatrixInput_11,decode_res_andMatrixInput_12,
    decode_res_andMatrixInput_13,decode_res_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_65 = &_decode_res_T_64; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [9:0] _decode_res_T_66 = {decode_res_andMatrixInput_5,decode_res_andMatrixInput_6,decode_res_andMatrixInput_7,
    decode_res_andMatrixInput_2_31,decode_res_andMatrixInput_9,decode_res_andMatrixInput_10,decode_res_andMatrixInput_11
    ,decode_res_andMatrixInput_12,decode_res_andMatrixInput_13,decode_res_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_67 = &_decode_res_T_66; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [8:0] _decode_res_T_68 = {decode_res_andMatrixInput_6_27,decode_res_andMatrixInput_6,
    decode_res_andMatrixInput_2_31,decode_res_andMatrixInput_9,decode_res_andMatrixInput_10,decode_res_andMatrixInput_11
    ,decode_res_andMatrixInput_12,decode_res_andMatrixInput_13,decode_res_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_69 = &_decode_res_T_68; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire  decode_res_andMatrixInput_1_35 = ds_bits_inst[23]; // @[src/main/scala/chisel3/util/pla.scala 90:45]
  wire [8:0] _decode_res_T_70 = {decode_res_andMatrixInput_5,decode_res_andMatrixInput_1_35,
    decode_res_andMatrixInput_2_31,decode_res_andMatrixInput_9,decode_res_andMatrixInput_10,decode_res_andMatrixInput_11
    ,decode_res_andMatrixInput_12,decode_res_andMatrixInput_13,decode_res_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_71 = &_decode_res_T_70; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire  decode_res_andMatrixInput_1_36 = ds_bits_inst[24]; // @[src/main/scala/chisel3/util/pla.scala 90:45]
  wire [8:0] _decode_res_T_72 = {decode_res_andMatrixInput_6_27,decode_res_andMatrixInput_1_36,
    decode_res_andMatrixInput_2_31,decode_res_andMatrixInput_9,decode_res_andMatrixInput_10,decode_res_andMatrixInput_11
    ,decode_res_andMatrixInput_12,decode_res_andMatrixInput_13,decode_res_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_73 = &_decode_res_T_72; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [9:0] _decode_res_T_74 = {decode_res_andMatrixInput_6_27,decode_res_andMatrixInput_6,
    decode_res_andMatrixInput_1_36,decode_res_andMatrixInput_2_31,decode_res_andMatrixInput_9,
    decode_res_andMatrixInput_10,decode_res_andMatrixInput_11,decode_res_andMatrixInput_12,decode_res_andMatrixInput_13,
    decode_res_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_75 = &_decode_res_T_74; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [8:0] _decode_res_T_76 = {decode_res_andMatrixInput_1_35,decode_res_andMatrixInput_1_36,
    decode_res_andMatrixInput_2_31,decode_res_andMatrixInput_9,decode_res_andMatrixInput_10,decode_res_andMatrixInput_11
    ,decode_res_andMatrixInput_12,decode_res_andMatrixInput_13,decode_res_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_77 = &_decode_res_T_76; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [9:0] _decode_res_T_78 = {decode_res_andMatrixInput_5,decode_res_andMatrixInput_1_35,
    decode_res_andMatrixInput_1_36,decode_res_andMatrixInput_2_31,decode_res_andMatrixInput_9,
    decode_res_andMatrixInput_10,decode_res_andMatrixInput_11,decode_res_andMatrixInput_12,decode_res_andMatrixInput_13,
    decode_res_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_79 = &_decode_res_T_78; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [9:0] _decode_res_T_80 = {decode_res_andMatrixInput_6_27,decode_res_andMatrixInput_1_35,
    decode_res_andMatrixInput_1_36,decode_res_andMatrixInput_2_31,decode_res_andMatrixInput_9,
    decode_res_andMatrixInput_10,decode_res_andMatrixInput_11,decode_res_andMatrixInput_12,decode_res_andMatrixInput_13,
    decode_res_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_81 = &_decode_res_T_80; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire  decode_res_andMatrixInput_1_41 = ds_bits_inst[26]; // @[src/main/scala/chisel3/util/pla.scala 90:45]
  wire  decode_res_andMatrixInput_2_41 = ds_bits_inst[28]; // @[src/main/scala/chisel3/util/pla.scala 90:45]
  wire [5:0] _decode_res_T_82 = {decode_res_andMatrixInput_8,decode_res_andMatrixInput_1_41,
    decode_res_andMatrixInput_2_41,decode_res_andMatrixInput_12,decode_res_andMatrixInput_13,
    decode_res_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_83 = &_decode_res_T_82; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [6:0] _decode_res_T_84 = {decode_res_andMatrixInput_8,decode_res_andMatrixInput_1_41,decode_res_andMatrixInput_10
    ,decode_res_andMatrixInput_2_41,decode_res_andMatrixInput_12,decode_res_andMatrixInput_13,
    decode_res_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_85 = &_decode_res_T_84; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire  decode_res_andMatrixInput_2_43 = ds_bits_inst[27]; // @[src/main/scala/chisel3/util/pla.scala 90:45]
  wire [6:0] _decode_res_T_86 = {decode_res_andMatrixInput_8,decode_res_andMatrixInput_1_41,
    decode_res_andMatrixInput_2_43,decode_res_andMatrixInput_2_41,decode_res_andMatrixInput_12,
    decode_res_andMatrixInput_13,decode_res_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_87 = &_decode_res_T_86; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire  decode_res_andMatrixInput_5_44 = ds_bits_inst[29]; // @[src/main/scala/chisel3/util/pla.scala 90:45]
  wire [7:0] _decode_res_T_88 = {decode_res_andMatrixInput_6,decode_res_andMatrixInput_7,decode_res_andMatrixInput_9,
    decode_res_andMatrixInput_2_43,decode_res_andMatrixInput_11,decode_res_andMatrixInput_5_44,
    decode_res_andMatrixInput_13,decode_res_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_89 = &_decode_res_T_88; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [7:0] _decode_res_T_90 = {decode_res_andMatrixInput_5,decode_res_andMatrixInput_8,decode_res_andMatrixInput_9,
    decode_res_andMatrixInput_2_43,decode_res_andMatrixInput_11,decode_res_andMatrixInput_5_44,
    decode_res_andMatrixInput_13,decode_res_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_91 = &_decode_res_T_90; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [7:0] _decode_res_T_92 = {decode_res_andMatrixInput_6,decode_res_andMatrixInput_8,decode_res_andMatrixInput_9,
    decode_res_andMatrixInput_2_43,decode_res_andMatrixInput_11,decode_res_andMatrixInput_5_44,
    decode_res_andMatrixInput_13,decode_res_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_93 = &_decode_res_T_92; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [8:0] _decode_res_T_94 = {decode_res_andMatrixInput_5,decode_res_andMatrixInput_7,decode_res_andMatrixInput_8,
    decode_res_andMatrixInput_9,decode_res_andMatrixInput_2_43,decode_res_andMatrixInput_11,
    decode_res_andMatrixInput_5_44,decode_res_andMatrixInput_13,decode_res_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_95 = &_decode_res_T_94; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [8:0] _decode_res_T_96 = {decode_res_andMatrixInput_6,decode_res_andMatrixInput_7,decode_res_andMatrixInput_8,
    decode_res_andMatrixInput_9,decode_res_andMatrixInput_2_43,decode_res_andMatrixInput_11,
    decode_res_andMatrixInput_5_44,decode_res_andMatrixInput_13,decode_res_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_97 = &_decode_res_T_96; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [8:0] _decode_res_T_98 = {decode_res_andMatrixInput_6_27,decode_res_andMatrixInput_6,decode_res_andMatrixInput_8,
    decode_res_andMatrixInput_9,decode_res_andMatrixInput_2_43,decode_res_andMatrixInput_11,
    decode_res_andMatrixInput_5_44,decode_res_andMatrixInput_13,decode_res_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_99 = &_decode_res_T_98; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [8:0] _decode_res_T_100 = {decode_res_andMatrixInput_5,decode_res_andMatrixInput_1_35,decode_res_andMatrixInput_8
    ,decode_res_andMatrixInput_9,decode_res_andMatrixInput_2_43,decode_res_andMatrixInput_11,
    decode_res_andMatrixInput_5_44,decode_res_andMatrixInput_13,decode_res_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_101 = &_decode_res_T_100; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [8:0] _decode_res_T_102 = {decode_res_andMatrixInput_6,decode_res_andMatrixInput_1_36,decode_res_andMatrixInput_8
    ,decode_res_andMatrixInput_9,decode_res_andMatrixInput_2_43,decode_res_andMatrixInput_11,
    decode_res_andMatrixInput_5_44,decode_res_andMatrixInput_13,decode_res_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_103 = &_decode_res_T_102; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [9:0] _decode_res_T_104 = {decode_res_andMatrixInput_6_27,decode_res_andMatrixInput_6,
    decode_res_andMatrixInput_1_36,decode_res_andMatrixInput_8,decode_res_andMatrixInput_9,
    decode_res_andMatrixInput_2_43,decode_res_andMatrixInput_11,decode_res_andMatrixInput_5_44,
    decode_res_andMatrixInput_13,decode_res_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_105 = &_decode_res_T_104; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [9:0] _decode_res_T_106 = {decode_res_andMatrixInput_5,decode_res_andMatrixInput_1_35,
    decode_res_andMatrixInput_1_36,decode_res_andMatrixInput_8,decode_res_andMatrixInput_9,
    decode_res_andMatrixInput_2_43,decode_res_andMatrixInput_11,decode_res_andMatrixInput_5_44,
    decode_res_andMatrixInput_13,decode_res_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_107 = &_decode_res_T_106; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [8:0] _decode_res_T_108 = {decode_res_andMatrixInput_6,decode_res_andMatrixInput_7,decode_res_andMatrixInput_2_31
    ,decode_res_andMatrixInput_9,decode_res_andMatrixInput_2_43,decode_res_andMatrixInput_11,
    decode_res_andMatrixInput_5_44,decode_res_andMatrixInput_13,decode_res_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_109 = &_decode_res_T_108; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [9:0] _decode_res_T_110 = {decode_res_andMatrixInput_5,decode_res_andMatrixInput_6,decode_res_andMatrixInput_7,
    decode_res_andMatrixInput_2_31,decode_res_andMatrixInput_9,decode_res_andMatrixInput_2_43,
    decode_res_andMatrixInput_11,decode_res_andMatrixInput_5_44,decode_res_andMatrixInput_13,
    decode_res_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_111 = &_decode_res_T_110; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [9:0] _decode_res_T_112 = {decode_res_andMatrixInput_6_27,decode_res_andMatrixInput_6,decode_res_andMatrixInput_7
    ,decode_res_andMatrixInput_2_31,decode_res_andMatrixInput_9,decode_res_andMatrixInput_2_43,
    decode_res_andMatrixInput_11,decode_res_andMatrixInput_5_44,decode_res_andMatrixInput_13,
    decode_res_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_113 = &_decode_res_T_112; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire  decode_res_andMatrixInput_3_57 = ds_bits_inst[30]; // @[src/main/scala/chisel3/util/pla.scala 90:45]
  wire [4:0] _decode_res_T_114 = {decode_res_andMatrixInput_1_41,decode_res_andMatrixInput_2_43,
    decode_res_andMatrixInput_12,decode_res_andMatrixInput_3_57,decode_res_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_115 = &_decode_res_T_114; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [5:0] _decode_res_T_116 = {decode_res_andMatrixInput_1_41,decode_res_andMatrixInput_2_43,
    decode_res_andMatrixInput_11,decode_res_andMatrixInput_12,decode_res_andMatrixInput_3_57,
    decode_res_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_117 = &_decode_res_T_116; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [3:0] _decode_res_T_118 = {decode_res_andMatrixInput_2_41,decode_res_andMatrixInput_12,
    decode_res_andMatrixInput_3_57,decode_res_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_119 = &_decode_res_T_118; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [4:0] _decode_res_T_120 = {decode_res_andMatrixInput_9,decode_res_andMatrixInput_2_41,
    decode_res_andMatrixInput_12,decode_res_andMatrixInput_3_57,decode_res_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_121 = &_decode_res_T_120; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [4:0] _decode_res_T_122 = {decode_res_andMatrixInput_10,decode_res_andMatrixInput_2_41,
    decode_res_andMatrixInput_12,decode_res_andMatrixInput_3_57,decode_res_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_123 = &_decode_res_T_122; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [5:0] _decode_res_T_124 = {decode_res_andMatrixInput_1_41,decode_res_andMatrixInput_10,
    decode_res_andMatrixInput_2_41,decode_res_andMatrixInput_12,decode_res_andMatrixInput_3_57,
    decode_res_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_125 = &_decode_res_T_124; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [4:0] _decode_res_T_126 = {decode_res_andMatrixInput_2_43,decode_res_andMatrixInput_2_41,
    decode_res_andMatrixInput_12,decode_res_andMatrixInput_3_57,decode_res_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_127 = &_decode_res_T_126; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [3:0] _decode_res_T_128 = {decode_res_andMatrixInput_11,decode_res_andMatrixInput_5_44,
    decode_res_andMatrixInput_3_57,decode_res_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_129 = &_decode_res_T_128; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [4:0] _decode_res_T_130 = {decode_res_andMatrixInput_9,decode_res_andMatrixInput_11,
    decode_res_andMatrixInput_5_44,decode_res_andMatrixInput_3_57,decode_res_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_131 = &_decode_res_T_130; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [4:0] _decode_res_T_132 = {decode_res_andMatrixInput_2_43,decode_res_andMatrixInput_11,
    decode_res_andMatrixInput_5_44,decode_res_andMatrixInput_3_57,decode_res_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _decode_res_T_133 = &_decode_res_T_132; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [7:0] decode_res_orMatrixOutputs_lo = {_decode_res_T_65,_decode_res_T_71,_decode_res_T_73,_decode_res_T_83,
    _decode_res_T_89,_decode_res_T_95,_decode_res_T_117,_decode_res_T_125}; // @[src/main/scala/chisel3/util/pla.scala 114:19]
  wire [16:0] _decode_res_orMatrixOutputs_T = {_decode_res_T_1,_decode_res_T_5,_decode_res_T_11,_decode_res_T_17,
    _decode_res_T_19,_decode_res_T_27,_decode_res_T_47,_decode_res_T_55,_decode_res_T_57,decode_res_orMatrixOutputs_lo}; // @[src/main/scala/chisel3/util/pla.scala 114:19]
  wire  _decode_res_orMatrixOutputs_T_1 = |_decode_res_orMatrixOutputs_T; // @[src/main/scala/chisel3/util/pla.scala 114:36]
  wire [6:0] _decode_res_orMatrixOutputs_T_2 = {_decode_res_T_53,_decode_res_T_95,_decode_res_T_105,_decode_res_T_113,
    _decode_res_T_117,_decode_res_T_121,_decode_res_T_131}; // @[src/main/scala/chisel3/util/pla.scala 114:19]
  wire  _decode_res_orMatrixOutputs_T_3 = |_decode_res_orMatrixOutputs_T_2; // @[src/main/scala/chisel3/util/pla.scala 114:36]
  wire [6:0] _decode_res_orMatrixOutputs_T_4 = {_decode_res_T_87,_decode_res_T_101,_decode_res_T_105,_decode_res_T_111,
    _decode_res_T_115,_decode_res_T_127,_decode_res_T_133}; // @[src/main/scala/chisel3/util/pla.scala 114:19]
  wire  _decode_res_orMatrixOutputs_T_5 = |_decode_res_orMatrixOutputs_T_4; // @[src/main/scala/chisel3/util/pla.scala 114:36]
  wire [4:0] _decode_res_orMatrixOutputs_T_6 = {_decode_res_T_97,_decode_res_T_99,_decode_res_T_107,_decode_res_T_123,
    _decode_res_T_133}; // @[src/main/scala/chisel3/util/pla.scala 114:19]
  wire  _decode_res_orMatrixOutputs_T_7 = |_decode_res_orMatrixOutputs_T_6; // @[src/main/scala/chisel3/util/pla.scala 114:36]
  wire [3:0] _decode_res_orMatrixOutputs_T_8 = {_decode_res_T_101,_decode_res_T_103,_decode_res_T_109,_decode_res_T_123}
    ; // @[src/main/scala/chisel3/util/pla.scala 114:19]
  wire  _decode_res_orMatrixOutputs_T_9 = |_decode_res_orMatrixOutputs_T_8; // @[src/main/scala/chisel3/util/pla.scala 114:36]
  wire [2:0] decode_res_orMatrixOutputs_hi_5 = {_decode_res_T_89,_decode_res_T_91,_decode_res_T_93}; // @[src/main/scala/chisel3/util/pla.scala 114:19]
  wire [4:0] _decode_res_orMatrixOutputs_T_10 = {_decode_res_T_89,_decode_res_T_91,_decode_res_T_93,_decode_res_T_119,
    _decode_res_T_129}; // @[src/main/scala/chisel3/util/pla.scala 114:19]
  wire  _decode_res_orMatrixOutputs_T_11 = |_decode_res_orMatrixOutputs_T_10; // @[src/main/scala/chisel3/util/pla.scala 114:36]
  wire [1:0] _decode_res_orMatrixOutputs_T_12 = {_decode_res_T_95,_decode_res_T_97}; // @[src/main/scala/chisel3/util/pla.scala 114:19]
  wire  _decode_res_orMatrixOutputs_T_13 = |_decode_res_orMatrixOutputs_T_12; // @[src/main/scala/chisel3/util/pla.scala 114:36]
  wire  _decode_res_orMatrixOutputs_T_15 = |decode_res_orMatrixOutputs_hi_5; // @[src/main/scala/chisel3/util/pla.scala 114:36]
  wire [6:0] decode_res_orMatrixOutputs_lo_6 = {_decode_res_T_53,_decode_res_T_63,_decode_res_T_65,_decode_res_T_83,
    _decode_res_T_89,_decode_res_T_91,_decode_res_T_93}; // @[src/main/scala/chisel3/util/pla.scala 114:19]
  wire [13:0] _decode_res_orMatrixOutputs_T_16 = {_decode_res_T_1,_decode_res_T_5,_decode_res_T_11,_decode_res_T_17,
    _decode_res_T_19,_decode_res_T_27,_decode_res_T_47,decode_res_orMatrixOutputs_lo_6}; // @[src/main/scala/chisel3/util/pla.scala 114:19]
  wire  _decode_res_orMatrixOutputs_T_17 = |_decode_res_orMatrixOutputs_T_16; // @[src/main/scala/chisel3/util/pla.scala 114:36]
  wire [8:0] _decode_res_orMatrixOutputs_T_18 = {_decode_res_T_53,_decode_res_T_55,_decode_res_T_57,_decode_res_T_63,
    _decode_res_T_65,_decode_res_T_89,_decode_res_T_91,_decode_res_T_93,_decode_res_T_123}; // @[src/main/scala/chisel3/util/pla.scala 114:19]
  wire  _decode_res_orMatrixOutputs_T_19 = |_decode_res_orMatrixOutputs_T_18; // @[src/main/scala/chisel3/util/pla.scala 114:36]
  wire [4:0] _decode_res_orMatrixOutputs_T_20 = {_decode_res_T_53,_decode_res_T_83,_decode_res_T_115,_decode_res_T_119,
    _decode_res_T_129}; // @[src/main/scala/chisel3/util/pla.scala 114:19]
  wire  _decode_res_orMatrixOutputs_T_21 = |_decode_res_orMatrixOutputs_T_20; // @[src/main/scala/chisel3/util/pla.scala 114:36]
  wire [1:0] _decode_res_orMatrixOutputs_T_22 = {_decode_res_T_73,_decode_res_T_77}; // @[src/main/scala/chisel3/util/pla.scala 114:19]
  wire  _decode_res_orMatrixOutputs_T_23 = |_decode_res_orMatrixOutputs_T_22; // @[src/main/scala/chisel3/util/pla.scala 114:36]
  wire [7:0] decode_res_orMatrixOutputs_lo_9 = {_decode_res_T_71,_decode_res_T_75,_decode_res_T_87,_decode_res_T_89,
    _decode_res_T_91,_decode_res_T_93,_decode_res_T_117,_decode_res_T_125}; // @[src/main/scala/chisel3/util/pla.scala 114:19]
  wire [15:0] _decode_res_orMatrixOutputs_T_24 = {_decode_res_T_3,_decode_res_T_7,_decode_res_T_23,_decode_res_T_29,
    _decode_res_T_41,_decode_res_T_51,_decode_res_T_55,_decode_res_T_63,decode_res_orMatrixOutputs_lo_9}; // @[src/main/scala/chisel3/util/pla.scala 114:19]
  wire  _decode_res_orMatrixOutputs_T_25 = |_decode_res_orMatrixOutputs_T_24; // @[src/main/scala/chisel3/util/pla.scala 114:36]
  wire [5:0] decode_res_orMatrixOutputs_lo_10 = {_decode_res_T_45,_decode_res_T_49,_decode_res_T_59,_decode_res_T_61,
    _decode_res_T_67,_decode_res_T_79}; // @[src/main/scala/chisel3/util/pla.scala 114:19]
  wire [11:0] _decode_res_orMatrixOutputs_T_26 = {_decode_res_T_9,_decode_res_T_13,_decode_res_T_21,_decode_res_T_25,
    _decode_res_T_35,_decode_res_T_39,decode_res_orMatrixOutputs_lo_10}; // @[src/main/scala/chisel3/util/pla.scala 114:19]
  wire  _decode_res_orMatrixOutputs_T_27 = |_decode_res_orMatrixOutputs_T_26; // @[src/main/scala/chisel3/util/pla.scala 114:36]
  wire [5:0] _decode_res_orMatrixOutputs_T_28 = {_decode_res_T_15,_decode_res_T_17,_decode_res_T_19,_decode_res_T_69,
    _decode_res_T_79,_decode_res_T_85}; // @[src/main/scala/chisel3/util/pla.scala 114:19]
  wire  _decode_res_orMatrixOutputs_T_29 = |_decode_res_orMatrixOutputs_T_28; // @[src/main/scala/chisel3/util/pla.scala 114:36]
  wire [8:0] _decode_res_orMatrixOutputs_T_30 = {_decode_res_T_31,_decode_res_T_33,_decode_res_T_37,_decode_res_T_41,
    _decode_res_T_43,_decode_res_T_55,_decode_res_T_57,_decode_res_T_81,_decode_res_T_85}; // @[src/main/scala/chisel3/util/pla.scala 114:19]
  wire  _decode_res_orMatrixOutputs_T_31 = |_decode_res_orMatrixOutputs_T_30; // @[src/main/scala/chisel3/util/pla.scala 114:36]
  wire  _decode_res_orMatrixOutputs_T_32 = |_decode_res_T_47; // @[src/main/scala/chisel3/util/pla.scala 114:36]
  wire [7:0] decode_res_orMatrixOutputs_lo_13 = {_decode_res_orMatrixOutputs_T_15,_decode_res_orMatrixOutputs_T_13,
    _decode_res_orMatrixOutputs_T_11,_decode_res_orMatrixOutputs_T_9,_decode_res_orMatrixOutputs_T_7,
    _decode_res_orMatrixOutputs_T_5,_decode_res_orMatrixOutputs_T_3,_decode_res_orMatrixOutputs_T_1}; // @[src/main/scala/chisel3/util/pla.scala 102:36]
  wire [16:0] decode_res_orMatrixOutputs = {_decode_res_orMatrixOutputs_T_32,_decode_res_orMatrixOutputs_T_31,
    _decode_res_orMatrixOutputs_T_29,_decode_res_orMatrixOutputs_T_27,_decode_res_orMatrixOutputs_T_25,
    _decode_res_orMatrixOutputs_T_23,_decode_res_orMatrixOutputs_T_21,_decode_res_orMatrixOutputs_T_19,
    _decode_res_orMatrixOutputs_T_17,decode_res_orMatrixOutputs_lo_13}; // @[src/main/scala/chisel3/util/pla.scala 102:36]
  wire  _decode_res_invMatrixOutputs_T_2 = ~decode_res_orMatrixOutputs[1]; // @[src/main/scala/chisel3/util/pla.scala 123:40]
  wire  _decode_res_invMatrixOutputs_T_4 = ~decode_res_orMatrixOutputs[2]; // @[src/main/scala/chisel3/util/pla.scala 123:40]
  wire  _decode_res_invMatrixOutputs_T_8 = ~decode_res_orMatrixOutputs[5]; // @[src/main/scala/chisel3/util/pla.scala 123:40]
  wire  _decode_res_invMatrixOutputs_T_11 = ~decode_res_orMatrixOutputs[7]; // @[src/main/scala/chisel3/util/pla.scala 123:40]
  wire [7:0] decode_res_invMatrixOutputs_lo = {_decode_res_invMatrixOutputs_T_11,decode_res_orMatrixOutputs[6],
    _decode_res_invMatrixOutputs_T_8,decode_res_orMatrixOutputs[4],decode_res_orMatrixOutputs[3],
    _decode_res_invMatrixOutputs_T_4,_decode_res_invMatrixOutputs_T_2,decode_res_orMatrixOutputs[0]}; // @[src/main/scala/chisel3/util/pla.scala 120:37]
  wire [16:0] decode_res_invMatrixOutputs = {decode_res_orMatrixOutputs[16],decode_res_orMatrixOutputs[15],
    decode_res_orMatrixOutputs[14],decode_res_orMatrixOutputs[13],decode_res_orMatrixOutputs[12],
    decode_res_orMatrixOutputs[11],decode_res_orMatrixOutputs[10],decode_res_orMatrixOutputs[9],
    decode_res_orMatrixOutputs[8],decode_res_invMatrixOutputs_lo}; // @[src/main/scala/chisel3/util/pla.scala 120:37]
  wire [3:0] inst_type = decode_res_invMatrixOutputs[11:8]; // @[src/src/cpucore/pipeline/ID_stage.scala 33:31]
  wire [1:0] mem_we = decode_res_invMatrixOutputs[7:6]; // @[src/src/cpucore/pipeline/ID_stage.scala 34:28]
  wire [4:0] inst_name = decode_res_invMatrixOutputs[5:1]; // @[src/src/cpucore/pipeline/ID_stage.scala 35:31]
  wire  _imm_T = inst_type == 4'h2; // @[src/src/cpucore/pipeline/ID_stage.scala 42:20]
  wire  _imm_T_1 = inst_type == 4'h3; // @[src/src/cpucore/pipeline/ID_stage.scala 43:20]
  wire  _imm_T_2 = inst_type == 4'h8; // @[src/src/cpucore/pipeline/ID_stage.scala 44:20]
  wire  _imm_T_3 = inst_type == 4'h4; // @[src/src/cpucore/pipeline/ID_stage.scala 45:20]
  wire  _imm_T_4 = inst_type == 4'h5; // @[src/src/cpucore/pipeline/ID_stage.scala 46:20]
  wire  _imm_T_5 = inst_type == 4'h6; // @[src/src/cpucore/pipeline/ID_stage.scala 47:20]
  wire [31:0] _imm_T_6 = _imm_T_5 ? 32'h4 : 32'h0; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire [31:0] _imm_T_7 = _imm_T_4 ? imm20 : _imm_T_6; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire [31:0] _imm_T_8 = _imm_T_3 ? 32'h4 : _imm_T_7; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire [31:0] _imm_T_9 = _imm_T_2 ? {{20'd0}, imm12u} : _imm_T_8; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire [31:0] _imm_T_10 = _imm_T_1 ? imm12 : _imm_T_9; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire [31:0] imm = _imm_T ? {{27'd0}, rk} : _imm_T_10; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire  rk_or_rd = inst_name != 5'h10 & _imm_T_3 | mem_we == 2'h0; // @[src/src/cpucore/pipeline/ID_stage.scala 52:74]
  wire  _rf_waddr_T = inst_name == 5'he; // @[src/src/cpucore/pipeline/ID_stage.scala 67:34]
  wire  rj_eq_rd = reg__io_rdata1 == reg__io_rdata2; // @[src/src/cpucore/pipeline/ID_stage.scala 72:30]
  wire [32:0] _rj_sub_rd_T = reg__io_rdata1 + reg__io_rdata2; // @[src/src/cpucore/pipeline/ID_stage.scala 73:30]
  wire [32:0] rj_sub_rd = _rj_sub_rd_T + 33'h1; // @[src/src/cpucore/pipeline/ID_stage.scala 73:43]
  wire  slt_res = reg__io_rdata1[31] & ~reg__io_rdata2[31] | ~(reg__io_rdata1[31] ^ reg__io_rdata2[31]) & rj_sub_rd[31]; // @[src/src/cpucore/pipeline/ID_stage.scala 74:49]
  wire  sltu_res = ~rj_sub_rd[32]; // @[src/src/cpucore/pipeline/ID_stage.scala 75:20]
  wire  _br_taken_T_4 = inst_name == 5'h1 & ~rj_eq_rd; // @[src/src/cpucore/pipeline/ID_stage.scala 77:48]
  wire  _br_taken_T_5 = inst_name == 5'h0 & rj_eq_rd | _br_taken_T_4; // @[src/src/cpucore/pipeline/ID_stage.scala 76:57]
  wire  _br_taken_T_7 = inst_name == 5'h2 & slt_res; // @[src/src/cpucore/pipeline/ID_stage.scala 78:48]
  wire  _br_taken_T_8 = _br_taken_T_5 | _br_taken_T_7; // @[src/src/cpucore/pipeline/ID_stage.scala 77:60]
  wire  _br_taken_T_11 = inst_name == 5'h3 & ~slt_res; // @[src/src/cpucore/pipeline/ID_stage.scala 79:48]
  wire  _br_taken_T_12 = _br_taken_T_8 | _br_taken_T_11; // @[src/src/cpucore/pipeline/ID_stage.scala 78:58]
  wire  _br_taken_T_14 = inst_name == 5'h4 & sltu_res; // @[src/src/cpucore/pipeline/ID_stage.scala 80:48]
  wire  _br_taken_T_15 = _br_taken_T_12 | _br_taken_T_14; // @[src/src/cpucore/pipeline/ID_stage.scala 79:59]
  wire  _br_taken_T_18 = inst_name == 5'h5 & ~sltu_res; // @[src/src/cpucore/pipeline/ID_stage.scala 81:48]
  wire  _br_taken_T_19 = _br_taken_T_15 | _br_taken_T_18; // @[src/src/cpucore/pipeline/ID_stage.scala 80:59]
  wire  _br_taken_T_21 = _br_taken_T_19 | _rf_waddr_T; // @[src/src/cpucore/pipeline/ID_stage.scala 81:60]
  wire  _br_taken_T_22 = inst_name == 5'hf; // @[src/src/cpucore/pipeline/ID_stage.scala 82:57]
  wire  _br_taken_T_24 = inst_name == 5'h10; // @[src/src/cpucore/pipeline/ID_stage.scala 83:31]
  wire  _br_taken_T_25 = _br_taken_T_21 | inst_name == 5'hf | _br_taken_T_24; // @[src/src/cpucore/pipeline/ID_stage.scala 82:72]
  wire [31:0] _br_target_T_1 = ds_bits_pc + imm; // @[src/src/cpucore/pipeline/ID_stage.scala 85:45]
  wire [31:0] _br_target_T_3 = reg__io_rdata1 + imm; // @[src/src/cpucore/pipeline/ID_stage.scala 86:35]
  wire [31:0] _br_target_T_5 = 5'h10 == inst_name ? _br_target_T_3 : _br_target_T_1; // @[src/src/cpucore/pipeline/ID_stage.scala 85:51]
  wire [31:0] _br_target_T_7 = 5'h12 == inst_name ? ds_bits_pc : _br_target_T_5; // @[src/src/cpucore/pipeline/ID_stage.scala 85:51]
  wire [31:0] _br_target_T_9 = 5'he == inst_name ? {{6'd0}, imm26} : _br_target_T_7; // @[src/src/cpucore/pipeline/ID_stage.scala 85:51]
  wire  src1_is_pc = _br_taken_T_24 | inst_name == 5'h11 | _br_taken_T_22; // @[src/src/cpucore/pipeline/ID_stage.scala 96:78]
  regfile reg_ ( // @[src/src/cpucore/pipeline/ID_stage.scala 53:21]
    .clock(reg__clock),
    .io_raddr1(reg__io_raddr1),
    .io_raddr2(reg__io_raddr2),
    .io_rdata1(reg__io_rdata1),
    .io_rdata2(reg__io_rdata2),
    .io_waddr(reg__io_waddr),
    .io_wdata(reg__io_wdata),
    .io_wen(reg__io_wen),
    .io_rf_pc(reg__io_rf_pc),
    .io_is_break(reg__io_is_break),
    .io_valid(reg__io_valid),
    .io_inst(reg__io_inst)
  );
  assign toes_valid = ds_valid; // @[src/src/cpucore/pipeline/ID_stage.scala 109:16]
  assign toes_bits_alu_src1 = src1_is_pc ? ds_bits_pc : reg__io_rdata1; // @[src/src/cpucore/pipeline/ID_stage.scala 97:30]
  assign toes_bits_alu_src2 = inst_type == 4'h1 ? reg__io_rdata2 : imm; // @[src/src/cpucore/pipeline/ID_stage.scala 98:30]
  assign toes_bits_alu_op = decode_res_invMatrixOutputs[16:12]; // @[src/src/cpucore/pipeline/ID_stage.scala 94:35]
  assign toes_bits_rf_waddr = inst_name == 5'he ? 5'h1 : rd; // @[src/src/cpucore/pipeline/ID_stage.scala 67:23]
  assign toes_bits_rf_we = decode_res_invMatrixOutputs[0]; // @[src/src/cpucore/pipeline/ID_stage.scala 36:27]
  assign toes_bits_mem_we = decode_res_invMatrixOutputs[7:6]; // @[src/src/cpucore/pipeline/ID_stage.scala 34:28]
  assign toes_bits_inst_name = decode_res_invMatrixOutputs[5:1]; // @[src/src/cpucore/pipeline/ID_stage.scala 35:31]
  assign toes_bits_mem_wdata = reg__io_rdata2; // @[src/src/cpucore/pipeline/ID_stage.scala 103:25]
  assign toes_bits_dpi_c_is_break = inst_type == 4'h7; // @[src/src/cpucore/pipeline/ID_stage.scala 104:43]
  assign toes_bits_dpi_c_inst = ds_bits_inst; // @[src/src/cpucore/pipeline/ID_stage.scala 105:26]
  assign toes_bits_dpi_c_next_pc = ds_bits_next_pc; // @[src/src/cpucore/pipeline/ID_stage.scala 106:29]
  assign br_taken = _br_taken_T_25 | inst_name == 5'h12; // @[src/src/cpucore/pipeline/ID_stage.scala 83:48]
  assign br_target = 5'hf == inst_name ? {{6'd0}, imm26} : _br_target_T_9; // @[src/src/cpucore/pipeline/ID_stage.scala 85:51]
  assign reg__clock = clock;
  assign reg__io_raddr1 = ds_bits_inst[9:5]; // @[src/src/cpucore/pipeline/ID_stage.scala 19:18]
  assign reg__io_raddr2 = rk_or_rd ? rk : rd; // @[src/src/cpucore/pipeline/ID_stage.scala 55:25]
  assign reg__io_waddr = torf_rf_waddr; // @[src/src/cpucore/pipeline/ID_stage.scala 56:18]
  assign reg__io_wdata = torf_rf_wdata; // @[src/src/cpucore/pipeline/ID_stage.scala 57:18]
  assign reg__io_wen = torf_rf_we; // @[src/src/cpucore/pipeline/ID_stage.scala 58:16]
  assign reg__io_rf_pc = torf_dpi_c_next_pc; // @[src/src/cpucore/pipeline/ID_stage.scala 59:18]
  assign reg__io_is_break = torf_dpi_c_is_break; // @[src/src/cpucore/pipeline/ID_stage.scala 61:21]
  assign reg__io_valid = torf_valid; // @[src/src/cpucore/pipeline/ID_stage.scala 60:18]
  assign reg__io_inst = torf_dpi_c_inst; // @[src/src/cpucore/pipeline/ID_stage.scala 62:17]
endmodule
module ALU(
  input  [4:0]  io_alu_op, // @[src/src/cpucore/Unit/ALU.scala 16:16]
  input  [31:0] io_src1, // @[src/src/cpucore/Unit/ALU.scala 16:16]
  input  [31:0] io_src2, // @[src/src/cpucore/Unit/ALU.scala 16:16]
  output [31:0] io_res // @[src/src/cpucore/Unit/ALU.scala 16:16]
);
  wire  op_add = io_alu_op == 5'h1; // @[src/src/cpucore/Unit/ALU.scala 19:37]
  wire  op_sub = io_alu_op == 5'h2; // @[src/src/cpucore/Unit/ALU.scala 21:30]
  wire  op_slt = io_alu_op == 5'h3; // @[src/src/cpucore/Unit/ALU.scala 22:30]
  wire  op_sltu = io_alu_op == 5'h4; // @[src/src/cpucore/Unit/ALU.scala 23:30]
  wire  op_and = io_alu_op == 5'h5; // @[src/src/cpucore/Unit/ALU.scala 24:30]
  wire  op_nor = io_alu_op == 5'h6; // @[src/src/cpucore/Unit/ALU.scala 25:30]
  wire  op_or = io_alu_op == 5'h7; // @[src/src/cpucore/Unit/ALU.scala 26:30]
  wire  op_xor = io_alu_op == 5'h8; // @[src/src/cpucore/Unit/ALU.scala 27:30]
  wire  op_sll = io_alu_op == 5'h9; // @[src/src/cpucore/Unit/ALU.scala 28:30]
  wire  op_srl = io_alu_op == 5'ha; // @[src/src/cpucore/Unit/ALU.scala 29:30]
  wire  op_sra = io_alu_op == 5'hb; // @[src/src/cpucore/Unit/ALU.scala 30:30]
  wire  op_lui = io_alu_op == 5'hc; // @[src/src/cpucore/Unit/ALU.scala 31:30]
  wire  op_mul = io_alu_op == 5'hd; // @[src/src/cpucore/Unit/ALU.scala 32:30]
  wire  op_mulh = io_alu_op == 5'he; // @[src/src/cpucore/Unit/ALU.scala 33:30]
  wire  op_mulhu = io_alu_op == 5'hf; // @[src/src/cpucore/Unit/ALU.scala 34:30]
  wire  op_div = io_alu_op == 5'h10; // @[src/src/cpucore/Unit/ALU.scala 35:30]
  wire  op_mod = io_alu_op == 5'h12; // @[src/src/cpucore/Unit/ALU.scala 36:30]
  wire  op_divu = io_alu_op == 5'h11; // @[src/src/cpucore/Unit/ALU.scala 37:30]
  wire  op_modu = io_alu_op == 5'h13; // @[src/src/cpucore/Unit/ALU.scala 38:30]
  wire  add_sub = op_sub | op_slt | op_sltu; // @[src/src/cpucore/Unit/ALU.scala 40:36]
  wire [31:0] _add_res_T = ~io_src2; // @[src/src/cpucore/Unit/ALU.scala 41:43]
  wire [31:0] _add_res_T_1 = add_sub ? _add_res_T : io_src2; // @[src/src/cpucore/Unit/ALU.scala 41:33]
  wire [32:0] _add_res_T_2 = io_src1 + _add_res_T_1; // @[src/src/cpucore/Unit/ALU.scala 41:27]
  wire [32:0] _GEN_0 = {{32'd0}, add_sub}; // @[src/src/cpucore/Unit/ALU.scala 41:62]
  wire [32:0] add_res = _add_res_T_2 + _GEN_0; // @[src/src/cpucore/Unit/ALU.scala 41:62]
  wire  slt_res = io_src1[31] & ~io_src2[31] | ~(io_src1[31] ^ io_src2[31]) & add_res[31]; // @[src/src/cpucore/Unit/ALU.scala 42:46]
  wire  sltu_res = ~add_res[32]; // @[src/src/cpucore/Unit/ALU.scala 43:20]
  wire [31:0] and_res = io_src1 & io_src2; // @[src/src/cpucore/Unit/ALU.scala 44:27]
  wire [31:0] or_res = io_src1 | io_src2; // @[src/src/cpucore/Unit/ALU.scala 45:27]
  wire [31:0] nor_res = ~or_res; // @[src/src/cpucore/Unit/ALU.scala 46:19]
  wire [31:0] xor_res = io_src1 ^ io_src2; // @[src/src/cpucore/Unit/ALU.scala 47:27]
  wire [62:0] _GEN_1 = {{31'd0}, io_src1}; // @[src/src/cpucore/Unit/ALU.scala 48:27]
  wire [62:0] sll_res = _GEN_1 << io_src2[4:0]; // @[src/src/cpucore/Unit/ALU.scala 48:27]
  wire [31:0] _sr_T_3 = io_src1[31] & op_sra ? 32'hffffffff : 32'h0; // @[src/src/cpucore/Unit/ALU.scala 49:22]
  wire [63:0] sr = {_sr_T_3,io_src1}; // @[src/src/cpucore/Unit/ALU.scala 49:17]
  wire [63:0] sr_res = sr >> io_src2[4:0]; // @[src/src/cpucore/Unit/ALU.scala 50:21]
  wire [63:0] mul_pre = io_src1 * io_src2; // @[src/src/cpucore/Unit/ALU.scala 52:27]
  wire [31:0] mul_res = mul_pre[31:0]; // @[src/src/cpucore/Unit/ALU.scala 53:26]
  wire [31:0] mulhu_res = mul_pre[63:32]; // @[src/src/cpucore/Unit/ALU.scala 54:28]
  wire [63:0] _mulh_res_T_2 = $signed(io_src1) * $signed(io_src2); // @[src/src/cpucore/Unit/ALU.scala 55:36]
  wire [31:0] mulh_res = _mulh_res_T_2[63:32]; // @[src/src/cpucore/Unit/ALU.scala 55:53]
  wire [31:0] divu_res = io_src1 / io_src2; // @[src/src/cpucore/Unit/ALU.scala 56:28]
  wire [31:0] modu_res = io_src1 % io_src2; // @[src/src/cpucore/Unit/ALU.scala 57:28]
  wire [32:0] _div_res_T_3 = $signed(io_src1) / $signed(io_src2); // @[src/src/cpucore/Unit/ALU.scala 59:50]
  wire [31:0] mod_res = $signed(io_src1) % $signed(io_src2); // @[src/src/cpucore/Unit/ALU.scala 60:53]
  wire  _io_res_T = op_add | op_sub; // @[src/src/cpucore/Unit/ALU.scala 82:19]
  wire  _io_res_T_1 = op_sra | op_srl; // @[src/src/cpucore/Unit/ALU.scala 90:17]
  wire [31:0] _io_res_T_2 = op_modu ? modu_res : 32'hdeadbeef; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire [31:0] _io_res_T_3 = op_divu ? divu_res : _io_res_T_2; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire [31:0] _io_res_T_4 = op_mod ? mod_res : _io_res_T_3; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire [31:0] div_res = _div_res_T_3[31:0]; // @[src/src/cpucore/Unit/ALU.scala 58:23 59:13]
  wire [31:0] _io_res_T_5 = op_div ? div_res : _io_res_T_4; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire [31:0] _io_res_T_6 = op_mulhu ? mulhu_res : _io_res_T_5; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire [31:0] _io_res_T_7 = op_mulh ? mulh_res : _io_res_T_6; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire [31:0] _io_res_T_8 = op_mul ? mul_res : _io_res_T_7; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire [31:0] _io_res_T_9 = op_lui ? io_src2 : _io_res_T_8; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire [63:0] _io_res_T_10 = _io_res_T_1 ? sr_res : {{32'd0}, _io_res_T_9}; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire [63:0] _io_res_T_11 = op_sll ? {{1'd0}, sll_res} : _io_res_T_10; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire [63:0] _io_res_T_12 = op_xor ? {{32'd0}, xor_res} : _io_res_T_11; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire [63:0] _io_res_T_13 = op_nor ? {{32'd0}, nor_res} : _io_res_T_12; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire [63:0] _io_res_T_14 = op_or ? {{32'd0}, or_res} : _io_res_T_13; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire [63:0] _io_res_T_15 = op_and ? {{32'd0}, and_res} : _io_res_T_14; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire [63:0] _io_res_T_16 = op_sltu ? {{63'd0}, sltu_res} : _io_res_T_15; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire [63:0] _io_res_T_17 = op_slt ? {{63'd0}, slt_res} : _io_res_T_16; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire [63:0] _io_res_T_18 = _io_res_T ? {{31'd0}, add_res} : _io_res_T_17; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  assign io_res = _io_res_T_18[31:0]; // @[src/src/cpucore/Unit/ALU.scala 62:12]
endmodule
module EX_stage(
  input         es_valid, // @[src/src/cpucore/pipeline/EX_stage.scala 15:16]
  input  [31:0] es_bits_alu_src1, // @[src/src/cpucore/pipeline/EX_stage.scala 15:16]
  input  [31:0] es_bits_alu_src2, // @[src/src/cpucore/pipeline/EX_stage.scala 15:16]
  input  [4:0]  es_bits_alu_op, // @[src/src/cpucore/pipeline/EX_stage.scala 15:16]
  input  [4:0]  es_bits_rf_waddr, // @[src/src/cpucore/pipeline/EX_stage.scala 15:16]
  input         es_bits_rf_we, // @[src/src/cpucore/pipeline/EX_stage.scala 15:16]
  input  [1:0]  es_bits_mem_we, // @[src/src/cpucore/pipeline/EX_stage.scala 15:16]
  input  [4:0]  es_bits_inst_name, // @[src/src/cpucore/pipeline/EX_stage.scala 15:16]
  input  [31:0] es_bits_mem_wdata, // @[src/src/cpucore/pipeline/EX_stage.scala 15:16]
  input         es_bits_dpi_c_is_break, // @[src/src/cpucore/pipeline/EX_stage.scala 15:16]
  input  [31:0] es_bits_dpi_c_inst, // @[src/src/cpucore/pipeline/EX_stage.scala 15:16]
  input  [31:0] es_bits_dpi_c_next_pc, // @[src/src/cpucore/pipeline/EX_stage.scala 15:16]
  output        toms_valid, // @[src/src/cpucore/pipeline/EX_stage.scala 16:18]
  output [31:0] toms_bits_alu_res, // @[src/src/cpucore/pipeline/EX_stage.scala 16:18]
  output [4:0]  toms_bits_inst_name, // @[src/src/cpucore/pipeline/EX_stage.scala 16:18]
  output        toms_bits_res_from_mem, // @[src/src/cpucore/pipeline/EX_stage.scala 16:18]
  output        toms_bits_rf_we, // @[src/src/cpucore/pipeline/EX_stage.scala 16:18]
  output [4:0]  toms_bits_rf_waddr, // @[src/src/cpucore/pipeline/EX_stage.scala 16:18]
  output        toms_bits_dpi_c_is_break, // @[src/src/cpucore/pipeline/EX_stage.scala 16:18]
  output [31:0] toms_bits_dpi_c_inst, // @[src/src/cpucore/pipeline/EX_stage.scala 16:18]
  output [31:0] toms_bits_dpi_c_next_pc, // @[src/src/cpucore/pipeline/EX_stage.scala 16:18]
  output        data_sram_en, // @[src/src/cpucore/pipeline/EX_stage.scala 17:23]
  output        data_sram_wr, // @[src/src/cpucore/pipeline/EX_stage.scala 17:23]
  output [31:0] data_sram_addr, // @[src/src/cpucore/pipeline/EX_stage.scala 17:23]
  output [31:0] data_sram_wdata, // @[src/src/cpucore/pipeline/EX_stage.scala 17:23]
  output [3:0]  data_sram_wstrb // @[src/src/cpucore/pipeline/EX_stage.scala 17:23]
);
  wire [4:0] alu_io_alu_op; // @[src/src/cpucore/pipeline/EX_stage.scala 19:21]
  wire [31:0] alu_io_src1; // @[src/src/cpucore/pipeline/EX_stage.scala 19:21]
  wire [31:0] alu_io_src2; // @[src/src/cpucore/pipeline/EX_stage.scala 19:21]
  wire [31:0] alu_io_res; // @[src/src/cpucore/pipeline/EX_stage.scala 19:21]
  wire [15:0] _data_sram_wstrb_T_1 = 5'hb == es_bits_inst_name ? 16'h1 : 16'hdead; // @[src/src/cpucore/pipeline/EX_stage.scala 39:63]
  wire [15:0] _data_sram_wstrb_T_3 = 5'hc == es_bits_inst_name ? 16'h3 : _data_sram_wstrb_T_1; // @[src/src/cpucore/pipeline/EX_stage.scala 39:63]
  wire [15:0] _data_sram_wstrb_T_5 = 5'hd == es_bits_inst_name ? 16'h7 : _data_sram_wstrb_T_3; // @[src/src/cpucore/pipeline/EX_stage.scala 39:63]
  ALU alu ( // @[src/src/cpucore/pipeline/EX_stage.scala 19:21]
    .io_alu_op(alu_io_alu_op),
    .io_src1(alu_io_src1),
    .io_src2(alu_io_src2),
    .io_res(alu_io_res)
  );
  assign toms_valid = es_valid; // @[src/src/cpucore/pipeline/EX_stage.scala 46:16]
  assign toms_bits_alu_res = alu_io_res; // @[src/src/cpucore/pipeline/EX_stage.scala 25:23]
  assign toms_bits_inst_name = es_bits_inst_name; // @[src/src/cpucore/pipeline/EX_stage.scala 26:25]
  assign toms_bits_res_from_mem = es_bits_mem_we == 2'h1; // @[src/src/cpucore/pipeline/EX_stage.scala 27:46]
  assign toms_bits_rf_we = es_bits_rf_we; // @[src/src/cpucore/pipeline/EX_stage.scala 29:21]
  assign toms_bits_rf_waddr = es_bits_rf_waddr; // @[src/src/cpucore/pipeline/EX_stage.scala 30:24]
  assign toms_bits_dpi_c_is_break = es_bits_dpi_c_is_break; // @[src/src/cpucore/pipeline/EX_stage.scala 31:30]
  assign toms_bits_dpi_c_inst = es_bits_dpi_c_inst; // @[src/src/cpucore/pipeline/EX_stage.scala 32:26]
  assign toms_bits_dpi_c_next_pc = es_bits_dpi_c_next_pc; // @[src/src/cpucore/pipeline/EX_stage.scala 33:29]
  assign data_sram_en = es_bits_mem_we != 2'h2; // @[src/src/cpucore/pipeline/EX_stage.scala 35:36]
  assign data_sram_wr = es_bits_mem_we == 2'h0; // @[src/src/cpucore/pipeline/EX_stage.scala 36:36]
  assign data_sram_addr = alu_io_res; // @[src/src/cpucore/pipeline/EX_stage.scala 37:20]
  assign data_sram_wdata = es_bits_mem_wdata; // @[src/src/cpucore/pipeline/EX_stage.scala 38:21]
  assign data_sram_wstrb = _data_sram_wstrb_T_5[3:0]; // @[src/src/cpucore/pipeline/EX_stage.scala 39:21]
  assign alu_io_alu_op = es_bits_alu_op; // @[src/src/cpucore/pipeline/EX_stage.scala 20:{37,37}]
  assign alu_io_src1 = es_bits_alu_src1; // @[src/src/cpucore/pipeline/EX_stage.scala 22:17]
  assign alu_io_src2 = es_bits_alu_src2; // @[src/src/cpucore/pipeline/EX_stage.scala 23:17]
endmodule
module MEM_stage(
  input         ms_valid, // @[src/src/cpucore/pipeline/MEM_stage.scala 12:20]
  input  [31:0] ms_bits_alu_res, // @[src/src/cpucore/pipeline/MEM_stage.scala 12:20]
  input  [4:0]  ms_bits_inst_name, // @[src/src/cpucore/pipeline/MEM_stage.scala 12:20]
  input         ms_bits_res_from_mem, // @[src/src/cpucore/pipeline/MEM_stage.scala 12:20]
  input         ms_bits_rf_we, // @[src/src/cpucore/pipeline/MEM_stage.scala 12:20]
  input  [4:0]  ms_bits_rf_waddr, // @[src/src/cpucore/pipeline/MEM_stage.scala 12:20]
  input         ms_bits_dpi_c_is_break, // @[src/src/cpucore/pipeline/MEM_stage.scala 12:20]
  input  [31:0] ms_bits_dpi_c_inst, // @[src/src/cpucore/pipeline/MEM_stage.scala 12:20]
  input  [31:0] ms_bits_dpi_c_next_pc, // @[src/src/cpucore/pipeline/MEM_stage.scala 12:20]
  output        tows_valid, // @[src/src/cpucore/pipeline/MEM_stage.scala 13:22]
  output        tows_bits_rf_we, // @[src/src/cpucore/pipeline/MEM_stage.scala 13:22]
  output [4:0]  tows_bits_rf_waddr, // @[src/src/cpucore/pipeline/MEM_stage.scala 13:22]
  output [31:0] tows_bits_rf_wdata, // @[src/src/cpucore/pipeline/MEM_stage.scala 13:22]
  output        tows_bits_dpi_c_is_break, // @[src/src/cpucore/pipeline/MEM_stage.scala 13:22]
  output [31:0] tows_bits_dpi_c_inst, // @[src/src/cpucore/pipeline/MEM_stage.scala 13:22]
  output [31:0] tows_bits_dpi_c_next_pc, // @[src/src/cpucore/pipeline/MEM_stage.scala 13:22]
  input  [31:0] data_sram_rdata // @[src/src/cpucore/pipeline/MEM_stage.scala 14:27]
);
  wire [7:0] _mem_rdata_sign_T = data_sram_rdata[7:0]; // @[src/src/myUtil/tool.scala 8:22]
  wire [31:0] _mem_rdata_T_1 = {{24{_mem_rdata_sign_T[7]}},_mem_rdata_sign_T}; // @[src/src/myUtil/tool.scala 9:14]
  wire [15:0] _mem_rdata_sign_T_1 = data_sram_rdata[15:0]; // @[src/src/myUtil/tool.scala 8:22]
  wire [31:0] _mem_rdata_T_4 = {{16{_mem_rdata_sign_T_1[15]}},_mem_rdata_sign_T_1}; // @[src/src/myUtil/tool.scala 9:14]
  wire [31:0] _mem_rdata_T_7 = 5'h6 == ms_bits_inst_name ? _mem_rdata_T_1 : 32'hdead; // @[src/src/cpucore/pipeline/MEM_stage.scala 17:64]
  wire [31:0] _mem_rdata_T_9 = 5'h9 == ms_bits_inst_name ? {{24'd0}, data_sram_rdata[7:0]} : _mem_rdata_T_7; // @[src/src/cpucore/pipeline/MEM_stage.scala 17:64]
  wire [31:0] _mem_rdata_T_11 = 5'h7 == ms_bits_inst_name ? _mem_rdata_T_4 : _mem_rdata_T_9; // @[src/src/cpucore/pipeline/MEM_stage.scala 17:64]
  wire [31:0] _mem_rdata_T_13 = 5'ha == ms_bits_inst_name ? {{16'd0}, data_sram_rdata[15:0]} : _mem_rdata_T_11; // @[src/src/cpucore/pipeline/MEM_stage.scala 17:64]
  wire [31:0] mem_rdata = 5'h8 == ms_bits_inst_name ? data_sram_rdata : _mem_rdata_T_13; // @[src/src/cpucore/pipeline/MEM_stage.scala 17:64]
  assign tows_valid = ms_valid; // @[src/src/cpucore/pipeline/MEM_stage.scala 34:20]
  assign tows_bits_rf_we = ms_bits_rf_we; // @[src/src/cpucore/pipeline/MEM_stage.scala 26:25]
  assign tows_bits_rf_waddr = ms_bits_rf_waddr; // @[src/src/cpucore/pipeline/MEM_stage.scala 27:28]
  assign tows_bits_rf_wdata = ms_bits_res_from_mem ? mem_rdata : ms_bits_alu_res; // @[src/src/cpucore/pipeline/MEM_stage.scala 28:34]
  assign tows_bits_dpi_c_is_break = ms_bits_dpi_c_is_break; // @[src/src/cpucore/pipeline/MEM_stage.scala 29:34]
  assign tows_bits_dpi_c_inst = ms_bits_dpi_c_inst; // @[src/src/cpucore/pipeline/MEM_stage.scala 30:30]
  assign tows_bits_dpi_c_next_pc = ms_bits_dpi_c_next_pc; // @[src/src/cpucore/pipeline/MEM_stage.scala 31:33]
endmodule
module WB_stage(
  input         ws_valid, // @[src/src/cpucore/pipeline/WB_stage.scala 9:20]
  input         ws_bits_rf_we, // @[src/src/cpucore/pipeline/WB_stage.scala 9:20]
  input  [4:0]  ws_bits_rf_waddr, // @[src/src/cpucore/pipeline/WB_stage.scala 9:20]
  input  [31:0] ws_bits_rf_wdata, // @[src/src/cpucore/pipeline/WB_stage.scala 9:20]
  input         ws_bits_dpi_c_is_break, // @[src/src/cpucore/pipeline/WB_stage.scala 9:20]
  input  [31:0] ws_bits_dpi_c_inst, // @[src/src/cpucore/pipeline/WB_stage.scala 9:20]
  input  [31:0] ws_bits_dpi_c_next_pc, // @[src/src/cpucore/pipeline/WB_stage.scala 9:20]
  output        torf_rf_we, // @[src/src/cpucore/pipeline/WB_stage.scala 10:22]
  output [4:0]  torf_rf_waddr, // @[src/src/cpucore/pipeline/WB_stage.scala 10:22]
  output [31:0] torf_rf_wdata, // @[src/src/cpucore/pipeline/WB_stage.scala 10:22]
  output        torf_valid, // @[src/src/cpucore/pipeline/WB_stage.scala 10:22]
  output        torf_dpi_c_is_break, // @[src/src/cpucore/pipeline/WB_stage.scala 10:22]
  output [31:0] torf_dpi_c_inst, // @[src/src/cpucore/pipeline/WB_stage.scala 10:22]
  output [31:0] torf_dpi_c_next_pc // @[src/src/cpucore/pipeline/WB_stage.scala 10:22]
);
  assign torf_rf_we = ws_bits_rf_we; // @[src/src/cpucore/pipeline/WB_stage.scala 13:20]
  assign torf_rf_waddr = ws_bits_rf_waddr; // @[src/src/cpucore/pipeline/WB_stage.scala 14:23]
  assign torf_rf_wdata = ws_bits_rf_wdata; // @[src/src/cpucore/pipeline/WB_stage.scala 15:23]
  assign torf_valid = ws_valid; // @[src/src/cpucore/pipeline/WB_stage.scala 19:20]
  assign torf_dpi_c_is_break = ws_bits_dpi_c_is_break; // @[src/src/cpucore/pipeline/WB_stage.scala 17:29]
  assign torf_dpi_c_inst = ws_bits_dpi_c_inst; // @[src/src/cpucore/pipeline/WB_stage.scala 16:25]
  assign torf_dpi_c_next_pc = ws_bits_dpi_c_next_pc; // @[src/src/cpucore/pipeline/WB_stage.scala 18:28]
endmodule
module mycpu_top(
  input         clock,
  input         reset,
  output        inst_sram_en, // @[src/src/cpucore/mycpu_top.scala 21:27]
  output [31:0] inst_sram_addr, // @[src/src/cpucore/mycpu_top.scala 21:27]
  input  [31:0] inst_sram_rdata, // @[src/src/cpucore/mycpu_top.scala 21:27]
  output        data_sram_en, // @[src/src/cpucore/mycpu_top.scala 22:27]
  output        data_sram_wr, // @[src/src/cpucore/mycpu_top.scala 22:27]
  output [31:0] data_sram_addr, // @[src/src/cpucore/mycpu_top.scala 22:27]
  output [31:0] data_sram_wdata, // @[src/src/cpucore/mycpu_top.scala 22:27]
  output [3:0]  data_sram_wstrb, // @[src/src/cpucore/mycpu_top.scala 22:27]
  input  [31:0] data_sram_rdata // @[src/src/cpucore/mycpu_top.scala 22:27]
);
  wire  pIF_clock; // @[src/src/cpucore/mycpu_top.scala 26:25]
  wire  pIF_reset; // @[src/src/cpucore/mycpu_top.scala 26:25]
  wire  pIF_br_taken; // @[src/src/cpucore/mycpu_top.scala 26:25]
  wire [31:0] pIF_br_target; // @[src/src/cpucore/mycpu_top.scala 26:25]
  wire  pIF_inst_sram_en; // @[src/src/cpucore/mycpu_top.scala 26:25]
  wire [31:0] pIF_inst_sram_addr; // @[src/src/cpucore/mycpu_top.scala 26:25]
  wire  pIF_tofs_valid; // @[src/src/cpucore/mycpu_top.scala 26:25]
  wire [31:0] pIF_tofs_bits_pc; // @[src/src/cpucore/mycpu_top.scala 26:25]
  wire [31:0] pIF_tofs_bits_next_pc; // @[src/src/cpucore/mycpu_top.scala 26:25]
  wire  IF_tods_valid; // @[src/src/cpucore/mycpu_top.scala 27:24]
  wire [31:0] IF_tods_bits_pc; // @[src/src/cpucore/mycpu_top.scala 27:24]
  wire [31:0] IF_tods_bits_inst; // @[src/src/cpucore/mycpu_top.scala 27:24]
  wire [31:0] IF_tods_bits_next_pc; // @[src/src/cpucore/mycpu_top.scala 27:24]
  wire [31:0] IF_inst_sram_rdata; // @[src/src/cpucore/mycpu_top.scala 27:24]
  wire  IF_fs_valid; // @[src/src/cpucore/mycpu_top.scala 27:24]
  wire [31:0] IF_fs_bits_pc; // @[src/src/cpucore/mycpu_top.scala 27:24]
  wire [31:0] IF_fs_bits_next_pc; // @[src/src/cpucore/mycpu_top.scala 27:24]
  wire  ID_clock; // @[src/src/cpucore/mycpu_top.scala 28:24]
  wire  ID_toes_valid; // @[src/src/cpucore/mycpu_top.scala 28:24]
  wire [31:0] ID_toes_bits_alu_src1; // @[src/src/cpucore/mycpu_top.scala 28:24]
  wire [31:0] ID_toes_bits_alu_src2; // @[src/src/cpucore/mycpu_top.scala 28:24]
  wire [4:0] ID_toes_bits_alu_op; // @[src/src/cpucore/mycpu_top.scala 28:24]
  wire [4:0] ID_toes_bits_rf_waddr; // @[src/src/cpucore/mycpu_top.scala 28:24]
  wire  ID_toes_bits_rf_we; // @[src/src/cpucore/mycpu_top.scala 28:24]
  wire [1:0] ID_toes_bits_mem_we; // @[src/src/cpucore/mycpu_top.scala 28:24]
  wire [4:0] ID_toes_bits_inst_name; // @[src/src/cpucore/mycpu_top.scala 28:24]
  wire [31:0] ID_toes_bits_mem_wdata; // @[src/src/cpucore/mycpu_top.scala 28:24]
  wire  ID_toes_bits_dpi_c_is_break; // @[src/src/cpucore/mycpu_top.scala 28:24]
  wire [31:0] ID_toes_bits_dpi_c_inst; // @[src/src/cpucore/mycpu_top.scala 28:24]
  wire [31:0] ID_toes_bits_dpi_c_next_pc; // @[src/src/cpucore/mycpu_top.scala 28:24]
  wire  ID_ds_valid; // @[src/src/cpucore/mycpu_top.scala 28:24]
  wire [31:0] ID_ds_bits_pc; // @[src/src/cpucore/mycpu_top.scala 28:24]
  wire [31:0] ID_ds_bits_inst; // @[src/src/cpucore/mycpu_top.scala 28:24]
  wire [31:0] ID_ds_bits_next_pc; // @[src/src/cpucore/mycpu_top.scala 28:24]
  wire  ID_torf_rf_we; // @[src/src/cpucore/mycpu_top.scala 28:24]
  wire [4:0] ID_torf_rf_waddr; // @[src/src/cpucore/mycpu_top.scala 28:24]
  wire [31:0] ID_torf_rf_wdata; // @[src/src/cpucore/mycpu_top.scala 28:24]
  wire  ID_torf_valid; // @[src/src/cpucore/mycpu_top.scala 28:24]
  wire  ID_torf_dpi_c_is_break; // @[src/src/cpucore/mycpu_top.scala 28:24]
  wire [31:0] ID_torf_dpi_c_inst; // @[src/src/cpucore/mycpu_top.scala 28:24]
  wire [31:0] ID_torf_dpi_c_next_pc; // @[src/src/cpucore/mycpu_top.scala 28:24]
  wire  ID_br_taken; // @[src/src/cpucore/mycpu_top.scala 28:24]
  wire [31:0] ID_br_target; // @[src/src/cpucore/mycpu_top.scala 28:24]
  wire  EXE_es_valid; // @[src/src/cpucore/mycpu_top.scala 29:25]
  wire [31:0] EXE_es_bits_alu_src1; // @[src/src/cpucore/mycpu_top.scala 29:25]
  wire [31:0] EXE_es_bits_alu_src2; // @[src/src/cpucore/mycpu_top.scala 29:25]
  wire [4:0] EXE_es_bits_alu_op; // @[src/src/cpucore/mycpu_top.scala 29:25]
  wire [4:0] EXE_es_bits_rf_waddr; // @[src/src/cpucore/mycpu_top.scala 29:25]
  wire  EXE_es_bits_rf_we; // @[src/src/cpucore/mycpu_top.scala 29:25]
  wire [1:0] EXE_es_bits_mem_we; // @[src/src/cpucore/mycpu_top.scala 29:25]
  wire [4:0] EXE_es_bits_inst_name; // @[src/src/cpucore/mycpu_top.scala 29:25]
  wire [31:0] EXE_es_bits_mem_wdata; // @[src/src/cpucore/mycpu_top.scala 29:25]
  wire  EXE_es_bits_dpi_c_is_break; // @[src/src/cpucore/mycpu_top.scala 29:25]
  wire [31:0] EXE_es_bits_dpi_c_inst; // @[src/src/cpucore/mycpu_top.scala 29:25]
  wire [31:0] EXE_es_bits_dpi_c_next_pc; // @[src/src/cpucore/mycpu_top.scala 29:25]
  wire  EXE_toms_valid; // @[src/src/cpucore/mycpu_top.scala 29:25]
  wire [31:0] EXE_toms_bits_alu_res; // @[src/src/cpucore/mycpu_top.scala 29:25]
  wire [4:0] EXE_toms_bits_inst_name; // @[src/src/cpucore/mycpu_top.scala 29:25]
  wire  EXE_toms_bits_res_from_mem; // @[src/src/cpucore/mycpu_top.scala 29:25]
  wire  EXE_toms_bits_rf_we; // @[src/src/cpucore/mycpu_top.scala 29:25]
  wire [4:0] EXE_toms_bits_rf_waddr; // @[src/src/cpucore/mycpu_top.scala 29:25]
  wire  EXE_toms_bits_dpi_c_is_break; // @[src/src/cpucore/mycpu_top.scala 29:25]
  wire [31:0] EXE_toms_bits_dpi_c_inst; // @[src/src/cpucore/mycpu_top.scala 29:25]
  wire [31:0] EXE_toms_bits_dpi_c_next_pc; // @[src/src/cpucore/mycpu_top.scala 29:25]
  wire  EXE_data_sram_en; // @[src/src/cpucore/mycpu_top.scala 29:25]
  wire  EXE_data_sram_wr; // @[src/src/cpucore/mycpu_top.scala 29:25]
  wire [31:0] EXE_data_sram_addr; // @[src/src/cpucore/mycpu_top.scala 29:25]
  wire [31:0] EXE_data_sram_wdata; // @[src/src/cpucore/mycpu_top.scala 29:25]
  wire [3:0] EXE_data_sram_wstrb; // @[src/src/cpucore/mycpu_top.scala 29:25]
  wire  MEM_ms_valid; // @[src/src/cpucore/mycpu_top.scala 30:25]
  wire [31:0] MEM_ms_bits_alu_res; // @[src/src/cpucore/mycpu_top.scala 30:25]
  wire [4:0] MEM_ms_bits_inst_name; // @[src/src/cpucore/mycpu_top.scala 30:25]
  wire  MEM_ms_bits_res_from_mem; // @[src/src/cpucore/mycpu_top.scala 30:25]
  wire  MEM_ms_bits_rf_we; // @[src/src/cpucore/mycpu_top.scala 30:25]
  wire [4:0] MEM_ms_bits_rf_waddr; // @[src/src/cpucore/mycpu_top.scala 30:25]
  wire  MEM_ms_bits_dpi_c_is_break; // @[src/src/cpucore/mycpu_top.scala 30:25]
  wire [31:0] MEM_ms_bits_dpi_c_inst; // @[src/src/cpucore/mycpu_top.scala 30:25]
  wire [31:0] MEM_ms_bits_dpi_c_next_pc; // @[src/src/cpucore/mycpu_top.scala 30:25]
  wire  MEM_tows_valid; // @[src/src/cpucore/mycpu_top.scala 30:25]
  wire  MEM_tows_bits_rf_we; // @[src/src/cpucore/mycpu_top.scala 30:25]
  wire [4:0] MEM_tows_bits_rf_waddr; // @[src/src/cpucore/mycpu_top.scala 30:25]
  wire [31:0] MEM_tows_bits_rf_wdata; // @[src/src/cpucore/mycpu_top.scala 30:25]
  wire  MEM_tows_bits_dpi_c_is_break; // @[src/src/cpucore/mycpu_top.scala 30:25]
  wire [31:0] MEM_tows_bits_dpi_c_inst; // @[src/src/cpucore/mycpu_top.scala 30:25]
  wire [31:0] MEM_tows_bits_dpi_c_next_pc; // @[src/src/cpucore/mycpu_top.scala 30:25]
  wire [31:0] MEM_data_sram_rdata; // @[src/src/cpucore/mycpu_top.scala 30:25]
  wire  WB_ws_valid; // @[src/src/cpucore/mycpu_top.scala 31:24]
  wire  WB_ws_bits_rf_we; // @[src/src/cpucore/mycpu_top.scala 31:24]
  wire [4:0] WB_ws_bits_rf_waddr; // @[src/src/cpucore/mycpu_top.scala 31:24]
  wire [31:0] WB_ws_bits_rf_wdata; // @[src/src/cpucore/mycpu_top.scala 31:24]
  wire  WB_ws_bits_dpi_c_is_break; // @[src/src/cpucore/mycpu_top.scala 31:24]
  wire [31:0] WB_ws_bits_dpi_c_inst; // @[src/src/cpucore/mycpu_top.scala 31:24]
  wire [31:0] WB_ws_bits_dpi_c_next_pc; // @[src/src/cpucore/mycpu_top.scala 31:24]
  wire  WB_torf_rf_we; // @[src/src/cpucore/mycpu_top.scala 31:24]
  wire [4:0] WB_torf_rf_waddr; // @[src/src/cpucore/mycpu_top.scala 31:24]
  wire [31:0] WB_torf_rf_wdata; // @[src/src/cpucore/mycpu_top.scala 31:24]
  wire  WB_torf_valid; // @[src/src/cpucore/mycpu_top.scala 31:24]
  wire  WB_torf_dpi_c_is_break; // @[src/src/cpucore/mycpu_top.scala 31:24]
  wire [31:0] WB_torf_dpi_c_inst; // @[src/src/cpucore/mycpu_top.scala 31:24]
  wire [31:0] WB_torf_dpi_c_next_pc; // @[src/src/cpucore/mycpu_top.scala 31:24]
  preIF pIF ( // @[src/src/cpucore/mycpu_top.scala 26:25]
    .clock(pIF_clock),
    .reset(pIF_reset),
    .br_taken(pIF_br_taken),
    .br_target(pIF_br_target),
    .inst_sram_en(pIF_inst_sram_en),
    .inst_sram_addr(pIF_inst_sram_addr),
    .tofs_valid(pIF_tofs_valid),
    .tofs_bits_pc(pIF_tofs_bits_pc),
    .tofs_bits_next_pc(pIF_tofs_bits_next_pc)
  );
  IF_stage IF ( // @[src/src/cpucore/mycpu_top.scala 27:24]
    .tods_valid(IF_tods_valid),
    .tods_bits_pc(IF_tods_bits_pc),
    .tods_bits_inst(IF_tods_bits_inst),
    .tods_bits_next_pc(IF_tods_bits_next_pc),
    .inst_sram_rdata(IF_inst_sram_rdata),
    .fs_valid(IF_fs_valid),
    .fs_bits_pc(IF_fs_bits_pc),
    .fs_bits_next_pc(IF_fs_bits_next_pc)
  );
  ID_stage ID ( // @[src/src/cpucore/mycpu_top.scala 28:24]
    .clock(ID_clock),
    .toes_valid(ID_toes_valid),
    .toes_bits_alu_src1(ID_toes_bits_alu_src1),
    .toes_bits_alu_src2(ID_toes_bits_alu_src2),
    .toes_bits_alu_op(ID_toes_bits_alu_op),
    .toes_bits_rf_waddr(ID_toes_bits_rf_waddr),
    .toes_bits_rf_we(ID_toes_bits_rf_we),
    .toes_bits_mem_we(ID_toes_bits_mem_we),
    .toes_bits_inst_name(ID_toes_bits_inst_name),
    .toes_bits_mem_wdata(ID_toes_bits_mem_wdata),
    .toes_bits_dpi_c_is_break(ID_toes_bits_dpi_c_is_break),
    .toes_bits_dpi_c_inst(ID_toes_bits_dpi_c_inst),
    .toes_bits_dpi_c_next_pc(ID_toes_bits_dpi_c_next_pc),
    .ds_valid(ID_ds_valid),
    .ds_bits_pc(ID_ds_bits_pc),
    .ds_bits_inst(ID_ds_bits_inst),
    .ds_bits_next_pc(ID_ds_bits_next_pc),
    .torf_rf_we(ID_torf_rf_we),
    .torf_rf_waddr(ID_torf_rf_waddr),
    .torf_rf_wdata(ID_torf_rf_wdata),
    .torf_valid(ID_torf_valid),
    .torf_dpi_c_is_break(ID_torf_dpi_c_is_break),
    .torf_dpi_c_inst(ID_torf_dpi_c_inst),
    .torf_dpi_c_next_pc(ID_torf_dpi_c_next_pc),
    .br_taken(ID_br_taken),
    .br_target(ID_br_target)
  );
  EX_stage EXE ( // @[src/src/cpucore/mycpu_top.scala 29:25]
    .es_valid(EXE_es_valid),
    .es_bits_alu_src1(EXE_es_bits_alu_src1),
    .es_bits_alu_src2(EXE_es_bits_alu_src2),
    .es_bits_alu_op(EXE_es_bits_alu_op),
    .es_bits_rf_waddr(EXE_es_bits_rf_waddr),
    .es_bits_rf_we(EXE_es_bits_rf_we),
    .es_bits_mem_we(EXE_es_bits_mem_we),
    .es_bits_inst_name(EXE_es_bits_inst_name),
    .es_bits_mem_wdata(EXE_es_bits_mem_wdata),
    .es_bits_dpi_c_is_break(EXE_es_bits_dpi_c_is_break),
    .es_bits_dpi_c_inst(EXE_es_bits_dpi_c_inst),
    .es_bits_dpi_c_next_pc(EXE_es_bits_dpi_c_next_pc),
    .toms_valid(EXE_toms_valid),
    .toms_bits_alu_res(EXE_toms_bits_alu_res),
    .toms_bits_inst_name(EXE_toms_bits_inst_name),
    .toms_bits_res_from_mem(EXE_toms_bits_res_from_mem),
    .toms_bits_rf_we(EXE_toms_bits_rf_we),
    .toms_bits_rf_waddr(EXE_toms_bits_rf_waddr),
    .toms_bits_dpi_c_is_break(EXE_toms_bits_dpi_c_is_break),
    .toms_bits_dpi_c_inst(EXE_toms_bits_dpi_c_inst),
    .toms_bits_dpi_c_next_pc(EXE_toms_bits_dpi_c_next_pc),
    .data_sram_en(EXE_data_sram_en),
    .data_sram_wr(EXE_data_sram_wr),
    .data_sram_addr(EXE_data_sram_addr),
    .data_sram_wdata(EXE_data_sram_wdata),
    .data_sram_wstrb(EXE_data_sram_wstrb)
  );
  MEM_stage MEM ( // @[src/src/cpucore/mycpu_top.scala 30:25]
    .ms_valid(MEM_ms_valid),
    .ms_bits_alu_res(MEM_ms_bits_alu_res),
    .ms_bits_inst_name(MEM_ms_bits_inst_name),
    .ms_bits_res_from_mem(MEM_ms_bits_res_from_mem),
    .ms_bits_rf_we(MEM_ms_bits_rf_we),
    .ms_bits_rf_waddr(MEM_ms_bits_rf_waddr),
    .ms_bits_dpi_c_is_break(MEM_ms_bits_dpi_c_is_break),
    .ms_bits_dpi_c_inst(MEM_ms_bits_dpi_c_inst),
    .ms_bits_dpi_c_next_pc(MEM_ms_bits_dpi_c_next_pc),
    .tows_valid(MEM_tows_valid),
    .tows_bits_rf_we(MEM_tows_bits_rf_we),
    .tows_bits_rf_waddr(MEM_tows_bits_rf_waddr),
    .tows_bits_rf_wdata(MEM_tows_bits_rf_wdata),
    .tows_bits_dpi_c_is_break(MEM_tows_bits_dpi_c_is_break),
    .tows_bits_dpi_c_inst(MEM_tows_bits_dpi_c_inst),
    .tows_bits_dpi_c_next_pc(MEM_tows_bits_dpi_c_next_pc),
    .data_sram_rdata(MEM_data_sram_rdata)
  );
  WB_stage WB ( // @[src/src/cpucore/mycpu_top.scala 31:24]
    .ws_valid(WB_ws_valid),
    .ws_bits_rf_we(WB_ws_bits_rf_we),
    .ws_bits_rf_waddr(WB_ws_bits_rf_waddr),
    .ws_bits_rf_wdata(WB_ws_bits_rf_wdata),
    .ws_bits_dpi_c_is_break(WB_ws_bits_dpi_c_is_break),
    .ws_bits_dpi_c_inst(WB_ws_bits_dpi_c_inst),
    .ws_bits_dpi_c_next_pc(WB_ws_bits_dpi_c_next_pc),
    .torf_rf_we(WB_torf_rf_we),
    .torf_rf_waddr(WB_torf_rf_waddr),
    .torf_rf_wdata(WB_torf_rf_wdata),
    .torf_valid(WB_torf_valid),
    .torf_dpi_c_is_break(WB_torf_dpi_c_is_break),
    .torf_dpi_c_inst(WB_torf_dpi_c_inst),
    .torf_dpi_c_next_pc(WB_torf_dpi_c_next_pc)
  );
  assign inst_sram_en = pIF_inst_sram_en; // @[src/src/cpucore/mycpu_top.scala 43:23]
  assign inst_sram_addr = pIF_inst_sram_addr; // @[src/src/cpucore/mycpu_top.scala 43:23]
  assign data_sram_en = EXE_data_sram_en; // @[src/src/cpucore/mycpu_top.scala 46:23]
  assign data_sram_wr = EXE_data_sram_wr; // @[src/src/cpucore/mycpu_top.scala 46:23]
  assign data_sram_addr = EXE_data_sram_addr; // @[src/src/cpucore/mycpu_top.scala 46:23]
  assign data_sram_wdata = EXE_data_sram_wdata; // @[src/src/cpucore/mycpu_top.scala 46:23]
  assign data_sram_wstrb = EXE_data_sram_wstrb; // @[src/src/cpucore/mycpu_top.scala 46:23]
  assign pIF_clock = clock;
  assign pIF_reset = reset;
  assign pIF_br_taken = ID_br_taken; // @[src/src/cpucore/mycpu_top.scala 39:16]
  assign pIF_br_target = ID_br_target; // @[src/src/cpucore/mycpu_top.scala 39:16]
  assign IF_inst_sram_rdata = inst_sram_rdata; // @[src/src/cpucore/mycpu_top.scala 42:22]
  assign IF_fs_valid = pIF_tofs_valid; // @[src/src/cpucore/mycpu_top.scala 13:64]
  assign IF_fs_bits_pc = pIF_tofs_bits_pc; // @[src/src/cpucore/mycpu_top.scala 13:64]
  assign IF_fs_bits_next_pc = pIF_tofs_bits_next_pc; // @[src/src/cpucore/mycpu_top.scala 13:64]
  assign ID_clock = clock;
  assign ID_ds_valid = IF_tods_valid; // @[src/src/cpucore/mycpu_top.scala 13:64]
  assign ID_ds_bits_pc = IF_tods_bits_pc; // @[src/src/cpucore/mycpu_top.scala 13:64]
  assign ID_ds_bits_inst = IF_tods_bits_inst; // @[src/src/cpucore/mycpu_top.scala 13:64]
  assign ID_ds_bits_next_pc = IF_tods_bits_next_pc; // @[src/src/cpucore/mycpu_top.scala 13:64]
  assign ID_torf_rf_we = WB_torf_rf_we; // @[src/src/cpucore/mycpu_top.scala 40:17]
  assign ID_torf_rf_waddr = WB_torf_rf_waddr; // @[src/src/cpucore/mycpu_top.scala 40:17]
  assign ID_torf_rf_wdata = WB_torf_rf_wdata; // @[src/src/cpucore/mycpu_top.scala 40:17]
  assign ID_torf_valid = WB_torf_valid; // @[src/src/cpucore/mycpu_top.scala 40:17]
  assign ID_torf_dpi_c_is_break = WB_torf_dpi_c_is_break; // @[src/src/cpucore/mycpu_top.scala 40:17]
  assign ID_torf_dpi_c_inst = WB_torf_dpi_c_inst; // @[src/src/cpucore/mycpu_top.scala 40:17]
  assign ID_torf_dpi_c_next_pc = WB_torf_dpi_c_next_pc; // @[src/src/cpucore/mycpu_top.scala 40:17]
  assign EXE_es_valid = ID_toes_valid; // @[src/src/cpucore/mycpu_top.scala 13:64]
  assign EXE_es_bits_alu_src1 = ID_toes_bits_alu_src1; // @[src/src/cpucore/mycpu_top.scala 13:64]
  assign EXE_es_bits_alu_src2 = ID_toes_bits_alu_src2; // @[src/src/cpucore/mycpu_top.scala 13:64]
  assign EXE_es_bits_alu_op = ID_toes_bits_alu_op; // @[src/src/cpucore/mycpu_top.scala 13:64]
  assign EXE_es_bits_rf_waddr = ID_toes_bits_rf_waddr; // @[src/src/cpucore/mycpu_top.scala 13:64]
  assign EXE_es_bits_rf_we = ID_toes_bits_rf_we; // @[src/src/cpucore/mycpu_top.scala 13:64]
  assign EXE_es_bits_mem_we = ID_toes_bits_mem_we; // @[src/src/cpucore/mycpu_top.scala 13:64]
  assign EXE_es_bits_inst_name = ID_toes_bits_inst_name; // @[src/src/cpucore/mycpu_top.scala 13:64]
  assign EXE_es_bits_mem_wdata = ID_toes_bits_mem_wdata; // @[src/src/cpucore/mycpu_top.scala 13:64]
  assign EXE_es_bits_dpi_c_is_break = ID_toes_bits_dpi_c_is_break; // @[src/src/cpucore/mycpu_top.scala 13:64]
  assign EXE_es_bits_dpi_c_inst = ID_toes_bits_dpi_c_inst; // @[src/src/cpucore/mycpu_top.scala 13:64]
  assign EXE_es_bits_dpi_c_next_pc = ID_toes_bits_dpi_c_next_pc; // @[src/src/cpucore/mycpu_top.scala 13:64]
  assign MEM_ms_valid = EXE_toms_valid; // @[src/src/cpucore/mycpu_top.scala 13:64]
  assign MEM_ms_bits_alu_res = EXE_toms_bits_alu_res; // @[src/src/cpucore/mycpu_top.scala 13:64]
  assign MEM_ms_bits_inst_name = EXE_toms_bits_inst_name; // @[src/src/cpucore/mycpu_top.scala 13:64]
  assign MEM_ms_bits_res_from_mem = EXE_toms_bits_res_from_mem; // @[src/src/cpucore/mycpu_top.scala 13:64]
  assign MEM_ms_bits_rf_we = EXE_toms_bits_rf_we; // @[src/src/cpucore/mycpu_top.scala 13:64]
  assign MEM_ms_bits_rf_waddr = EXE_toms_bits_rf_waddr; // @[src/src/cpucore/mycpu_top.scala 13:64]
  assign MEM_ms_bits_dpi_c_is_break = EXE_toms_bits_dpi_c_is_break; // @[src/src/cpucore/mycpu_top.scala 13:64]
  assign MEM_ms_bits_dpi_c_inst = EXE_toms_bits_dpi_c_inst; // @[src/src/cpucore/mycpu_top.scala 13:64]
  assign MEM_ms_bits_dpi_c_next_pc = EXE_toms_bits_dpi_c_next_pc; // @[src/src/cpucore/mycpu_top.scala 13:64]
  assign MEM_data_sram_rdata = data_sram_rdata; // @[src/src/cpucore/mycpu_top.scala 45:23]
  assign WB_ws_valid = MEM_tows_valid; // @[src/src/cpucore/mycpu_top.scala 13:64]
  assign WB_ws_bits_rf_we = MEM_tows_bits_rf_we; // @[src/src/cpucore/mycpu_top.scala 13:64]
  assign WB_ws_bits_rf_waddr = MEM_tows_bits_rf_waddr; // @[src/src/cpucore/mycpu_top.scala 13:64]
  assign WB_ws_bits_rf_wdata = MEM_tows_bits_rf_wdata; // @[src/src/cpucore/mycpu_top.scala 13:64]
  assign WB_ws_bits_dpi_c_is_break = MEM_tows_bits_dpi_c_is_break; // @[src/src/cpucore/mycpu_top.scala 13:64]
  assign WB_ws_bits_dpi_c_inst = MEM_tows_bits_dpi_c_inst; // @[src/src/cpucore/mycpu_top.scala 13:64]
  assign WB_ws_bits_dpi_c_next_pc = MEM_tows_bits_dpi_c_next_pc; // @[src/src/cpucore/mycpu_top.scala 13:64]
endmodule
module Main(
  input   clock,
  input   reset
);
  wire  cpucore_clock; // @[src/src/main.scala 8:29]
  wire  cpucore_reset; // @[src/src/main.scala 8:29]
  wire  cpucore_inst_sram_en; // @[src/src/main.scala 8:29]
  wire [31:0] cpucore_inst_sram_addr; // @[src/src/main.scala 8:29]
  wire [31:0] cpucore_inst_sram_rdata; // @[src/src/main.scala 8:29]
  wire  cpucore_data_sram_en; // @[src/src/main.scala 8:29]
  wire  cpucore_data_sram_wr; // @[src/src/main.scala 8:29]
  wire [31:0] cpucore_data_sram_addr; // @[src/src/main.scala 8:29]
  wire [31:0] cpucore_data_sram_wdata; // @[src/src/main.scala 8:29]
  wire [3:0] cpucore_data_sram_wstrb; // @[src/src/main.scala 8:29]
  wire [31:0] cpucore_data_sram_rdata; // @[src/src/main.scala 8:29]
  wire  dram_en; // @[src/src/main.scala 9:33]
  wire  dram_wr; // @[src/src/main.scala 9:33]
  wire [31:0] dram_addr; // @[src/src/main.scala 9:33]
  wire [31:0] dram_wdata; // @[src/src/main.scala 9:33]
  wire [3:0] dram_wstrb; // @[src/src/main.scala 9:33]
  wire [31:0] dram_rdata; // @[src/src/main.scala 9:33]
  wire  iram_en; // @[src/src/main.scala 10:33]
  wire  iram_wr; // @[src/src/main.scala 10:33]
  wire [31:0] iram_addr; // @[src/src/main.scala 10:33]
  wire [31:0] iram_wdata; // @[src/src/main.scala 10:33]
  wire [3:0] iram_wstrb; // @[src/src/main.scala 10:33]
  wire [31:0] iram_rdata; // @[src/src/main.scala 10:33]
  mycpu_top cpucore ( // @[src/src/main.scala 8:29]
    .clock(cpucore_clock),
    .reset(cpucore_reset),
    .inst_sram_en(cpucore_inst_sram_en),
    .inst_sram_addr(cpucore_inst_sram_addr),
    .inst_sram_rdata(cpucore_inst_sram_rdata),
    .data_sram_en(cpucore_data_sram_en),
    .data_sram_wr(cpucore_data_sram_wr),
    .data_sram_addr(cpucore_data_sram_addr),
    .data_sram_wdata(cpucore_data_sram_wdata),
    .data_sram_wstrb(cpucore_data_sram_wstrb),
    .data_sram_rdata(cpucore_data_sram_rdata)
  );
  d_mem dram ( // @[src/src/main.scala 9:33]
    .en(dram_en),
    .wr(dram_wr),
    .addr(dram_addr),
    .wdata(dram_wdata),
    .wstrb(dram_wstrb),
    .rdata(dram_rdata)
  );
  i_mem iram ( // @[src/src/main.scala 10:33]
    .en(iram_en),
    .wr(iram_wr),
    .addr(iram_addr),
    .wdata(iram_wdata),
    .wstrb(iram_wstrb),
    .rdata(iram_rdata)
  );
  assign cpucore_clock = clock;
  assign cpucore_reset = reset;
  assign cpucore_inst_sram_rdata = iram_rdata; // @[src/src/main.scala 13:27]
  assign cpucore_data_sram_rdata = dram_rdata; // @[src/src/main.scala 12:27]
  assign dram_en = cpucore_data_sram_en; // @[src/src/main.scala 12:27]
  assign dram_wr = cpucore_data_sram_wr; // @[src/src/main.scala 12:27]
  assign dram_addr = cpucore_data_sram_addr; // @[src/src/main.scala 12:27]
  assign dram_wdata = cpucore_data_sram_wdata; // @[src/src/main.scala 12:27]
  assign dram_wstrb = cpucore_data_sram_wstrb; // @[src/src/main.scala 12:27]
  assign iram_en = cpucore_inst_sram_en; // @[src/src/main.scala 13:27]
  assign iram_wr = 1'h0; // @[src/src/main.scala 13:27]
  assign iram_addr = cpucore_inst_sram_addr; // @[src/src/main.scala 13:27]
  assign iram_wdata = 32'h0; // @[src/src/main.scala 13:27]
  assign iram_wstrb = 4'h0; // @[src/src/main.scala 13:27]
endmodule
