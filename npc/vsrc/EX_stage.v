// Generated by CIRCT unknown git version
module ALU(	// <stdin>:2:10
  input  [11:0] io_alu_op,
  input  [31:0] io_src1,
                io_src2,
  output [31:0] io_res);

  wire        add_sub = io_alu_op[1] | io_alu_op[2] | io_alu_op[3];	// ALU.scala:18:32, :19:32, :20:32, :30:36
  wire [31:0] or_res = io_src1 | io_src2;	// ALU.scala:35:27
  wire [62:0] sll_res = {31'h0, io_src1} << io_src2[4:0];	// ALU.scala:38:{27,37}
  wire [63:0] sr_res = {{32{io_src1[31] & io_alu_op[10]}}, io_src1} >> io_src2[4:0];	// ALU.scala:27:32, :32:26, :38:37, :39:39, :40:21, Bitwise.scala:77:12, Cat.scala:33:92
  assign io_res = (io_alu_op[10] | io_alu_op[9] ? sr_res[31:0] : 32'h0) | (io_alu_op[0] | io_alu_op[1] ?
                io_src1 + ({32{add_sub}} ^ io_src2) + {31'h0, add_sub} : 32'h0) | (io_alu_op[4] ? io_src1 &
                io_src2 : 32'h0) | (io_alu_op[6] ? or_res : 32'h0) | (io_alu_op[5] ? ~or_res : 32'h0) |
                (io_alu_op[7] ? io_src1 ^ io_src2 : 32'h0) | (io_alu_op[8] ? sll_res[31:0] : 32'h0) |
                (io_alu_op[11] ? io_src2 : 32'h0);	// <stdin>:2:10, ALU.scala:17:28, :18:32, :21:32, :22:32, :23:32, :24:32, :25:32, :26:32, :27:32, :28:32, :30:36, :31:{33,62}, :34:27, :35:27, :36:19, :37:27, :38:27, :40:21, :44:17, :50:17, Bitwise.scala:77:12, Mux.scala:27:73
endmodule

module EX_stage(	// <stdin>:75:10
  input         clock,
                reset,
  input  [31:0] a_alu_src1,
                a_alu_src2,
  input  [11:0] a_alu_op,
  output [31:0] b);

  ALU alu_u (	// EX_stage.scala:8:23
    .io_alu_op (a_alu_op),
    .io_src1   (a_alu_src1),
    .io_src2   (a_alu_src2),
    .io_res    (b)
  );
endmodule

