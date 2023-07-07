/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off DECLFILENAME */
/* verilator lint_off WIDTHEXPAND */
module preIF(
  input         clock,
  input         reset,
  input         br_taken,
  input  [31:0] br_target,
  output        inst_sram_en,
  output [31:0] inst_sram_addr,
  output        tofs_valid,
  output [31:0] tofs_bits_pc,
  output [31:0] tofs_bits_next_pc,
  input         csr_br_taken,
  input  [31:0] csr_br_pc
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] pc; // @[preIF.scala 17:21]
  wire [31:0] snpc = pc + 32'h4; // @[preIF.scala 18:19]
  wire [31:0] _next_pc_T_2 = csr_br_taken ? csr_br_pc : snpc; // @[Mux.scala 101:16]
  reg  inst_sram_en_REG; // @[preIF.scala 25:28]
  assign inst_sram_en = inst_sram_en_REG; // @[preIF.scala 25:18]
  assign inst_sram_addr = pc; // @[preIF.scala 27:20]
  assign tofs_valid = ~reset; // @[preIF.scala 32:19]
  assign tofs_bits_pc = pc; // @[preIF.scala 31:18]
  assign tofs_bits_next_pc = br_taken ? br_target : _next_pc_T_2; // @[Mux.scala 101:16]
  always @(posedge clock) begin
    if (reset) begin // @[preIF.scala 17:21]
      pc <= 32'h1bfffffc; // @[preIF.scala 17:21]
    end else if (br_taken) begin // @[Mux.scala 101:16]
      pc <= br_target;
    end else if (csr_br_taken) begin // @[Mux.scala 101:16]
      pc <= csr_br_pc;
    end else begin
      pc <= snpc;
    end
    inst_sram_en_REG <= ~reset; // @[preIF.scala 25:29]
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
  output        tods_valid,
  output [31:0] tods_bits_pc,
  output [31:0] tods_bits_inst,
  output [31:0] tods_bits_next_pc,
  input  [31:0] inst_sram_rdata,
  input         fs_valid,
  input  [31:0] fs_bits_pc,
  input  [31:0] fs_bits_next_pc
);
  assign tods_valid = fs_valid; // @[IF_stage.scala 19:16]
  assign tods_bits_pc = fs_bits_pc; // @[IF_stage.scala 17:18]
  assign tods_bits_inst = inst_sram_rdata; // @[IF_stage.scala 16:20]
  assign tods_bits_next_pc = fs_bits_next_pc; // @[IF_stage.scala 18:23]
