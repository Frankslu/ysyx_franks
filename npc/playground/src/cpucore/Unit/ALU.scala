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
    def to_onehot(x: Int) = {
        var string = x.toBinaryString
        val len = string.length()
        for(i <- len to (ALU_OP_NUM - 1)){
            string = "0" + string
        }
        string
    }

    def creat_? = {
        var a = ""
        for(i <- 1 to ALU_OP_NUM){
            a = a + "?"
        }
        a
    }

    val OP_ADD  = to_onehot(0x1)//"0000000000000000001"
    val OP_SUB  = to_onehot(0x2)//"0000000000000000010"
    val OP_SLT  = to_onehot(0x4)//"0000000000000000100"
    val OP_SLTU = to_onehot(0x8)//"0000000000000001000"
    val OP_AND  = to_onehot(0x10)//"0000000000000010000"
    val OP_NOR  = to_onehot(0x20)//"0000000000000100000"
    val OP_OR   = to_onehot(0x40)//"0000000000001000000"
    val OP_XOR  = to_onehot(0x80)//"0000000000010000000"
    val OP_SLL  = to_onehot(0x100)//"0000000000100000000"
    val OP_SRL  = to_onehot(0x200)//"0000000001000000000"
    val OP_SRA  = to_onehot(0x400)//"0000000010000000000"
    val OP_LUI  = to_onehot(0x800)//"0000000100000000000"
    val OP_MUL  = to_onehot(0x1000)//"0000001000000000000"
    val OP_MULH = to_onehot(0x2000)//"0000010000000000000"
    val OP_MULHU= to_onehot(0x4000)//"0000100000000000000"
    val OP_DIV  = to_onehot(0x8000)//"0001000000000000000"
    val OP_DIVU = to_onehot(0x10000)//"0010000000000000000"
    val OP_MOD  = to_onehot(0x20000)
    val OP_MODU = to_onehot(0x40000)
    val OP_NONE = creat_?
}
