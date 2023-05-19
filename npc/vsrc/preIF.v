module preIF(
  input         clock,
  input         reset,
  input         br_taken, // @[src/src/cpucore/pipeline/preIF.scala 8:16]
  input  [31:0] br_target, // @[src/src/cpucore/pipeline/preIF.scala 8:16]
  output        inst_sram_en, // @[src/src/cpucore/pipeline/preIF.scala 9:23]
  output        inst_sram_wr, // @[src/src/cpucore/pipeline/preIF.scala 9:23]
  output [31:0] inst_sram_addr, // @[src/src/cpucore/pipeline/preIF.scala 9:23]
  output [31:0] inst_sram_wdata, // @[src/src/cpucore/pipeline/preIF.scala 9:23]
  output [3:0]  inst_sram_wstrb, // @[src/src/cpucore/pipeline/preIF.scala 9:23]
  input         tofs_ready, // @[src/src/cpucore/pipeline/preIF.scala 10:18]
  output        tofs_valid, // @[src/src/cpucore/pipeline/preIF.scala 10:18]
  output [31:0] tofs_bits_pc // @[src/src/cpucore/pipeline/preIF.scala 10:18]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] pc; // @[src/src/cpucore/pipeline/preIF.scala 12:21]
  assign inst_sram_en = 1'h1; // @[src/src/cpucore/pipeline/preIF.scala 16:18]
  assign inst_sram_wr = 1'h0; // @[src/src/cpucore/pipeline/preIF.scala 17:18]
  assign inst_sram_addr = pc; // @[src/src/cpucore/pipeline/preIF.scala 18:20]
  assign inst_sram_wdata = 32'h0; // @[src/src/cpucore/pipeline/preIF.scala 19:21]
  assign inst_sram_wstrb = 4'h0; // @[src/src/cpucore/pipeline/preIF.scala 20:21]
  assign tofs_valid = 1'h1; // @[src/src/cpucore/pipeline/preIF.scala 23:16]
  assign tofs_bits_pc = pc; // @[src/src/cpucore/pipeline/preIF.scala 22:18]
  always @(posedge clock) begin
    if (reset) begin // @[src/src/cpucore/pipeline/preIF.scala 12:21]
      pc <= 32'h1c000000; // @[src/src/cpucore/pipeline/preIF.scala 12:21]
    end else if (br_taken) begin // @[src/src/cpucore/pipeline/preIF.scala 14:14]
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