endmodule
module regfile(
  input         clock,
  input  [4:0]  io_raddr1,
  input  [4:0]  io_raddr2,
  output [31:0] io_rdata1,
  output [31:0] io_rdata2,
  input  [4:0]  io_waddr,
  input  [31:0] io_wdata,
  input         io_wen,
  input  [31:0] io_rf_pc,
  input         io_is_break,
  input         io_valid,
  input  [31:0] io_inst,
  input         io_inv,
  input         io_csr_ex,
  input         io_csr_ertn,
  input  [5:0]  io_csr_ecode,
  input  [31:0] io_csr_ex_pc,
  input  [31:0] io_csr_crmd,
  input  [31:0] io_csr_prmd,
  input  [31:0] io_csr_estat,
  input  [31:0] io_csr_era,
  input  [31:0] io_csr_eentry
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
  reg [31:0] rf [0:31]; // @[regfile.scala 43:17]
  wire  rf_io_rdata1_MPORT_en; // @[regfile.scala 43:17]
  wire [4:0] rf_io_rdata1_MPORT_addr; // @[regfile.scala 43:17]
  wire [31:0] rf_io_rdata1_MPORT_data; // @[regfile.scala 43:17]
  wire  rf_io_rdata2_MPORT_en; // @[regfile.scala 43:17]
  wire [4:0] rf_io_rdata2_MPORT_addr; // @[regfile.scala 43:17]
  wire [31:0] rf_io_rdata2_MPORT_data; // @[regfile.scala 43:17]
  wire  rf_difftest_io_rf_1_MPORT_en; // @[regfile.scala 43:17]
  wire [4:0] rf_difftest_io_rf_1_MPORT_addr; // @[regfile.scala 43:17]
  wire [31:0] rf_difftest_io_rf_1_MPORT_data; // @[regfile.scala 43:17]
  wire  rf_difftest_io_rf_2_MPORT_en; // @[regfile.scala 43:17]
  wire [4:0] rf_difftest_io_rf_2_MPORT_addr; // @[regfile.scala 43:17]
  wire [31:0] rf_difftest_io_rf_2_MPORT_data; // @[regfile.scala 43:17]
  wire  rf_difftest_io_rf_3_MPORT_en; // @[regfile.scala 43:17]
  wire [4:0] rf_difftest_io_rf_3_MPORT_addr; // @[regfile.scala 43:17]
  wire [31:0] rf_difftest_io_rf_3_MPORT_data; // @[regfile.scala 43:17]
  wire  rf_difftest_io_rf_4_MPORT_en; // @[regfile.scala 43:17]
  wire [4:0] rf_difftest_io_rf_4_MPORT_addr; // @[regfile.scala 43:17]
  wire [31:0] rf_difftest_io_rf_4_MPORT_data; // @[regfile.scala 43:17]
  wire  rf_difftest_io_rf_5_MPORT_en; // @[regfile.scala 43:17]
  wire [4:0] rf_difftest_io_rf_5_MPORT_addr; // @[regfile.scala 43:17]
  wire [31:0] rf_difftest_io_rf_5_MPORT_data; // @[regfile.scala 43:17]
  wire  rf_difftest_io_rf_6_MPORT_en; // @[regfile.scala 43:17]
  wire [4:0] rf_difftest_io_rf_6_MPORT_addr; // @[regfile.scala 43:17]
  wire [31:0] rf_difftest_io_rf_6_MPORT_data; // @[regfile.scala 43:17]
  wire  rf_difftest_io_rf_7_MPORT_en; // @[regfile.scala 43:17]
  wire [4:0] rf_difftest_io_rf_7_MPORT_addr; // @[regfile.scala 43:17]
  wire [31:0] rf_difftest_io_rf_7_MPORT_data; // @[regfile.scala 43:17]
  wire  rf_difftest_io_rf_8_MPORT_en; // @[regfile.scala 43:17]
  wire [4:0] rf_difftest_io_rf_8_MPORT_addr; // @[regfile.scala 43:17]
  wire [31:0] rf_difftest_io_rf_8_MPORT_data; // @[regfile.scala 43:17]
  wire  rf_difftest_io_rf_9_MPORT_en; // @[regfile.scala 43:17]
  wire [4:0] rf_difftest_io_rf_9_MPORT_addr; // @[regfile.scala 43:17]
  wire [31:0] rf_difftest_io_rf_9_MPORT_data; // @[regfile.scala 43:17]
  wire  rf_difftest_io_rf_10_MPORT_en; // @[regfile.scala 43:17]
  wire [4:0] rf_difftest_io_rf_10_MPORT_addr; // @[regfile.scala 43:17]
  wire [31:0] rf_difftest_io_rf_10_MPORT_data; // @[regfile.scala 43:17]
  wire  rf_difftest_io_rf_11_MPORT_en; // @[regfile.scala 43:17]
  wire [4:0] rf_difftest_io_rf_11_MPORT_addr; // @[regfile.scala 43:17]
  wire [31:0] rf_difftest_io_rf_11_MPORT_data; // @[regfile.scala 43:17]
  wire  rf_difftest_io_rf_12_MPORT_en; // @[regfile.scala 43:17]
  wire [4:0] rf_difftest_io_rf_12_MPORT_addr; // @[regfile.scala 43:17]
  wire [31:0] rf_difftest_io_rf_12_MPORT_data; // @[regfile.scala 43:17]
  wire  rf_difftest_io_rf_13_MPORT_en; // @[regfile.scala 43:17]
  wire [4:0] rf_difftest_io_rf_13_MPORT_addr; // @[regfile.scala 43:17]
  wire [31:0] rf_difftest_io_rf_13_MPORT_data; // @[regfile.scala 43:17]
  wire  rf_difftest_io_rf_14_MPORT_en; // @[regfile.scala 43:17]
  wire [4:0] rf_difftest_io_rf_14_MPORT_addr; // @[regfile.scala 43:17]
  wire [31:0] rf_difftest_io_rf_14_MPORT_data; // @[regfile.scala 43:17]
  wire  rf_difftest_io_rf_15_MPORT_en; // @[regfile.scala 43:17]
  wire [4:0] rf_difftest_io_rf_15_MPORT_addr; // @[regfile.scala 43:17]
  wire [31:0] rf_difftest_io_rf_15_MPORT_data; // @[regfile.scala 43:17]
  wire  rf_difftest_io_rf_16_MPORT_en; // @[regfile.scala 43:17]
  wire [4:0] rf_difftest_io_rf_16_MPORT_addr; // @[regfile.scala 43:17]
  wire [31:0] rf_difftest_io_rf_16_MPORT_data; // @[regfile.scala 43:17]
  wire  rf_difftest_io_rf_17_MPORT_en; // @[regfile.scala 43:17]
  wire [4:0] rf_difftest_io_rf_17_MPORT_addr; // @[regfile.scala 43:17]
  wire [31:0] rf_difftest_io_rf_17_MPORT_data; // @[regfile.scala 43:17]
  wire  rf_difftest_io_rf_18_MPORT_en; // @[regfile.scala 43:17]
  wire [4:0] rf_difftest_io_rf_18_MPORT_addr; // @[regfile.scala 43:17]
  wire [31:0] rf_difftest_io_rf_18_MPORT_data; // @[regfile.scala 43:17]
  wire  rf_difftest_io_rf_19_MPORT_en; // @[regfile.scala 43:17]
  wire [4:0] rf_difftest_io_rf_19_MPORT_addr; // @[regfile.scala 43:17]
  wire [31:0] rf_difftest_io_rf_19_MPORT_data; // @[regfile.scala 43:17]
  wire  rf_difftest_io_rf_20_MPORT_en; // @[regfile.scala 43:17]
  wire [4:0] rf_difftest_io_rf_20_MPORT_addr; // @[regfile.scala 43:17]
  wire [31:0] rf_difftest_io_rf_20_MPORT_data; // @[regfile.scala 43:17]
  wire  rf_difftest_io_rf_21_MPORT_en; // @[regfile.scala 43:17]
  wire [4:0] rf_difftest_io_rf_21_MPORT_addr; // @[regfile.scala 43:17]
  wire [31:0] rf_difftest_io_rf_21_MPORT_data; // @[regfile.scala 43:17]
  wire  rf_difftest_io_rf_22_MPORT_en; // @[regfile.scala 43:17]
  wire [4:0] rf_difftest_io_rf_22_MPORT_addr; // @[regfile.scala 43:17]
  wire [31:0] rf_difftest_io_rf_22_MPORT_data; // @[regfile.scala 43:17]
  wire  rf_difftest_io_rf_23_MPORT_en; // @[regfile.scala 43:17]
  wire [4:0] rf_difftest_io_rf_23_MPORT_addr; // @[regfile.scala 43:17]
  wire [31:0] rf_difftest_io_rf_23_MPORT_data; // @[regfile.scala 43:17]
  wire  rf_difftest_io_rf_24_MPORT_en; // @[regfile.scala 43:17]
  wire [4:0] rf_difftest_io_rf_24_MPORT_addr; // @[regfile.scala 43:17]
  wire [31:0] rf_difftest_io_rf_24_MPORT_data; // @[regfile.scala 43:17]
  wire  rf_difftest_io_rf_25_MPORT_en; // @[regfile.scala 43:17]
  wire [4:0] rf_difftest_io_rf_25_MPORT_addr; // @[regfile.scala 43:17]
  wire [31:0] rf_difftest_io_rf_25_MPORT_data; // @[regfile.scala 43:17]
  wire  rf_difftest_io_rf_26_MPORT_en; // @[regfile.scala 43:17]
  wire [4:0] rf_difftest_io_rf_26_MPORT_addr; // @[regfile.scala 43:17]
  wire [31:0] rf_difftest_io_rf_26_MPORT_data; // @[regfile.scala 43:17]
  wire  rf_difftest_io_rf_27_MPORT_en; // @[regfile.scala 43:17]
  wire [4:0] rf_difftest_io_rf_27_MPORT_addr; // @[regfile.scala 43:17]
  wire [31:0] rf_difftest_io_rf_27_MPORT_data; // @[regfile.scala 43:17]
  wire  rf_difftest_io_rf_28_MPORT_en; // @[regfile.scala 43:17]
  wire [4:0] rf_difftest_io_rf_28_MPORT_addr; // @[regfile.scala 43:17]
  wire [31:0] rf_difftest_io_rf_28_MPORT_data; // @[regfile.scala 43:17]
  wire  rf_difftest_io_rf_29_MPORT_en; // @[regfile.scala 43:17]
  wire [4:0] rf_difftest_io_rf_29_MPORT_addr; // @[regfile.scala 43:17]
  wire [31:0] rf_difftest_io_rf_29_MPORT_data; // @[regfile.scala 43:17]
  wire  rf_difftest_io_rf_30_MPORT_en; // @[regfile.scala 43:17]
  wire [4:0] rf_difftest_io_rf_30_MPORT_addr; // @[regfile.scala 43:17]
  wire [31:0] rf_difftest_io_rf_30_MPORT_data; // @[regfile.scala 43:17]
  wire  rf_difftest_io_rf_31_MPORT_en; // @[regfile.scala 43:17]
  wire [4:0] rf_difftest_io_rf_31_MPORT_addr; // @[regfile.scala 43:17]
  wire [31:0] rf_difftest_io_rf_31_MPORT_data; // @[regfile.scala 43:17]
  wire [31:0] rf_MPORT_data; // @[regfile.scala 43:17]
  wire [4:0] rf_MPORT_addr; // @[regfile.scala 43:17]
  wire  rf_MPORT_mask; // @[regfile.scala 43:17]
  wire  rf_MPORT_en; // @[regfile.scala 43:17]
  wire [31:0] difftest_rf_0; // @[regfile.scala 49:26]
  wire [31:0] difftest_rf_1; // @[regfile.scala 49:26]
  wire [31:0] difftest_rf_2; // @[regfile.scala 49:26]
  wire [31:0] difftest_rf_3; // @[regfile.scala 49:26]
  wire [31:0] difftest_rf_4; // @[regfile.scala 49:26]
  wire [31:0] difftest_rf_5; // @[regfile.scala 49:26]
  wire [31:0] difftest_rf_6; // @[regfile.scala 49:26]
  wire [31:0] difftest_rf_7; // @[regfile.scala 49:26]
  wire [31:0] difftest_rf_8; // @[regfile.scala 49:26]
  wire [31:0] difftest_rf_9; // @[regfile.scala 49:26]
  wire [31:0] difftest_rf_10; // @[regfile.scala 49:26]
  wire [31:0] difftest_rf_11; // @[regfile.scala 49:26]
  wire [31:0] difftest_rf_12; // @[regfile.scala 49:26]
  wire [31:0] difftest_rf_13; // @[regfile.scala 49:26]
  wire [31:0] difftest_rf_14; // @[regfile.scala 49:26]
  wire [31:0] difftest_rf_15; // @[regfile.scala 49:26]
  wire [31:0] difftest_rf_16; // @[regfile.scala 49:26]
  wire [31:0] difftest_rf_17; // @[regfile.scala 49:26]
  wire [31:0] difftest_rf_18; // @[regfile.scala 49:26]
  wire [31:0] difftest_rf_19; // @[regfile.scala 49:26]
  wire [31:0] difftest_rf_20; // @[regfile.scala 49:26]
  wire [31:0] difftest_rf_21; // @[regfile.scala 49:26]
  wire [31:0] difftest_rf_22; // @[regfile.scala 49:26]
  wire [31:0] difftest_rf_23; // @[regfile.scala 49:26]
  wire [31:0] difftest_rf_24; // @[regfile.scala 49:26]
  wire [31:0] difftest_rf_25; // @[regfile.scala 49:26]
  wire [31:0] difftest_rf_26; // @[regfile.scala 49:26]
  wire [31:0] difftest_rf_27; // @[regfile.scala 49:26]
  wire [31:0] difftest_rf_28; // @[regfile.scala 49:26]
  wire [31:0] difftest_rf_29; // @[regfile.scala 49:26]
  wire [31:0] difftest_rf_30; // @[regfile.scala 49:26]
  wire [31:0] difftest_rf_31; // @[regfile.scala 49:26]
  wire [31:0] difftest_crmd; // @[regfile.scala 49:26]
  wire [31:0] difftest_prmd; // @[regfile.scala 49:26]
  wire [31:0] difftest_estat; // @[regfile.scala 49:26]
  wire [31:0] difftest_era; // @[regfile.scala 49:26]
  wire [31:0] difftest_eentry; // @[regfile.scala 49:26]
  wire  npc_brk_is_break; // @[regfile.scala 60:25]
  wire  inst_exec_once_clock; // @[regfile.scala 63:32]
  wire  inst_exec_once_valid; // @[regfile.scala 63:32]
  wire [31:0] inst_exec_once_inst; // @[regfile.scala 63:32]
  wire [31:0] inst_exec_once_pc; // @[regfile.scala 63:32]
  wire  inst_exec_once_inv; // @[regfile.scala 63:32]
  wire  inst_exec_once_ex; // @[regfile.scala 63:32]
  wire  inst_exec_once_ertn; // @[regfile.scala 63:32]
  wire [5:0] inst_exec_once_ecode; // @[regfile.scala 63:32]
  wire [8:0] inst_exec_once_esubcode; // @[regfile.scala 63:32]
  wire [31:0] inst_exec_once_ex_pc; // @[regfile.scala 63:32]
  Difftest difftest ( // @[regfile.scala 49:26]
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
    .rf_31(difftest_rf_31),
    .crmd(difftest_crmd),
    .prmd(difftest_prmd),
    .estat(difftest_estat),
    .era(difftest_era),
    .eentry(difftest_eentry)
  );
  npc_break npc_brk ( // @[regfile.scala 60:25]
    .is_break(npc_brk_is_break)
  );
  Exec inst_exec_once ( // @[regfile.scala 63:32]
    .clock(inst_exec_once_clock),
    .valid(inst_exec_once_valid),
    .inst(inst_exec_once_inst),
    .pc(inst_exec_once_pc),
    .inv(inst_exec_once_inv),
    .ex(inst_exec_once_ex),
    .ertn(inst_exec_once_ertn),
    .ecode(inst_exec_once_ecode),
    .esubcode(inst_exec_once_esubcode),
    .ex_pc(inst_exec_once_ex_pc)
  );
  assign rf_io_rdata1_MPORT_en = 1'h1;
  assign rf_io_rdata1_MPORT_addr = io_raddr1;
  assign rf_io_rdata1_MPORT_data = rf[rf_io_rdata1_MPORT_addr]; // @[regfile.scala 43:17]
  assign rf_io_rdata2_MPORT_en = 1'h1;
  assign rf_io_rdata2_MPORT_addr = io_raddr2;
  assign rf_io_rdata2_MPORT_data = rf[rf_io_rdata2_MPORT_addr]; // @[regfile.scala 43:17]
  assign rf_difftest_io_rf_1_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_1_MPORT_addr = 5'h1;
  assign rf_difftest_io_rf_1_MPORT_data = rf[rf_difftest_io_rf_1_MPORT_addr]; // @[regfile.scala 43:17]
  assign rf_difftest_io_rf_2_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_2_MPORT_addr = 5'h2;
  assign rf_difftest_io_rf_2_MPORT_data = rf[rf_difftest_io_rf_2_MPORT_addr]; // @[regfile.scala 43:17]
  assign rf_difftest_io_rf_3_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_3_MPORT_addr = 5'h3;
  assign rf_difftest_io_rf_3_MPORT_data = rf[rf_difftest_io_rf_3_MPORT_addr]; // @[regfile.scala 43:17]
  assign rf_difftest_io_rf_4_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_4_MPORT_addr = 5'h4;
  assign rf_difftest_io_rf_4_MPORT_data = rf[rf_difftest_io_rf_4_MPORT_addr]; // @[regfile.scala 43:17]
  assign rf_difftest_io_rf_5_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_5_MPORT_addr = 5'h5;
  assign rf_difftest_io_rf_5_MPORT_data = rf[rf_difftest_io_rf_5_MPORT_addr]; // @[regfile.scala 43:17]
  assign rf_difftest_io_rf_6_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_6_MPORT_addr = 5'h6;
  assign rf_difftest_io_rf_6_MPORT_data = rf[rf_difftest_io_rf_6_MPORT_addr]; // @[regfile.scala 43:17]
  assign rf_difftest_io_rf_7_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_7_MPORT_addr = 5'h7;
  assign rf_difftest_io_rf_7_MPORT_data = rf[rf_difftest_io_rf_7_MPORT_addr]; // @[regfile.scala 43:17]
  assign rf_difftest_io_rf_8_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_8_MPORT_addr = 5'h8;
  assign rf_difftest_io_rf_8_MPORT_data = rf[rf_difftest_io_rf_8_MPORT_addr]; // @[regfile.scala 43:17]
  assign rf_difftest_io_rf_9_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_9_MPORT_addr = 5'h9;
  assign rf_difftest_io_rf_9_MPORT_data = rf[rf_difftest_io_rf_9_MPORT_addr]; // @[regfile.scala 43:17]
  assign rf_difftest_io_rf_10_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_10_MPORT_addr = 5'ha;
  assign rf_difftest_io_rf_10_MPORT_data = rf[rf_difftest_io_rf_10_MPORT_addr]; // @[regfile.scala 43:17]
  assign rf_difftest_io_rf_11_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_11_MPORT_addr = 5'hb;
  assign rf_difftest_io_rf_11_MPORT_data = rf[rf_difftest_io_rf_11_MPORT_addr]; // @[regfile.scala 43:17]
  assign rf_difftest_io_rf_12_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_12_MPORT_addr = 5'hc;
  assign rf_difftest_io_rf_12_MPORT_data = rf[rf_difftest_io_rf_12_MPORT_addr]; // @[regfile.scala 43:17]
  assign rf_difftest_io_rf_13_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_13_MPORT_addr = 5'hd;
  assign rf_difftest_io_rf_13_MPORT_data = rf[rf_difftest_io_rf_13_MPORT_addr]; // @[regfile.scala 43:17]
  assign rf_difftest_io_rf_14_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_14_MPORT_addr = 5'he;
  assign rf_difftest_io_rf_14_MPORT_data = rf[rf_difftest_io_rf_14_MPORT_addr]; // @[regfile.scala 43:17]
  assign rf_difftest_io_rf_15_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_15_MPORT_addr = 5'hf;
  assign rf_difftest_io_rf_15_MPORT_data = rf[rf_difftest_io_rf_15_MPORT_addr]; // @[regfile.scala 43:17]
  assign rf_difftest_io_rf_16_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_16_MPORT_addr = 5'h10;
  assign rf_difftest_io_rf_16_MPORT_data = rf[rf_difftest_io_rf_16_MPORT_addr]; // @[regfile.scala 43:17]
  assign rf_difftest_io_rf_17_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_17_MPORT_addr = 5'h11;
  assign rf_difftest_io_rf_17_MPORT_data = rf[rf_difftest_io_rf_17_MPORT_addr]; // @[regfile.scala 43:17]
  assign rf_difftest_io_rf_18_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_18_MPORT_addr = 5'h12;
  assign rf_difftest_io_rf_18_MPORT_data = rf[rf_difftest_io_rf_18_MPORT_addr]; // @[regfile.scala 43:17]
  assign rf_difftest_io_rf_19_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_19_MPORT_addr = 5'h13;
  assign rf_difftest_io_rf_19_MPORT_data = rf[rf_difftest_io_rf_19_MPORT_addr]; // @[regfile.scala 43:17]
  assign rf_difftest_io_rf_20_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_20_MPORT_addr = 5'h14;
  assign rf_difftest_io_rf_20_MPORT_data = rf[rf_difftest_io_rf_20_MPORT_addr]; // @[regfile.scala 43:17]
  assign rf_difftest_io_rf_21_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_21_MPORT_addr = 5'h15;
  assign rf_difftest_io_rf_21_MPORT_data = rf[rf_difftest_io_rf_21_MPORT_addr]; // @[regfile.scala 43:17]
  assign rf_difftest_io_rf_22_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_22_MPORT_addr = 5'h16;
  assign rf_difftest_io_rf_22_MPORT_data = rf[rf_difftest_io_rf_22_MPORT_addr]; // @[regfile.scala 43:17]
  assign rf_difftest_io_rf_23_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_23_MPORT_addr = 5'h17;
  assign rf_difftest_io_rf_23_MPORT_data = rf[rf_difftest_io_rf_23_MPORT_addr]; // @[regfile.scala 43:17]
  assign rf_difftest_io_rf_24_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_24_MPORT_addr = 5'h18;
  assign rf_difftest_io_rf_24_MPORT_data = rf[rf_difftest_io_rf_24_MPORT_addr]; // @[regfile.scala 43:17]
  assign rf_difftest_io_rf_25_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_25_MPORT_addr = 5'h19;
  assign rf_difftest_io_rf_25_MPORT_data = rf[rf_difftest_io_rf_25_MPORT_addr]; // @[regfile.scala 43:17]
  assign rf_difftest_io_rf_26_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_26_MPORT_addr = 5'h1a;
  assign rf_difftest_io_rf_26_MPORT_data = rf[rf_difftest_io_rf_26_MPORT_addr]; // @[regfile.scala 43:17]
  assign rf_difftest_io_rf_27_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_27_MPORT_addr = 5'h1b;
  assign rf_difftest_io_rf_27_MPORT_data = rf[rf_difftest_io_rf_27_MPORT_addr]; // @[regfile.scala 43:17]
  assign rf_difftest_io_rf_28_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_28_MPORT_addr = 5'h1c;
  assign rf_difftest_io_rf_28_MPORT_data = rf[rf_difftest_io_rf_28_MPORT_addr]; // @[regfile.scala 43:17]
  assign rf_difftest_io_rf_29_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_29_MPORT_addr = 5'h1d;
  assign rf_difftest_io_rf_29_MPORT_data = rf[rf_difftest_io_rf_29_MPORT_addr]; // @[regfile.scala 43:17]
  assign rf_difftest_io_rf_30_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_30_MPORT_addr = 5'h1e;
  assign rf_difftest_io_rf_30_MPORT_data = rf[rf_difftest_io_rf_30_MPORT_addr]; // @[regfile.scala 43:17]
  assign rf_difftest_io_rf_31_MPORT_en = 1'h1;
  assign rf_difftest_io_rf_31_MPORT_addr = 5'h1f;
  assign rf_difftest_io_rf_31_MPORT_data = rf[rf_difftest_io_rf_31_MPORT_addr]; // @[regfile.scala 43:17]
  assign rf_MPORT_data = io_wdata;
  assign rf_MPORT_addr = io_waddr;
  assign rf_MPORT_mask = 1'h1;
  assign rf_MPORT_en = io_wen;
  assign io_rdata1 = io_raddr1 == 5'h0 ? 32'h0 : rf_io_rdata1_MPORT_data; // @[regfile.scala 45:21]
  assign io_rdata2 = io_raddr2 == 5'h0 ? 32'h0 : rf_io_rdata2_MPORT_data; // @[regfile.scala 46:21]
  assign difftest_rf_0 = 32'h0; // @[regfile.scala 50:23]
  assign difftest_rf_1 = 5'h1 == io_waddr & io_wen ? io_wdata : rf_difftest_io_rf_1_MPORT_data; // @[regfile.scala 52:33]
  assign difftest_rf_2 = 5'h2 == io_waddr & io_wen ? io_wdata : rf_difftest_io_rf_2_MPORT_data; // @[regfile.scala 52:33]
  assign difftest_rf_3 = 5'h3 == io_waddr & io_wen ? io_wdata : rf_difftest_io_rf_3_MPORT_data; // @[regfile.scala 52:33]
  assign difftest_rf_4 = 5'h4 == io_waddr & io_wen ? io_wdata : rf_difftest_io_rf_4_MPORT_data; // @[regfile.scala 52:33]
  assign difftest_rf_5 = 5'h5 == io_waddr & io_wen ? io_wdata : rf_difftest_io_rf_5_MPORT_data; // @[regfile.scala 52:33]
  assign difftest_rf_6 = 5'h6 == io_waddr & io_wen ? io_wdata : rf_difftest_io_rf_6_MPORT_data; // @[regfile.scala 52:33]
  assign difftest_rf_7 = 5'h7 == io_waddr & io_wen ? io_wdata : rf_difftest_io_rf_7_MPORT_data; // @[regfile.scala 52:33]
  assign difftest_rf_8 = 5'h8 == io_waddr & io_wen ? io_wdata : rf_difftest_io_rf_8_MPORT_data; // @[regfile.scala 52:33]
  assign difftest_rf_9 = 5'h9 == io_waddr & io_wen ? io_wdata : rf_difftest_io_rf_9_MPORT_data; // @[regfile.scala 52:33]
  assign difftest_rf_10 = 5'ha == io_waddr & io_wen ? io_wdata : rf_difftest_io_rf_10_MPORT_data; // @[regfile.scala 52:33]
  assign difftest_rf_11 = 5'hb == io_waddr & io_wen ? io_wdata : rf_difftest_io_rf_11_MPORT_data; // @[regfile.scala 52:33]
  assign difftest_rf_12 = 5'hc == io_waddr & io_wen ? io_wdata : rf_difftest_io_rf_12_MPORT_data; // @[regfile.scala 52:33]
  assign difftest_rf_13 = 5'hd == io_waddr & io_wen ? io_wdata : rf_difftest_io_rf_13_MPORT_data; // @[regfile.scala 52:33]
  assign difftest_rf_14 = 5'he == io_waddr & io_wen ? io_wdata : rf_difftest_io_rf_14_MPORT_data; // @[regfile.scala 52:33]
  assign difftest_rf_15 = 5'hf == io_waddr & io_wen ? io_wdata : rf_difftest_io_rf_15_MPORT_data; // @[regfile.scala 52:33]
  assign difftest_rf_16 = 5'h10 == io_waddr & io_wen ? io_wdata : rf_difftest_io_rf_16_MPORT_data; // @[regfile.scala 52:33]
  assign difftest_rf_17 = 5'h11 == io_waddr & io_wen ? io_wdata : rf_difftest_io_rf_17_MPORT_data; // @[regfile.scala 52:33]
  assign difftest_rf_18 = 5'h12 == io_waddr & io_wen ? io_wdata : rf_difftest_io_rf_18_MPORT_data; // @[regfile.scala 52:33]
  assign difftest_rf_19 = 5'h13 == io_waddr & io_wen ? io_wdata : rf_difftest_io_rf_19_MPORT_data; // @[regfile.scala 52:33]
  assign difftest_rf_20 = 5'h14 == io_waddr & io_wen ? io_wdata : rf_difftest_io_rf_20_MPORT_data; // @[regfile.scala 52:33]
  assign difftest_rf_21 = 5'h15 == io_waddr & io_wen ? io_wdata : rf_difftest_io_rf_21_MPORT_data; // @[regfile.scala 52:33]
  assign difftest_rf_22 = 5'h16 == io_waddr & io_wen ? io_wdata : rf_difftest_io_rf_22_MPORT_data; // @[regfile.scala 52:33]
  assign difftest_rf_23 = 5'h17 == io_waddr & io_wen ? io_wdata : rf_difftest_io_rf_23_MPORT_data; // @[regfile.scala 52:33]
  assign difftest_rf_24 = 5'h18 == io_waddr & io_wen ? io_wdata : rf_difftest_io_rf_24_MPORT_data; // @[regfile.scala 52:33]
  assign difftest_rf_25 = 5'h19 == io_waddr & io_wen ? io_wdata : rf_difftest_io_rf_25_MPORT_data; // @[regfile.scala 52:33]
  assign difftest_rf_26 = 5'h1a == io_waddr & io_wen ? io_wdata : rf_difftest_io_rf_26_MPORT_data; // @[regfile.scala 52:33]
  assign difftest_rf_27 = 5'h1b == io_waddr & io_wen ? io_wdata : rf_difftest_io_rf_27_MPORT_data; // @[regfile.scala 52:33]
  assign difftest_rf_28 = 5'h1c == io_waddr & io_wen ? io_wdata : rf_difftest_io_rf_28_MPORT_data; // @[regfile.scala 52:33]
  assign difftest_rf_29 = 5'h1d == io_waddr & io_wen ? io_wdata : rf_difftest_io_rf_29_MPORT_data; // @[regfile.scala 52:33]
  assign difftest_rf_30 = 5'h1e == io_waddr & io_wen ? io_wdata : rf_difftest_io_rf_30_MPORT_data; // @[regfile.scala 52:33]
  assign difftest_rf_31 = 5'h1f == io_waddr & io_wen ? io_wdata : rf_difftest_io_rf_31_MPORT_data; // @[regfile.scala 52:33]
  assign difftest_crmd = io_csr_crmd; // @[regfile.scala 54:22]
  assign difftest_prmd = io_csr_prmd; // @[regfile.scala 55:22]
  assign difftest_estat = io_csr_estat; // @[regfile.scala 56:23]
  assign difftest_era = io_csr_era; // @[regfile.scala 57:21]
  assign difftest_eentry = io_csr_eentry; // @[regfile.scala 58:24]
  assign npc_brk_is_break = io_is_break; // @[regfile.scala 61:25]
  assign inst_exec_once_clock = clock; // @[regfile.scala 64:29]
  assign inst_exec_once_valid = io_valid; // @[regfile.scala 65:29]
  assign inst_exec_once_inst = io_inst; // @[regfile.scala 66:28]
  assign inst_exec_once_pc = io_rf_pc; // @[regfile.scala 67:26]
  assign inst_exec_once_inv = io_inv; // @[regfile.scala 68:27]
  assign inst_exec_once_ex = io_csr_ex; // @[regfile.scala 69:26]
  assign inst_exec_once_ertn = io_csr_ertn; // @[regfile.scala 70:28]
  assign inst_exec_once_ecode = io_csr_ecode; // @[regfile.scala 71:29]
  assign inst_exec_once_esubcode = 9'h0; // @[regfile.scala 72:32]
  assign inst_exec_once_ex_pc = io_csr_ex_pc; // @[regfile.scala 73:29]
  always @(posedge clock) begin
    if (rf_MPORT_en & rf_MPORT_mask) begin
      rf[rf_MPORT_addr] <= rf_MPORT_data; // @[regfile.scala 43:17]
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
module CLA(
  input  [15:0] in_a,
  input  [15:0] in_b,
  input         in_cin,
  output [15:0] out_s,
  output        out_cout
);
  wire [3:0] g_2 = in_a[7:4] & in_b[7:4]; // @[Adder.scala 39:43]
  wire [3:0] p_2 = in_a[7:4] ^ in_b[7:4]; // @[Adder.scala 40:43]
  wire  g__1 = g_2[3] | g_2[2] & p_2[3] | g_2[1] & &p_2[3:2] | g_2[0] & &p_2[3:1]; // @[Adder.scala 27:67]
  wire [3:0] g_1 = in_a[3:0] & in_b[3:0]; // @[Adder.scala 39:43]
  wire [3:0] p_1 = in_a[3:0] ^ in_b[3:0]; // @[Adder.scala 40:43]
  wire  g__0 = g_1[3] | g_1[2] & p_1[3] | g_1[1] & &p_1[3:2] | g_1[0] & &p_1[3:1]; // @[Adder.scala 27:67]
  wire [3:0] g_4 = in_a[15:12] & in_b[15:12]; // @[Adder.scala 39:43]
  wire [3:0] p_4 = in_a[15:12] ^ in_b[15:12]; // @[Adder.scala 40:43]
  wire  g__3 = g_4[3] | g_4[2] & p_4[3] | g_4[1] & &p_4[3:2] | g_4[0] & &p_4[3:1]; // @[Adder.scala 27:67]
  wire [3:0] g_3 = in_a[11:8] & in_b[11:8]; // @[Adder.scala 39:43]
  wire [3:0] p_3 = in_a[11:8] ^ in_b[11:8]; // @[Adder.scala 40:43]
  wire  g__2 = g_3[3] | g_3[2] & p_3[3] | g_3[1] & &p_3[3:2] | g_3[0] & &p_3[3:1]; // @[Adder.scala 27:67]
  wire [3:0] _c_T = {g__3,g__2,g__1,g__0}; // @[Adder.scala 50:47]
  wire  p__1 = &p_2; // @[Adder.scala 28:25]
  wire  p__0 = &p_1; // @[Adder.scala 28:25]
  wire  p__3 = &p_4; // @[Adder.scala 28:25]
  wire  p__2 = &p_3; // @[Adder.scala 28:25]
  wire [3:0] _c_T_1 = {p__3,p__2,p__1,p__0}; // @[Adder.scala 50:57]
  wire  _c_T_16 = _c_T[3] | _c_T[2] & _c_T_1[3] | _c_T[1] & &_c_T_1[3:2] | _c_T[0] & &_c_T_1[3:1]; // @[Adder.scala 27:67]
  wire  _c_T_17 = &_c_T_1; // @[Adder.scala 28:25]
  wire  c_carry__1 = _c_T[0] | in_cin & _c_T_1[0]; // @[Adder.scala 32:57]
  wire  c_carry__2 = _c_T[1] | c_carry__1 & _c_T_1[1]; // @[Adder.scala 32:57]
  wire  c_carry__3 = _c_T[2] | c_carry__2 & _c_T_1[2]; // @[Adder.scala 32:57]
  wire [3:0] c = {c_carry__3,c_carry__2,c_carry__1,in_cin}; // @[Adder.scala 33:23]
  wire  c_carry_1_0 = c[0]; // @[Adder.scala 51:94]
  wire  c_carry_1_1 = g_1[0] | c_carry_1_0 & p_1[0]; // @[Adder.scala 32:57]
  wire  c_carry_1_2 = g_1[1] | c_carry_1_1 & p_1[1]; // @[Adder.scala 32:57]
  wire  c_carry_1_3 = g_1[2] | c_carry_1_2 & p_1[2]; // @[Adder.scala 32:57]
  wire [3:0] c_1 = {c_carry_1_3,c_carry_1_2,c_carry_1_1,c_carry_1_0}; // @[Adder.scala 33:23]
  wire [3:0] sum_0 = p_1 ^ c_1; // @[Adder.scala 42:40]
  wire  c_carry_2_0 = c[1]; // @[Adder.scala 51:94]
  wire  c_carry_2_1 = g_2[0] | c_carry_2_0 & p_2[0]; // @[Adder.scala 32:57]
  wire  c_carry_2_2 = g_2[1] | c_carry_2_1 & p_2[1]; // @[Adder.scala 32:57]
  wire  c_carry_2_3 = g_2[2] | c_carry_2_2 & p_2[2]; // @[Adder.scala 32:57]
  wire [3:0] c_2 = {c_carry_2_3,c_carry_2_2,c_carry_2_1,c_carry_2_0}; // @[Adder.scala 33:23]
  wire [3:0] sum_1 = p_2 ^ c_2; // @[Adder.scala 42:40]
  wire  c_carry_3_0 = c[2]; // @[Adder.scala 51:94]
  wire  c_carry_3_1 = g_3[0] | c_carry_3_0 & p_3[0]; // @[Adder.scala 32:57]
  wire  c_carry_3_2 = g_3[1] | c_carry_3_1 & p_3[1]; // @[Adder.scala 32:57]
  wire  c_carry_3_3 = g_3[2] | c_carry_3_2 & p_3[2]; // @[Adder.scala 32:57]
  wire [3:0] c_3 = {c_carry_3_3,c_carry_3_2,c_carry_3_1,c_carry_3_0}; // @[Adder.scala 33:23]
  wire [3:0] sum_2 = p_3 ^ c_3; // @[Adder.scala 42:40]
  wire  c_carry_4_0 = c[3]; // @[Adder.scala 51:94]
  wire  c_carry_4_1 = g_4[0] | c_carry_4_0 & p_4[0]; // @[Adder.scala 32:57]
  wire  c_carry_4_2 = g_4[1] | c_carry_4_1 & p_4[1]; // @[Adder.scala 32:57]
  wire  c_carry_4_3 = g_4[2] | c_carry_4_2 & p_4[2]; // @[Adder.scala 32:57]
  wire [3:0] c_4 = {c_carry_4_3,c_carry_4_2,c_carry_4_1,c_carry_4_0}; // @[Adder.scala 33:23]
  wire [3:0] sum_3 = p_4 ^ c_4; // @[Adder.scala 42:40]
  wire [7:0] out_s_lo = {sum_1,sum_0}; // @[Adder.scala 52:42]
  wire [7:0] out_s_hi = {sum_3,sum_2}; // @[Adder.scala 52:42]
  assign out_s = {out_s_hi,out_s_lo}; // @[Adder.scala 52:42]
  assign out_cout = _c_T_16 | in_cin & _c_T_17; // @[Adder.scala 29:26]
endmodule
module Adder(
  input  [31:0] in_a,
  input  [31:0] in_b,
  input         in_cin,
  output [31:0] out_s,
  output        out_cout
);
  wire [15:0] add_0_in_a; // @[Adder.scala 75:46]
  wire [15:0] add_0_in_b; // @[Adder.scala 75:46]
  wire  add_0_in_cin; // @[Adder.scala 75:46]
  wire [15:0] add_0_out_s; // @[Adder.scala 75:46]
  wire  add_0_out_cout; // @[Adder.scala 75:46]
  wire [15:0] add_1_in_a; // @[Adder.scala 75:46]
  wire [15:0] add_1_in_b; // @[Adder.scala 75:46]
  wire  add_1_in_cin; // @[Adder.scala 75:46]
  wire [15:0] add_1_out_s; // @[Adder.scala 75:46]
  wire  add_1_out_cout; // @[Adder.scala 75:46]
  CLA add_0 ( // @[Adder.scala 75:46]
    .in_a(add_0_in_a),
    .in_b(add_0_in_b),
    .in_cin(add_0_in_cin),
    .out_s(add_0_out_s),
    .out_cout(add_0_out_cout)
  );
  CLA add_1 ( // @[Adder.scala 75:46]
    .in_a(add_1_in_a),
    .in_b(add_1_in_b),
    .in_cin(add_1_in_cin),
    .out_s(add_1_out_s),
    .out_cout(add_1_out_cout)
  );
  assign out_s = {add_1_out_s,add_0_out_s}; // @[Cat.scala 33:92]
  assign out_cout = add_1_out_cout; // @[Adder.scala 83:26]
  assign add_0_in_a = in_a[15:0]; // @[Adder.scala 76:36]
  assign add_0_in_b = in_b[15:0]; // @[Adder.scala 77:36]
  assign add_0_in_cin = in_cin; // @[Adder.scala 78:31]
  assign add_1_in_a = in_a[31:16]; // @[Adder.scala 79:36]
  assign add_1_in_b = in_b[31:16]; // @[Adder.scala 80:36]
  assign add_1_in_cin = add_0_out_cout; // @[Adder.scala 81:31]
endmodule
module ID_stage(
  input         clock,
  output        toes_valid,
  output [31:0] toes_bits_pc,
  output [31:0] toes_bits_alu_src1,
  output [31:0] toes_bits_alu_src2,
  output [4:0]  toes_bits_alu_op,
  output [4:0]  toes_bits_rf_waddr,
  output        toes_bits_rf_we,
  output [1:0]  toes_bits_mem_we,
  output [4:0]  toes_bits_inst_name,
  output [31:0] toes_bits_mem_wdata,
  output [13:0] toes_bits_csr_num,
  output        toes_bits_csr_we,
  output        toes_bits_ex,
  output        toes_bits_ertn,
  output [31:0] toes_bits_csr_wmask,
  output        toes_bits_dpi_c_is_break,
  output [31:0] toes_bits_dpi_c_inst,
  output [31:0] toes_bits_dpi_c_next_pc,
  output        toes_bits_dpi_c_inv,
  input         ds_valid,
  input  [31:0] ds_bits_pc,
  input  [31:0] ds_bits_inst,
  input  [31:0] ds_bits_next_pc,
  input         torf_rf_we,
  input  [4:0]  torf_rf_waddr,
  input  [31:0] torf_rf_wdata,
  input         torf_valid,
  input         torf_dpi_c_is_break,
  input  [31:0] torf_dpi_c_inst,
  input  [31:0] torf_dpi_c_next_pc,
  input         torf_dpi_c_inv,
  input         torf_dpi_c_csr_ex,
  input         torf_dpi_c_csr_ertn,
  input  [5:0]  torf_dpi_c_csr_ecode,
  input  [31:0] torf_dpi_c_csr_ex_pc,
  input  [31:0] torf_dpi_c_csr_crmd,
  input  [31:0] torf_dpi_c_csr_prmd,
  input  [31:0] torf_dpi_c_csr_estat,
  input  [31:0] torf_dpi_c_csr_era,
  input  [31:0] torf_dpi_c_csr_eentry,
  output        br_taken,
  output [31:0] br_target
);
  wire  reg__clock; // @[ID_stage.scala 55:21]
  wire [4:0] reg__io_raddr1; // @[ID_stage.scala 55:21]
  wire [4:0] reg__io_raddr2; // @[ID_stage.scala 55:21]
  wire [31:0] reg__io_rdata1; // @[ID_stage.scala 55:21]
  wire [31:0] reg__io_rdata2; // @[ID_stage.scala 55:21]
  wire [4:0] reg__io_waddr; // @[ID_stage.scala 55:21]
  wire [31:0] reg__io_wdata; // @[ID_stage.scala 55:21]
  wire  reg__io_wen; // @[ID_stage.scala 55:21]
  wire [31:0] reg__io_rf_pc; // @[ID_stage.scala 55:21]
  wire  reg__io_is_break; // @[ID_stage.scala 55:21]
  wire  reg__io_valid; // @[ID_stage.scala 55:21]
  wire [31:0] reg__io_inst; // @[ID_stage.scala 55:21]
  wire  reg__io_inv; // @[ID_stage.scala 55:21]
  wire  reg__io_csr_ex; // @[ID_stage.scala 55:21]
  wire  reg__io_csr_ertn; // @[ID_stage.scala 55:21]
  wire [5:0] reg__io_csr_ecode; // @[ID_stage.scala 55:21]
  wire [31:0] reg__io_csr_ex_pc; // @[ID_stage.scala 55:21]
  wire [31:0] reg__io_csr_crmd; // @[ID_stage.scala 55:21]
  wire [31:0] reg__io_csr_prmd; // @[ID_stage.scala 55:21]
  wire [31:0] reg__io_csr_estat; // @[ID_stage.scala 55:21]
  wire [31:0] reg__io_csr_era; // @[ID_stage.scala 55:21]
  wire [31:0] reg__io_csr_eentry; // @[ID_stage.scala 55:21]
  wire [31:0] _rj_sub_rd_adder__in_a; // @[Adder.scala 98:37]
  wire [31:0] _rj_sub_rd_adder__in_b; // @[Adder.scala 98:37]
  wire  _rj_sub_rd_adder__in_cin; // @[Adder.scala 98:37]
  wire [31:0] _rj_sub_rd_adder__out_s; // @[Adder.scala 98:37]
  wire  _rj_sub_rd_adder__out_cout; // @[Adder.scala 98:37]
  wire [31:0] br_target_adder__in_a; // @[Adder.scala 106:36]
  wire [31:0] br_target_adder__in_b; // @[Adder.scala 106:36]
  wire  br_target_adder__in_cin; // @[Adder.scala 106:36]
  wire [31:0] br_target_adder__out_s; // @[Adder.scala 106:36]
  wire  br_target_adder__out_cout; // @[Adder.scala 106:36]
  wire [4:0] rj = ds_bits_inst[9:5]; // @[ID_stage.scala 19:18]
  wire [4:0] rd = ds_bits_inst[4:0]; // @[ID_stage.scala 20:18]
  wire [4:0] imm5 = ds_bits_inst[14:10]; // @[ID_stage.scala 21:18]
  wire [11:0] imm12u = ds_bits_inst[21:10]; // @[ID_stage.scala 23:22]
  wire [11:0] _imm12_sign_T = ds_bits_inst[21:10]; // @[tool.scala 8:22]
  wire [31:0] imm12 = {{20{_imm12_sign_T[11]}},_imm12_sign_T}; // @[tool.scala 9:14]
  wire [17:0] _imm16_sign_T = {ds_bits_inst[25:10],2'h0}; // @[tool.scala 8:22]
  wire [31:0] imm16 = {{14{_imm16_sign_T[17]}},_imm16_sign_T}; // @[tool.scala 9:14]
  wire [31:0] imm20u = {ds_bits_inst[24:5],12'h0}; // @[Cat.scala 33:92]
  wire [31:0] imm20 = {ds_bits_inst[24:5],12'h0}; // @[tool.scala 9:14]
  wire [27:0] _imm26_sign_T = {rj,rd,ds_bits_inst[25:10],2'h0}; // @[tool.scala 8:22]
  wire [31:0] imm26 = {{4{_imm26_sign_T[27]}},_imm26_sign_T}; // @[tool.scala 9:14]
  wire [31:0] decode_res_invInputs = ~ds_bits_inst; // @[pla.scala 78:21]
  wire  decode_res_andMatrixInput_0 = decode_res_invInputs[15]; // @[pla.scala 91:29]
  wire  decode_res_andMatrixInput_1 = decode_res_invInputs[16]; // @[pla.scala 91:29]
  wire  decode_res_andMatrixInput_2 = decode_res_invInputs[17]; // @[pla.scala 91:29]
  wire  decode_res_andMatrixInput_3 = ds_bits_inst[20]; // @[pla.scala 90:45]
  wire  decode_res_andMatrixInput_4 = decode_res_invInputs[21]; // @[pla.scala 91:29]
  wire  decode_res_andMatrixInput_5 = decode_res_invInputs[22]; // @[pla.scala 91:29]
  wire  decode_res_andMatrixInput_6 = decode_res_invInputs[23]; // @[pla.scala 91:29]
  wire  decode_res_andMatrixInput_7 = decode_res_invInputs[24]; // @[pla.scala 91:29]
  wire  decode_res_andMatrixInput_8 = decode_res_invInputs[25]; // @[pla.scala 91:29]
  wire  decode_res_andMatrixInput_9 = decode_res_invInputs[26]; // @[pla.scala 91:29]
  wire  decode_res_andMatrixInput_10 = decode_res_invInputs[27]; // @[pla.scala 91:29]
  wire  decode_res_andMatrixInput_11 = decode_res_invInputs[28]; // @[pla.scala 91:29]
  wire  decode_res_andMatrixInput_12 = decode_res_invInputs[29]; // @[pla.scala 91:29]
  wire  decode_res_andMatrixInput_13 = decode_res_invInputs[30]; // @[pla.scala 91:29]
  wire  decode_res_andMatrixInput_14 = decode_res_invInputs[31]; // @[pla.scala 91:29]
  wire [6:0] decode_res_lo = {decode_res_andMatrixInput_8,decode_res_andMatrixInput_9,decode_res_andMatrixInput_10,
    decode_res_andMatrixInput_11,decode_res_andMatrixInput_12,decode_res_andMatrixInput_13,decode_res_andMatrixInput_14}
    ; // @[Cat.scala 33:92]
  wire [14:0] _decode_res_T = {decode_res_andMatrixInput_0,decode_res_andMatrixInput_1,decode_res_andMatrixInput_2,
    decode_res_andMatrixInput_3,decode_res_andMatrixInput_4,decode_res_andMatrixInput_5,decode_res_andMatrixInput_6,
    decode_res_andMatrixInput_7,decode_res_lo}; // @[Cat.scala 33:92]
  wire  _decode_res_T_1 = &_decode_res_T; // @[pla.scala 98:74]
  wire  decode_res_andMatrixInput_3_1 = decode_res_invInputs[18]; // @[pla.scala 91:29]
  wire [7:0] decode_res_lo_1 = {decode_res_andMatrixInput_7,decode_res_andMatrixInput_8,decode_res_andMatrixInput_9,
    decode_res_andMatrixInput_10,decode_res_andMatrixInput_11,decode_res_andMatrixInput_12,decode_res_andMatrixInput_13,
    decode_res_andMatrixInput_14}; // @[Cat.scala 33:92]
  wire [15:0] _decode_res_T_2 = {decode_res_andMatrixInput_0,decode_res_andMatrixInput_1,decode_res_andMatrixInput_2,
    decode_res_andMatrixInput_3_1,decode_res_andMatrixInput_3,decode_res_andMatrixInput_4,decode_res_andMatrixInput_5,
    decode_res_andMatrixInput_6,decode_res_lo_1}; // @[Cat.scala 33:92]
  wire  _decode_res_T_3 = &_decode_res_T_2; // @[pla.scala 98:74]
  wire  decode_res_andMatrixInput_2_2 = decode_res_invInputs[19]; // @[pla.scala 91:29]
  wire [14:0] _decode_res_T_4 = {decode_res_andMatrixInput_0,decode_res_andMatrixInput_2,decode_res_andMatrixInput_2_2,
    decode_res_andMatrixInput_3,decode_res_andMatrixInput_4,decode_res_andMatrixInput_5,decode_res_andMatrixInput_6,
    decode_res_andMatrixInput_7,decode_res_lo}; // @[Cat.scala 33:92]
  wire  _decode_res_T_5 = &_decode_res_T_4; // @[pla.scala 98:74]
  wire [15:0] _decode_res_T_6 = {decode_res_andMatrixInput_0,decode_res_andMatrixInput_1,decode_res_andMatrixInput_3_1,
    decode_res_andMatrixInput_2_2,decode_res_andMatrixInput_3,decode_res_andMatrixInput_4,decode_res_andMatrixInput_5,
    decode_res_andMatrixInput_6,decode_res_lo_1}; // @[Cat.scala 33:92]
  wire  _decode_res_T_7 = &_decode_res_T_6; // @[pla.scala 98:74]
  wire  decode_res_andMatrixInput_1_4 = ds_bits_inst[16]; // @[pla.scala 90:45]
  wire [15:0] _decode_res_T_8 = {decode_res_andMatrixInput_0,decode_res_andMatrixInput_1_4,decode_res_andMatrixInput_2,
    decode_res_andMatrixInput_2_2,decode_res_andMatrixInput_3,decode_res_andMatrixInput_4,decode_res_andMatrixInput_5,
    decode_res_andMatrixInput_6,decode_res_lo_1}; // @[Cat.scala 33:92]
  wire  _decode_res_T_9 = &_decode_res_T_8; // @[pla.scala 98:74]
  wire  decode_res_andMatrixInput_1_5 = ds_bits_inst[17]; // @[pla.scala 90:45]
  wire [15:0] _decode_res_T_10 = {decode_res_andMatrixInput_1,decode_res_andMatrixInput_1_5,
    decode_res_andMatrixInput_3_1,decode_res_andMatrixInput_2_2,decode_res_andMatrixInput_3,decode_res_andMatrixInput_4,
    decode_res_andMatrixInput_5,decode_res_andMatrixInput_6,decode_res_lo_1}; // @[Cat.scala 33:92]
  wire  _decode_res_T_11 = &_decode_res_T_10; // @[pla.scala 98:74]
  wire [16:0] _decode_res_T_12 = {decode_res_andMatrixInput_0,decode_res_andMatrixInput_1,decode_res_andMatrixInput_1_5,
    decode_res_andMatrixInput_3_1,decode_res_andMatrixInput_2_2,decode_res_andMatrixInput_3,decode_res_andMatrixInput_4,
    decode_res_andMatrixInput_5,decode_res_andMatrixInput_6,decode_res_lo_1}; // @[Cat.scala 33:92]
  wire  _decode_res_T_13 = &_decode_res_T_12; // @[pla.scala 98:74]
  wire  decode_res_andMatrixInput_0_7 = ds_bits_inst[15]; // @[pla.scala 90:45]
  wire [16:0] _decode_res_T_14 = {decode_res_andMatrixInput_0_7,decode_res_andMatrixInput_1,
    decode_res_andMatrixInput_1_5,decode_res_andMatrixInput_3_1,decode_res_andMatrixInput_2_2,
    decode_res_andMatrixInput_3,decode_res_andMatrixInput_4,decode_res_andMatrixInput_5,decode_res_andMatrixInput_6,
    decode_res_lo_1}; // @[Cat.scala 33:92]
  wire  _decode_res_T_15 = &_decode_res_T_14; // @[pla.scala 98:74]
  wire  decode_res_andMatrixInput_2_8 = ds_bits_inst[18]; // @[pla.scala 90:45]
  wire [14:0] _decode_res_T_16 = {decode_res_andMatrixInput_0,decode_res_andMatrixInput_2,decode_res_andMatrixInput_2_8,
    decode_res_andMatrixInput_3,decode_res_andMatrixInput_4,decode_res_andMatrixInput_5,decode_res_andMatrixInput_6,
    decode_res_andMatrixInput_7,decode_res_lo}; // @[Cat.scala 33:92]
  wire  _decode_res_T_17 = &_decode_res_T_16; // @[pla.scala 98:74]
  wire [14:0] _decode_res_T_18 = {decode_res_andMatrixInput_1,decode_res_andMatrixInput_2,decode_res_andMatrixInput_2_8,
    decode_res_andMatrixInput_3,decode_res_andMatrixInput_4,decode_res_andMatrixInput_5,decode_res_andMatrixInput_6,
    decode_res_andMatrixInput_7,decode_res_lo}; // @[Cat.scala 33:92]
  wire  _decode_res_T_19 = &_decode_res_T_18; // @[pla.scala 98:74]
  wire [15:0] _decode_res_T_20 = {decode_res_andMatrixInput_0,decode_res_andMatrixInput_2,decode_res_andMatrixInput_2_8,
    decode_res_andMatrixInput_2_2,decode_res_andMatrixInput_3,decode_res_andMatrixInput_4,decode_res_andMatrixInput_5,
    decode_res_andMatrixInput_6,decode_res_lo_1}; // @[Cat.scala 33:92]
  wire  _decode_res_T_21 = &_decode_res_T_20; // @[pla.scala 98:74]
  wire [16:0] _decode_res_T_22 = {decode_res_andMatrixInput_0_7,decode_res_andMatrixInput_1,decode_res_andMatrixInput_2,
    decode_res_andMatrixInput_2_8,decode_res_andMatrixInput_2_2,decode_res_andMatrixInput_3,decode_res_andMatrixInput_4,
    decode_res_andMatrixInput_5,decode_res_andMatrixInput_6,decode_res_lo_1}; // @[Cat.scala 33:92]
  wire  _decode_res_T_23 = &_decode_res_T_22; // @[pla.scala 98:74]
  wire [15:0] _decode_res_T_24 = {decode_res_andMatrixInput_0,decode_res_andMatrixInput_1_4,decode_res_andMatrixInput_2,
    decode_res_andMatrixInput_2_8,decode_res_andMatrixInput_3,decode_res_andMatrixInput_4,decode_res_andMatrixInput_5,
    decode_res_andMatrixInput_6,decode_res_lo_1}; // @[Cat.scala 33:92]
  wire  _decode_res_T_25 = &_decode_res_T_24; // @[pla.scala 98:74]
  wire [14:0] _decode_res_T_26 = {decode_res_andMatrixInput_1_4,decode_res_andMatrixInput_2_8,
    decode_res_andMatrixInput_2_2,decode_res_andMatrixInput_3,decode_res_andMatrixInput_4,decode_res_andMatrixInput_5,
    decode_res_andMatrixInput_6,decode_res_andMatrixInput_7,decode_res_lo}; // @[Cat.scala 33:92]
  wire  _decode_res_T_27 = &_decode_res_T_26; // @[pla.scala 98:74]
  wire [15:0] _decode_res_T_28 = {decode_res_andMatrixInput_0,decode_res_andMatrixInput_1_4,
    decode_res_andMatrixInput_2_8,decode_res_andMatrixInput_2_2,decode_res_andMatrixInput_3,decode_res_andMatrixInput_4,
    decode_res_andMatrixInput_5,decode_res_andMatrixInput_6,decode_res_lo_1}; // @[Cat.scala 33:92]
  wire  _decode_res_T_29 = &_decode_res_T_28; // @[pla.scala 98:74]
  wire [15:0] _decode_res_T_30 = {decode_res_andMatrixInput_0_7,decode_res_andMatrixInput_1_4,
    decode_res_andMatrixInput_2_8,decode_res_andMatrixInput_2_2,decode_res_andMatrixInput_3,decode_res_andMatrixInput_4,
    decode_res_andMatrixInput_5,decode_res_andMatrixInput_6,decode_res_lo_1}; // @[Cat.scala 33:92]
  wire  _decode_res_T_31 = &_decode_res_T_30; // @[pla.scala 98:74]
  wire [15:0] _decode_res_T_32 = {decode_res_andMatrixInput_1_4,decode_res_andMatrixInput_1_5,
    decode_res_andMatrixInput_2_8,decode_res_andMatrixInput_2_2,decode_res_andMatrixInput_3,decode_res_andMatrixInput_4,
    decode_res_andMatrixInput_5,decode_res_andMatrixInput_6,decode_res_lo_1}; // @[Cat.scala 33:92]
  wire  _decode_res_T_33 = &_decode_res_T_32; // @[pla.scala 98:74]
  wire [16:0] _decode_res_T_34 = {decode_res_andMatrixInput_0_7,decode_res_andMatrixInput_1_4,
    decode_res_andMatrixInput_1_5,decode_res_andMatrixInput_2_8,decode_res_andMatrixInput_2_2,
    decode_res_andMatrixInput_3,decode_res_andMatrixInput_4,decode_res_andMatrixInput_5,decode_res_andMatrixInput_6,
    decode_res_lo_1}; // @[Cat.scala 33:92]
  wire  _decode_res_T_35 = &_decode_res_T_34; // @[pla.scala 98:74]
  wire  decode_res_andMatrixInput_3_18 = ds_bits_inst[19]; // @[pla.scala 90:45]
  wire [15:0] _decode_res_T_36 = {decode_res_andMatrixInput_0,decode_res_andMatrixInput_1,decode_res_andMatrixInput_2,
    decode_res_andMatrixInput_3_18,decode_res_andMatrixInput_3,decode_res_andMatrixInput_4,decode_res_andMatrixInput_5,
    decode_res_andMatrixInput_6,decode_res_lo_1}; // @[Cat.scala 33:92]
  wire  _decode_res_T_37 = &_decode_res_T_36; // @[pla.scala 98:74]
  wire [16:0] _decode_res_T_38 = {decode_res_andMatrixInput_0,decode_res_andMatrixInput_1,decode_res_andMatrixInput_2,
    decode_res_andMatrixInput_3_1,decode_res_andMatrixInput_3_18,decode_res_andMatrixInput_3,decode_res_andMatrixInput_4
    ,decode_res_andMatrixInput_5,decode_res_andMatrixInput_6,decode_res_lo_1}; // @[Cat.scala 33:92]
  wire  _decode_res_T_39 = &_decode_res_T_38; // @[pla.scala 98:74]
  wire [15:0] _decode_res_T_40 = {decode_res_andMatrixInput_0,decode_res_andMatrixInput_2,decode_res_andMatrixInput_2_8,
    decode_res_andMatrixInput_3_18,decode_res_andMatrixInput_3,decode_res_andMatrixInput_4,decode_res_andMatrixInput_5,
    decode_res_andMatrixInput_6,decode_res_lo_1}; // @[Cat.scala 33:92]
  wire  _decode_res_T_41 = &_decode_res_T_40; // @[pla.scala 98:74]
  wire [15:0] _decode_res_T_42 = {decode_res_andMatrixInput_1,decode_res_andMatrixInput_2,decode_res_andMatrixInput_2_8,
    decode_res_andMatrixInput_3_18,decode_res_andMatrixInput_3,decode_res_andMatrixInput_4,decode_res_andMatrixInput_5,
    decode_res_andMatrixInput_6,decode_res_lo_1}; // @[Cat.scala 33:92]
  wire  _decode_res_T_43 = &_decode_res_T_42; // @[pla.scala 98:74]
  wire [16:0] _decode_res_T_44 = {decode_res_andMatrixInput_0_7,decode_res_andMatrixInput_1,decode_res_andMatrixInput_2,
    decode_res_andMatrixInput_2_8,decode_res_andMatrixInput_3_18,decode_res_andMatrixInput_3,decode_res_andMatrixInput_4
    ,decode_res_andMatrixInput_5,decode_res_andMatrixInput_6,decode_res_lo_1}; // @[Cat.scala 33:92]
  wire  _decode_res_T_45 = &_decode_res_T_44; // @[pla.scala 98:74]
  wire  decode_res_andMatrixInput_3_23 = decode_res_invInputs[20]; // @[pla.scala 91:29]
  wire  decode_res_andMatrixInput_4_23 = ds_bits_inst[21]; // @[pla.scala 90:45]
  wire [14:0] _decode_res_T_46 = {decode_res_andMatrixInput_2,decode_res_andMatrixInput_3_1,
    decode_res_andMatrixInput_2_2,decode_res_andMatrixInput_3_23,decode_res_andMatrixInput_4_23,
    decode_res_andMatrixInput_5,decode_res_andMatrixInput_6,decode_res_andMatrixInput_7,decode_res_lo}; // @[Cat.scala 33:92]
  wire  _decode_res_T_47 = &_decode_res_T_46; // @[pla.scala 98:74]
  wire [15:0] _decode_res_T_48 = {decode_res_andMatrixInput_0_7,decode_res_andMatrixInput_2,
    decode_res_andMatrixInput_3_1,decode_res_andMatrixInput_2_2,decode_res_andMatrixInput_3_23,
    decode_res_andMatrixInput_4_23,decode_res_andMatrixInput_5,decode_res_andMatrixInput_6,decode_res_lo_1}; // @[Cat.scala 33:92]
  wire  _decode_res_T_49 = &_decode_res_T_48; // @[pla.scala 98:74]
  wire [15:0] _decode_res_T_50 = {decode_res_andMatrixInput_1_4,decode_res_andMatrixInput_2,
    decode_res_andMatrixInput_3_1,decode_res_andMatrixInput_2_2,decode_res_andMatrixInput_3_23,
    decode_res_andMatrixInput_4_23,decode_res_andMatrixInput_5,decode_res_andMatrixInput_6,decode_res_lo_1}; // @[Cat.scala 33:92]
  wire  _decode_res_T_51 = &_decode_res_T_50; // @[pla.scala 98:74]
  wire [15:0] _decode_res_T_52 = {decode_res_andMatrixInput_0,decode_res_andMatrixInput_1_5,
    decode_res_andMatrixInput_3_1,decode_res_andMatrixInput_3_18,decode_res_andMatrixInput_3_23,
    decode_res_andMatrixInput_4_23,decode_res_andMatrixInput_5,decode_res_andMatrixInput_6,decode_res_lo_1}; // @[Cat.scala 33:92]
  wire  _decode_res_T_53 = &_decode_res_T_52; // @[pla.scala 98:74]
  wire [16:0] _decode_res_T_54 = {decode_res_andMatrixInput_0,decode_res_andMatrixInput_1,decode_res_andMatrixInput_1_5,
    decode_res_andMatrixInput_3_1,decode_res_andMatrixInput_3_18,decode_res_andMatrixInput_3_23,
    decode_res_andMatrixInput_4_23,decode_res_andMatrixInput_5,decode_res_andMatrixInput_6,decode_res_lo_1}; // @[Cat.scala 33:92]
  wire  _decode_res_T_55 = &_decode_res_T_54; // @[pla.scala 98:74]
  wire  decode_res_andMatrixInput_6_28 = ds_bits_inst[22]; // @[pla.scala 90:45]
  wire [15:0] _decode_res_T_56 = {decode_res_andMatrixInput_0_7,decode_res_andMatrixInput_1,decode_res_andMatrixInput_2,
    decode_res_andMatrixInput_3_1,decode_res_andMatrixInput_3_23,decode_res_andMatrixInput_4,
    decode_res_andMatrixInput_6_28,decode_res_andMatrixInput_6,decode_res_lo_1}; // @[Cat.scala 33:92]
  wire  _decode_res_T_57 = &_decode_res_T_56; // @[pla.scala 98:74]
  wire [15:0] _decode_res_T_58 = {decode_res_andMatrixInput_0_7,decode_res_andMatrixInput_1,decode_res_andMatrixInput_2,
    decode_res_andMatrixInput_2_2,decode_res_andMatrixInput_3_23,decode_res_andMatrixInput_4,
    decode_res_andMatrixInput_6_28,decode_res_andMatrixInput_6,decode_res_lo_1}; // @[Cat.scala 33:92]
  wire  _decode_res_T_59 = &_decode_res_T_58; // @[pla.scala 98:74]
  wire [16:0] _decode_res_T_60 = {decode_res_andMatrixInput_0_7,decode_res_andMatrixInput_1,decode_res_andMatrixInput_2,
    decode_res_andMatrixInput_2_8,decode_res_andMatrixInput_2_2,decode_res_andMatrixInput_3_23,
    decode_res_andMatrixInput_4,decode_res_andMatrixInput_6_28,decode_res_andMatrixInput_6,decode_res_lo_1}; // @[Cat.scala 33:92]
  wire  _decode_res_T_61 = &_decode_res_T_60; // @[pla.scala 98:74]
  wire [16:0] _decode_res_T_62 = {decode_res_andMatrixInput_0_7,decode_res_andMatrixInput_1,decode_res_andMatrixInput_2,
    decode_res_andMatrixInput_3_1,decode_res_andMatrixInput_3_18,decode_res_andMatrixInput_3_23,
    decode_res_andMatrixInput_4,decode_res_andMatrixInput_6_28,decode_res_andMatrixInput_6,decode_res_lo_1}; // @[Cat.scala 33:92]
  wire  _decode_res_T_63 = &_decode_res_T_62; // @[pla.scala 98:74]
  wire  decode_res_andMatrixInput_2_32 = ds_bits_inst[25]; // @[pla.scala 90:45]
  wire [8:0] _decode_res_T_64 = {decode_res_andMatrixInput_5,decode_res_andMatrixInput_7,decode_res_andMatrixInput_2_32,
    decode_res_andMatrixInput_9,decode_res_andMatrixInput_10,decode_res_andMatrixInput_11,decode_res_andMatrixInput_12,
    decode_res_andMatrixInput_13,decode_res_andMatrixInput_14}; // @[Cat.scala 33:92]
  wire  _decode_res_T_65 = &_decode_res_T_64; // @[pla.scala 98:74]
  wire [8:0] _decode_res_T_66 = {decode_res_andMatrixInput_6,decode_res_andMatrixInput_7,decode_res_andMatrixInput_2_32,
    decode_res_andMatrixInput_9,decode_res_andMatrixInput_10,decode_res_andMatrixInput_11,decode_res_andMatrixInput_12,
    decode_res_andMatrixInput_13,decode_res_andMatrixInput_14}; // @[Cat.scala 33:92]
  wire  _decode_res_T_67 = &_decode_res_T_66; // @[pla.scala 98:74]
  wire [9:0] _decode_res_T_68 = {decode_res_andMatrixInput_5,decode_res_andMatrixInput_6,decode_res_andMatrixInput_7,
    decode_res_andMatrixInput_2_32,decode_res_andMatrixInput_9,decode_res_andMatrixInput_10,decode_res_andMatrixInput_11
    ,decode_res_andMatrixInput_12,decode_res_andMatrixInput_13,decode_res_andMatrixInput_14}; // @[Cat.scala 33:92]
  wire  _decode_res_T_69 = &_decode_res_T_68; // @[pla.scala 98:74]
  wire [8:0] _decode_res_T_70 = {decode_res_andMatrixInput_6_28,decode_res_andMatrixInput_6,
    decode_res_andMatrixInput_2_32,decode_res_andMatrixInput_9,decode_res_andMatrixInput_10,decode_res_andMatrixInput_11
    ,decode_res_andMatrixInput_12,decode_res_andMatrixInput_13,decode_res_andMatrixInput_14}; // @[Cat.scala 33:92]
  wire  _decode_res_T_71 = &_decode_res_T_70; // @[pla.scala 98:74]
  wire  decode_res_andMatrixInput_1_36 = ds_bits_inst[23]; // @[pla.scala 90:45]
  wire [8:0] _decode_res_T_72 = {decode_res_andMatrixInput_5,decode_res_andMatrixInput_1_36,
    decode_res_andMatrixInput_2_32,decode_res_andMatrixInput_9,decode_res_andMatrixInput_10,decode_res_andMatrixInput_11
    ,decode_res_andMatrixInput_12,decode_res_andMatrixInput_13,decode_res_andMatrixInput_14}; // @[Cat.scala 33:92]
  wire  _decode_res_T_73 = &_decode_res_T_72; // @[pla.scala 98:74]
  wire  decode_res_andMatrixInput_1_37 = ds_bits_inst[24]; // @[pla.scala 90:45]
  wire [8:0] _decode_res_T_74 = {decode_res_andMatrixInput_6_28,decode_res_andMatrixInput_1_37,
    decode_res_andMatrixInput_2_32,decode_res_andMatrixInput_9,decode_res_andMatrixInput_10,decode_res_andMatrixInput_11
    ,decode_res_andMatrixInput_12,decode_res_andMatrixInput_13,decode_res_andMatrixInput_14}; // @[Cat.scala 33:92]
  wire  _decode_res_T_75 = &_decode_res_T_74; // @[pla.scala 98:74]
  wire [9:0] _decode_res_T_76 = {decode_res_andMatrixInput_6_28,decode_res_andMatrixInput_6,
    decode_res_andMatrixInput_1_37,decode_res_andMatrixInput_2_32,decode_res_andMatrixInput_9,
    decode_res_andMatrixInput_10,decode_res_andMatrixInput_11,decode_res_andMatrixInput_12,decode_res_andMatrixInput_13,
    decode_res_andMatrixInput_14}; // @[Cat.scala 33:92]
  wire  _decode_res_T_77 = &_decode_res_T_76; // @[pla.scala 98:74]
  wire [8:0] _decode_res_T_78 = {decode_res_andMatrixInput_1_36,decode_res_andMatrixInput_1_37,
    decode_res_andMatrixInput_2_32,decode_res_andMatrixInput_9,decode_res_andMatrixInput_10,decode_res_andMatrixInput_11
    ,decode_res_andMatrixInput_12,decode_res_andMatrixInput_13,decode_res_andMatrixInput_14}; // @[Cat.scala 33:92]
  wire  _decode_res_T_79 = &_decode_res_T_78; // @[pla.scala 98:74]
  wire [9:0] _decode_res_T_80 = {decode_res_andMatrixInput_5,decode_res_andMatrixInput_1_36,
    decode_res_andMatrixInput_1_37,decode_res_andMatrixInput_2_32,decode_res_andMatrixInput_9,
    decode_res_andMatrixInput_10,decode_res_andMatrixInput_11,decode_res_andMatrixInput_12,decode_res_andMatrixInput_13,
    decode_res_andMatrixInput_14}; // @[Cat.scala 33:92]
  wire  _decode_res_T_81 = &_decode_res_T_80; // @[pla.scala 98:74]
  wire [9:0] _decode_res_T_82 = {decode_res_andMatrixInput_6_28,decode_res_andMatrixInput_1_36,
    decode_res_andMatrixInput_1_37,decode_res_andMatrixInput_2_32,decode_res_andMatrixInput_9,
    decode_res_andMatrixInput_10,decode_res_andMatrixInput_11,decode_res_andMatrixInput_12,decode_res_andMatrixInput_13,
    decode_res_andMatrixInput_14}; // @[Cat.scala 33:92]
  wire  _decode_res_T_83 = &_decode_res_T_82; // @[pla.scala 98:74]
  wire  decode_res_andMatrixInput_2_42 = ds_bits_inst[26]; // @[pla.scala 90:45]
  wire [7:0] _decode_res_T_84 = {decode_res_andMatrixInput_7,decode_res_andMatrixInput_8,decode_res_andMatrixInput_2_42,
    decode_res_andMatrixInput_10,decode_res_andMatrixInput_11,decode_res_andMatrixInput_12,decode_res_andMatrixInput_13,
    decode_res_andMatrixInput_14}; // @[Cat.scala 33:92]
  wire  _decode_res_T_85 = &_decode_res_T_84; // @[pla.scala 98:74]
  wire  decode_res_andMatrixInput_0_43 = decode_res_invInputs[0]; // @[pla.scala 91:29]
  wire  decode_res_andMatrixInput_1_43 = decode_res_invInputs[1]; // @[pla.scala 91:29]
  wire  decode_res_andMatrixInput_2_43 = decode_res_invInputs[2]; // @[pla.scala 91:29]
  wire  decode_res_andMatrixInput_3_43 = decode_res_invInputs[3]; // @[pla.scala 91:29]
  wire  decode_res_andMatrixInput_4_43 = decode_res_invInputs[4]; // @[pla.scala 91:29]
  wire  decode_res_andMatrixInput_5_43 = decode_res_invInputs[5]; // @[pla.scala 91:29]
  wire  decode_res_andMatrixInput_6_43 = decode_res_invInputs[6]; // @[pla.scala 91:29]
  wire  decode_res_andMatrixInput_7_43 = decode_res_invInputs[7]; // @[pla.scala 91:29]
  wire  decode_res_andMatrixInput_8_42 = decode_res_invInputs[8]; // @[pla.scala 91:29]
  wire  decode_res_andMatrixInput_9_36 = decode_res_invInputs[9]; // @[pla.scala 91:29]
  wire  decode_res_andMatrixInput_10_32 = decode_res_invInputs[10]; // @[pla.scala 91:29]
  wire  decode_res_andMatrixInput_11_32 = ds_bits_inst[11]; // @[pla.scala 90:45]
  wire  decode_res_andMatrixInput_12_32 = ds_bits_inst[12]; // @[pla.scala 90:45]
  wire  decode_res_andMatrixInput_13_32 = ds_bits_inst[13]; // @[pla.scala 90:45]
  wire  decode_res_andMatrixInput_14_32 = decode_res_invInputs[14]; // @[pla.scala 91:29]
  wire [7:0] decode_res_lo_lo_43 = {decode_res_andMatrixInput_7,decode_res_andMatrixInput_2_32,
    decode_res_andMatrixInput_2_42,decode_res_andMatrixInput_10,decode_res_andMatrixInput_11,
    decode_res_andMatrixInput_12,decode_res_andMatrixInput_13,decode_res_andMatrixInput_14}; // @[Cat.scala 33:92]
  wire [15:0] decode_res_lo_43 = {decode_res_andMatrixInput_1,decode_res_andMatrixInput_2,decode_res_andMatrixInput_3_1,
    decode_res_andMatrixInput_3_18,decode_res_andMatrixInput_3_23,decode_res_andMatrixInput_4,
    decode_res_andMatrixInput_6_28,decode_res_andMatrixInput_6,decode_res_lo_lo_43}; // @[Cat.scala 33:92]
  wire [7:0] decode_res_hi_lo_43 = {decode_res_andMatrixInput_8_42,decode_res_andMatrixInput_9_36,
    decode_res_andMatrixInput_10_32,decode_res_andMatrixInput_11_32,decode_res_andMatrixInput_12_32,
    decode_res_andMatrixInput_13_32,decode_res_andMatrixInput_14_32,decode_res_andMatrixInput_0}; // @[Cat.scala 33:92]
  wire [31:0] _decode_res_T_86 = {decode_res_andMatrixInput_0_43,decode_res_andMatrixInput_1_43,
    decode_res_andMatrixInput_2_43,decode_res_andMatrixInput_3_43,decode_res_andMatrixInput_4_43,
    decode_res_andMatrixInput_5_43,decode_res_andMatrixInput_6_43,decode_res_andMatrixInput_7_43,decode_res_hi_lo_43,
    decode_res_lo_43}; // @[Cat.scala 33:92]
  wire  _decode_res_T_87 = &_decode_res_T_86; // @[pla.scala 98:74]
  wire  decode_res_andMatrixInput_2_44 = ds_bits_inst[28]; // @[pla.scala 90:45]
  wire [5:0] _decode_res_T_88 = {decode_res_andMatrixInput_8,decode_res_andMatrixInput_2_42,
    decode_res_andMatrixInput_2_44,decode_res_andMatrixInput_12,decode_res_andMatrixInput_13,
    decode_res_andMatrixInput_14}; // @[Cat.scala 33:92]
  wire  _decode_res_T_89 = &_decode_res_T_88; // @[pla.scala 98:74]
  wire [6:0] _decode_res_T_90 = {decode_res_andMatrixInput_8,decode_res_andMatrixInput_2_42,decode_res_andMatrixInput_10
    ,decode_res_andMatrixInput_2_44,decode_res_andMatrixInput_12,decode_res_andMatrixInput_13,
    decode_res_andMatrixInput_14}; // @[Cat.scala 33:92]
  wire  _decode_res_T_91 = &_decode_res_T_90; // @[pla.scala 98:74]
  wire  decode_res_andMatrixInput_2_46 = ds_bits_inst[27]; // @[pla.scala 90:45]
  wire [6:0] _decode_res_T_92 = {decode_res_andMatrixInput_8,decode_res_andMatrixInput_2_42,
    decode_res_andMatrixInput_2_46,decode_res_andMatrixInput_2_44,decode_res_andMatrixInput_12,
    decode_res_andMatrixInput_13,decode_res_andMatrixInput_14}; // @[Cat.scala 33:92]
  wire  _decode_res_T_93 = &_decode_res_T_92; // @[pla.scala 98:74]
  wire  decode_res_andMatrixInput_5_47 = ds_bits_inst[29]; // @[pla.scala 90:45]
  wire [7:0] _decode_res_T_94 = {decode_res_andMatrixInput_6,decode_res_andMatrixInput_7,decode_res_andMatrixInput_9,
    decode_res_andMatrixInput_2_46,decode_res_andMatrixInput_11,decode_res_andMatrixInput_5_47,
    decode_res_andMatrixInput_13,decode_res_andMatrixInput_14}; // @[Cat.scala 33:92]
  wire  _decode_res_T_95 = &_decode_res_T_94; // @[pla.scala 98:74]
  wire [7:0] _decode_res_T_96 = {decode_res_andMatrixInput_5,decode_res_andMatrixInput_8,decode_res_andMatrixInput_9,
    decode_res_andMatrixInput_2_46,decode_res_andMatrixInput_11,decode_res_andMatrixInput_5_47,
    decode_res_andMatrixInput_13,decode_res_andMatrixInput_14}; // @[Cat.scala 33:92]
  wire  _decode_res_T_97 = &_decode_res_T_96; // @[pla.scala 98:74]
  wire [7:0] _decode_res_T_98 = {decode_res_andMatrixInput_6,decode_res_andMatrixInput_8,decode_res_andMatrixInput_9,
    decode_res_andMatrixInput_2_46,decode_res_andMatrixInput_11,decode_res_andMatrixInput_5_47,
    decode_res_andMatrixInput_13,decode_res_andMatrixInput_14}; // @[Cat.scala 33:92]
  wire  _decode_res_T_99 = &_decode_res_T_98; // @[pla.scala 98:74]
  wire [8:0] _decode_res_T_100 = {decode_res_andMatrixInput_5,decode_res_andMatrixInput_7,decode_res_andMatrixInput_8,
    decode_res_andMatrixInput_9,decode_res_andMatrixInput_2_46,decode_res_andMatrixInput_11,
    decode_res_andMatrixInput_5_47,decode_res_andMatrixInput_13,decode_res_andMatrixInput_14}; // @[Cat.scala 33:92]
  wire  _decode_res_T_101 = &_decode_res_T_100; // @[pla.scala 98:74]
  wire [8:0] _decode_res_T_102 = {decode_res_andMatrixInput_6,decode_res_andMatrixInput_7,decode_res_andMatrixInput_8,
    decode_res_andMatrixInput_9,decode_res_andMatrixInput_2_46,decode_res_andMatrixInput_11,
    decode_res_andMatrixInput_5_47,decode_res_andMatrixInput_13,decode_res_andMatrixInput_14}; // @[Cat.scala 33:92]
  wire  _decode_res_T_103 = &_decode_res_T_102; // @[pla.scala 98:74]
  wire [8:0] _decode_res_T_104 = {decode_res_andMatrixInput_5,decode_res_andMatrixInput_1_36,decode_res_andMatrixInput_8
    ,decode_res_andMatrixInput_9,decode_res_andMatrixInput_2_46,decode_res_andMatrixInput_11,
    decode_res_andMatrixInput_5_47,decode_res_andMatrixInput_13,decode_res_andMatrixInput_14}; // @[Cat.scala 33:92]
  wire  _decode_res_T_105 = &_decode_res_T_104; // @[pla.scala 98:74]
  wire [9:0] _decode_res_T_106 = {decode_res_andMatrixInput_5,decode_res_andMatrixInput_1_36,decode_res_andMatrixInput_7
    ,decode_res_andMatrixInput_8,decode_res_andMatrixInput_9,decode_res_andMatrixInput_2_46,decode_res_andMatrixInput_11
    ,decode_res_andMatrixInput_5_47,decode_res_andMatrixInput_13,decode_res_andMatrixInput_14}; // @[Cat.scala 33:92]
  wire  _decode_res_T_107 = &_decode_res_T_106; // @[pla.scala 98:74]
  wire [9:0] _decode_res_T_108 = {decode_res_andMatrixInput_5,decode_res_andMatrixInput_6,decode_res_andMatrixInput_1_37
    ,decode_res_andMatrixInput_8,decode_res_andMatrixInput_9,decode_res_andMatrixInput_2_46,decode_res_andMatrixInput_11
    ,decode_res_andMatrixInput_5_47,decode_res_andMatrixInput_13,decode_res_andMatrixInput_14}; // @[Cat.scala 33:92]
  wire  _decode_res_T_109 = &_decode_res_T_108; // @[pla.scala 98:74]
  wire [9:0] _decode_res_T_110 = {decode_res_andMatrixInput_6_28,decode_res_andMatrixInput_6,
    decode_res_andMatrixInput_1_37,decode_res_andMatrixInput_8,decode_res_andMatrixInput_9,
    decode_res_andMatrixInput_2_46,decode_res_andMatrixInput_11,decode_res_andMatrixInput_5_47,
    decode_res_andMatrixInput_13,decode_res_andMatrixInput_14}; // @[Cat.scala 33:92]
  wire  _decode_res_T_111 = &_decode_res_T_110; // @[pla.scala 98:74]
  wire [8:0] _decode_res_T_112 = {decode_res_andMatrixInput_6,decode_res_andMatrixInput_7,decode_res_andMatrixInput_2_32
    ,decode_res_andMatrixInput_9,decode_res_andMatrixInput_2_46,decode_res_andMatrixInput_11,
    decode_res_andMatrixInput_5_47,decode_res_andMatrixInput_13,decode_res_andMatrixInput_14}; // @[Cat.scala 33:92]
  wire  _decode_res_T_113 = &_decode_res_T_112; // @[pla.scala 98:74]
  wire [9:0] _decode_res_T_114 = {decode_res_andMatrixInput_5,decode_res_andMatrixInput_6,decode_res_andMatrixInput_7,
    decode_res_andMatrixInput_2_32,decode_res_andMatrixInput_9,decode_res_andMatrixInput_2_46,
    decode_res_andMatrixInput_11,decode_res_andMatrixInput_5_47,decode_res_andMatrixInput_13,
    decode_res_andMatrixInput_14}; // @[Cat.scala 33:92]
  wire  _decode_res_T_115 = &_decode_res_T_114; // @[pla.scala 98:74]
  wire [9:0] _decode_res_T_116 = {decode_res_andMatrixInput_6_28,decode_res_andMatrixInput_6,decode_res_andMatrixInput_7
    ,decode_res_andMatrixInput_2_32,decode_res_andMatrixInput_9,decode_res_andMatrixInput_2_46,
    decode_res_andMatrixInput_11,decode_res_andMatrixInput_5_47,decode_res_andMatrixInput_13,
    decode_res_andMatrixInput_14}; // @[Cat.scala 33:92]
  wire  _decode_res_T_117 = &_decode_res_T_116; // @[pla.scala 98:74]
  wire  decode_res_andMatrixInput_3_59 = ds_bits_inst[30]; // @[pla.scala 90:45]
  wire [4:0] _decode_res_T_118 = {decode_res_andMatrixInput_2_42,decode_res_andMatrixInput_2_46,
    decode_res_andMatrixInput_12,decode_res_andMatrixInput_3_59,decode_res_andMatrixInput_14}; // @[Cat.scala 33:92]
  wire  _decode_res_T_119 = &_decode_res_T_118; // @[pla.scala 98:74]
  wire [5:0] _decode_res_T_120 = {decode_res_andMatrixInput_2_42,decode_res_andMatrixInput_2_46,
    decode_res_andMatrixInput_11,decode_res_andMatrixInput_12,decode_res_andMatrixInput_3_59,
    decode_res_andMatrixInput_14}; // @[Cat.scala 33:92]
  wire  _decode_res_T_121 = &_decode_res_T_120; // @[pla.scala 98:74]
  wire [3:0] _decode_res_T_122 = {decode_res_andMatrixInput_2_44,decode_res_andMatrixInput_12,
    decode_res_andMatrixInput_3_59,decode_res_andMatrixInput_14}; // @[Cat.scala 33:92]
  wire  _decode_res_T_123 = &_decode_res_T_122; // @[pla.scala 98:74]
  wire [4:0] _decode_res_T_124 = {decode_res_andMatrixInput_9,decode_res_andMatrixInput_2_44,
    decode_res_andMatrixInput_12,decode_res_andMatrixInput_3_59,decode_res_andMatrixInput_14}; // @[Cat.scala 33:92]
  wire  _decode_res_T_125 = &_decode_res_T_124; // @[pla.scala 98:74]
  wire [4:0] _decode_res_T_126 = {decode_res_andMatrixInput_10,decode_res_andMatrixInput_2_44,
    decode_res_andMatrixInput_12,decode_res_andMatrixInput_3_59,decode_res_andMatrixInput_14}; // @[Cat.scala 33:92]
  wire  _decode_res_T_127 = &_decode_res_T_126; // @[pla.scala 98:74]
  wire [5:0] _decode_res_T_128 = {decode_res_andMatrixInput_2_42,decode_res_andMatrixInput_10,
    decode_res_andMatrixInput_2_44,decode_res_andMatrixInput_12,decode_res_andMatrixInput_3_59,
    decode_res_andMatrixInput_14}; // @[Cat.scala 33:92]
  wire  _decode_res_T_129 = &_decode_res_T_128; // @[pla.scala 98:74]
  wire [4:0] _decode_res_T_130 = {decode_res_andMatrixInput_2_46,decode_res_andMatrixInput_2_44,
    decode_res_andMatrixInput_12,decode_res_andMatrixInput_3_59,decode_res_andMatrixInput_14}; // @[Cat.scala 33:92]
  wire  _decode_res_T_131 = &_decode_res_T_130; // @[pla.scala 98:74]
  wire [3:0] _decode_res_T_132 = {decode_res_andMatrixInput_11,decode_res_andMatrixInput_5_47,
    decode_res_andMatrixInput_3_59,decode_res_andMatrixInput_14}; // @[Cat.scala 33:92]
  wire  _decode_res_T_133 = &_decode_res_T_132; // @[pla.scala 98:74]
  wire [4:0] _decode_res_T_134 = {decode_res_andMatrixInput_9,decode_res_andMatrixInput_11,
    decode_res_andMatrixInput_5_47,decode_res_andMatrixInput_3_59,decode_res_andMatrixInput_14}; // @[Cat.scala 33:92]
  wire  _decode_res_T_135 = &_decode_res_T_134; // @[pla.scala 98:74]
  wire [4:0] _decode_res_T_136 = {decode_res_andMatrixInput_10,decode_res_andMatrixInput_11,
    decode_res_andMatrixInput_5_47,decode_res_andMatrixInput_3_59,decode_res_andMatrixInput_14}; // @[Cat.scala 33:92]
  wire  _decode_res_T_137 = &_decode_res_T_136; // @[pla.scala 98:74]
  wire [4:0] _decode_res_T_138 = {decode_res_andMatrixInput_2_46,decode_res_andMatrixInput_11,
    decode_res_andMatrixInput_5_47,decode_res_andMatrixInput_3_59,decode_res_andMatrixInput_14}; // @[Cat.scala 33:92]
  wire  _decode_res_T_139 = &_decode_res_T_138; // @[pla.scala 98:74]
  wire [1:0] decode_res_orMatrixOutputs_lo_lo_hi = {_decode_res_T_95,_decode_res_T_101}; // @[Cat.scala 33:92]
  wire [8:0] decode_res_orMatrixOutputs_lo = {_decode_res_T_67,_decode_res_T_73,_decode_res_T_75,_decode_res_T_85,
    _decode_res_T_89,_decode_res_T_95,_decode_res_T_101,_decode_res_T_121,_decode_res_T_129}; // @[Cat.scala 33:92]
  wire [17:0] _decode_res_orMatrixOutputs_T = {_decode_res_T_1,_decode_res_T_5,_decode_res_T_11,_decode_res_T_17,
    _decode_res_T_19,_decode_res_T_27,_decode_res_T_47,_decode_res_T_57,_decode_res_T_59,decode_res_orMatrixOutputs_lo}; // @[Cat.scala 33:92]
  wire  _decode_res_orMatrixOutputs_T_1 = |_decode_res_orMatrixOutputs_T; // @[pla.scala 114:39]
  wire [7:0] _decode_res_orMatrixOutputs_T_2 = {_decode_res_T_55,_decode_res_T_87,_decode_res_T_101,_decode_res_T_111,
    _decode_res_T_117,_decode_res_T_121,_decode_res_T_125,_decode_res_T_135}; // @[Cat.scala 33:92]
  wire  _decode_res_orMatrixOutputs_T_3 = |_decode_res_orMatrixOutputs_T_2; // @[pla.scala 114:39]
  wire [8:0] _decode_res_orMatrixOutputs_T_4 = {_decode_res_T_85,_decode_res_T_87,_decode_res_T_93,_decode_res_T_105,
    _decode_res_T_111,_decode_res_T_115,_decode_res_T_119,_decode_res_T_131,_decode_res_T_139}; // @[Cat.scala 33:92]
  wire  _decode_res_orMatrixOutputs_T_5 = |_decode_res_orMatrixOutputs_T_4; // @[pla.scala 114:39]
  wire [7:0] _decode_res_orMatrixOutputs_T_6 = {_decode_res_T_53,_decode_res_T_93,_decode_res_T_107,_decode_res_T_109,
    _decode_res_T_113,_decode_res_T_119,_decode_res_T_131,_decode_res_T_137}; // @[Cat.scala 33:92]
  wire  _decode_res_orMatrixOutputs_T_7 = |_decode_res_orMatrixOutputs_T_6; // @[pla.scala 114:39]
  wire [7:0] _decode_res_orMatrixOutputs_T_8 = {_decode_res_T_53,_decode_res_T_85,_decode_res_T_87,_decode_res_T_93,
    _decode_res_T_103,_decode_res_T_119,_decode_res_T_131,_decode_res_T_133}; // @[Cat.scala 33:92]
  wire  _decode_res_orMatrixOutputs_T_9 = |_decode_res_orMatrixOutputs_T_8; // @[pla.scala 114:39]
  wire [2:0] decode_res_orMatrixOutputs_hi_5 = {_decode_res_T_95,_decode_res_T_97,_decode_res_T_99}; // @[Cat.scala 33:92]
  wire [4:0] _decode_res_orMatrixOutputs_T_10 = {_decode_res_T_95,_decode_res_T_97,_decode_res_T_99,_decode_res_T_123,
    _decode_res_T_133}; // @[Cat.scala 33:92]
  wire  _decode_res_orMatrixOutputs_T_11 = |_decode_res_orMatrixOutputs_T_10; // @[pla.scala 114:39]
  wire  _decode_res_orMatrixOutputs_T_13 = |decode_res_orMatrixOutputs_lo_lo_hi; // @[pla.scala 114:39]
  wire  _decode_res_orMatrixOutputs_T_15 = |decode_res_orMatrixOutputs_hi_5; // @[pla.scala 114:39]
  wire [6:0] decode_res_orMatrixOutputs_lo_6 = {_decode_res_T_73,_decode_res_T_75,_decode_res_T_93,_decode_res_T_95,
    _decode_res_T_97,_decode_res_T_99,_decode_res_T_127}; // @[Cat.scala 33:92]
  wire [14:0] _decode_res_orMatrixOutputs_T_16 = {_decode_res_T_1,_decode_res_T_5,_decode_res_T_11,_decode_res_T_17,
    _decode_res_T_19,_decode_res_T_27,_decode_res_T_47,_decode_res_T_67,decode_res_orMatrixOutputs_lo_6}; // @[Cat.scala 33:92]
  wire  _decode_res_orMatrixOutputs_T_17 = |_decode_res_orMatrixOutputs_T_16; // @[pla.scala 114:39]
  wire [9:0] _decode_res_orMatrixOutputs_T_18 = {_decode_res_T_57,_decode_res_T_59,_decode_res_T_65,_decode_res_T_67,
    _decode_res_T_85,_decode_res_T_91,_decode_res_T_95,_decode_res_T_97,_decode_res_T_99,_decode_res_T_127}; // @[Cat.scala 33:92]
  wire  _decode_res_orMatrixOutputs_T_19 = |_decode_res_orMatrixOutputs_T_18; // @[pla.scala 114:39]
  wire [3:0] _decode_res_orMatrixOutputs_T_20 = {_decode_res_T_89,_decode_res_T_119,_decode_res_T_123,_decode_res_T_133}
    ; // @[Cat.scala 33:92]
  wire  _decode_res_orMatrixOutputs_T_21 = |_decode_res_orMatrixOutputs_T_20; // @[pla.scala 114:39]
  wire [4:0] _decode_res_orMatrixOutputs_T_22 = {_decode_res_T_53,_decode_res_T_75,_decode_res_T_79,_decode_res_T_85,
    _decode_res_T_87}; // @[Cat.scala 33:92]
  wire  _decode_res_orMatrixOutputs_T_23 = |_decode_res_orMatrixOutputs_T_22; // @[pla.scala 114:39]
  wire [7:0] decode_res_orMatrixOutputs_lo_10 = {_decode_res_T_73,_decode_res_T_77,_decode_res_T_93,_decode_res_T_95,
    _decode_res_T_97,_decode_res_T_99,_decode_res_T_121,_decode_res_T_129}; // @[Cat.scala 33:92]
  wire [15:0] _decode_res_orMatrixOutputs_T_24 = {_decode_res_T_3,_decode_res_T_7,_decode_res_T_23,_decode_res_T_29,
    _decode_res_T_41,_decode_res_T_51,_decode_res_T_57,_decode_res_T_65,decode_res_orMatrixOutputs_lo_10}; // @[Cat.scala 33:92]
  wire  _decode_res_orMatrixOutputs_T_25 = |_decode_res_orMatrixOutputs_T_24; // @[pla.scala 114:39]
  wire [5:0] decode_res_orMatrixOutputs_lo_11 = {_decode_res_T_45,_decode_res_T_49,_decode_res_T_61,_decode_res_T_63,
    _decode_res_T_69,_decode_res_T_81}; // @[Cat.scala 33:92]
  wire [11:0] _decode_res_orMatrixOutputs_T_26 = {_decode_res_T_9,_decode_res_T_13,_decode_res_T_21,_decode_res_T_25,
    _decode_res_T_35,_decode_res_T_39,decode_res_orMatrixOutputs_lo_11}; // @[Cat.scala 33:92]
  wire  _decode_res_orMatrixOutputs_T_27 = |_decode_res_orMatrixOutputs_T_26; // @[pla.scala 114:39]
  wire [5:0] _decode_res_orMatrixOutputs_T_28 = {_decode_res_T_15,_decode_res_T_17,_decode_res_T_19,_decode_res_T_71,
    _decode_res_T_81,_decode_res_T_91}; // @[Cat.scala 33:92]
  wire  _decode_res_orMatrixOutputs_T_29 = |_decode_res_orMatrixOutputs_T_28; // @[pla.scala 114:39]
  wire [8:0] _decode_res_orMatrixOutputs_T_30 = {_decode_res_T_31,_decode_res_T_33,_decode_res_T_37,_decode_res_T_41,
    _decode_res_T_43,_decode_res_T_57,_decode_res_T_59,_decode_res_T_83,_decode_res_T_91}; // @[Cat.scala 33:92]
  wire  _decode_res_orMatrixOutputs_T_31 = |_decode_res_orMatrixOutputs_T_30; // @[pla.scala 114:39]
  wire  _decode_res_orMatrixOutputs_T_32 = |_decode_res_T_47; // @[pla.scala 114:39]
  wire [7:0] decode_res_orMatrixOutputs_lo_14 = {_decode_res_orMatrixOutputs_T_15,_decode_res_orMatrixOutputs_T_13,
    _decode_res_orMatrixOutputs_T_11,_decode_res_orMatrixOutputs_T_9,_decode_res_orMatrixOutputs_T_7,
    _decode_res_orMatrixOutputs_T_5,_decode_res_orMatrixOutputs_T_3,_decode_res_orMatrixOutputs_T_1}; // @[Cat.scala 33:92]
  wire [16:0] decode_res_orMatrixOutputs = {_decode_res_orMatrixOutputs_T_32,_decode_res_orMatrixOutputs_T_31,
    _decode_res_orMatrixOutputs_T_29,_decode_res_orMatrixOutputs_T_27,_decode_res_orMatrixOutputs_T_25,
    _decode_res_orMatrixOutputs_T_23,_decode_res_orMatrixOutputs_T_21,_decode_res_orMatrixOutputs_T_19,
    _decode_res_orMatrixOutputs_T_17,decode_res_orMatrixOutputs_lo_14}; // @[Cat.scala 33:92]
  wire  _decode_res_invMatrixOutputs_T_2 = ~decode_res_orMatrixOutputs[1]; // @[pla.scala 123:40]
  wire  _decode_res_invMatrixOutputs_T_4 = ~decode_res_orMatrixOutputs[2]; // @[pla.scala 123:40]
  wire  _decode_res_invMatrixOutputs_T_6 = ~decode_res_orMatrixOutputs[3]; // @[pla.scala 123:40]
  wire  _decode_res_invMatrixOutputs_T_8 = ~decode_res_orMatrixOutputs[4]; // @[pla.scala 123:40]
  wire  _decode_res_invMatrixOutputs_T_10 = ~decode_res_orMatrixOutputs[5]; // @[pla.scala 123:40]
  wire  _decode_res_invMatrixOutputs_T_13 = ~decode_res_orMatrixOutputs[7]; // @[pla.scala 123:40]
  wire [7:0] decode_res_invMatrixOutputs_lo = {_decode_res_invMatrixOutputs_T_13,decode_res_orMatrixOutputs[6],
    _decode_res_invMatrixOutputs_T_10,_decode_res_invMatrixOutputs_T_8,_decode_res_invMatrixOutputs_T_6,
    _decode_res_invMatrixOutputs_T_4,_decode_res_invMatrixOutputs_T_2,decode_res_orMatrixOutputs[0]}; // @[Cat.scala 33:92]
  wire [16:0] decode_res_invMatrixOutputs = {decode_res_orMatrixOutputs[16],decode_res_orMatrixOutputs[15],
    decode_res_orMatrixOutputs[14],decode_res_orMatrixOutputs[13],decode_res_orMatrixOutputs[12],
    decode_res_orMatrixOutputs[11],decode_res_orMatrixOutputs[10],decode_res_orMatrixOutputs[9],
    decode_res_orMatrixOutputs[8],decode_res_invMatrixOutputs_lo}; // @[Cat.scala 33:92]
  wire [3:0] inst_type = decode_res_invMatrixOutputs[11:8]; // @[ID_stage.scala 34:31]
  wire [1:0] mem_we = decode_res_invMatrixOutputs[7:6]; // @[ID_stage.scala 35:28]
  wire [4:0] inst_name = decode_res_invMatrixOutputs[5:1]; // @[ID_stage.scala 36:31]
  wire  _imm_T = inst_type == 4'h2; // @[ID_stage.scala 43:20]
  wire  _imm_T_1 = inst_type == 4'h3; // @[ID_stage.scala 44:20]
  wire  _imm_T_2 = inst_type == 4'h9; // @[ID_stage.scala 45:20]
  wire  _imm_T_3 = inst_type == 4'h4; // @[ID_stage.scala 46:20]
  wire  _imm_T_4 = inst_type == 4'h5; // @[ID_stage.scala 47:20]
  wire  _imm_T_5 = inst_type == 4'h6; // @[ID_stage.scala 48:20]
  wire  _imm_T_6 = inst_type == 4'h7; // @[ID_stage.scala 49:20]
  wire [31:0] _imm_T_7 = _imm_T_6 ? 32'h4 : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _imm_T_8 = _imm_T_5 ? imm20u : _imm_T_7; // @[Mux.scala 101:16]
  wire [31:0] _imm_T_9 = _imm_T_4 ? imm20 : _imm_T_8; // @[Mux.scala 101:16]
  wire [31:0] _imm_T_10 = _imm_T_3 ? 32'h4 : _imm_T_9; // @[Mux.scala 101:16]
  wire [31:0] _imm_T_11 = _imm_T_2 ? {{20'd0}, imm12u} : _imm_T_10; // @[Mux.scala 101:16]
  wire [31:0] _imm_T_12 = _imm_T_1 ? imm12 : _imm_T_11; // @[Mux.scala 101:16]
  wire [31:0] imm = _imm_T ? {{27'd0}, imm5} : _imm_T_12; // @[Mux.scala 101:16]
  wire  _src2_is_rd_T_5 = inst_type == 4'ha; // @[ID_stage.scala 54:111]
  wire  src2_is_rd = inst_name != 5'h10 & _imm_T_3 | mem_we == 2'h0 | inst_type == 4'ha; // @[ID_stage.scala 54:99]
  wire  _reg_io_waddr_T = inst_name == 5'hf; // @[ID_stage.scala 58:35]
  wire  _rf_waddr_T = inst_name == 5'he; // @[ID_stage.scala 71:34]
  wire  rj_eq_rd = reg__io_rdata1 == reg__io_rdata2; // @[ID_stage.scala 76:30]
  wire [32:0] rj_sub_rd = {_rj_sub_rd_adder__out_cout,_rj_sub_rd_adder__out_s}; // @[Cat.scala 33:92]
  wire  slt_res = reg__io_rdata1[31] & ~reg__io_rdata2[31] | ~(reg__io_rdata1[31] ^ reg__io_rdata2[31]) & rj_sub_rd[31]; // @[ID_stage.scala 78:49]
  wire  sltu_res = ~rj_sub_rd[32]; // @[ID_stage.scala 79:20]
  wire  _br_taken_T_4 = inst_name == 5'h1 & ~rj_eq_rd; // @[ID_stage.scala 81:48]
  wire  _br_taken_T_5 = inst_name == 5'h0 & rj_eq_rd | _br_taken_T_4; // @[ID_stage.scala 80:57]
  wire  _br_taken_T_7 = inst_name == 5'h2 & slt_res; // @[ID_stage.scala 82:48]
  wire  _br_taken_T_8 = _br_taken_T_5 | _br_taken_T_7; // @[ID_stage.scala 81:60]
  wire  _br_taken_T_11 = inst_name == 5'h3 & ~slt_res; // @[ID_stage.scala 83:48]
  wire  _br_taken_T_12 = _br_taken_T_8 | _br_taken_T_11; // @[ID_stage.scala 82:58]
  wire  _br_taken_T_14 = inst_name == 5'h4 & sltu_res; // @[ID_stage.scala 84:48]
  wire  _br_taken_T_15 = _br_taken_T_12 | _br_taken_T_14; // @[ID_stage.scala 83:59]
  wire  _br_taken_T_18 = inst_name == 5'h5 & ~sltu_res; // @[ID_stage.scala 85:48]
  wire  _br_taken_T_19 = _br_taken_T_15 | _br_taken_T_18; // @[ID_stage.scala 84:59]
  wire  _br_taken_T_21 = _br_taken_T_19 | _rf_waddr_T; // @[ID_stage.scala 85:60]
  wire  _br_taken_T_24 = inst_name == 5'h10; // @[ID_stage.scala 87:31]
  wire  _br_taken_T_25 = _br_taken_T_21 | _reg_io_waddr_T | _br_taken_T_24; // @[ID_stage.scala 86:72]
  wire [31:0] _br_add1_T_1 = 5'h10 == inst_name ? reg__io_rdata1 : imm16; // @[Mux.scala 81:58]
  wire [31:0] _br_add1_T_3 = 5'h12 == inst_name ? 32'h0 : _br_add1_T_1; // @[Mux.scala 81:58]
  wire [31:0] _br_add1_T_5 = 5'he == inst_name ? imm26 : _br_add1_T_3; // @[Mux.scala 81:58]
  wire [31:0] _br_add2_T_1 = 5'h10 == inst_name ? 32'h0 : ds_bits_pc; // @[Mux.scala 81:58]
  wire [31:0] _br_add2_T_3 = 5'h12 == inst_name ? ds_bits_pc : _br_add2_T_1; // @[Mux.scala 81:58]
  wire [31:0] _br_add2_T_5 = 5'he == inst_name ? ds_bits_pc : _br_add2_T_3; // @[Mux.scala 81:58]
  wire [32:0] _br_target_T = {br_target_adder__out_cout,br_target_adder__out_s}; // @[Cat.scala 33:92]
  wire  src1_is_pc = _br_taken_T_24 | inst_name == 5'h11 | _reg_io_waddr_T; // @[ID_stage.scala 108:78]
  regfile reg_ ( // @[ID_stage.scala 55:21]
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
    .io_inst(reg__io_inst),
    .io_inv(reg__io_inv),
    .io_csr_ex(reg__io_csr_ex),
    .io_csr_ertn(reg__io_csr_ertn),
    .io_csr_ecode(reg__io_csr_ecode),
    .io_csr_ex_pc(reg__io_csr_ex_pc),
    .io_csr_crmd(reg__io_csr_crmd),
    .io_csr_prmd(reg__io_csr_prmd),
    .io_csr_estat(reg__io_csr_estat),
    .io_csr_era(reg__io_csr_era),
    .io_csr_eentry(reg__io_csr_eentry)
  );
  Adder _rj_sub_rd_adder_ ( // @[Adder.scala 98:37]
    .in_a(_rj_sub_rd_adder__in_a),
    .in_b(_rj_sub_rd_adder__in_b),
    .in_cin(_rj_sub_rd_adder__in_cin),
    .out_s(_rj_sub_rd_adder__out_s),
    .out_cout(_rj_sub_rd_adder__out_cout)
  );
  Adder br_target_adder_ ( // @[Adder.scala 106:36]
    .in_a(br_target_adder__in_a),
    .in_b(br_target_adder__in_b),
    .in_cin(br_target_adder__in_cin),
    .out_s(br_target_adder__out_s),
    .out_cout(br_target_adder__out_cout)
  );
  assign toes_valid = ds_valid; // @[ID_stage.scala 129:16]
  assign toes_bits_pc = ds_bits_pc; // @[ID_stage.scala 107:18]
  assign toes_bits_alu_src1 = src1_is_pc ? ds_bits_pc : reg__io_rdata1; // @[ID_stage.scala 109:30]
  assign toes_bits_alu_src2 = inst_type == 4'h1 | _src2_is_rd_T_5 ? reg__io_rdata2 : imm; // @[ID_stage.scala 110:30]
  assign toes_bits_alu_op = decode_res_invMatrixOutputs[16:12]; // @[ID_stage.scala 106:35]
  assign toes_bits_rf_waddr = inst_name == 5'he ? 5'h1 : rd; // @[ID_stage.scala 71:23]
  assign toes_bits_rf_we = decode_res_invMatrixOutputs[0]; // @[ID_stage.scala 37:27]
  assign toes_bits_mem_we = decode_res_invMatrixOutputs[7:6]; // @[ID_stage.scala 35:28]
  assign toes_bits_inst_name = decode_res_invMatrixOutputs[5:1]; // @[ID_stage.scala 36:31]
  assign toes_bits_mem_wdata = reg__io_rdata2; // @[ID_stage.scala 115:25]
  assign toes_bits_csr_num = ds_bits_inst[23:10]; // @[ID_stage.scala 117:30]
  assign toes_bits_csr_we = rj != 5'h0 & inst_name == 5'h15; // @[ID_stage.scala 116:36]
  assign toes_bits_ex = inst_type == 4'h8 & inst_name != 5'h14 & inst_name != 5'h12; // @[ID_stage.scala 118:71]
  assign toes_bits_ertn = inst_name == 5'h14; // @[ID_stage.scala 119:33]
  assign toes_bits_csr_wmask = rj == 5'h1 ? 32'hffffffff : reg__io_rdata1; // @[ID_stage.scala 120:31]
  assign toes_bits_dpi_c_is_break = inst_name == 5'h12; // @[ID_stage.scala 122:43]
  assign toes_bits_dpi_c_inst = ds_bits_inst; // @[ID_stage.scala 123:26]
  assign toes_bits_dpi_c_next_pc = ds_bits_next_pc; // @[ID_stage.scala 124:29]
  assign toes_bits_dpi_c_inv = inst_type == 4'h0; // @[ID_stage.scala 125:38]
  assign br_taken = _br_taken_T_25 | inst_name == 5'h12; // @[ID_stage.scala 87:48]
  assign br_target = _br_target_T[31:0]; // @[ID_stage.scala 102:15]
  assign reg__clock = clock;
  assign reg__io_raddr1 = ds_bits_inst[9:5]; // @[ID_stage.scala 19:18]
  assign reg__io_raddr2 = src2_is_rd ? rd : imm5; // @[ID_stage.scala 57:25]
  assign reg__io_waddr = inst_name == 5'hf ? 5'h1 : torf_rf_waddr; // @[ID_stage.scala 58:24]
  assign reg__io_wdata = torf_rf_wdata; // @[ID_stage.scala 59:18]
  assign reg__io_wen = torf_rf_we; // @[ID_stage.scala 60:16]
  assign reg__io_rf_pc = torf_dpi_c_next_pc; // @[ID_stage.scala 61:18]
  assign reg__io_is_break = torf_dpi_c_is_break; // @[ID_stage.scala 63:21]
  assign reg__io_valid = torf_valid; // @[ID_stage.scala 62:18]
  assign reg__io_inst = torf_dpi_c_inst; // @[ID_stage.scala 64:17]
  assign reg__io_inv = torf_dpi_c_inv; // @[ID_stage.scala 65:16]
  assign reg__io_csr_ex = torf_dpi_c_csr_ex; // @[ID_stage.scala 66:16]
  assign reg__io_csr_ertn = torf_dpi_c_csr_ertn; // @[ID_stage.scala 66:16]
  assign reg__io_csr_ecode = torf_dpi_c_csr_ecode; // @[ID_stage.scala 66:16]
  assign reg__io_csr_ex_pc = torf_dpi_c_csr_ex_pc; // @[ID_stage.scala 66:16]
  assign reg__io_csr_crmd = torf_dpi_c_csr_crmd; // @[ID_stage.scala 66:16]
  assign reg__io_csr_prmd = torf_dpi_c_csr_prmd; // @[ID_stage.scala 66:16]
  assign reg__io_csr_estat = torf_dpi_c_csr_estat; // @[ID_stage.scala 66:16]
  assign reg__io_csr_era = torf_dpi_c_csr_era; // @[ID_stage.scala 66:16]
  assign reg__io_csr_eentry = torf_dpi_c_csr_eentry; // @[ID_stage.scala 66:16]
  assign _rj_sub_rd_adder__in_a = reg__io_rdata1; // @[Adder.scala 99:30]
  assign _rj_sub_rd_adder__in_b = ~reg__io_rdata2; // @[ID_stage.scala 77:49]
  assign _rj_sub_rd_adder__in_cin = 1'h1; // @[Adder.scala 101:32]
  assign br_target_adder__in_a = 5'hf == inst_name ? imm26 : _br_add1_T_5; // @[Mux.scala 81:58]
  assign br_target_adder__in_b = 5'hf == inst_name ? ds_bits_pc : _br_add2_T_5; // @[Mux.scala 81:58]
  assign br_target_adder__in_cin = 1'h0; // @[Adder.scala 109:31]
endmodule
module Shifter(
  input  [31:0] in_src,
  input  [4:0]  in_offset,
  input         in_right,
  input         in_arith,
  output [31:0] out_res
);
  wire  _buf_T_3 = in_arith & in_src[31]; // @[Shifter.scala 25:53]
  wire [31:0] _buf_T_5 = _buf_T_3 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 77:12]
  wire [63:0] buf_ = {_buf_T_5,in_src}; // @[Cat.scala 33:92]
  wire [63:0] left_shift = {buf_[62:0],1'h0}; // @[Cat.scala 33:92]
  wire [62:0] right_shift = buf_[63:1]; // @[Shifter.scala 30:46]
  wire [63:0] shi = in_right ? {{1'd0}, right_shift} : left_shift; // @[Shifter.scala 31:30]
  wire [63:0] select_1 = in_offset[0] ? shi : buf_; // @[Shifter.scala 32:33]
  wire [63:0] left_shift_1 = {select_1[61:0],2'h0}; // @[Cat.scala 33:92]
  wire [61:0] right_shift_1 = select_1[63:2]; // @[Shifter.scala 30:46]
  wire [63:0] shi_1 = in_right ? {{2'd0}, right_shift_1} : left_shift_1; // @[Shifter.scala 31:30]
  wire [63:0] select_2 = in_offset[1] ? shi_1 : select_1; // @[Shifter.scala 32:33]
  wire [63:0] left_shift_2 = {select_2[59:0],4'h0}; // @[Cat.scala 33:92]
  wire [59:0] right_shift_2 = select_2[63:4]; // @[Shifter.scala 30:46]
  wire [63:0] shi_2 = in_right ? {{4'd0}, right_shift_2} : left_shift_2; // @[Shifter.scala 31:30]
  wire [63:0] select_3 = in_offset[2] ? shi_2 : select_2; // @[Shifter.scala 32:33]
  wire [63:0] left_shift_3 = {select_3[55:0],8'h0}; // @[Cat.scala 33:92]
  wire [55:0] right_shift_3 = select_3[63:8]; // @[Shifter.scala 30:46]
  wire [63:0] shi_3 = in_right ? {{8'd0}, right_shift_3} : left_shift_3; // @[Shifter.scala 31:30]
  wire [63:0] select_4 = in_offset[3] ? shi_3 : select_3; // @[Shifter.scala 32:33]
  wire [63:0] left_shift_4 = {select_4[47:0],16'h0}; // @[Cat.scala 33:92]
  wire [47:0] right_shift_4 = select_4[63:16]; // @[Shifter.scala 30:46]
  wire [63:0] shi_4 = in_right ? {{16'd0}, right_shift_4} : left_shift_4; // @[Shifter.scala 31:30]
  wire [63:0] select_5 = in_offset[4] ? shi_4 : select_4; // @[Shifter.scala 32:33]
  assign out_res = select_5[31:0]; // @[Shifter.scala 34:17]
endmodule
module ALU(
  input  [4:0]  io_alu_op,
  input  [31:0] io_src1,
  input  [31:0] io_src2,
  output [31:0] io_res
);
  wire [31:0] _add_res_adder__in_a; // @[Adder.scala 98:37]
  wire [31:0] _add_res_adder__in_b; // @[Adder.scala 98:37]
  wire  _add_res_adder__in_cin; // @[Adder.scala 98:37]
  wire [31:0] _add_res_adder__out_s; // @[Adder.scala 98:37]
  wire  _add_res_adder__out_cout; // @[Adder.scala 98:37]
  wire [31:0] shift_res_s_in_src; // @[Shifter.scala 39:31]
  wire [4:0] shift_res_s_in_offset; // @[Shifter.scala 39:31]
  wire  shift_res_s_in_right; // @[Shifter.scala 39:31]
  wire  shift_res_s_in_arith; // @[Shifter.scala 39:31]
  wire [31:0] shift_res_s_out_res; // @[Shifter.scala 39:31]
  wire  op_add = io_alu_op == 5'h1; // @[ALU.scala 20:41]
  wire  op_sub = io_alu_op == 5'h2; // @[ALU.scala 22:34]
  wire  op_slt = io_alu_op == 5'h3; // @[ALU.scala 23:34]
  wire  op_sltu = io_alu_op == 5'h4; // @[ALU.scala 24:34]
  wire  op_and = io_alu_op == 5'h5; // @[ALU.scala 25:34]
  wire  op_nor = io_alu_op == 5'h6; // @[ALU.scala 26:34]
  wire  op_or = io_alu_op == 5'h7; // @[ALU.scala 27:34]
  wire  op_xor = io_alu_op == 5'h8; // @[ALU.scala 28:34]
  wire  op_sll = io_alu_op == 5'h9; // @[ALU.scala 29:34]
  wire  op_srl = io_alu_op == 5'ha; // @[ALU.scala 30:34]
  wire  op_sra = io_alu_op == 5'hb; // @[ALU.scala 31:34]
  wire  op_lui = io_alu_op == 5'hc; // @[ALU.scala 32:34]
  wire  op_mul = io_alu_op == 5'hd; // @[ALU.scala 33:34]
  wire  op_mulh = io_alu_op == 5'he; // @[ALU.scala 34:34]
  wire  op_mulhu = io_alu_op == 5'hf; // @[ALU.scala 35:34]
  wire  op_div = io_alu_op == 5'h10; // @[ALU.scala 36:34]
  wire  op_mod = io_alu_op == 5'h12; // @[ALU.scala 37:34]
  wire  op_divu = io_alu_op == 5'h11; // @[ALU.scala 38:34]
  wire  op_modu = io_alu_op == 5'h13; // @[ALU.scala 39:34]
  wire  add_sub = op_sub | op_slt | op_sltu; // @[ALU.scala 41:40]
  wire [31:0] _add_res_T = ~io_src2; // @[ALU.scala 43:52]
  wire [32:0] add_res = {_add_res_adder__out_cout,_add_res_adder__out_s}; // @[Cat.scala 33:92]
  wire  slt_res = io_src1[31] & ~io_src2[31] | ~(io_src1[31] ^ io_src2[31]) & add_res[31]; // @[ALU.scala 44:50]
  wire  sltu_res = ~add_res[32]; // @[ALU.scala 45:24]
  wire [31:0] and_res = io_src1 & io_src2; // @[ALU.scala 46:31]
  wire [31:0] or_res = io_src1 | io_src2; // @[ALU.scala 47:31]
  wire [31:0] nor_res = ~or_res; // @[ALU.scala 48:23]
  wire [31:0] xor_res = io_src1 ^ io_src2; // @[ALU.scala 49:31]
  wire [63:0] mul_pre = io_src1 * io_src2; // @[ALU.scala 58:31]
  wire [31:0] mul_res = mul_pre[31:0]; // @[ALU.scala 59:30]
  wire [31:0] mulhu_res = mul_pre[63:32]; // @[ALU.scala 60:32]
  wire [63:0] _mulh_res_T_2 = $signed(io_src1) * $signed(io_src2); // @[ALU.scala 61:40]
  wire [31:0] mulh_res = _mulh_res_T_2[63:32]; // @[ALU.scala 61:57]
  wire [31:0] divu_res = io_src1 / io_src2; // @[ALU.scala 62:32]
  wire [31:0] modu_res = io_src1 % io_src2; // @[ALU.scala 63:32]
  wire [32:0] _div_res_T_3 = $signed(io_src1) / $signed(io_src2); // @[ALU.scala 65:54]
  wire [31:0] mod_res = $signed(io_src1) % $signed(io_src2); // @[ALU.scala 66:57]
  wire  _io_res_T = op_add | op_sub; // @[ALU.scala 88:23]
  wire  _io_res_T_2 = op_sll | op_sra | op_srl; // @[ALU.scala 95:34]
  wire [31:0] _io_res_T_3 = op_modu ? modu_res : 32'hdeadbeef; // @[Mux.scala 101:16]
  wire [31:0] _io_res_T_4 = op_divu ? divu_res : _io_res_T_3; // @[Mux.scala 101:16]
  wire [31:0] _io_res_T_5 = op_mod ? mod_res : _io_res_T_4; // @[Mux.scala 101:16]
  wire [31:0] div_res = _div_res_T_3[31:0]; // @[ALU.scala 64:27 65:17]
  wire [31:0] _io_res_T_6 = op_div ? div_res : _io_res_T_5; // @[Mux.scala 101:16]
  wire [31:0] _io_res_T_7 = op_mulhu ? mulhu_res : _io_res_T_6; // @[Mux.scala 101:16]
  wire [31:0] _io_res_T_8 = op_mulh ? mulh_res : _io_res_T_7; // @[Mux.scala 101:16]
  wire [31:0] _io_res_T_9 = op_mul ? mul_res : _io_res_T_8; // @[Mux.scala 101:16]
  wire [31:0] _io_res_T_10 = op_lui ? io_src2 : _io_res_T_9; // @[Mux.scala 101:16]
  wire [31:0] shift_res = shift_res_s_out_res; // @[ALU.scala 52:29 53:19]
  wire [31:0] _io_res_T_11 = _io_res_T_2 ? shift_res : _io_res_T_10; // @[Mux.scala 101:16]
  wire [31:0] _io_res_T_12 = op_xor ? xor_res : _io_res_T_11; // @[Mux.scala 101:16]
  wire [31:0] _io_res_T_13 = op_nor ? nor_res : _io_res_T_12; // @[Mux.scala 101:16]
  wire [31:0] _io_res_T_14 = op_or ? or_res : _io_res_T_13; // @[Mux.scala 101:16]
  wire [31:0] _io_res_T_15 = op_and ? and_res : _io_res_T_14; // @[Mux.scala 101:16]
  wire [31:0] _io_res_T_16 = op_sltu ? {{31'd0}, sltu_res} : _io_res_T_15; // @[Mux.scala 101:16]
  wire [31:0] _io_res_T_17 = op_slt ? {{31'd0}, slt_res} : _io_res_T_16; // @[Mux.scala 101:16]
  wire [32:0] _io_res_T_18 = _io_res_T ? add_res : {{1'd0}, _io_res_T_17}; // @[Mux.scala 101:16]
  Adder _add_res_adder_ ( // @[Adder.scala 98:37]
    .in_a(_add_res_adder__in_a),
    .in_b(_add_res_adder__in_b),
    .in_cin(_add_res_adder__in_cin),
    .out_s(_add_res_adder__out_s),
    .out_cout(_add_res_adder__out_cout)
  );
  Shifter shift_res_s ( // @[Shifter.scala 39:31]
    .in_src(shift_res_s_in_src),
    .in_offset(shift_res_s_in_offset),
    .in_right(shift_res_s_in_right),
    .in_arith(shift_res_s_in_arith),
    .out_res(shift_res_s_out_res)
  );
  assign io_res = _io_res_T_18[31:0]; // @[ALU.scala 68:16]
  assign _add_res_adder__in_a = io_src1; // @[Adder.scala 99:30]
  assign _add_res_adder__in_b = add_sub ? _add_res_T : io_src2; // @[ALU.scala 43:42]
  assign _add_res_adder__in_cin = op_sub | op_slt | op_sltu; // @[ALU.scala 41:40]
  assign shift_res_s_in_src = io_src1; // @[Shifter.scala 40:26]
  assign shift_res_s_in_offset = io_src2[4:0]; // @[ALU.scala 53:58]
  assign shift_res_s_in_right = ~op_sll; // @[ALU.scala 50:21]
  assign shift_res_s_in_arith = io_alu_op == 5'hb; // @[ALU.scala 31:34]
endmodule
module EX_stage(
  input         es_valid,
  input  [31:0] es_bits_pc,
  input  [31:0] es_bits_alu_src1,
  input  [31:0] es_bits_alu_src2,
  input  [4:0]  es_bits_alu_op,
  input  [4:0]  es_bits_rf_waddr,
  input         es_bits_rf_we,
  input  [1:0]  es_bits_mem_we,
  input  [4:0]  es_bits_inst_name,
  input  [31:0] es_bits_mem_wdata,
  input  [13:0] es_bits_csr_num,
  input         es_bits_csr_we,
  input         es_bits_ex,
  input         es_bits_ertn,
  input  [31:0] es_bits_csr_wmask,
  input         es_bits_dpi_c_is_break,
  input  [31:0] es_bits_dpi_c_inst,
  input  [31:0] es_bits_dpi_c_next_pc,
  input         es_bits_dpi_c_inv,
  output        toms_valid,
  output [31:0] toms_bits_rf_wdata,
  output [4:0]  toms_bits_inst_name,
  output        toms_bits_res_from_mem,
  output        toms_bits_rf_we,
  output [4:0]  toms_bits_rf_waddr,
  output        toms_bits_dpi_c_is_break,
  output [31:0] toms_bits_dpi_c_inst,
  output [31:0] toms_bits_dpi_c_next_pc,
  output        toms_bits_dpi_c_inv,
  output        toms_bits_dpi_c_csr_ex,
  output        toms_bits_dpi_c_csr_ertn,
  output [5:0]  toms_bits_dpi_c_csr_ecode,
  output [31:0] toms_bits_dpi_c_csr_ex_pc,
  output [31:0] toms_bits_dpi_c_csr_crmd,
  output [31:0] toms_bits_dpi_c_csr_prmd,
  output [31:0] toms_bits_dpi_c_csr_estat,
  output [31:0] toms_bits_dpi_c_csr_era,
  output [31:0] toms_bits_dpi_c_csr_eentry,
  output        data_sram_en,
  output        data_sram_wr,
  output [31:0] data_sram_addr,
  output [31:0] data_sram_wdata,
  output [3:0]  data_sram_wstrb,
  output        csr_we,
  output [13:0] csr_num,
  output [31:0] csr_wvalue,
  output [31:0] csr_wmask,
  input  [31:0] csr_rvalue,
  output        csr_ex,
  output        csr_ertn,
  output [31:0] csr_exe_pc,
  output [5:0]  csr_ecode,
  input         csr_dpic_ex,
  input         csr_dpic_ertn,
  input  [5:0]  csr_dpic_ecode,
  input  [31:0] csr_dpic_ex_pc,
  input  [31:0] csr_dpic_crmd,
  input  [31:0] csr_dpic_prmd,
  input  [31:0] csr_dpic_estat,
  input  [31:0] csr_dpic_era,
  input  [31:0] csr_dpic_eentry
);
  wire [4:0] alu_io_alu_op; // @[EX_stage.scala 20:21]
  wire [31:0] alu_io_src1; // @[EX_stage.scala 20:21]
  wire [31:0] alu_io_src2; // @[EX_stage.scala 20:21]
  wire [31:0] alu_io_res; // @[EX_stage.scala 20:21]
  wire [15:0] _data_sram_wstrb_T_1 = 5'hb == es_bits_inst_name ? 16'h1 : 16'hdead; // @[Mux.scala 81:58]
  wire [15:0] _data_sram_wstrb_T_3 = 5'hc == es_bits_inst_name ? 16'h3 : _data_sram_wstrb_T_1; // @[Mux.scala 81:58]
  wire [15:0] _data_sram_wstrb_T_5 = 5'hd == es_bits_inst_name ? 16'h7 : _data_sram_wstrb_T_3; // @[Mux.scala 81:58]
  wire  _csr_ecode_T = es_bits_inst_name == 5'h13; // @[EX_stage.scala 43:28]
  wire [3:0] _csr_ecode_T_1 = _csr_ecode_T ? 4'hb : 4'h0; // @[Mux.scala 101:16]
  wire  res_from_csr = es_bits_inst_name == 5'h15; // @[EX_stage.scala 47:42]
  ALU alu ( // @[EX_stage.scala 20:21]
    .io_alu_op(alu_io_alu_op),
    .io_src1(alu_io_src1),
    .io_src2(alu_io_src2),
    .io_res(alu_io_res)
  );
  assign toms_valid = es_valid; // @[EX_stage.scala 60:16]
  assign toms_bits_rf_wdata = res_from_csr ? csr_rvalue : alu_io_res; // @[EX_stage.scala 49:30]
  assign toms_bits_inst_name = es_bits_inst_name; // @[EX_stage.scala 50:25]
  assign toms_bits_res_from_mem = es_bits_mem_we == 2'h1; // @[EX_stage.scala 51:46]
  assign toms_bits_rf_we = es_bits_rf_we; // @[EX_stage.scala 53:21]
  assign toms_bits_rf_waddr = es_bits_rf_waddr; // @[EX_stage.scala 54:24]
  assign toms_bits_dpi_c_is_break = es_bits_dpi_c_is_break; // @[EX_stage.scala 55:21]
  assign toms_bits_dpi_c_inst = es_bits_dpi_c_inst; // @[EX_stage.scala 55:21]
  assign toms_bits_dpi_c_next_pc = es_bits_dpi_c_next_pc; // @[EX_stage.scala 55:21]
  assign toms_bits_dpi_c_inv = es_bits_dpi_c_inv; // @[EX_stage.scala 55:21]
  assign toms_bits_dpi_c_csr_ex = csr_dpic_ex; // @[EX_stage.scala 57:25]
  assign toms_bits_dpi_c_csr_ertn = csr_dpic_ertn; // @[EX_stage.scala 57:25]
  assign toms_bits_dpi_c_csr_ecode = csr_dpic_ecode; // @[EX_stage.scala 57:25]
  assign toms_bits_dpi_c_csr_ex_pc = csr_dpic_ex_pc; // @[EX_stage.scala 57:25]
  assign toms_bits_dpi_c_csr_crmd = csr_dpic_crmd; // @[EX_stage.scala 57:25]
  assign toms_bits_dpi_c_csr_prmd = csr_dpic_prmd; // @[EX_stage.scala 57:25]
  assign toms_bits_dpi_c_csr_estat = csr_dpic_estat; // @[EX_stage.scala 57:25]
  assign toms_bits_dpi_c_csr_era = csr_dpic_era; // @[EX_stage.scala 57:25]
  assign toms_bits_dpi_c_csr_eentry = csr_dpic_eentry; // @[EX_stage.scala 57:25]
  assign data_sram_en = es_bits_mem_we != 2'h2; // @[EX_stage.scala 25:36]
  assign data_sram_wr = es_bits_mem_we == 2'h0; // @[EX_stage.scala 26:36]
  assign data_sram_addr = alu_io_res; // @[EX_stage.scala 27:20]
  assign data_sram_wdata = es_bits_mem_wdata; // @[EX_stage.scala 28:21]
  assign data_sram_wstrb = _data_sram_wstrb_T_5[3:0]; // @[EX_stage.scala 29:21]
  assign csr_we = es_bits_csr_we; // @[EX_stage.scala 38:12]
  assign csr_num = es_bits_csr_num; // @[EX_stage.scala 37:13]
  assign csr_wvalue = es_bits_alu_src2; // @[EX_stage.scala 40:16]
  assign csr_wmask = es_bits_csr_wmask; // @[EX_stage.scala 39:15]
  assign csr_ex = es_bits_ex; // @[EX_stage.scala 35:12]
  assign csr_ertn = es_bits_ertn; // @[EX_stage.scala 36:14]
  assign csr_exe_pc = es_bits_pc; // @[EX_stage.scala 41:16]
  assign csr_ecode = {{2'd0}, _csr_ecode_T_1}; // @[EX_stage.scala 42:15]
  assign alu_io_alu_op = es_bits_alu_op; // @[EX_stage.scala 21:19]
  assign alu_io_src1 = es_bits_alu_src1; // @[EX_stage.scala 22:17]
  assign alu_io_src2 = es_bits_alu_src2; // @[EX_stage.scala 23:17]
endmodule
module MEM_stage(
  input         ms_valid,
  input  [31:0] ms_bits_rf_wdata,
  input  [4:0]  ms_bits_inst_name,
  input         ms_bits_res_from_mem,
  input         ms_bits_rf_we,
  input  [4:0]  ms_bits_rf_waddr,
  input         ms_bits_dpi_c_is_break,
  input  [31:0] ms_bits_dpi_c_inst,
  input  [31:0] ms_bits_dpi_c_next_pc,
  input         ms_bits_dpi_c_inv,
  input         ms_bits_dpi_c_csr_ex,
  input         ms_bits_dpi_c_csr_ertn,
  input  [5:0]  ms_bits_dpi_c_csr_ecode,
  input  [31:0] ms_bits_dpi_c_csr_ex_pc,
  input  [31:0] ms_bits_dpi_c_csr_crmd,
  input  [31:0] ms_bits_dpi_c_csr_prmd,
  input  [31:0] ms_bits_dpi_c_csr_estat,
  input  [31:0] ms_bits_dpi_c_csr_era,
  input  [31:0] ms_bits_dpi_c_csr_eentry,
  output        tows_valid,
  output        tows_bits_rf_we,
  output [4:0]  tows_bits_rf_waddr,
  output [31:0] tows_bits_rf_wdata,
  output        tows_bits_dpi_c_is_break,
  output [31:0] tows_bits_dpi_c_inst,
  output [31:0] tows_bits_dpi_c_next_pc,
  output        tows_bits_dpi_c_inv,
  output        tows_bits_dpi_c_csr_ex,
  output        tows_bits_dpi_c_csr_ertn,
  output [5:0]  tows_bits_dpi_c_csr_ecode,
  output [31:0] tows_bits_dpi_c_csr_ex_pc,
  output [31:0] tows_bits_dpi_c_csr_crmd,
  output [31:0] tows_bits_dpi_c_csr_prmd,
  output [31:0] tows_bits_dpi_c_csr_estat,
  output [31:0] tows_bits_dpi_c_csr_era,
  output [31:0] tows_bits_dpi_c_csr_eentry,
  input  [31:0] data_sram_rdata
);
  wire [7:0] _mem_rdata_sign_T = data_sram_rdata[7:0]; // @[tool.scala 8:22]
  wire [31:0] _mem_rdata_T_1 = {{24{_mem_rdata_sign_T[7]}},_mem_rdata_sign_T}; // @[tool.scala 9:14]
  wire [15:0] _mem_rdata_sign_T_1 = data_sram_rdata[15:0]; // @[tool.scala 8:22]
  wire [31:0] _mem_rdata_T_4 = {{16{_mem_rdata_sign_T_1[15]}},_mem_rdata_sign_T_1}; // @[tool.scala 9:14]
  wire [31:0] _mem_rdata_T_7 = 5'h6 == ms_bits_inst_name ? _mem_rdata_T_1 : 32'hdead; // @[Mux.scala 81:58]
  wire [31:0] _mem_rdata_T_9 = 5'h9 == ms_bits_inst_name ? {{24'd0}, data_sram_rdata[7:0]} : _mem_rdata_T_7; // @[Mux.scala 81:58]
  wire [31:0] _mem_rdata_T_11 = 5'h7 == ms_bits_inst_name ? _mem_rdata_T_4 : _mem_rdata_T_9; // @[Mux.scala 81:58]
  wire [31:0] _mem_rdata_T_13 = 5'ha == ms_bits_inst_name ? {{16'd0}, data_sram_rdata[15:0]} : _mem_rdata_T_11; // @[Mux.scala 81:58]
  wire [31:0] mem_rdata = 5'h8 == ms_bits_inst_name ? data_sram_rdata : _mem_rdata_T_13; // @[Mux.scala 81:58]
  assign tows_valid = ms_valid; // @[MEM_stage.scala 32:20]
  assign tows_bits_rf_we = ms_bits_rf_we; // @[MEM_stage.scala 26:25]
  assign tows_bits_rf_waddr = ms_bits_rf_waddr; // @[MEM_stage.scala 27:28]
  assign tows_bits_rf_wdata = ms_bits_res_from_mem ? mem_rdata : ms_bits_rf_wdata; // @[MEM_stage.scala 28:34]
  assign tows_bits_dpi_c_is_break = ms_bits_dpi_c_is_break; // @[MEM_stage.scala 29:25]
  assign tows_bits_dpi_c_inst = ms_bits_dpi_c_inst; // @[MEM_stage.scala 29:25]
  assign tows_bits_dpi_c_next_pc = ms_bits_dpi_c_next_pc; // @[MEM_stage.scala 29:25]
  assign tows_bits_dpi_c_inv = ms_bits_dpi_c_inv; // @[MEM_stage.scala 29:25]
  assign tows_bits_dpi_c_csr_ex = ms_bits_dpi_c_csr_ex; // @[MEM_stage.scala 29:25]
  assign tows_bits_dpi_c_csr_ertn = ms_bits_dpi_c_csr_ertn; // @[MEM_stage.scala 29:25]
  assign tows_bits_dpi_c_csr_ecode = ms_bits_dpi_c_csr_ecode; // @[MEM_stage.scala 29:25]
  assign tows_bits_dpi_c_csr_ex_pc = ms_bits_dpi_c_csr_ex_pc; // @[MEM_stage.scala 29:25]
  assign tows_bits_dpi_c_csr_crmd = ms_bits_dpi_c_csr_crmd; // @[MEM_stage.scala 29:25]
  assign tows_bits_dpi_c_csr_prmd = ms_bits_dpi_c_csr_prmd; // @[MEM_stage.scala 29:25]
  assign tows_bits_dpi_c_csr_estat = ms_bits_dpi_c_csr_estat; // @[MEM_stage.scala 29:25]
  assign tows_bits_dpi_c_csr_era = ms_bits_dpi_c_csr_era; // @[MEM_stage.scala 29:25]
  assign tows_bits_dpi_c_csr_eentry = ms_bits_dpi_c_csr_eentry; // @[MEM_stage.scala 29:25]
endmodule
module WB_stage(
  input         ws_valid,
  input         ws_bits_rf_we,
  input  [4:0]  ws_bits_rf_waddr,
  input  [31:0] ws_bits_rf_wdata,
  input         ws_bits_dpi_c_is_break,
  input  [31:0] ws_bits_dpi_c_inst,
  input  [31:0] ws_bits_dpi_c_next_pc,
  input         ws_bits_dpi_c_inv,
  input         ws_bits_dpi_c_csr_ex,
  input         ws_bits_dpi_c_csr_ertn,
  input  [5:0]  ws_bits_dpi_c_csr_ecode,
  input  [31:0] ws_bits_dpi_c_csr_ex_pc,
  input  [31:0] ws_bits_dpi_c_csr_crmd,
  input  [31:0] ws_bits_dpi_c_csr_prmd,
  input  [31:0] ws_bits_dpi_c_csr_estat,
  input  [31:0] ws_bits_dpi_c_csr_era,
  input  [31:0] ws_bits_dpi_c_csr_eentry,
  output        torf_rf_we,
  output [4:0]  torf_rf_waddr,
  output [31:0] torf_rf_wdata,
  output        torf_valid,
  output        torf_dpi_c_is_break,
  output [31:0] torf_dpi_c_inst,
  output [31:0] torf_dpi_c_next_pc,
  output        torf_dpi_c_inv,
  output        torf_dpi_c_csr_ex,
  output        torf_dpi_c_csr_ertn,
  output [5:0]  torf_dpi_c_csr_ecode,
  output [31:0] torf_dpi_c_csr_ex_pc,
  output [31:0] torf_dpi_c_csr_crmd,
  output [31:0] torf_dpi_c_csr_prmd,
  output [31:0] torf_dpi_c_csr_estat,
  output [31:0] torf_dpi_c_csr_era,
  output [31:0] torf_dpi_c_csr_eentry
);
  assign torf_rf_we = ws_bits_rf_we; // @[WB_stage.scala 13:20]
  assign torf_rf_waddr = ws_bits_rf_waddr; // @[WB_stage.scala 14:23]
  assign torf_rf_wdata = ws_bits_rf_wdata; // @[WB_stage.scala 15:23]
  assign torf_valid = ws_valid; // @[WB_stage.scala 17:20]
  assign torf_dpi_c_is_break = ws_bits_dpi_c_is_break; // @[WB_stage.scala 16:20]
  assign torf_dpi_c_inst = ws_bits_dpi_c_inst; // @[WB_stage.scala 16:20]
  assign torf_dpi_c_next_pc = ws_bits_dpi_c_next_pc; // @[WB_stage.scala 16:20]
  assign torf_dpi_c_inv = ws_bits_dpi_c_inv; // @[WB_stage.scala 16:20]
  assign torf_dpi_c_csr_ex = ws_bits_dpi_c_csr_ex; // @[WB_stage.scala 16:20]
  assign torf_dpi_c_csr_ertn = ws_bits_dpi_c_csr_ertn; // @[WB_stage.scala 16:20]
  assign torf_dpi_c_csr_ecode = ws_bits_dpi_c_csr_ecode; // @[WB_stage.scala 16:20]
  assign torf_dpi_c_csr_ex_pc = ws_bits_dpi_c_csr_ex_pc; // @[WB_stage.scala 16:20]
  assign torf_dpi_c_csr_crmd = ws_bits_dpi_c_csr_crmd; // @[WB_stage.scala 16:20]
  assign torf_dpi_c_csr_prmd = ws_bits_dpi_c_csr_prmd; // @[WB_stage.scala 16:20]
  assign torf_dpi_c_csr_estat = ws_bits_dpi_c_csr_estat; // @[WB_stage.scala 16:20]
  assign torf_dpi_c_csr_era = ws_bits_dpi_c_csr_era; // @[WB_stage.scala 16:20]
  assign torf_dpi_c_csr_eentry = ws_bits_dpi_c_csr_eentry; // @[WB_stage.scala 16:20]
endmodule
module csr(
  input         clock,
  input         reset,
  input         io_we,
  input  [13:0] io_num,
  input  [31:0] io_wvalue,
  input  [31:0] io_wmask,
  output [31:0] io_rvalue,
  input         io_ex,
  input         io_ertn,
  input  [31:0] io_exe_pc,
  input  [5:0]  io_ecode,
  output        io_dpic_ex,
  output        io_dpic_ertn,
  output [5:0]  io_dpic_ecode,
  output [31:0] io_dpic_ex_pc,
  output [31:0] io_dpic_crmd,
  output [31:0] io_dpic_prmd,
  output [31:0] io_dpic_estat,
  output [31:0] io_dpic_era,
  output [31:0] io_dpic_eentry,
  output        csr_br_taken,
  output [31:0] csr_br_pc
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] crmd; // @[csr.scala 33:29]
  reg [31:0] prmd; // @[csr.scala 34:29]
  reg [31:0] era; // @[csr.scala 35:29]
  reg [31:0] estat; // @[csr.scala 36:29]
  reg [31:0] eentry; // @[csr.scala 37:29]
  wire  _T = io_num == 14'h0; // @[csr.scala 63:21]
  wire [31:0] _crmd_T = ~io_wmask; // @[csr.scala 64:32]
  wire [31:0] _crmd_T_1 = crmd & _crmd_T; // @[csr.scala 64:30]
  wire [31:0] _crmd_T_2 = io_wvalue & io_wmask; // @[csr.scala 64:54]
  wire [31:0] _crmd_T_3 = _crmd_T_1 | _crmd_T_2; // @[csr.scala 64:42]
  wire [31:0] _crmd_T_6 = {crmd[31:3],prmd[2:0]}; // @[Cat.scala 33:92]
  wire [31:0] _crmd_T_8 = {crmd[31:3],3'h0}; // @[Cat.scala 33:92]
  wire [31:0] _GEN_0 = io_ex ? _crmd_T_8 : crmd; // @[csr.scala 71:34 72:22 33:29]
  wire [31:0] _GEN_2 = io_ertn ? _crmd_T_6 : _GEN_0; // @[csr.scala 67:36 68:22]
  wire  _T_5 = io_num == 14'h1; // @[csr.scala 76:21]
  wire [31:0] _prmd_T_1 = prmd & _crmd_T; // @[csr.scala 77:30]
  wire [31:0] _prmd_T_3 = _prmd_T_1 | _crmd_T_2; // @[csr.scala 77:42]
  wire [31:0] _prmd_T_6 = {prmd[31:3],crmd[2:0]}; // @[Cat.scala 33:92]
  wire [31:0] _GEN_6 = io_ex ? _prmd_T_6 : prmd; // @[csr.scala 80:34 81:22 34:29]
  wire  _T_9 = io_num == 14'h5; // @[csr.scala 85:21]
  wire [31:0] _estat_T_1 = estat & _crmd_T; // @[csr.scala 86:32]
  wire [31:0] _estat_T_3 = _estat_T_1 | _crmd_T_2; // @[csr.scala 86:44]
  wire [31:0] _estat_T_5 = {10'h0,io_ecode,estat[15:0]}; // @[Cat.scala 33:92]
  wire [31:0] _GEN_10 = io_ex ? _estat_T_5 : estat; // @[csr.scala 89:34 90:23 36:29]
  wire  _T_13 = io_num == 14'h6; // @[csr.scala 94:21]
  wire [31:0] _era_T_1 = era & _crmd_T; // @[csr.scala 95:28]
  wire [31:0] _era_T_3 = _era_T_1 | _crmd_T_2; // @[csr.scala 95:40]
  wire [31:0] _GEN_14 = io_ex ? io_exe_pc : era; // @[csr.scala 98:34 99:21 35:29]
  wire  _T_17 = io_num == 14'hc; // @[csr.scala 103:21]
  wire [31:0] _eentry_T_1 = eentry & _crmd_T; // @[csr.scala 104:34]
  wire [31:0] _eentry_T_3 = _eentry_T_1 | _crmd_T_2; // @[csr.scala 104:46]
  wire [31:0] _io_rvalue_T_2 = _T ? 32'hffffffff : 32'h0; // @[Bitwise.scala 77:12]
  wire [31:0] _io_rvalue_T_3 = _io_rvalue_T_2 & crmd; // @[csr.scala 111:49]
  wire [31:0] _io_rvalue_T_6 = _T_5 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 77:12]
  wire [31:0] _io_rvalue_T_7 = _io_rvalue_T_6 & prmd; // @[csr.scala 112:60]
  wire [31:0] _io_rvalue_T_8 = _io_rvalue_T_3 | _io_rvalue_T_7; // @[csr.scala 111:56]
  wire [31:0] _io_rvalue_T_11 = _T_9 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 77:12]
  wire [31:0] _io_rvalue_T_12 = _io_rvalue_T_11 & estat; // @[csr.scala 113:60]
  wire [31:0] _io_rvalue_T_13 = _io_rvalue_T_8 | _io_rvalue_T_12; // @[csr.scala 112:67]
  wire [31:0] _io_rvalue_T_16 = _T_13 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 77:12]
  wire [31:0] _io_rvalue_T_17 = _io_rvalue_T_16 & era; // @[csr.scala 114:60]
  wire [31:0] _io_rvalue_T_18 = _io_rvalue_T_13 | _io_rvalue_T_17; // @[csr.scala 113:68]
  wire [31:0] _io_rvalue_T_21 = _T_17 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 77:12]
  wire [31:0] _io_rvalue_T_22 = _io_rvalue_T_21 & eentry; // @[csr.scala 115:60]
  assign io_rvalue = _io_rvalue_T_18 | _io_rvalue_T_22; // @[csr.scala 114:66]
  assign io_dpic_ex = io_ex; // @[csr.scala 58:20]
  assign io_dpic_ertn = io_ertn; // @[csr.scala 59:22]
  assign io_dpic_ecode = io_ecode; // @[csr.scala 60:23]
  assign io_dpic_ex_pc = io_exe_pc; // @[csr.scala 56:24]
  assign io_dpic_crmd = io_num == 14'h0 & io_we ? _crmd_T_3 : _GEN_2; // @[csr.scala 63:49 65:30]
  assign io_dpic_prmd = io_num == 14'h1 & io_we ? _prmd_T_3 : _GEN_6; // @[csr.scala 76:49 78:30]
  assign io_dpic_estat = io_num == 14'h5 & io_we ? _estat_T_3 : _GEN_10; // @[csr.scala 85:49 87:31]
  assign io_dpic_era = io_num == 14'h6 & io_we ? _era_T_3 : _GEN_14; // @[csr.scala 94:49 96:29]
  assign io_dpic_eentry = io_num == 14'hc & io_we ? _eentry_T_3 : eentry; // @[csr.scala 103:49 105:32 55:24]
  assign csr_br_taken = io_ex | io_ertn; // @[csr.scala 108:31]
  assign csr_br_pc = io_ertn ? era : eentry; // @[csr.scala 109:25]
  always @(posedge clock) begin
    if (reset) begin // @[csr.scala 33:29]
      crmd <= 32'h8; // @[csr.scala 33:29]
    end else if (io_num == 14'h0 & io_we) begin // @[csr.scala 63:49]
      crmd <= _crmd_T_3; // @[csr.scala 64:22]
    end else if (io_ertn) begin // @[csr.scala 67:36]
      crmd <= _crmd_T_6; // @[csr.scala 68:22]
    end else if (io_ex) begin // @[csr.scala 71:34]
      crmd <= _crmd_T_8; // @[csr.scala 72:22]
    end
    if (reset) begin // @[csr.scala 34:29]
      prmd <= 32'h0; // @[csr.scala 34:29]
    end else if (io_num == 14'h1 & io_we) begin // @[csr.scala 76:49]
      prmd <= _prmd_T_3; // @[csr.scala 77:22]
    end else if (io_ex) begin // @[csr.scala 80:34]
      prmd <= _prmd_T_6; // @[csr.scala 81:22]
    end
    if (reset) begin // @[csr.scala 35:29]
      era <= 32'h0; // @[csr.scala 35:29]
    end else if (io_num == 14'h6 & io_we) begin // @[csr.scala 94:49]
      era <= _era_T_3; // @[csr.scala 95:21]
    end else if (io_ex) begin // @[csr.scala 98:34]
      era <= io_exe_pc; // @[csr.scala 99:21]
    end
    if (reset) begin // @[csr.scala 36:29]
      estat <= 32'h0; // @[csr.scala 36:29]
    end else if (io_num == 14'h5 & io_we) begin // @[csr.scala 85:49]
      estat <= _estat_T_3; // @[csr.scala 86:23]
    end else if (io_ex) begin // @[csr.scala 89:34]
      estat <= _estat_T_5; // @[csr.scala 90:23]
    end
    if (reset) begin // @[csr.scala 37:29]
      eentry <= 32'h0; // @[csr.scala 37:29]
    end else if (io_num == 14'hc & io_we) begin // @[csr.scala 103:49]
      eentry <= _eentry_T_3; // @[csr.scala 104:24]
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
  crmd = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  prmd = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  era = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  estat = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  eentry = _RAND_4[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module mycpu_top(
  input         clock,
  input         reset,
  output        inst_sram_en,
  output [31:0] inst_sram_addr,
  input  [31:0] inst_sram_rdata,
  output        data_sram_en,
  output        data_sram_wr,
  output [31:0] data_sram_addr,
  output [31:0] data_sram_wdata,
  output [3:0]  data_sram_wstrb,
  input  [31:0] data_sram_rdata
);
  wire  pIF_clock; // @[mycpu_top.scala 27:25]
  wire  pIF_reset; // @[mycpu_top.scala 27:25]
  wire  pIF_br_taken; // @[mycpu_top.scala 27:25]
  wire [31:0] pIF_br_target; // @[mycpu_top.scala 27:25]
  wire  pIF_inst_sram_en; // @[mycpu_top.scala 27:25]
  wire [31:0] pIF_inst_sram_addr; // @[mycpu_top.scala 27:25]
  wire  pIF_tofs_valid; // @[mycpu_top.scala 27:25]
  wire [31:0] pIF_tofs_bits_pc; // @[mycpu_top.scala 27:25]
  wire [31:0] pIF_tofs_bits_next_pc; // @[mycpu_top.scala 27:25]
  wire  pIF_csr_br_taken; // @[mycpu_top.scala 27:25]
  wire [31:0] pIF_csr_br_pc; // @[mycpu_top.scala 27:25]
  wire  IF_tods_valid; // @[mycpu_top.scala 28:24]
  wire [31:0] IF_tods_bits_pc; // @[mycpu_top.scala 28:24]
  wire [31:0] IF_tods_bits_inst; // @[mycpu_top.scala 28:24]
  wire [31:0] IF_tods_bits_next_pc; // @[mycpu_top.scala 28:24]
  wire [31:0] IF_inst_sram_rdata; // @[mycpu_top.scala 28:24]
  wire  IF_fs_valid; // @[mycpu_top.scala 28:24]
  wire [31:0] IF_fs_bits_pc; // @[mycpu_top.scala 28:24]
  wire [31:0] IF_fs_bits_next_pc; // @[mycpu_top.scala 28:24]
  wire  ID_clock; // @[mycpu_top.scala 29:24]
  wire  ID_toes_valid; // @[mycpu_top.scala 29:24]
  wire [31:0] ID_toes_bits_pc; // @[mycpu_top.scala 29:24]
  wire [31:0] ID_toes_bits_alu_src1; // @[mycpu_top.scala 29:24]
  wire [31:0] ID_toes_bits_alu_src2; // @[mycpu_top.scala 29:24]
  wire [4:0] ID_toes_bits_alu_op; // @[mycpu_top.scala 29:24]
  wire [4:0] ID_toes_bits_rf_waddr; // @[mycpu_top.scala 29:24]
  wire  ID_toes_bits_rf_we; // @[mycpu_top.scala 29:24]
  wire [1:0] ID_toes_bits_mem_we; // @[mycpu_top.scala 29:24]
  wire [4:0] ID_toes_bits_inst_name; // @[mycpu_top.scala 29:24]
  wire [31:0] ID_toes_bits_mem_wdata; // @[mycpu_top.scala 29:24]
  wire [13:0] ID_toes_bits_csr_num; // @[mycpu_top.scala 29:24]
  wire  ID_toes_bits_csr_we; // @[mycpu_top.scala 29:24]
  wire  ID_toes_bits_ex; // @[mycpu_top.scala 29:24]
  wire  ID_toes_bits_ertn; // @[mycpu_top.scala 29:24]
  wire [31:0] ID_toes_bits_csr_wmask; // @[mycpu_top.scala 29:24]
  wire  ID_toes_bits_dpi_c_is_break; // @[mycpu_top.scala 29:24]
  wire [31:0] ID_toes_bits_dpi_c_inst; // @[mycpu_top.scala 29:24]
  wire [31:0] ID_toes_bits_dpi_c_next_pc; // @[mycpu_top.scala 29:24]
  wire  ID_toes_bits_dpi_c_inv; // @[mycpu_top.scala 29:24]
  wire  ID_ds_valid; // @[mycpu_top.scala 29:24]
  wire [31:0] ID_ds_bits_pc; // @[mycpu_top.scala 29:24]
  wire [31:0] ID_ds_bits_inst; // @[mycpu_top.scala 29:24]
  wire [31:0] ID_ds_bits_next_pc; // @[mycpu_top.scala 29:24]
  wire  ID_torf_rf_we; // @[mycpu_top.scala 29:24]
  wire [4:0] ID_torf_rf_waddr; // @[mycpu_top.scala 29:24]
  wire [31:0] ID_torf_rf_wdata; // @[mycpu_top.scala 29:24]
  wire  ID_torf_valid; // @[mycpu_top.scala 29:24]
  wire  ID_torf_dpi_c_is_break; // @[mycpu_top.scala 29:24]
  wire [31:0] ID_torf_dpi_c_inst; // @[mycpu_top.scala 29:24]
  wire [31:0] ID_torf_dpi_c_next_pc; // @[mycpu_top.scala 29:24]
  wire  ID_torf_dpi_c_inv; // @[mycpu_top.scala 29:24]
  wire  ID_torf_dpi_c_csr_ex; // @[mycpu_top.scala 29:24]
  wire  ID_torf_dpi_c_csr_ertn; // @[mycpu_top.scala 29:24]
  wire [5:0] ID_torf_dpi_c_csr_ecode; // @[mycpu_top.scala 29:24]
  wire [31:0] ID_torf_dpi_c_csr_ex_pc; // @[mycpu_top.scala 29:24]
  wire [31:0] ID_torf_dpi_c_csr_crmd; // @[mycpu_top.scala 29:24]
  wire [31:0] ID_torf_dpi_c_csr_prmd; // @[mycpu_top.scala 29:24]
  wire [31:0] ID_torf_dpi_c_csr_estat; // @[mycpu_top.scala 29:24]
  wire [31:0] ID_torf_dpi_c_csr_era; // @[mycpu_top.scala 29:24]
  wire [31:0] ID_torf_dpi_c_csr_eentry; // @[mycpu_top.scala 29:24]
  wire  ID_br_taken; // @[mycpu_top.scala 29:24]
  wire [31:0] ID_br_target; // @[mycpu_top.scala 29:24]
  wire  EXE_es_valid; // @[mycpu_top.scala 30:25]
  wire [31:0] EXE_es_bits_pc; // @[mycpu_top.scala 30:25]
  wire [31:0] EXE_es_bits_alu_src1; // @[mycpu_top.scala 30:25]
  wire [31:0] EXE_es_bits_alu_src2; // @[mycpu_top.scala 30:25]
  wire [4:0] EXE_es_bits_alu_op; // @[mycpu_top.scala 30:25]
  wire [4:0] EXE_es_bits_rf_waddr; // @[mycpu_top.scala 30:25]
  wire  EXE_es_bits_rf_we; // @[mycpu_top.scala 30:25]
  wire [1:0] EXE_es_bits_mem_we; // @[mycpu_top.scala 30:25]
  wire [4:0] EXE_es_bits_inst_name; // @[mycpu_top.scala 30:25]
  wire [31:0] EXE_es_bits_mem_wdata; // @[mycpu_top.scala 30:25]
  wire [13:0] EXE_es_bits_csr_num; // @[mycpu_top.scala 30:25]
  wire  EXE_es_bits_csr_we; // @[mycpu_top.scala 30:25]
  wire  EXE_es_bits_ex; // @[mycpu_top.scala 30:25]
  wire  EXE_es_bits_ertn; // @[mycpu_top.scala 30:25]
  wire [31:0] EXE_es_bits_csr_wmask; // @[mycpu_top.scala 30:25]
  wire  EXE_es_bits_dpi_c_is_break; // @[mycpu_top.scala 30:25]
  wire [31:0] EXE_es_bits_dpi_c_inst; // @[mycpu_top.scala 30:25]
  wire [31:0] EXE_es_bits_dpi_c_next_pc; // @[mycpu_top.scala 30:25]
  wire  EXE_es_bits_dpi_c_inv; // @[mycpu_top.scala 30:25]
  wire  EXE_toms_valid; // @[mycpu_top.scala 30:25]
  wire [31:0] EXE_toms_bits_rf_wdata; // @[mycpu_top.scala 30:25]
  wire [4:0] EXE_toms_bits_inst_name; // @[mycpu_top.scala 30:25]
  wire  EXE_toms_bits_res_from_mem; // @[mycpu_top.scala 30:25]
  wire  EXE_toms_bits_rf_we; // @[mycpu_top.scala 30:25]
  wire [4:0] EXE_toms_bits_rf_waddr; // @[mycpu_top.scala 30:25]
  wire  EXE_toms_bits_dpi_c_is_break; // @[mycpu_top.scala 30:25]
  wire [31:0] EXE_toms_bits_dpi_c_inst; // @[mycpu_top.scala 30:25]
  wire [31:0] EXE_toms_bits_dpi_c_next_pc; // @[mycpu_top.scala 30:25]
  wire  EXE_toms_bits_dpi_c_inv; // @[mycpu_top.scala 30:25]
  wire  EXE_toms_bits_dpi_c_csr_ex; // @[mycpu_top.scala 30:25]
  wire  EXE_toms_bits_dpi_c_csr_ertn; // @[mycpu_top.scala 30:25]
  wire [5:0] EXE_toms_bits_dpi_c_csr_ecode; // @[mycpu_top.scala 30:25]
  wire [31:0] EXE_toms_bits_dpi_c_csr_ex_pc; // @[mycpu_top.scala 30:25]
  wire [31:0] EXE_toms_bits_dpi_c_csr_crmd; // @[mycpu_top.scala 30:25]
  wire [31:0] EXE_toms_bits_dpi_c_csr_prmd; // @[mycpu_top.scala 30:25]
  wire [31:0] EXE_toms_bits_dpi_c_csr_estat; // @[mycpu_top.scala 30:25]
  wire [31:0] EXE_toms_bits_dpi_c_csr_era; // @[mycpu_top.scala 30:25]
  wire [31:0] EXE_toms_bits_dpi_c_csr_eentry; // @[mycpu_top.scala 30:25]
  wire  EXE_data_sram_en; // @[mycpu_top.scala 30:25]
  wire  EXE_data_sram_wr; // @[mycpu_top.scala 30:25]
  wire [31:0] EXE_data_sram_addr; // @[mycpu_top.scala 30:25]
  wire [31:0] EXE_data_sram_wdata; // @[mycpu_top.scala 30:25]
  wire [3:0] EXE_data_sram_wstrb; // @[mycpu_top.scala 30:25]
  wire  EXE_csr_we; // @[mycpu_top.scala 30:25]
  wire [13:0] EXE_csr_num; // @[mycpu_top.scala 30:25]
  wire [31:0] EXE_csr_wvalue; // @[mycpu_top.scala 30:25]
  wire [31:0] EXE_csr_wmask; // @[mycpu_top.scala 30:25]
  wire [31:0] EXE_csr_rvalue; // @[mycpu_top.scala 30:25]
  wire  EXE_csr_ex; // @[mycpu_top.scala 30:25]
  wire  EXE_csr_ertn; // @[mycpu_top.scala 30:25]
  wire [31:0] EXE_csr_exe_pc; // @[mycpu_top.scala 30:25]
  wire [5:0] EXE_csr_ecode; // @[mycpu_top.scala 30:25]
  wire  EXE_csr_dpic_ex; // @[mycpu_top.scala 30:25]
  wire  EXE_csr_dpic_ertn; // @[mycpu_top.scala 30:25]
  wire [5:0] EXE_csr_dpic_ecode; // @[mycpu_top.scala 30:25]
  wire [31:0] EXE_csr_dpic_ex_pc; // @[mycpu_top.scala 30:25]
  wire [31:0] EXE_csr_dpic_crmd; // @[mycpu_top.scala 30:25]
  wire [31:0] EXE_csr_dpic_prmd; // @[mycpu_top.scala 30:25]
  wire [31:0] EXE_csr_dpic_estat; // @[mycpu_top.scala 30:25]
  wire [31:0] EXE_csr_dpic_era; // @[mycpu_top.scala 30:25]
  wire [31:0] EXE_csr_dpic_eentry; // @[mycpu_top.scala 30:25]
  wire  MEM_ms_valid; // @[mycpu_top.scala 31:25]
  wire [31:0] MEM_ms_bits_rf_wdata; // @[mycpu_top.scala 31:25]
  wire [4:0] MEM_ms_bits_inst_name; // @[mycpu_top.scala 31:25]
  wire  MEM_ms_bits_res_from_mem; // @[mycpu_top.scala 31:25]
  wire  MEM_ms_bits_rf_we; // @[mycpu_top.scala 31:25]
  wire [4:0] MEM_ms_bits_rf_waddr; // @[mycpu_top.scala 31:25]
  wire  MEM_ms_bits_dpi_c_is_break; // @[mycpu_top.scala 31:25]
  wire [31:0] MEM_ms_bits_dpi_c_inst; // @[mycpu_top.scala 31:25]
  wire [31:0] MEM_ms_bits_dpi_c_next_pc; // @[mycpu_top.scala 31:25]
  wire  MEM_ms_bits_dpi_c_inv; // @[mycpu_top.scala 31:25]
  wire  MEM_ms_bits_dpi_c_csr_ex; // @[mycpu_top.scala 31:25]
  wire  MEM_ms_bits_dpi_c_csr_ertn; // @[mycpu_top.scala 31:25]
  wire [5:0] MEM_ms_bits_dpi_c_csr_ecode; // @[mycpu_top.scala 31:25]
  wire [31:0] MEM_ms_bits_dpi_c_csr_ex_pc; // @[mycpu_top.scala 31:25]
  wire [31:0] MEM_ms_bits_dpi_c_csr_crmd; // @[mycpu_top.scala 31:25]
  wire [31:0] MEM_ms_bits_dpi_c_csr_prmd; // @[mycpu_top.scala 31:25]
  wire [31:0] MEM_ms_bits_dpi_c_csr_estat; // @[mycpu_top.scala 31:25]
  wire [31:0] MEM_ms_bits_dpi_c_csr_era; // @[mycpu_top.scala 31:25]
  wire [31:0] MEM_ms_bits_dpi_c_csr_eentry; // @[mycpu_top.scala 31:25]
  wire  MEM_tows_valid; // @[mycpu_top.scala 31:25]
  wire  MEM_tows_bits_rf_we; // @[mycpu_top.scala 31:25]
  wire [4:0] MEM_tows_bits_rf_waddr; // @[mycpu_top.scala 31:25]
  wire [31:0] MEM_tows_bits_rf_wdata; // @[mycpu_top.scala 31:25]
  wire  MEM_tows_bits_dpi_c_is_break; // @[mycpu_top.scala 31:25]
  wire [31:0] MEM_tows_bits_dpi_c_inst; // @[mycpu_top.scala 31:25]
  wire [31:0] MEM_tows_bits_dpi_c_next_pc; // @[mycpu_top.scala 31:25]
  wire  MEM_tows_bits_dpi_c_inv; // @[mycpu_top.scala 31:25]
  wire  MEM_tows_bits_dpi_c_csr_ex; // @[mycpu_top.scala 31:25]
  wire  MEM_tows_bits_dpi_c_csr_ertn; // @[mycpu_top.scala 31:25]
  wire [5:0] MEM_tows_bits_dpi_c_csr_ecode; // @[mycpu_top.scala 31:25]
  wire [31:0] MEM_tows_bits_dpi_c_csr_ex_pc; // @[mycpu_top.scala 31:25]
  wire [31:0] MEM_tows_bits_dpi_c_csr_crmd; // @[mycpu_top.scala 31:25]
  wire [31:0] MEM_tows_bits_dpi_c_csr_prmd; // @[mycpu_top.scala 31:25]
  wire [31:0] MEM_tows_bits_dpi_c_csr_estat; // @[mycpu_top.scala 31:25]
  wire [31:0] MEM_tows_bits_dpi_c_csr_era; // @[mycpu_top.scala 31:25]
  wire [31:0] MEM_tows_bits_dpi_c_csr_eentry; // @[mycpu_top.scala 31:25]
  wire [31:0] MEM_data_sram_rdata; // @[mycpu_top.scala 31:25]
  wire  WB_ws_valid; // @[mycpu_top.scala 32:24]
  wire  WB_ws_bits_rf_we; // @[mycpu_top.scala 32:24]
  wire [4:0] WB_ws_bits_rf_waddr; // @[mycpu_top.scala 32:24]
  wire [31:0] WB_ws_bits_rf_wdata; // @[mycpu_top.scala 32:24]
  wire  WB_ws_bits_dpi_c_is_break; // @[mycpu_top.scala 32:24]
  wire [31:0] WB_ws_bits_dpi_c_inst; // @[mycpu_top.scala 32:24]
  wire [31:0] WB_ws_bits_dpi_c_next_pc; // @[mycpu_top.scala 32:24]
  wire  WB_ws_bits_dpi_c_inv; // @[mycpu_top.scala 32:24]
  wire  WB_ws_bits_dpi_c_csr_ex; // @[mycpu_top.scala 32:24]
  wire  WB_ws_bits_dpi_c_csr_ertn; // @[mycpu_top.scala 32:24]
  wire [5:0] WB_ws_bits_dpi_c_csr_ecode; // @[mycpu_top.scala 32:24]
  wire [31:0] WB_ws_bits_dpi_c_csr_ex_pc; // @[mycpu_top.scala 32:24]
  wire [31:0] WB_ws_bits_dpi_c_csr_crmd; // @[mycpu_top.scala 32:24]
  wire [31:0] WB_ws_bits_dpi_c_csr_prmd; // @[mycpu_top.scala 32:24]
  wire [31:0] WB_ws_bits_dpi_c_csr_estat; // @[mycpu_top.scala 32:24]
  wire [31:0] WB_ws_bits_dpi_c_csr_era; // @[mycpu_top.scala 32:24]
  wire [31:0] WB_ws_bits_dpi_c_csr_eentry; // @[mycpu_top.scala 32:24]
  wire  WB_torf_rf_we; // @[mycpu_top.scala 32:24]
  wire [4:0] WB_torf_rf_waddr; // @[mycpu_top.scala 32:24]
  wire [31:0] WB_torf_rf_wdata; // @[mycpu_top.scala 32:24]
  wire  WB_torf_valid; // @[mycpu_top.scala 32:24]
  wire  WB_torf_dpi_c_is_break; // @[mycpu_top.scala 32:24]
  wire [31:0] WB_torf_dpi_c_inst; // @[mycpu_top.scala 32:24]
  wire [31:0] WB_torf_dpi_c_next_pc; // @[mycpu_top.scala 32:24]
  wire  WB_torf_dpi_c_inv; // @[mycpu_top.scala 32:24]
  wire  WB_torf_dpi_c_csr_ex; // @[mycpu_top.scala 32:24]
  wire  WB_torf_dpi_c_csr_ertn; // @[mycpu_top.scala 32:24]
  wire [5:0] WB_torf_dpi_c_csr_ecode; // @[mycpu_top.scala 32:24]
  wire [31:0] WB_torf_dpi_c_csr_ex_pc; // @[mycpu_top.scala 32:24]
  wire [31:0] WB_torf_dpi_c_csr_crmd; // @[mycpu_top.scala 32:24]
  wire [31:0] WB_torf_dpi_c_csr_prmd; // @[mycpu_top.scala 32:24]
  wire [31:0] WB_torf_dpi_c_csr_estat; // @[mycpu_top.scala 32:24]
  wire [31:0] WB_torf_dpi_c_csr_era; // @[mycpu_top.scala 32:24]
  wire [31:0] WB_torf_dpi_c_csr_eentry; // @[mycpu_top.scala 32:24]
  wire  csr_clock; // @[mycpu_top.scala 34:25]
  wire  csr_reset; // @[mycpu_top.scala 34:25]
  wire  csr_io_we; // @[mycpu_top.scala 34:25]
  wire [13:0] csr_io_num; // @[mycpu_top.scala 34:25]
  wire [31:0] csr_io_wvalue; // @[mycpu_top.scala 34:25]
  wire [31:0] csr_io_wmask; // @[mycpu_top.scala 34:25]
  wire [31:0] csr_io_rvalue; // @[mycpu_top.scala 34:25]
  wire  csr_io_ex; // @[mycpu_top.scala 34:25]
  wire  csr_io_ertn; // @[mycpu_top.scala 34:25]
  wire [31:0] csr_io_exe_pc; // @[mycpu_top.scala 34:25]
  wire [5:0] csr_io_ecode; // @[mycpu_top.scala 34:25]
  wire  csr_io_dpic_ex; // @[mycpu_top.scala 34:25]
  wire  csr_io_dpic_ertn; // @[mycpu_top.scala 34:25]
  wire [5:0] csr_io_dpic_ecode; // @[mycpu_top.scala 34:25]
  wire [31:0] csr_io_dpic_ex_pc; // @[mycpu_top.scala 34:25]
  wire [31:0] csr_io_dpic_crmd; // @[mycpu_top.scala 34:25]
  wire [31:0] csr_io_dpic_prmd; // @[mycpu_top.scala 34:25]
  wire [31:0] csr_io_dpic_estat; // @[mycpu_top.scala 34:25]
  wire [31:0] csr_io_dpic_era; // @[mycpu_top.scala 34:25]
  wire [31:0] csr_io_dpic_eentry; // @[mycpu_top.scala 34:25]
  wire  csr_csr_br_taken; // @[mycpu_top.scala 34:25]
  wire [31:0] csr_csr_br_pc; // @[mycpu_top.scala 34:25]
  preIF pIF ( // @[mycpu_top.scala 27:25]
    .clock(pIF_clock),
    .reset(pIF_reset),
    .br_taken(pIF_br_taken),
    .br_target(pIF_br_target),
    .inst_sram_en(pIF_inst_sram_en),
    .inst_sram_addr(pIF_inst_sram_addr),
    .tofs_valid(pIF_tofs_valid),
    .tofs_bits_pc(pIF_tofs_bits_pc),
    .tofs_bits_next_pc(pIF_tofs_bits_next_pc),
    .csr_br_taken(pIF_csr_br_taken),
    .csr_br_pc(pIF_csr_br_pc)
  );
  IF_stage IF ( // @[mycpu_top.scala 28:24]
    .tods_valid(IF_tods_valid),
    .tods_bits_pc(IF_tods_bits_pc),
    .tods_bits_inst(IF_tods_bits_inst),
    .tods_bits_next_pc(IF_tods_bits_next_pc),
    .inst_sram_rdata(IF_inst_sram_rdata),
    .fs_valid(IF_fs_valid),
    .fs_bits_pc(IF_fs_bits_pc),
    .fs_bits_next_pc(IF_fs_bits_next_pc)
  );
  ID_stage ID ( // @[mycpu_top.scala 29:24]
    .clock(ID_clock),
    .toes_valid(ID_toes_valid),
    .toes_bits_pc(ID_toes_bits_pc),
    .toes_bits_alu_src1(ID_toes_bits_alu_src1),
    .toes_bits_alu_src2(ID_toes_bits_alu_src2),
    .toes_bits_alu_op(ID_toes_bits_alu_op),
    .toes_bits_rf_waddr(ID_toes_bits_rf_waddr),
    .toes_bits_rf_we(ID_toes_bits_rf_we),
    .toes_bits_mem_we(ID_toes_bits_mem_we),
    .toes_bits_inst_name(ID_toes_bits_inst_name),
    .toes_bits_mem_wdata(ID_toes_bits_mem_wdata),
    .toes_bits_csr_num(ID_toes_bits_csr_num),
    .toes_bits_csr_we(ID_toes_bits_csr_we),
    .toes_bits_ex(ID_toes_bits_ex),
    .toes_bits_ertn(ID_toes_bits_ertn),
    .toes_bits_csr_wmask(ID_toes_bits_csr_wmask),
    .toes_bits_dpi_c_is_break(ID_toes_bits_dpi_c_is_break),
    .toes_bits_dpi_c_inst(ID_toes_bits_dpi_c_inst),
    .toes_bits_dpi_c_next_pc(ID_toes_bits_dpi_c_next_pc),
    .toes_bits_dpi_c_inv(ID_toes_bits_dpi_c_inv),
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
    .torf_dpi_c_inv(ID_torf_dpi_c_inv),
    .torf_dpi_c_csr_ex(ID_torf_dpi_c_csr_ex),
    .torf_dpi_c_csr_ertn(ID_torf_dpi_c_csr_ertn),
    .torf_dpi_c_csr_ecode(ID_torf_dpi_c_csr_ecode),
    .torf_dpi_c_csr_ex_pc(ID_torf_dpi_c_csr_ex_pc),
    .torf_dpi_c_csr_crmd(ID_torf_dpi_c_csr_crmd),
    .torf_dpi_c_csr_prmd(ID_torf_dpi_c_csr_prmd),
    .torf_dpi_c_csr_estat(ID_torf_dpi_c_csr_estat),
    .torf_dpi_c_csr_era(ID_torf_dpi_c_csr_era),
    .torf_dpi_c_csr_eentry(ID_torf_dpi_c_csr_eentry),
    .br_taken(ID_br_taken),
    .br_target(ID_br_target)
  );
  EX_stage EXE ( // @[mycpu_top.scala 30:25]
    .es_valid(EXE_es_valid),
    .es_bits_pc(EXE_es_bits_pc),
    .es_bits_alu_src1(EXE_es_bits_alu_src1),
    .es_bits_alu_src2(EXE_es_bits_alu_src2),
    .es_bits_alu_op(EXE_es_bits_alu_op),
    .es_bits_rf_waddr(EXE_es_bits_rf_waddr),
    .es_bits_rf_we(EXE_es_bits_rf_we),
    .es_bits_mem_we(EXE_es_bits_mem_we),
    .es_bits_inst_name(EXE_es_bits_inst_name),
    .es_bits_mem_wdata(EXE_es_bits_mem_wdata),
    .es_bits_csr_num(EXE_es_bits_csr_num),
    .es_bits_csr_we(EXE_es_bits_csr_we),
    .es_bits_ex(EXE_es_bits_ex),
    .es_bits_ertn(EXE_es_bits_ertn),
    .es_bits_csr_wmask(EXE_es_bits_csr_wmask),
    .es_bits_dpi_c_is_break(EXE_es_bits_dpi_c_is_break),
    .es_bits_dpi_c_inst(EXE_es_bits_dpi_c_inst),
    .es_bits_dpi_c_next_pc(EXE_es_bits_dpi_c_next_pc),
    .es_bits_dpi_c_inv(EXE_es_bits_dpi_c_inv),
    .toms_valid(EXE_toms_valid),
    .toms_bits_rf_wdata(EXE_toms_bits_rf_wdata),
    .toms_bits_inst_name(EXE_toms_bits_inst_name),
    .toms_bits_res_from_mem(EXE_toms_bits_res_from_mem),
    .toms_bits_rf_we(EXE_toms_bits_rf_we),
    .toms_bits_rf_waddr(EXE_toms_bits_rf_waddr),
    .toms_bits_dpi_c_is_break(EXE_toms_bits_dpi_c_is_break),
    .toms_bits_dpi_c_inst(EXE_toms_bits_dpi_c_inst),
    .toms_bits_dpi_c_next_pc(EXE_toms_bits_dpi_c_next_pc),
    .toms_bits_dpi_c_inv(EXE_toms_bits_dpi_c_inv),
    .toms_bits_dpi_c_csr_ex(EXE_toms_bits_dpi_c_csr_ex),
    .toms_bits_dpi_c_csr_ertn(EXE_toms_bits_dpi_c_csr_ertn),
    .toms_bits_dpi_c_csr_ecode(EXE_toms_bits_dpi_c_csr_ecode),
    .toms_bits_dpi_c_csr_ex_pc(EXE_toms_bits_dpi_c_csr_ex_pc),
    .toms_bits_dpi_c_csr_crmd(EXE_toms_bits_dpi_c_csr_crmd),
    .toms_bits_dpi_c_csr_prmd(EXE_toms_bits_dpi_c_csr_prmd),
    .toms_bits_dpi_c_csr_estat(EXE_toms_bits_dpi_c_csr_estat),
    .toms_bits_dpi_c_csr_era(EXE_toms_bits_dpi_c_csr_era),
    .toms_bits_dpi_c_csr_eentry(EXE_toms_bits_dpi_c_csr_eentry),
    .data_sram_en(EXE_data_sram_en),
    .data_sram_wr(EXE_data_sram_wr),
    .data_sram_addr(EXE_data_sram_addr),
    .data_sram_wdata(EXE_data_sram_wdata),
    .data_sram_wstrb(EXE_data_sram_wstrb),
    .csr_we(EXE_csr_we),
    .csr_num(EXE_csr_num),
    .csr_wvalue(EXE_csr_wvalue),
    .csr_wmask(EXE_csr_wmask),
    .csr_rvalue(EXE_csr_rvalue),
    .csr_ex(EXE_csr_ex),
    .csr_ertn(EXE_csr_ertn),
    .csr_exe_pc(EXE_csr_exe_pc),
    .csr_ecode(EXE_csr_ecode),
    .csr_dpic_ex(EXE_csr_dpic_ex),
    .csr_dpic_ertn(EXE_csr_dpic_ertn),
    .csr_dpic_ecode(EXE_csr_dpic_ecode),
    .csr_dpic_ex_pc(EXE_csr_dpic_ex_pc),
    .csr_dpic_crmd(EXE_csr_dpic_crmd),
    .csr_dpic_prmd(EXE_csr_dpic_prmd),
    .csr_dpic_estat(EXE_csr_dpic_estat),
    .csr_dpic_era(EXE_csr_dpic_era),
    .csr_dpic_eentry(EXE_csr_dpic_eentry)
  );
  MEM_stage MEM ( // @[mycpu_top.scala 31:25]
    .ms_valid(MEM_ms_valid),
    .ms_bits_rf_wdata(MEM_ms_bits_rf_wdata),
    .ms_bits_inst_name(MEM_ms_bits_inst_name),
    .ms_bits_res_from_mem(MEM_ms_bits_res_from_mem),
    .ms_bits_rf_we(MEM_ms_bits_rf_we),
    .ms_bits_rf_waddr(MEM_ms_bits_rf_waddr),
    .ms_bits_dpi_c_is_break(MEM_ms_bits_dpi_c_is_break),
    .ms_bits_dpi_c_inst(MEM_ms_bits_dpi_c_inst),
    .ms_bits_dpi_c_next_pc(MEM_ms_bits_dpi_c_next_pc),
    .ms_bits_dpi_c_inv(MEM_ms_bits_dpi_c_inv),
    .ms_bits_dpi_c_csr_ex(MEM_ms_bits_dpi_c_csr_ex),
    .ms_bits_dpi_c_csr_ertn(MEM_ms_bits_dpi_c_csr_ertn),
    .ms_bits_dpi_c_csr_ecode(MEM_ms_bits_dpi_c_csr_ecode),
    .ms_bits_dpi_c_csr_ex_pc(MEM_ms_bits_dpi_c_csr_ex_pc),
    .ms_bits_dpi_c_csr_crmd(MEM_ms_bits_dpi_c_csr_crmd),
    .ms_bits_dpi_c_csr_prmd(MEM_ms_bits_dpi_c_csr_prmd),
    .ms_bits_dpi_c_csr_estat(MEM_ms_bits_dpi_c_csr_estat),
    .ms_bits_dpi_c_csr_era(MEM_ms_bits_dpi_c_csr_era),
    .ms_bits_dpi_c_csr_eentry(MEM_ms_bits_dpi_c_csr_eentry),
    .tows_valid(MEM_tows_valid),
    .tows_bits_rf_we(MEM_tows_bits_rf_we),
    .tows_bits_rf_waddr(MEM_tows_bits_rf_waddr),
    .tows_bits_rf_wdata(MEM_tows_bits_rf_wdata),
    .tows_bits_dpi_c_is_break(MEM_tows_bits_dpi_c_is_break),
    .tows_bits_dpi_c_inst(MEM_tows_bits_dpi_c_inst),
    .tows_bits_dpi_c_next_pc(MEM_tows_bits_dpi_c_next_pc),
    .tows_bits_dpi_c_inv(MEM_tows_bits_dpi_c_inv),
    .tows_bits_dpi_c_csr_ex(MEM_tows_bits_dpi_c_csr_ex),
    .tows_bits_dpi_c_csr_ertn(MEM_tows_bits_dpi_c_csr_ertn),
    .tows_bits_dpi_c_csr_ecode(MEM_tows_bits_dpi_c_csr_ecode),
    .tows_bits_dpi_c_csr_ex_pc(MEM_tows_bits_dpi_c_csr_ex_pc),
    .tows_bits_dpi_c_csr_crmd(MEM_tows_bits_dpi_c_csr_crmd),
    .tows_bits_dpi_c_csr_prmd(MEM_tows_bits_dpi_c_csr_prmd),
    .tows_bits_dpi_c_csr_estat(MEM_tows_bits_dpi_c_csr_estat),
    .tows_bits_dpi_c_csr_era(MEM_tows_bits_dpi_c_csr_era),
    .tows_bits_dpi_c_csr_eentry(MEM_tows_bits_dpi_c_csr_eentry),
    .data_sram_rdata(MEM_data_sram_rdata)
  );
  WB_stage WB ( // @[mycpu_top.scala 32:24]
    .ws_valid(WB_ws_valid),
    .ws_bits_rf_we(WB_ws_bits_rf_we),
    .ws_bits_rf_waddr(WB_ws_bits_rf_waddr),
    .ws_bits_rf_wdata(WB_ws_bits_rf_wdata),
    .ws_bits_dpi_c_is_break(WB_ws_bits_dpi_c_is_break),
    .ws_bits_dpi_c_inst(WB_ws_bits_dpi_c_inst),
    .ws_bits_dpi_c_next_pc(WB_ws_bits_dpi_c_next_pc),
    .ws_bits_dpi_c_inv(WB_ws_bits_dpi_c_inv),
    .ws_bits_dpi_c_csr_ex(WB_ws_bits_dpi_c_csr_ex),
    .ws_bits_dpi_c_csr_ertn(WB_ws_bits_dpi_c_csr_ertn),
    .ws_bits_dpi_c_csr_ecode(WB_ws_bits_dpi_c_csr_ecode),
    .ws_bits_dpi_c_csr_ex_pc(WB_ws_bits_dpi_c_csr_ex_pc),
    .ws_bits_dpi_c_csr_crmd(WB_ws_bits_dpi_c_csr_crmd),
    .ws_bits_dpi_c_csr_prmd(WB_ws_bits_dpi_c_csr_prmd),
    .ws_bits_dpi_c_csr_estat(WB_ws_bits_dpi_c_csr_estat),
    .ws_bits_dpi_c_csr_era(WB_ws_bits_dpi_c_csr_era),
    .ws_bits_dpi_c_csr_eentry(WB_ws_bits_dpi_c_csr_eentry),
    .torf_rf_we(WB_torf_rf_we),
    .torf_rf_waddr(WB_torf_rf_waddr),
    .torf_rf_wdata(WB_torf_rf_wdata),
    .torf_valid(WB_torf_valid),
    .torf_dpi_c_is_break(WB_torf_dpi_c_is_break),
    .torf_dpi_c_inst(WB_torf_dpi_c_inst),
    .torf_dpi_c_next_pc(WB_torf_dpi_c_next_pc),
    .torf_dpi_c_inv(WB_torf_dpi_c_inv),
    .torf_dpi_c_csr_ex(WB_torf_dpi_c_csr_ex),
    .torf_dpi_c_csr_ertn(WB_torf_dpi_c_csr_ertn),
    .torf_dpi_c_csr_ecode(WB_torf_dpi_c_csr_ecode),
    .torf_dpi_c_csr_ex_pc(WB_torf_dpi_c_csr_ex_pc),
    .torf_dpi_c_csr_crmd(WB_torf_dpi_c_csr_crmd),
    .torf_dpi_c_csr_prmd(WB_torf_dpi_c_csr_prmd),
    .torf_dpi_c_csr_estat(WB_torf_dpi_c_csr_estat),
    .torf_dpi_c_csr_era(WB_torf_dpi_c_csr_era),
    .torf_dpi_c_csr_eentry(WB_torf_dpi_c_csr_eentry)
  );
  csr csr ( // @[mycpu_top.scala 34:25]
    .clock(csr_clock),
    .reset(csr_reset),
    .io_we(csr_io_we),
    .io_num(csr_io_num),
    .io_wvalue(csr_io_wvalue),
    .io_wmask(csr_io_wmask),
    .io_rvalue(csr_io_rvalue),
    .io_ex(csr_io_ex),
    .io_ertn(csr_io_ertn),
    .io_exe_pc(csr_io_exe_pc),
    .io_ecode(csr_io_ecode),
    .io_dpic_ex(csr_io_dpic_ex),
    .io_dpic_ertn(csr_io_dpic_ertn),
    .io_dpic_ecode(csr_io_dpic_ecode),
    .io_dpic_ex_pc(csr_io_dpic_ex_pc),
    .io_dpic_crmd(csr_io_dpic_crmd),
    .io_dpic_prmd(csr_io_dpic_prmd),
    .io_dpic_estat(csr_io_dpic_estat),
    .io_dpic_era(csr_io_dpic_era),
    .io_dpic_eentry(csr_io_dpic_eentry),
    .csr_br_taken(csr_csr_br_taken),
    .csr_br_pc(csr_csr_br_pc)
  );
  assign inst_sram_en = pIF_inst_sram_en; // @[mycpu_top.scala 46:23]
  assign inst_sram_addr = pIF_inst_sram_addr; // @[mycpu_top.scala 46:23]
  assign data_sram_en = EXE_data_sram_en; // @[mycpu_top.scala 49:23]
  assign data_sram_wr = EXE_data_sram_wr; // @[mycpu_top.scala 49:23]
  assign data_sram_addr = EXE_data_sram_addr; // @[mycpu_top.scala 49:23]
  assign data_sram_wdata = EXE_data_sram_wdata; // @[mycpu_top.scala 49:23]
  assign data_sram_wstrb = EXE_data_sram_wstrb; // @[mycpu_top.scala 49:23]
  assign pIF_clock = clock;
  assign pIF_reset = reset;
  assign pIF_br_taken = ID_br_taken; // @[mycpu_top.scala 42:16]
  assign pIF_br_target = ID_br_target; // @[mycpu_top.scala 42:16]
  assign pIF_csr_br_taken = csr_csr_br_taken; // @[mycpu_top.scala 51:20]
  assign pIF_csr_br_pc = csr_csr_br_pc; // @[mycpu_top.scala 51:20]
  assign IF_inst_sram_rdata = inst_sram_rdata; // @[mycpu_top.scala 45:22]
  assign IF_fs_valid = pIF_tofs_valid; // @[mycpu_top.scala 14:64]
  assign IF_fs_bits_pc = pIF_tofs_bits_pc; // @[mycpu_top.scala 14:64]
  assign IF_fs_bits_next_pc = pIF_tofs_bits_next_pc; // @[mycpu_top.scala 14:64]
  assign ID_clock = clock;
  assign ID_ds_valid = IF_tods_valid; // @[mycpu_top.scala 14:64]
  assign ID_ds_bits_pc = IF_tods_bits_pc; // @[mycpu_top.scala 14:64]
  assign ID_ds_bits_inst = IF_tods_bits_inst; // @[mycpu_top.scala 14:64]
  assign ID_ds_bits_next_pc = IF_tods_bits_next_pc; // @[mycpu_top.scala 14:64]
  assign ID_torf_rf_we = WB_torf_rf_we; // @[mycpu_top.scala 43:17]
  assign ID_torf_rf_waddr = WB_torf_rf_waddr; // @[mycpu_top.scala 43:17]
  assign ID_torf_rf_wdata = WB_torf_rf_wdata; // @[mycpu_top.scala 43:17]
  assign ID_torf_valid = WB_torf_valid; // @[mycpu_top.scala 43:17]
  assign ID_torf_dpi_c_is_break = WB_torf_dpi_c_is_break; // @[mycpu_top.scala 43:17]
  assign ID_torf_dpi_c_inst = WB_torf_dpi_c_inst; // @[mycpu_top.scala 43:17]
  assign ID_torf_dpi_c_next_pc = WB_torf_dpi_c_next_pc; // @[mycpu_top.scala 43:17]
  assign ID_torf_dpi_c_inv = WB_torf_dpi_c_inv; // @[mycpu_top.scala 43:17]
  assign ID_torf_dpi_c_csr_ex = WB_torf_dpi_c_csr_ex; // @[mycpu_top.scala 43:17]
  assign ID_torf_dpi_c_csr_ertn = WB_torf_dpi_c_csr_ertn; // @[mycpu_top.scala 43:17]
  assign ID_torf_dpi_c_csr_ecode = WB_torf_dpi_c_csr_ecode; // @[mycpu_top.scala 43:17]
  assign ID_torf_dpi_c_csr_ex_pc = WB_torf_dpi_c_csr_ex_pc; // @[mycpu_top.scala 43:17]
  assign ID_torf_dpi_c_csr_crmd = WB_torf_dpi_c_csr_crmd; // @[mycpu_top.scala 43:17]
  assign ID_torf_dpi_c_csr_prmd = WB_torf_dpi_c_csr_prmd; // @[mycpu_top.scala 43:17]
  assign ID_torf_dpi_c_csr_estat = WB_torf_dpi_c_csr_estat; // @[mycpu_top.scala 43:17]
  assign ID_torf_dpi_c_csr_era = WB_torf_dpi_c_csr_era; // @[mycpu_top.scala 43:17]
  assign ID_torf_dpi_c_csr_eentry = WB_torf_dpi_c_csr_eentry; // @[mycpu_top.scala 43:17]
  assign EXE_es_valid = ID_toes_valid; // @[mycpu_top.scala 14:64]
  assign EXE_es_bits_pc = ID_toes_bits_pc; // @[mycpu_top.scala 14:64]
  assign EXE_es_bits_alu_src1 = ID_toes_bits_alu_src1; // @[mycpu_top.scala 14:64]
  assign EXE_es_bits_alu_src2 = ID_toes_bits_alu_src2; // @[mycpu_top.scala 14:64]
  assign EXE_es_bits_alu_op = ID_toes_bits_alu_op; // @[mycpu_top.scala 14:64]
  assign EXE_es_bits_rf_waddr = ID_toes_bits_rf_waddr; // @[mycpu_top.scala 14:64]
  assign EXE_es_bits_rf_we = ID_toes_bits_rf_we; // @[mycpu_top.scala 14:64]
  assign EXE_es_bits_mem_we = ID_toes_bits_mem_we; // @[mycpu_top.scala 14:64]
  assign EXE_es_bits_inst_name = ID_toes_bits_inst_name; // @[mycpu_top.scala 14:64]
  assign EXE_es_bits_mem_wdata = ID_toes_bits_mem_wdata; // @[mycpu_top.scala 14:64]
  assign EXE_es_bits_csr_num = ID_toes_bits_csr_num; // @[mycpu_top.scala 14:64]
  assign EXE_es_bits_csr_we = ID_toes_bits_csr_we; // @[mycpu_top.scala 14:64]
  assign EXE_es_bits_ex = ID_toes_bits_ex; // @[mycpu_top.scala 14:64]
  assign EXE_es_bits_ertn = ID_toes_bits_ertn; // @[mycpu_top.scala 14:64]
  assign EXE_es_bits_csr_wmask = ID_toes_bits_csr_wmask; // @[mycpu_top.scala 14:64]
  assign EXE_es_bits_dpi_c_is_break = ID_toes_bits_dpi_c_is_break; // @[mycpu_top.scala 14:64]
  assign EXE_es_bits_dpi_c_inst = ID_toes_bits_dpi_c_inst; // @[mycpu_top.scala 14:64]
  assign EXE_es_bits_dpi_c_next_pc = ID_toes_bits_dpi_c_next_pc; // @[mycpu_top.scala 14:64]
  assign EXE_es_bits_dpi_c_inv = ID_toes_bits_dpi_c_inv; // @[mycpu_top.scala 14:64]
  assign EXE_csr_rvalue = csr_io_rvalue; // @[mycpu_top.scala 52:16]
  assign EXE_csr_dpic_ex = csr_io_dpic_ex; // @[mycpu_top.scala 52:16]
  assign EXE_csr_dpic_ertn = csr_io_dpic_ertn; // @[mycpu_top.scala 52:16]
  assign EXE_csr_dpic_ecode = csr_io_dpic_ecode; // @[mycpu_top.scala 52:16]
  assign EXE_csr_dpic_ex_pc = csr_io_dpic_ex_pc; // @[mycpu_top.scala 52:16]
  assign EXE_csr_dpic_crmd = csr_io_dpic_crmd; // @[mycpu_top.scala 52:16]
  assign EXE_csr_dpic_prmd = csr_io_dpic_prmd; // @[mycpu_top.scala 52:16]
  assign EXE_csr_dpic_estat = csr_io_dpic_estat; // @[mycpu_top.scala 52:16]
  assign EXE_csr_dpic_era = csr_io_dpic_era; // @[mycpu_top.scala 52:16]
  assign EXE_csr_dpic_eentry = csr_io_dpic_eentry; // @[mycpu_top.scala 52:16]
  assign MEM_ms_valid = EXE_toms_valid; // @[mycpu_top.scala 14:64]
  assign MEM_ms_bits_rf_wdata = EXE_toms_bits_rf_wdata; // @[mycpu_top.scala 14:64]
  assign MEM_ms_bits_inst_name = EXE_toms_bits_inst_name; // @[mycpu_top.scala 14:64]
  assign MEM_ms_bits_res_from_mem = EXE_toms_bits_res_from_mem; // @[mycpu_top.scala 14:64]
  assign MEM_ms_bits_rf_we = EXE_toms_bits_rf_we; // @[mycpu_top.scala 14:64]
  assign MEM_ms_bits_rf_waddr = EXE_toms_bits_rf_waddr; // @[mycpu_top.scala 14:64]
  assign MEM_ms_bits_dpi_c_is_break = EXE_toms_bits_dpi_c_is_break; // @[mycpu_top.scala 14:64]
  assign MEM_ms_bits_dpi_c_inst = EXE_toms_bits_dpi_c_inst; // @[mycpu_top.scala 14:64]
  assign MEM_ms_bits_dpi_c_next_pc = EXE_toms_bits_dpi_c_next_pc; // @[mycpu_top.scala 14:64]
  assign MEM_ms_bits_dpi_c_inv = EXE_toms_bits_dpi_c_inv; // @[mycpu_top.scala 14:64]
  assign MEM_ms_bits_dpi_c_csr_ex = EXE_toms_bits_dpi_c_csr_ex; // @[mycpu_top.scala 14:64]
  assign MEM_ms_bits_dpi_c_csr_ertn = EXE_toms_bits_dpi_c_csr_ertn; // @[mycpu_top.scala 14:64]
  assign MEM_ms_bits_dpi_c_csr_ecode = EXE_toms_bits_dpi_c_csr_ecode; // @[mycpu_top.scala 14:64]
  assign MEM_ms_bits_dpi_c_csr_ex_pc = EXE_toms_bits_dpi_c_csr_ex_pc; // @[mycpu_top.scala 14:64]
  assign MEM_ms_bits_dpi_c_csr_crmd = EXE_toms_bits_dpi_c_csr_crmd; // @[mycpu_top.scala 14:64]
  assign MEM_ms_bits_dpi_c_csr_prmd = EXE_toms_bits_dpi_c_csr_prmd; // @[mycpu_top.scala 14:64]
  assign MEM_ms_bits_dpi_c_csr_estat = EXE_toms_bits_dpi_c_csr_estat; // @[mycpu_top.scala 14:64]
  assign MEM_ms_bits_dpi_c_csr_era = EXE_toms_bits_dpi_c_csr_era; // @[mycpu_top.scala 14:64]
  assign MEM_ms_bits_dpi_c_csr_eentry = EXE_toms_bits_dpi_c_csr_eentry; // @[mycpu_top.scala 14:64]
  assign MEM_data_sram_rdata = data_sram_rdata; // @[mycpu_top.scala 48:23]
  assign WB_ws_valid = MEM_tows_valid; // @[mycpu_top.scala 14:64]
  assign WB_ws_bits_rf_we = MEM_tows_bits_rf_we; // @[mycpu_top.scala 14:64]
  assign WB_ws_bits_rf_waddr = MEM_tows_bits_rf_waddr; // @[mycpu_top.scala 14:64]
  assign WB_ws_bits_rf_wdata = MEM_tows_bits_rf_wdata; // @[mycpu_top.scala 14:64]
  assign WB_ws_bits_dpi_c_is_break = MEM_tows_bits_dpi_c_is_break; // @[mycpu_top.scala 14:64]
  assign WB_ws_bits_dpi_c_inst = MEM_tows_bits_dpi_c_inst; // @[mycpu_top.scala 14:64]
  assign WB_ws_bits_dpi_c_next_pc = MEM_tows_bits_dpi_c_next_pc; // @[mycpu_top.scala 14:64]
  assign WB_ws_bits_dpi_c_inv = MEM_tows_bits_dpi_c_inv; // @[mycpu_top.scala 14:64]
  assign WB_ws_bits_dpi_c_csr_ex = MEM_tows_bits_dpi_c_csr_ex; // @[mycpu_top.scala 14:64]
  assign WB_ws_bits_dpi_c_csr_ertn = MEM_tows_bits_dpi_c_csr_ertn; // @[mycpu_top.scala 14:64]
  assign WB_ws_bits_dpi_c_csr_ecode = MEM_tows_bits_dpi_c_csr_ecode; // @[mycpu_top.scala 14:64]
  assign WB_ws_bits_dpi_c_csr_ex_pc = MEM_tows_bits_dpi_c_csr_ex_pc; // @[mycpu_top.scala 14:64]
  assign WB_ws_bits_dpi_c_csr_crmd = MEM_tows_bits_dpi_c_csr_crmd; // @[mycpu_top.scala 14:64]
  assign WB_ws_bits_dpi_c_csr_prmd = MEM_tows_bits_dpi_c_csr_prmd; // @[mycpu_top.scala 14:64]
  assign WB_ws_bits_dpi_c_csr_estat = MEM_tows_bits_dpi_c_csr_estat; // @[mycpu_top.scala 14:64]
  assign WB_ws_bits_dpi_c_csr_era = MEM_tows_bits_dpi_c_csr_era; // @[mycpu_top.scala 14:64]
  assign WB_ws_bits_dpi_c_csr_eentry = MEM_tows_bits_dpi_c_csr_eentry; // @[mycpu_top.scala 14:64]
  assign csr_clock = clock;
  assign csr_reset = reset;
  assign csr_io_we = EXE_csr_we; // @[mycpu_top.scala 52:16]
  assign csr_io_num = EXE_csr_num; // @[mycpu_top.scala 52:16]
  assign csr_io_wvalue = EXE_csr_wvalue; // @[mycpu_top.scala 52:16]
  assign csr_io_wmask = EXE_csr_wmask; // @[mycpu_top.scala 52:16]
  assign csr_io_ex = EXE_csr_ex; // @[mycpu_top.scala 52:16]
  assign csr_io_ertn = EXE_csr_ertn; // @[mycpu_top.scala 52:16]
  assign csr_io_exe_pc = EXE_csr_exe_pc; // @[mycpu_top.scala 52:16]
  assign csr_io_ecode = EXE_csr_ecode; // @[mycpu_top.scala 52:16]
endmodule
module Main(
  input   clock,
  input   reset
);
  wire  cpucore_clock; // @[main.scala 8:29]
  wire  cpucore_reset; // @[main.scala 8:29]
  wire  cpucore_inst_sram_en; // @[main.scala 8:29]
  wire [31:0] cpucore_inst_sram_addr; // @[main.scala 8:29]
  wire [31:0] cpucore_inst_sram_rdata; // @[main.scala 8:29]
  wire  cpucore_data_sram_en; // @[main.scala 8:29]
  wire  cpucore_data_sram_wr; // @[main.scala 8:29]
  wire [31:0] cpucore_data_sram_addr; // @[main.scala 8:29]
  wire [31:0] cpucore_data_sram_wdata; // @[main.scala 8:29]
  wire [3:0] cpucore_data_sram_wstrb; // @[main.scala 8:29]
  wire [31:0] cpucore_data_sram_rdata; // @[main.scala 8:29]
  wire  dram_en; // @[main.scala 9:33]
  wire  dram_wr; // @[main.scala 9:33]
  wire [31:0] dram_addr; // @[main.scala 9:33]
  wire [31:0] dram_wdata; // @[main.scala 9:33]
  wire [3:0] dram_wstrb; // @[main.scala 9:33]
  wire [31:0] dram_rdata; // @[main.scala 9:33]
  wire  iram_en; // @[main.scala 10:33]
  wire  iram_wr; // @[main.scala 10:33]
  wire [31:0] iram_addr; // @[main.scala 10:33]
  wire [31:0] iram_wdata; // @[main.scala 10:33]
  wire [3:0] iram_wstrb; // @[main.scala 10:33]
  wire [31:0] iram_rdata; // @[main.scala 10:33]
  mycpu_top cpucore ( // @[main.scala 8:29]
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
  d_mem dram ( // @[main.scala 9:33]
    .en(dram_en),
    .wr(dram_wr),
    .addr(dram_addr),
    .wdata(dram_wdata),
    .wstrb(dram_wstrb),
    .rdata(dram_rdata)
  );
  i_mem iram ( // @[main.scala 10:33]
    .en(iram_en),
    .wr(iram_wr),
    .addr(iram_addr),
    .wdata(iram_wdata),
    .wstrb(iram_wstrb),
    .rdata(iram_rdata)
  );
  assign cpucore_clock = clock;
  assign cpucore_reset = reset;
  assign cpucore_inst_sram_rdata = iram_rdata; // @[main.scala 13:27]
  assign cpucore_data_sram_rdata = dram_rdata; // @[main.scala 12:27]
  assign dram_en = cpucore_data_sram_en; // @[main.scala 12:27]
  assign dram_wr = cpucore_data_sram_wr; // @[main.scala 12:27]
  assign dram_addr = cpucore_data_sram_addr; // @[main.scala 12:27]
  assign dram_wdata = cpucore_data_sram_wdata; // @[main.scala 12:27]
  assign dram_wstrb = cpucore_data_sram_wstrb; // @[main.scala 12:27]
  assign iram_en = cpucore_inst_sram_en; // @[main.scala 13:27]
  assign iram_wr = 1'h0; // @[main.scala 13:27]
  assign iram_addr = cpucore_inst_sram_addr; // @[main.scala 13:27]
  assign iram_wdata = 32'h0; // @[main.scala 13:27]
  assign iram_wstrb = 4'h0; // @[main.scala 13:27]
endmodule
