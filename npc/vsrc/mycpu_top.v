module preIF(
  input         clock,
  input         reset,
  input         br_taken, // @[src/src/cpucore/pipeline/preIF.scala 11:16]
  input  [31:0] br_target, // @[src/src/cpucore/pipeline/preIF.scala 11:16]
  output [31:0] inst_sram_addr, // @[src/src/cpucore/pipeline/preIF.scala 12:23]
  output [31:0] tofs_bits_pc // @[src/src/cpucore/pipeline/preIF.scala 13:18]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] pc; // @[src/src/cpucore/pipeline/preIF.scala 15:21]
  assign inst_sram_addr = pc; // @[src/src/cpucore/pipeline/preIF.scala 21:20]
  assign tofs_bits_pc = pc; // @[src/src/cpucore/pipeline/preIF.scala 25:18]
  always @(posedge clock) begin
    if (reset) begin // @[src/src/cpucore/pipeline/preIF.scala 15:21]
      pc <= 32'h1c000000; // @[src/src/cpucore/pipeline/preIF.scala 15:21]
    end else if (br_taken) begin // @[src/src/cpucore/pipeline/preIF.scala 17:14]
      pc <= br_target;
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
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  pc = _RAND_0[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module IF_stage(
  output [31:0] tods_bits_pc, // @[src/src/cpucore/pipeline/IF_stage.scala 11:18]
  output [31:0] tods_bits_inst, // @[src/src/cpucore/pipeline/IF_stage.scala 11:18]
  input  [31:0] inst_sram_rdata, // @[src/src/cpucore/pipeline/IF_stage.scala 12:23]
  input  [31:0] fs_bits_pc // @[src/src/cpucore/pipeline/IF_stage.scala 13:16]
);
  assign tods_bits_pc = fs_bits_pc; // @[src/src/cpucore/pipeline/IF_stage.scala 17:18]
  assign tods_bits_inst = inst_sram_rdata; // @[src/src/cpucore/pipeline/IF_stage.scala 16:20]
endmodule
module regfile(
  input         clock,
  input  [4:0]  io_raddr1, // @[src/src/cpucore/Unit/regfile.scala 27:16]
  input  [4:0]  io_raddr2, // @[src/src/cpucore/Unit/regfile.scala 27:16]
  output [31:0] io_rdata1, // @[src/src/cpucore/Unit/regfile.scala 27:16]
  output [31:0] io_rdata2, // @[src/src/cpucore/Unit/regfile.scala 27:16]
  input  [4:0]  io_waddr, // @[src/src/cpucore/Unit/regfile.scala 27:16]
  input  [31:0] io_wdata // @[src/src/cpucore/Unit/regfile.scala 27:16]
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
  reg [31:0] rf [0:31]; // @[src/src/cpucore/Unit/regfile.scala 37:17]
  wire  rf_io_rdata1_MPORT_en; // @[src/src/cpucore/Unit/regfile.scala 37:17]
  wire [4:0] rf_io_rdata1_MPORT_addr; // @[src/src/cpucore/Unit/regfile.scala 37:17]
  wire [31:0] rf_io_rdata1_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 37:17]
  wire  rf_io_rdata2_MPORT_en; // @[src/src/cpucore/Unit/regfile.scala 37:17]
  wire [4:0] rf_io_rdata2_MPORT_addr; // @[src/src/cpucore/Unit/regfile.scala 37:17]
  wire [31:0] rf_io_rdata2_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 37:17]
  wire [31:0] rf_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 37:17]
  wire [4:0] rf_MPORT_addr; // @[src/src/cpucore/Unit/regfile.scala 37:17]
  wire  rf_MPORT_mask; // @[src/src/cpucore/Unit/regfile.scala 37:17]
  wire  rf_MPORT_en; // @[src/src/cpucore/Unit/regfile.scala 37:17]
  assign rf_io_rdata1_MPORT_en = 1'h1;
  assign rf_io_rdata1_MPORT_addr = io_raddr1;
  assign rf_io_rdata1_MPORT_data = rf[rf_io_rdata1_MPORT_addr]; // @[src/src/cpucore/Unit/regfile.scala 37:17]
  assign rf_io_rdata2_MPORT_en = 1'h1;
  assign rf_io_rdata2_MPORT_addr = io_raddr2;
  assign rf_io_rdata2_MPORT_data = rf[rf_io_rdata2_MPORT_addr]; // @[src/src/cpucore/Unit/regfile.scala 37:17]
  assign rf_MPORT_data = io_wdata;
  assign rf_MPORT_addr = io_waddr;
  assign rf_MPORT_mask = 1'h1;
  assign rf_MPORT_en = 1'h1;
  assign io_rdata1 = io_raddr1 == 5'h0 ? 32'h0 : rf_io_rdata1_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 39:21]
  assign io_rdata2 = io_raddr2 == 5'h0 ? 32'h0 : rf_io_rdata2_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 40:21]
  always @(posedge clock) begin
    if (rf_MPORT_en & rf_MPORT_mask) begin
      rf[rf_MPORT_addr] <= rf_MPORT_data; // @[src/src/cpucore/Unit/regfile.scala 37:17]
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
  output [31:0] toes_bits_alu_src1, // @[src/src/cpucore/pipeline/ID_stage.scala 12:18]
  output [31:0] toes_bits_alu_src2, // @[src/src/cpucore/pipeline/ID_stage.scala 12:18]
  output [4:0]  toes_bits_alu_op, // @[src/src/cpucore/pipeline/ID_stage.scala 12:18]
  output [4:0]  toes_bits_rf_waddr, // @[src/src/cpucore/pipeline/ID_stage.scala 12:18]
  output [1:0]  toes_bits_mem_we, // @[src/src/cpucore/pipeline/ID_stage.scala 12:18]
  output [4:0]  toes_bits_inst_name, // @[src/src/cpucore/pipeline/ID_stage.scala 12:18]
  output [31:0] toes_bits_mem_wdata, // @[src/src/cpucore/pipeline/ID_stage.scala 12:18]
  input  [31:0] ds_bits_pc, // @[src/src/cpucore/pipeline/ID_stage.scala 13:16]
  input  [31:0] ds_bits_inst, // @[src/src/cpucore/pipeline/ID_stage.scala 13:16]
  input  [4:0]  torf_rf_waddr, // @[src/src/cpucore/pipeline/ID_stage.scala 14:18]
  input  [31:0] torf_rf_wdata, // @[src/src/cpucore/pipeline/ID_stage.scala 14:18]
  output        br_taken, // @[src/src/cpucore/pipeline/ID_stage.scala 15:18]
  output [31:0] br_target // @[src/src/cpucore/pipeline/ID_stage.scala 15:18]
);
  wire  reg__clock; // @[src/src/cpucore/pipeline/ID_stage.scala 52:21]
  wire [4:0] reg__io_raddr1; // @[src/src/cpucore/pipeline/ID_stage.scala 52:21]
  wire [4:0] reg__io_raddr2; // @[src/src/cpucore/pipeline/ID_stage.scala 52:21]
  wire [31:0] reg__io_rdata1; // @[src/src/cpucore/pipeline/ID_stage.scala 52:21]
  wire [31:0] reg__io_rdata2; // @[src/src/cpucore/pipeline/ID_stage.scala 52:21]
  wire [4:0] reg__io_waddr; // @[src/src/cpucore/pipeline/ID_stage.scala 52:21]
  wire [31:0] reg__io_wdata; // @[src/src/cpucore/pipeline/ID_stage.scala 52:21]
  wire [4:0] rd = ds_bits_inst[4:0]; // @[src/src/cpucore/pipeline/ID_stage.scala 19:18]
  wire [4:0] rk = ds_bits_inst[14:10]; // @[src/src/cpucore/pipeline/ID_stage.scala 20:18]
  wire [11:0] imm12u = ds_bits_inst[21:10]; // @[src/src/cpucore/pipeline/ID_stage.scala 22:22]
  wire [11:0] _imm12_sign_T = ds_bits_inst[21:10]; // @[src/src/myUtil/tool.scala 8:22]
  wire [31:0] imm12 = {{20{_imm12_sign_T[11]}},_imm12_sign_T}; // @[src/src/myUtil/tool.scala 9:14]
  wire [31:0] imm20 = {ds_bits_inst[24:5],12'h0}; // @[src/src/cpucore/pipeline/ID_stage.scala 25:21]
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
  wire [5:0] _decode_res_orMatrixOutputs_T_2 = {_decode_res_T_95,_decode_res_T_105,_decode_res_T_113,_decode_res_T_117,
    _decode_res_T_121,_decode_res_T_131}; // @[src/main/scala/chisel3/util/pla.scala 114:19]
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
  wire [3:0] inst_type = decode_res_invMatrixOutputs[11:8]; // @[src/src/cpucore/pipeline/ID_stage.scala 32:31]
  wire [1:0] mem_we = decode_res_invMatrixOutputs[7:6]; // @[src/src/cpucore/pipeline/ID_stage.scala 33:28]
  wire [4:0] inst_name = decode_res_invMatrixOutputs[5:1]; // @[src/src/cpucore/pipeline/ID_stage.scala 34:31]
  wire  _imm_T = inst_type == 4'h2; // @[src/src/cpucore/pipeline/ID_stage.scala 41:20]
  wire  _imm_T_1 = inst_type == 4'h3; // @[src/src/cpucore/pipeline/ID_stage.scala 42:20]
  wire  _imm_T_2 = inst_type == 4'h8; // @[src/src/cpucore/pipeline/ID_stage.scala 43:20]
  wire  _imm_T_3 = inst_type == 4'h4; // @[src/src/cpucore/pipeline/ID_stage.scala 44:20]
  wire  _imm_T_4 = inst_type == 4'h5; // @[src/src/cpucore/pipeline/ID_stage.scala 45:20]
  wire  _imm_T_5 = inst_type == 4'h6; // @[src/src/cpucore/pipeline/ID_stage.scala 46:20]
  wire [31:0] _imm_T_6 = _imm_T_5 ? 32'h4 : 32'h0; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire [31:0] _imm_T_7 = _imm_T_4 ? imm20 : _imm_T_6; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire [31:0] _imm_T_8 = _imm_T_3 ? 32'h4 : _imm_T_7; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire [31:0] _imm_T_9 = _imm_T_2 ? {{20'd0}, imm12u} : _imm_T_8; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire [31:0] _imm_T_10 = _imm_T_1 ? imm12 : _imm_T_9; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire [31:0] imm = _imm_T ? {{27'd0}, rk} : _imm_T_10; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire  rk_or_rd = inst_name != 5'h10 & _imm_T_3 | mem_we == 2'h0; // @[src/src/cpucore/pipeline/ID_stage.scala 51:74]
  wire  _rf_waddr_T = inst_name == 5'he; // @[src/src/cpucore/pipeline/ID_stage.scala 63:34]
  wire  rj_eq_rd = reg__io_rdata1 == reg__io_rdata2; // @[src/src/cpucore/pipeline/ID_stage.scala 68:30]
  wire [32:0] _rj_sub_rd_T = reg__io_rdata1 + reg__io_rdata2; // @[src/src/cpucore/pipeline/ID_stage.scala 69:30]
  wire [32:0] rj_sub_rd = _rj_sub_rd_T + 33'h1; // @[src/src/cpucore/pipeline/ID_stage.scala 69:43]
  wire  slt_res = reg__io_rdata1[31] & ~reg__io_rdata2[31] | ~(reg__io_rdata1[31] ^ reg__io_rdata2[31]) & rj_sub_rd[31]; // @[src/src/cpucore/pipeline/ID_stage.scala 70:49]
  wire  sltu_res = ~rj_sub_rd[32]; // @[src/src/cpucore/pipeline/ID_stage.scala 71:20]
  wire  _br_taken_T_4 = inst_name == 5'h1 & ~rj_eq_rd; // @[src/src/cpucore/pipeline/ID_stage.scala 73:48]
  wire  _br_taken_T_5 = inst_name == 5'h0 & rj_eq_rd | _br_taken_T_4; // @[src/src/cpucore/pipeline/ID_stage.scala 72:57]
  wire  _br_taken_T_7 = inst_name == 5'h2 & slt_res; // @[src/src/cpucore/pipeline/ID_stage.scala 74:48]
  wire  _br_taken_T_8 = _br_taken_T_5 | _br_taken_T_7; // @[src/src/cpucore/pipeline/ID_stage.scala 73:60]
  wire  _br_taken_T_11 = inst_name == 5'h3 & ~slt_res; // @[src/src/cpucore/pipeline/ID_stage.scala 75:48]
  wire  _br_taken_T_12 = _br_taken_T_8 | _br_taken_T_11; // @[src/src/cpucore/pipeline/ID_stage.scala 74:58]
  wire  _br_taken_T_14 = inst_name == 5'h4 & sltu_res; // @[src/src/cpucore/pipeline/ID_stage.scala 76:48]
  wire  _br_taken_T_15 = _br_taken_T_12 | _br_taken_T_14; // @[src/src/cpucore/pipeline/ID_stage.scala 75:59]
  wire  _br_taken_T_18 = inst_name == 5'h5 & ~sltu_res; // @[src/src/cpucore/pipeline/ID_stage.scala 77:48]
  wire  _br_taken_T_19 = _br_taken_T_15 | _br_taken_T_18; // @[src/src/cpucore/pipeline/ID_stage.scala 76:59]
  wire  _br_taken_T_21 = _br_taken_T_19 | _rf_waddr_T; // @[src/src/cpucore/pipeline/ID_stage.scala 77:60]
  wire  _br_taken_T_24 = inst_name == 5'h10; // @[src/src/cpucore/pipeline/ID_stage.scala 78:84]
  wire [31:0] _br_target_T_1 = _br_taken_T_24 ? reg__io_rdata1 : ds_bits_pc; // @[src/src/cpucore/pipeline/ID_stage.scala 80:21]
  regfile reg_ ( // @[src/src/cpucore/pipeline/ID_stage.scala 52:21]
    .clock(reg__clock),
    .io_raddr1(reg__io_raddr1),
    .io_raddr2(reg__io_raddr2),
    .io_rdata1(reg__io_rdata1),
    .io_rdata2(reg__io_rdata2),
    .io_waddr(reg__io_waddr),
    .io_wdata(reg__io_wdata)
  );
  assign toes_bits_alu_src1 = ds_bits_pc; // @[src/src/cpucore/pipeline/ID_stage.scala 86:30]
  assign toes_bits_alu_src2 = inst_type == 4'h1 ? reg__io_rdata2 : imm; // @[src/src/cpucore/pipeline/ID_stage.scala 87:30]
  assign toes_bits_alu_op = decode_res_invMatrixOutputs[16:12]; // @[src/src/cpucore/pipeline/ID_stage.scala 84:35]
  assign toes_bits_rf_waddr = inst_name == 5'he ? 5'h1 : rd; // @[src/src/cpucore/pipeline/ID_stage.scala 63:23]
  assign toes_bits_mem_we = decode_res_invMatrixOutputs[7:6]; // @[src/src/cpucore/pipeline/ID_stage.scala 33:28]
  assign toes_bits_inst_name = decode_res_invMatrixOutputs[5:1]; // @[src/src/cpucore/pipeline/ID_stage.scala 34:31]
  assign toes_bits_mem_wdata = reg__io_rdata2; // @[src/src/cpucore/pipeline/ID_stage.scala 92:25]
  assign br_taken = _br_taken_T_21 | inst_name == 5'hf | inst_name == 5'h10; // @[src/src/cpucore/pipeline/ID_stage.scala 78:72]
  assign br_target = _br_target_T_1 + imm; // @[src/src/cpucore/pipeline/ID_stage.scala 80:67]
  assign reg__clock = clock;
  assign reg__io_raddr1 = ds_bits_inst[9:5]; // @[src/src/cpucore/pipeline/ID_stage.scala 18:18]
  assign reg__io_raddr2 = rk_or_rd ? rk : rd; // @[src/src/cpucore/pipeline/ID_stage.scala 54:25]
  assign reg__io_waddr = torf_rf_waddr; // @[src/src/cpucore/pipeline/ID_stage.scala 55:18]
  assign reg__io_wdata = torf_rf_wdata; // @[src/src/cpucore/pipeline/ID_stage.scala 56:18]
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
  input  [31:0] es_bits_alu_src1, // @[src/src/cpucore/pipeline/EX_stage.scala 15:16]
  input  [31:0] es_bits_alu_src2, // @[src/src/cpucore/pipeline/EX_stage.scala 15:16]
  input  [4:0]  es_bits_alu_op, // @[src/src/cpucore/pipeline/EX_stage.scala 15:16]
  input  [4:0]  es_bits_rf_waddr, // @[src/src/cpucore/pipeline/EX_stage.scala 15:16]
  input  [1:0]  es_bits_mem_we, // @[src/src/cpucore/pipeline/EX_stage.scala 15:16]
  input  [4:0]  es_bits_inst_name, // @[src/src/cpucore/pipeline/EX_stage.scala 15:16]
  input  [31:0] es_bits_mem_wdata, // @[src/src/cpucore/pipeline/EX_stage.scala 15:16]
  output [31:0] toms_bits_alu_res, // @[src/src/cpucore/pipeline/EX_stage.scala 16:18]
  output [4:0]  toms_bits_inst_name, // @[src/src/cpucore/pipeline/EX_stage.scala 16:18]
  output        toms_bits_res_from_mem, // @[src/src/cpucore/pipeline/EX_stage.scala 16:18]
  output [4:0]  toms_bits_rf_waddr, // @[src/src/cpucore/pipeline/EX_stage.scala 16:18]
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
  wire [15:0] _data_sram_wstrb_T_1 = 5'hb == es_bits_inst_name ? 16'h1 : 16'hdead; // @[src/src/cpucore/pipeline/EX_stage.scala 36:63]
  wire [15:0] _data_sram_wstrb_T_3 = 5'hc == es_bits_inst_name ? 16'h2 : _data_sram_wstrb_T_1; // @[src/src/cpucore/pipeline/EX_stage.scala 36:63]
  wire [15:0] _data_sram_wstrb_T_5 = 5'hd == es_bits_inst_name ? 16'h4 : _data_sram_wstrb_T_3; // @[src/src/cpucore/pipeline/EX_stage.scala 36:63]
  ALU alu ( // @[src/src/cpucore/pipeline/EX_stage.scala 19:21]
    .io_alu_op(alu_io_alu_op),
    .io_src1(alu_io_src1),
    .io_src2(alu_io_src2),
    .io_res(alu_io_res)
  );
  assign toms_bits_alu_res = alu_io_res; // @[src/src/cpucore/pipeline/EX_stage.scala 25:23]
  assign toms_bits_inst_name = es_bits_inst_name; // @[src/src/cpucore/pipeline/EX_stage.scala 26:25]
  assign toms_bits_res_from_mem = es_bits_mem_we == 2'h1; // @[src/src/cpucore/pipeline/EX_stage.scala 27:46]
  assign toms_bits_rf_waddr = es_bits_rf_waddr; // @[src/src/cpucore/pipeline/EX_stage.scala 30:24]
  assign data_sram_en = es_bits_mem_we != 2'h2; // @[src/src/cpucore/pipeline/EX_stage.scala 32:36]
  assign data_sram_wr = es_bits_mem_we == 2'h0; // @[src/src/cpucore/pipeline/EX_stage.scala 33:36]
  assign data_sram_addr = alu_io_res; // @[src/src/cpucore/pipeline/EX_stage.scala 34:20]
  assign data_sram_wdata = es_bits_mem_wdata; // @[src/src/cpucore/pipeline/EX_stage.scala 35:21]
  assign data_sram_wstrb = _data_sram_wstrb_T_5[3:0]; // @[src/src/cpucore/pipeline/EX_stage.scala 36:21]
  assign alu_io_alu_op = es_bits_alu_op; // @[src/src/cpucore/pipeline/EX_stage.scala 20:{37,37}]
  assign alu_io_src1 = es_bits_alu_src1; // @[src/src/cpucore/pipeline/EX_stage.scala 22:17]
  assign alu_io_src2 = es_bits_alu_src2; // @[src/src/cpucore/pipeline/EX_stage.scala 23:17]
endmodule
module MEM_stage(
  input  [31:0] ms_bits_alu_res, // @[src/src/cpucore/pipeline/MEM_stage.scala 12:20]
  input  [4:0]  ms_bits_inst_name, // @[src/src/cpucore/pipeline/MEM_stage.scala 12:20]
  input         ms_bits_res_from_mem, // @[src/src/cpucore/pipeline/MEM_stage.scala 12:20]
  input  [4:0]  ms_bits_rf_waddr, // @[src/src/cpucore/pipeline/MEM_stage.scala 12:20]
  output [4:0]  tows_bits_rf_waddr, // @[src/src/cpucore/pipeline/MEM_stage.scala 13:22]
  output [31:0] tows_bits_rf_wdata, // @[src/src/cpucore/pipeline/MEM_stage.scala 13:22]
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
  assign tows_bits_rf_waddr = ms_bits_rf_waddr; // @[src/src/cpucore/pipeline/MEM_stage.scala 27:28]
  assign tows_bits_rf_wdata = ms_bits_res_from_mem ? mem_rdata : ms_bits_alu_res; // @[src/src/cpucore/pipeline/MEM_stage.scala 28:34]
endmodule
module WB_stage(
  input  [4:0]  ws_bits_rf_waddr, // @[src/src/cpucore/pipeline/WB_stage.scala 8:20]
  input  [31:0] ws_bits_rf_wdata, // @[src/src/cpucore/pipeline/WB_stage.scala 8:20]
  output [4:0]  torf_rf_waddr, // @[src/src/cpucore/pipeline/WB_stage.scala 9:22]
  output [31:0] torf_rf_wdata // @[src/src/cpucore/pipeline/WB_stage.scala 9:22]
);
  assign torf_rf_waddr = ws_bits_rf_waddr; // @[src/src/cpucore/pipeline/WB_stage.scala 13:23]
  assign torf_rf_wdata = ws_bits_rf_wdata; // @[src/src/cpucore/pipeline/WB_stage.scala 14:23]
endmodule
module mycpu_top(
  input         clock,
  input         reset,
  output        inst_sram_en, // @[src/src/cpucore/mycpu_top.scala 21:27]
  output        inst_sram_wr, // @[src/src/cpucore/mycpu_top.scala 21:27]
  output [31:0] inst_sram_addr, // @[src/src/cpucore/mycpu_top.scala 21:27]
  output [31:0] inst_sram_wdata, // @[src/src/cpucore/mycpu_top.scala 21:27]
  output [3:0]  inst_sram_wstrb, // @[src/src/cpucore/mycpu_top.scala 21:27]
  input  [31:0] inst_sram_rdata, // @[src/src/cpucore/mycpu_top.scala 21:27]
  output        data_sram_en, // @[src/src/cpucore/mycpu_top.scala 22:27]
  output        data_sram_wr, // @[src/src/cpucore/mycpu_top.scala 22:27]
  output [31:0] data_sram_addr, // @[src/src/cpucore/mycpu_top.scala 22:27]
  output [31:0] data_sram_wdata, // @[src/src/cpucore/mycpu_top.scala 22:27]
  output [3:0]  data_sram_wstrb, // @[src/src/cpucore/mycpu_top.scala 22:27]
  input  [31:0] data_sram_rdata // @[src/src/cpucore/mycpu_top.scala 22:27]
);
  wire  pIF_clock; // @[src/src/cpucore/mycpu_top.scala 24:25]
  wire  pIF_reset; // @[src/src/cpucore/mycpu_top.scala 24:25]
  wire  pIF_br_taken; // @[src/src/cpucore/mycpu_top.scala 24:25]
  wire [31:0] pIF_br_target; // @[src/src/cpucore/mycpu_top.scala 24:25]
  wire [31:0] pIF_inst_sram_addr; // @[src/src/cpucore/mycpu_top.scala 24:25]
  wire [31:0] pIF_tofs_bits_pc; // @[src/src/cpucore/mycpu_top.scala 24:25]
  wire [31:0] IF_tods_bits_pc; // @[src/src/cpucore/mycpu_top.scala 25:24]
  wire [31:0] IF_tods_bits_inst; // @[src/src/cpucore/mycpu_top.scala 25:24]
  wire [31:0] IF_inst_sram_rdata; // @[src/src/cpucore/mycpu_top.scala 25:24]
  wire [31:0] IF_fs_bits_pc; // @[src/src/cpucore/mycpu_top.scala 25:24]
  wire  ID_clock; // @[src/src/cpucore/mycpu_top.scala 26:24]
  wire [31:0] ID_toes_bits_alu_src1; // @[src/src/cpucore/mycpu_top.scala 26:24]
  wire [31:0] ID_toes_bits_alu_src2; // @[src/src/cpucore/mycpu_top.scala 26:24]
  wire [4:0] ID_toes_bits_alu_op; // @[src/src/cpucore/mycpu_top.scala 26:24]
  wire [4:0] ID_toes_bits_rf_waddr; // @[src/src/cpucore/mycpu_top.scala 26:24]
  wire [1:0] ID_toes_bits_mem_we; // @[src/src/cpucore/mycpu_top.scala 26:24]
  wire [4:0] ID_toes_bits_inst_name; // @[src/src/cpucore/mycpu_top.scala 26:24]
  wire [31:0] ID_toes_bits_mem_wdata; // @[src/src/cpucore/mycpu_top.scala 26:24]
  wire [31:0] ID_ds_bits_pc; // @[src/src/cpucore/mycpu_top.scala 26:24]
  wire [31:0] ID_ds_bits_inst; // @[src/src/cpucore/mycpu_top.scala 26:24]
  wire [4:0] ID_torf_rf_waddr; // @[src/src/cpucore/mycpu_top.scala 26:24]
  wire [31:0] ID_torf_rf_wdata; // @[src/src/cpucore/mycpu_top.scala 26:24]
  wire  ID_br_taken; // @[src/src/cpucore/mycpu_top.scala 26:24]
  wire [31:0] ID_br_target; // @[src/src/cpucore/mycpu_top.scala 26:24]
  wire [31:0] EXE_es_bits_alu_src1; // @[src/src/cpucore/mycpu_top.scala 27:25]
  wire [31:0] EXE_es_bits_alu_src2; // @[src/src/cpucore/mycpu_top.scala 27:25]
  wire [4:0] EXE_es_bits_alu_op; // @[src/src/cpucore/mycpu_top.scala 27:25]
  wire [4:0] EXE_es_bits_rf_waddr; // @[src/src/cpucore/mycpu_top.scala 27:25]
  wire [1:0] EXE_es_bits_mem_we; // @[src/src/cpucore/mycpu_top.scala 27:25]
  wire [4:0] EXE_es_bits_inst_name; // @[src/src/cpucore/mycpu_top.scala 27:25]
  wire [31:0] EXE_es_bits_mem_wdata; // @[src/src/cpucore/mycpu_top.scala 27:25]
  wire [31:0] EXE_toms_bits_alu_res; // @[src/src/cpucore/mycpu_top.scala 27:25]
  wire [4:0] EXE_toms_bits_inst_name; // @[src/src/cpucore/mycpu_top.scala 27:25]
  wire  EXE_toms_bits_res_from_mem; // @[src/src/cpucore/mycpu_top.scala 27:25]
  wire [4:0] EXE_toms_bits_rf_waddr; // @[src/src/cpucore/mycpu_top.scala 27:25]
  wire  EXE_data_sram_en; // @[src/src/cpucore/mycpu_top.scala 27:25]
  wire  EXE_data_sram_wr; // @[src/src/cpucore/mycpu_top.scala 27:25]
  wire [31:0] EXE_data_sram_addr; // @[src/src/cpucore/mycpu_top.scala 27:25]
  wire [31:0] EXE_data_sram_wdata; // @[src/src/cpucore/mycpu_top.scala 27:25]
  wire [3:0] EXE_data_sram_wstrb; // @[src/src/cpucore/mycpu_top.scala 27:25]
  wire [31:0] MEM_ms_bits_alu_res; // @[src/src/cpucore/mycpu_top.scala 28:25]
  wire [4:0] MEM_ms_bits_inst_name; // @[src/src/cpucore/mycpu_top.scala 28:25]
  wire  MEM_ms_bits_res_from_mem; // @[src/src/cpucore/mycpu_top.scala 28:25]
  wire [4:0] MEM_ms_bits_rf_waddr; // @[src/src/cpucore/mycpu_top.scala 28:25]
  wire [4:0] MEM_tows_bits_rf_waddr; // @[src/src/cpucore/mycpu_top.scala 28:25]
  wire [31:0] MEM_tows_bits_rf_wdata; // @[src/src/cpucore/mycpu_top.scala 28:25]
  wire [31:0] MEM_data_sram_rdata; // @[src/src/cpucore/mycpu_top.scala 28:25]
  wire [4:0] WB_ws_bits_rf_waddr; // @[src/src/cpucore/mycpu_top.scala 29:24]
  wire [31:0] WB_ws_bits_rf_wdata; // @[src/src/cpucore/mycpu_top.scala 29:24]
  wire [4:0] WB_torf_rf_waddr; // @[src/src/cpucore/mycpu_top.scala 29:24]
  wire [31:0] WB_torf_rf_wdata; // @[src/src/cpucore/mycpu_top.scala 29:24]
  preIF pIF ( // @[src/src/cpucore/mycpu_top.scala 24:25]
    .clock(pIF_clock),
    .reset(pIF_reset),
    .br_taken(pIF_br_taken),
    .br_target(pIF_br_target),
    .inst_sram_addr(pIF_inst_sram_addr),
    .tofs_bits_pc(pIF_tofs_bits_pc)
  );
  IF_stage IF ( // @[src/src/cpucore/mycpu_top.scala 25:24]
    .tods_bits_pc(IF_tods_bits_pc),
    .tods_bits_inst(IF_tods_bits_inst),
    .inst_sram_rdata(IF_inst_sram_rdata),
    .fs_bits_pc(IF_fs_bits_pc)
  );
  ID_stage ID ( // @[src/src/cpucore/mycpu_top.scala 26:24]
    .clock(ID_clock),
    .toes_bits_alu_src1(ID_toes_bits_alu_src1),
    .toes_bits_alu_src2(ID_toes_bits_alu_src2),
    .toes_bits_alu_op(ID_toes_bits_alu_op),
    .toes_bits_rf_waddr(ID_toes_bits_rf_waddr),
    .toes_bits_mem_we(ID_toes_bits_mem_we),
    .toes_bits_inst_name(ID_toes_bits_inst_name),
    .toes_bits_mem_wdata(ID_toes_bits_mem_wdata),
    .ds_bits_pc(ID_ds_bits_pc),
    .ds_bits_inst(ID_ds_bits_inst),
    .torf_rf_waddr(ID_torf_rf_waddr),
    .torf_rf_wdata(ID_torf_rf_wdata),
    .br_taken(ID_br_taken),
    .br_target(ID_br_target)
  );
  EX_stage EXE ( // @[src/src/cpucore/mycpu_top.scala 27:25]
    .es_bits_alu_src1(EXE_es_bits_alu_src1),
    .es_bits_alu_src2(EXE_es_bits_alu_src2),
    .es_bits_alu_op(EXE_es_bits_alu_op),
    .es_bits_rf_waddr(EXE_es_bits_rf_waddr),
    .es_bits_mem_we(EXE_es_bits_mem_we),
    .es_bits_inst_name(EXE_es_bits_inst_name),
    .es_bits_mem_wdata(EXE_es_bits_mem_wdata),
    .toms_bits_alu_res(EXE_toms_bits_alu_res),
    .toms_bits_inst_name(EXE_toms_bits_inst_name),
    .toms_bits_res_from_mem(EXE_toms_bits_res_from_mem),
    .toms_bits_rf_waddr(EXE_toms_bits_rf_waddr),
    .data_sram_en(EXE_data_sram_en),
    .data_sram_wr(EXE_data_sram_wr),
    .data_sram_addr(EXE_data_sram_addr),
    .data_sram_wdata(EXE_data_sram_wdata),
    .data_sram_wstrb(EXE_data_sram_wstrb)
  );
  MEM_stage MEM ( // @[src/src/cpucore/mycpu_top.scala 28:25]
    .ms_bits_alu_res(MEM_ms_bits_alu_res),
    .ms_bits_inst_name(MEM_ms_bits_inst_name),
    .ms_bits_res_from_mem(MEM_ms_bits_res_from_mem),
    .ms_bits_rf_waddr(MEM_ms_bits_rf_waddr),
    .tows_bits_rf_waddr(MEM_tows_bits_rf_waddr),
    .tows_bits_rf_wdata(MEM_tows_bits_rf_wdata),
    .data_sram_rdata(MEM_data_sram_rdata)
  );
  WB_stage WB ( // @[src/src/cpucore/mycpu_top.scala 29:24]
    .ws_bits_rf_waddr(WB_ws_bits_rf_waddr),
    .ws_bits_rf_wdata(WB_ws_bits_rf_wdata),
    .torf_rf_waddr(WB_torf_rf_waddr),
    .torf_rf_wdata(WB_torf_rf_wdata)
  );
  assign inst_sram_en = 1'h1; // @[src/src/cpucore/mycpu_top.scala 41:23]
  assign inst_sram_wr = 1'h0; // @[src/src/cpucore/mycpu_top.scala 41:23]
  assign inst_sram_addr = pIF_inst_sram_addr; // @[src/src/cpucore/mycpu_top.scala 41:23]
  assign inst_sram_wdata = 32'h0; // @[src/src/cpucore/mycpu_top.scala 41:23]
  assign inst_sram_wstrb = 4'h0; // @[src/src/cpucore/mycpu_top.scala 41:23]
  assign data_sram_en = EXE_data_sram_en; // @[src/src/cpucore/mycpu_top.scala 44:23]
  assign data_sram_wr = EXE_data_sram_wr; // @[src/src/cpucore/mycpu_top.scala 44:23]
  assign data_sram_addr = EXE_data_sram_addr; // @[src/src/cpucore/mycpu_top.scala 44:23]
  assign data_sram_wdata = EXE_data_sram_wdata; // @[src/src/cpucore/mycpu_top.scala 44:23]
  assign data_sram_wstrb = EXE_data_sram_wstrb; // @[src/src/cpucore/mycpu_top.scala 44:23]
  assign pIF_clock = clock;
  assign pIF_reset = reset;
  assign pIF_br_taken = ID_br_taken; // @[src/src/cpucore/mycpu_top.scala 37:16]
  assign pIF_br_target = ID_br_target; // @[src/src/cpucore/mycpu_top.scala 37:16]
  assign IF_inst_sram_rdata = inst_sram_rdata; // @[src/src/cpucore/mycpu_top.scala 40:22]
  assign IF_fs_bits_pc = pIF_tofs_bits_pc; // @[src/src/cpucore/mycpu_top.scala 13:69]
  assign ID_clock = clock;
  assign ID_ds_bits_pc = IF_tods_bits_pc; // @[src/src/cpucore/mycpu_top.scala 13:69]
  assign ID_ds_bits_inst = IF_tods_bits_inst; // @[src/src/cpucore/mycpu_top.scala 13:69]
  assign ID_torf_rf_waddr = WB_torf_rf_waddr; // @[src/src/cpucore/mycpu_top.scala 38:17]
  assign ID_torf_rf_wdata = WB_torf_rf_wdata; // @[src/src/cpucore/mycpu_top.scala 38:17]
  assign EXE_es_bits_alu_src1 = ID_toes_bits_alu_src1; // @[src/src/cpucore/mycpu_top.scala 13:69]
  assign EXE_es_bits_alu_src2 = ID_toes_bits_alu_src2; // @[src/src/cpucore/mycpu_top.scala 13:69]
  assign EXE_es_bits_alu_op = ID_toes_bits_alu_op; // @[src/src/cpucore/mycpu_top.scala 13:69]
  assign EXE_es_bits_rf_waddr = ID_toes_bits_rf_waddr; // @[src/src/cpucore/mycpu_top.scala 13:69]
  assign EXE_es_bits_mem_we = ID_toes_bits_mem_we; // @[src/src/cpucore/mycpu_top.scala 13:69]
  assign EXE_es_bits_inst_name = ID_toes_bits_inst_name; // @[src/src/cpucore/mycpu_top.scala 13:69]
  assign EXE_es_bits_mem_wdata = ID_toes_bits_mem_wdata; // @[src/src/cpucore/mycpu_top.scala 13:69]
  assign MEM_ms_bits_alu_res = EXE_toms_bits_alu_res; // @[src/src/cpucore/mycpu_top.scala 13:69]
  assign MEM_ms_bits_inst_name = EXE_toms_bits_inst_name; // @[src/src/cpucore/mycpu_top.scala 13:69]
  assign MEM_ms_bits_res_from_mem = EXE_toms_bits_res_from_mem; // @[src/src/cpucore/mycpu_top.scala 13:69]
  assign MEM_ms_bits_rf_waddr = EXE_toms_bits_rf_waddr; // @[src/src/cpucore/mycpu_top.scala 13:69]
  assign MEM_data_sram_rdata = data_sram_rdata; // @[src/src/cpucore/mycpu_top.scala 43:23]
  assign WB_ws_bits_rf_waddr = MEM_tows_bits_rf_waddr; // @[src/src/cpucore/mycpu_top.scala 13:69]
  assign WB_ws_bits_rf_wdata = MEM_tows_bits_rf_wdata; // @[src/src/cpucore/mycpu_top.scala 13:69]
endmodule
