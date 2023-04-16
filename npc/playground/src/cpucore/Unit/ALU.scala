package cpucore.Unit

import chisel3._
import chisel3.util.Fill
import chisel3.util.Cat
import chisel3.util.Mux1H
import cpucore.Config.Configs._

class ALU_io extends Bundle{
    val alu_op = Input(UInt(ALU_OP_NUM.W))//0:add, 1:sub, 2:and 4:or 5:xor 6:
    val src1   = Input(UInt(DATA_WIDTH.W))
    val src2   = Input(UInt(DATA_WIDTH.W))
    val res    = Output(UInt(DATA_WIDTH.W))
}

class ALU extends Module{
    val io = IO(new ALU_io)

    val op_add  = io.alu_op( 0)
    val op_sub  = io.alu_op( 1)
    val op_slt  = io.alu_op( 2)
    val op_sltu = io.alu_op( 3)
    val op_and  = io.alu_op( 4)
    val op_nor  = io.alu_op( 5)
    val op_or   = io.alu_op( 6)
    val op_xor  = io.alu_op( 7)
    val op_sll  = io.alu_op( 8)
    val op_srl  = io.alu_op( 9)
    val op_sra  = io.alu_op(10)
    val op_lui  = io.alu_op(11)
    
    val add_sub = (op_sub | op_slt | op_sltu).asBool
    val add_res = io.src1 +& Mux(add_sub, ~io.src2, io.src2) + Mux(add_sub, 1.U, 0.U)
    val slt_res = io.src1(31) & ~io.src2(31) | ~(io.src1(31) ^ io.src2(31)) & add_res(31)
    val sltu_res = ~add_res(32)
    val and_res = io.src1 & io.src2
    val or_res  = io.src1 | io.src2
    val nor_res = ~or_res
    val xor_res = io.src1 ^ io.src2
    val sll_res = io.src1 << io.src2(4,0)
    val sr = Cat(Fill(32, io.src1(31) & op_sra), io.src1)
    val sr_res = sr >> io.src2(4,0)
    val lui_res = io.src2

    io.res := Mux1H(Seq(
        (op_add | op_sub) -> add_res,
        op_and -> and_res,
        op_or  -> or_res,
        op_nor -> nor_res,
        op_xor -> xor_res,
        op_sll -> sll_res,
        (op_sra | op_srl) -> sr_res,
        op_lui -> lui_res
    ))
}

object ALUOP{
    val op_add  = 0x1
    val op_sub  = 0x2
    val op_slt  = 0x4
    val op_sltu = 0x8
    val op_and  = 0x10
    val op_nor  = 0x20
    val op_or   = 0x40
    val op_xor  = 0x80
    val op_sll  = 0x100
    val op_srl  = 0x200
    val op_sra  = 0x400
    val op_lui  = 0x800
}
