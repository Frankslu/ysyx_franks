package cpucore.Unit

import chisel3._
import chisel3.util.Fill
import chisel3.util.Cat
import chisel3.util.Mux1H
import cpucore.Config.Configs._
import myUtil.myUtil._

class ALU_io extends Bundle{
    val alu_op = Input(ALUOP)//0:add, 1:sub, 2:and 4:or 5:xor 6:
    val src1   = Input(UInt(DATA_WIDTH.W))
    val src2   = Input(UInt(DATA_WIDTH.W))
    val res    = Output(UInt(DATA_WIDTH.W))
}

class ALU extends Module{
    val io = IO(new ALU_io)

    val op_add   = io.alu_op.is(ALUOP.add_  )
    val op_sub   = io.alu_op.is(ALUOP.sub_  )
    val op_slt   = io.alu_op.is(ALUOP.slt_  )
    val op_sltu  = io.alu_op.is(ALUOP.sltu_ )
    val op_and   = io.alu_op.is(ALUOP.and_  )
    val op_nor   = io.alu_op.is(ALUOP.nor_  )
    val op_or    = io.alu_op.is(ALUOP.or_   )
    val op_xor   = io.alu_op.is(ALUOP.xor_  )
    val op_sll   = io.alu_op.is(ALUOP.sll_  )
    val op_srl   = io.alu_op.is(ALUOP.srl_  )
    val op_sra   = io.alu_op.is(ALUOP.sra_  )
    val op_lui   = io.alu_op.is(ALUOP.lui_  )
    val op_mul   = io.alu_op.is(ALUOP.mul_  )
    val op_mulh  = io.alu_op.is(ALUOP.mulh_ )
    val op_mulhu = io.alu_op.is(ALUOP.mulhu_)
    val op_div   = io.alu_op.is(ALUOP.div_  )
    val op_mod   = io.alu_op.is(ALUOP.mod_  )
    val op_divu  = io.alu_op.is(ALUOP.divu_ )
    val op_modu  = io.alu_op.is(ALUOP.modu_ )

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
    val mul_pre = io.src1 * io.src2
    val mul_res = mul_pre(31,0)
    val mulhu_res = mul_pre(63,32)
    val mulh_res = (io.src1.asSInt * io.src2.asSInt)(63,32)
    val divu_res = io.src1 / io.src2
    val modu_res = io.src1 % io.src2
    val div_res = (io.src1.asSInt / io.src2.asSInt).asUInt
    val mod_res = (io.src1.asSInt % io.src2.asSInt).asUInt

    io.res := MuxCase(0xdeadbeef.U,
        Array(
        (op_add | op_sub) -> add_res,
        op_slt      -> slt_res,
        op_sltu     -> sltu_res,
        op_and      -> and_res,
        op_or       -> or_res,
        op_nor      -> nor_res,
        op_xor      -> xor_res,
        op_sll      -> sll_res,
        (op_sra | op_srl) -> sr_res,
        op_lui      -> lui_res,
        op_mul      -> mul_res,
        op_mulh     -> mulh_res,
        op_mulhu    -> mulhu_res,
        op_div      -> div_res,
        op_mod      -> mod_res,
        op_divu     -> divu_res,
        op_modu     -> modu_res
    ))
}

object ALUOP extends ChiselEnum{
    val none_, add_, sub_, slt_, sltu_, and_, nor_, or_, xor_, sll_, srl_, sra_,
    lui_, mul_, mulh_, mulhu_, div_, divu_, mod_, modu_ = Value
}
