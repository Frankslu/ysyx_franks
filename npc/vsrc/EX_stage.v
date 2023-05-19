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
  wire  _io_res_T = op_add | op_sub; // @[src/src/cpucore/Unit/ALU.scala 63:19]
  wire  _io_res_T_9 = op_sra | op_srl; // @[src/src/cpucore/Unit/ALU.scala 71:17]
  wire [31:0] _io_res_T_19 = op_modu ? modu_res : 32'hdeadbeef; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire [31:0] _io_res_T_20 = op_divu ? divu_res : _io_res_T_19; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire [31:0] _io_res_T_21 = op_mod ? mod_res : _io_res_T_20; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire [31:0] div_res = _div_res_T_3[31:0]; // @[src/src/cpucore/Unit/ALU.scala 58:23 59:13]
  wire [31:0] _io_res_T_22 = op_div ? div_res : _io_res_T_21; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire [31:0] _io_res_T_23 = op_mulhu ? mulhu_res : _io_res_T_22; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire [31:0] _io_res_T_24 = op_mulh ? mulh_res : _io_res_T_23; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire [31:0] _io_res_T_25 = op_mul ? mul_res : _io_res_T_24; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire [31:0] _io_res_T_26 = op_lui ? io_src2 : _io_res_T_25; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire [63:0] _io_res_T_27 = _io_res_T_9 ? sr_res : {{32'd0}, _io_res_T_26}; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire [63:0] _io_res_T_28 = op_sll ? {{1'd0}, sll_res} : _io_res_T_27; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire [63:0] _io_res_T_29 = op_xor ? {{32'd0}, xor_res} : _io_res_T_28; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire [63:0] _io_res_T_30 = op_nor ? {{32'd0}, nor_res} : _io_res_T_29; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire [63:0] _io_res_T_31 = op_or ? {{32'd0}, or_res} : _io_res_T_30; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire [63:0] _io_res_T_32 = op_and ? {{32'd0}, and_res} : _io_res_T_31; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire [63:0] _io_res_T_33 = op_sltu ? {{63'd0}, sltu_res} : _io_res_T_32; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire [63:0] _io_res_T_34 = op_slt ? {{63'd0}, slt_res} : _io_res_T_33; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire [63:0] _io_res_T_35 = _io_res_T ? {{31'd0}, add_res} : _io_res_T_34; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  assign io_res = _io_res_T_35[31:0]; // @[src/src/cpucore/Unit/ALU.scala 62:12]
endmodule
module EX_stage(
  input         clock,
  input         reset,
  output        es_ready, // @[src/src/cpucore/pipeline/EX_stage.scala 13:16]
  input         es_valid, // @[src/src/cpucore/pipeline/EX_stage.scala 13:16]
  input  [31:0] es_bits_pc, // @[src/src/cpucore/pipeline/EX_stage.scala 13:16]
  input  [31:0] es_bits_alu_src1, // @[src/src/cpucore/pipeline/EX_stage.scala 13:16]
  input  [31:0] es_bits_alu_src2, // @[src/src/cpucore/pipeline/EX_stage.scala 13:16]
  input  [4:0]  es_bits_alu_op, // @[src/src/cpucore/pipeline/EX_stage.scala 13:16]
  input  [4:0]  es_bits_rf_waddr, // @[src/src/cpucore/pipeline/EX_stage.scala 13:16]
  input         es_bits_rf_we, // @[src/src/cpucore/pipeline/EX_stage.scala 13:16]
  input  [1:0]  es_bits_mem_we, // @[src/src/cpucore/pipeline/EX_stage.scala 13:16]
  input  [4:0]  es_bits_inst_name, // @[src/src/cpucore/pipeline/EX_stage.scala 13:16]
  input  [31:0] es_bits_mem_wdata, // @[src/src/cpucore/pipeline/EX_stage.scala 13:16]
  input         toms_ready, // @[src/src/cpucore/pipeline/EX_stage.scala 14:18]
  output        toms_valid, // @[src/src/cpucore/pipeline/EX_stage.scala 14:18]
  output [31:0] toms_bits_pc, // @[src/src/cpucore/pipeline/EX_stage.scala 14:18]
  output [31:0] toms_bits_alu_res, // @[src/src/cpucore/pipeline/EX_stage.scala 14:18]
  output [4:0]  toms_bits_inst_name, // @[src/src/cpucore/pipeline/EX_stage.scala 14:18]
  output        toms_bits_res_from_mem, // @[src/src/cpucore/pipeline/EX_stage.scala 14:18]
  output        data_sram_en, // @[src/src/cpucore/pipeline/EX_stage.scala 15:23]
  output        data_sram_wr, // @[src/src/cpucore/pipeline/EX_stage.scala 15:23]
  output [31:0] data_sram_addr, // @[src/src/cpucore/pipeline/EX_stage.scala 15:23]
  output [31:0] data_sram_wdata, // @[src/src/cpucore/pipeline/EX_stage.scala 15:23]
  output [3:0]  data_sram_wstrb, // @[src/src/cpucore/pipeline/EX_stage.scala 15:23]
  input  [31:0] data_sram_rdata // @[src/src/cpucore/pipeline/EX_stage.scala 15:23]
);
  wire [4:0] alu_io_alu_op; // @[src/src/cpucore/pipeline/EX_stage.scala 17:21]
  wire [31:0] alu_io_src1; // @[src/src/cpucore/pipeline/EX_stage.scala 17:21]
  wire [31:0] alu_io_src2; // @[src/src/cpucore/pipeline/EX_stage.scala 17:21]
  wire [31:0] alu_io_res; // @[src/src/cpucore/pipeline/EX_stage.scala 17:21]
  wire [15:0] _data_sram_wstrb_T_1 = 5'hb == es_bits_inst_name ? 16'h1 : 16'hdead; // @[src/src/cpucore/pipeline/EX_stage.scala 32:63]
  wire [15:0] _data_sram_wstrb_T_3 = 5'hc == es_bits_inst_name ? 16'h2 : _data_sram_wstrb_T_1; // @[src/src/cpucore/pipeline/EX_stage.scala 32:63]
  wire [15:0] _data_sram_wstrb_T_5 = 5'hd == es_bits_inst_name ? 16'h4 : _data_sram_wstrb_T_3; // @[src/src/cpucore/pipeline/EX_stage.scala 32:63]
  ALU alu ( // @[src/src/cpucore/pipeline/EX_stage.scala 17:21]
    .io_alu_op(alu_io_alu_op),
    .io_src1(alu_io_src1),
    .io_src2(alu_io_src2),
    .io_res(alu_io_res)
  );
  assign es_ready = 1'h1; // @[src/src/cpucore/pipeline/EX_stage.scala 38:14]
  assign toms_valid = 1'h1; // @[src/src/cpucore/pipeline/EX_stage.scala 39:16]
  assign toms_bits_pc = es_bits_pc; // @[src/src/cpucore/pipeline/EX_stage.scala 26:18]
  assign toms_bits_alu_res = alu_io_res; // @[src/src/cpucore/pipeline/EX_stage.scala 23:23]
  assign toms_bits_inst_name = es_bits_inst_name; // @[src/src/cpucore/pipeline/EX_stage.scala 24:25]
  assign toms_bits_res_from_mem = es_bits_mem_we == 2'h1; // @[src/src/cpucore/pipeline/EX_stage.scala 25:46]
  assign data_sram_en = es_bits_mem_we != 2'h2; // @[src/src/cpucore/pipeline/EX_stage.scala 28:36]
  assign data_sram_wr = es_bits_mem_we == 2'h0; // @[src/src/cpucore/pipeline/EX_stage.scala 29:36]
  assign data_sram_addr = alu_io_res; // @[src/src/cpucore/pipeline/EX_stage.scala 30:20]
  assign data_sram_wdata = es_bits_mem_wdata; // @[src/src/cpucore/pipeline/EX_stage.scala 31:21]
  assign data_sram_wstrb = _data_sram_wstrb_T_5[3:0]; // @[src/src/cpucore/pipeline/EX_stage.scala 32:21]
  assign alu_io_alu_op = es_bits_alu_op; // @[src/src/cpucore/pipeline/EX_stage.scala 18:{37,37}]
  assign alu_io_src1 = es_bits_alu_src1; // @[src/src/cpucore/pipeline/EX_stage.scala 20:17]
  assign alu_io_src2 = es_bits_alu_src2; // @[src/src/cpucore/pipeline/EX_stage.scala 21:17]
endmodule
