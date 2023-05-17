package cpucore.Unit

import chisel3._
import chisel3.util._
import cpucore.Config.Configs._
import myUtil.myUtil._

class ALU_io extends Bundle{
    val alu_op = Input(ALUOP())
    val src1   = Input(UInt(DATA_WIDTH.W))
    val src2   = Input(UInt(DATA_WIDTH.W))
    val res    = Output(UInt(DATA_WIDTH.W))
}

class ALU extends Module{
    val io = IO(new ALU_io)

    // val op_add   = io.alu_op === ALUOP.add_
    val op_add   = io.alu_op.asUInt === 1.U
    // val op_sub   = io.alu_op === ALUOP.sub_
    val op_sub   = io.alu_op === ALUOP(2.U)
    val op_slt   = io.alu_op === ALUOP.slt_ 
    val op_sltu  = io.alu_op === ALUOP.sltu_ 
    val op_and   = io.alu_op === ALUOP.and_  
    val op_nor   = io.alu_op === ALUOP.nor_  
    val op_or    = io.alu_op === ALUOP.or_   
    val op_xor   = io.alu_op === ALUOP.xor_  
    val op_sll   = io.alu_op === ALUOP.sll_  
    val op_srl   = io.alu_op === ALUOP.srl_  
    val op_sra   = io.alu_op === ALUOP.sra_  
    val op_lui   = io.alu_op === ALUOP.lui_  
    val op_mul   = io.alu_op === ALUOP.mul_  
    val op_mulh  = io.alu_op === ALUOP.mulh_ 
    val op_mulhu = io.alu_op === ALUOP.mulhu_
    val op_div   = io.alu_op === ALUOP.div_  
    val op_mod   = io.alu_op === ALUOP.mod_  
    val op_divu  = io.alu_op === ALUOP.divu_ 
    val op_modu  = io.alu_op === ALUOP.modu_ 

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
    val div_res = Wire(UInt(32.W))
    div_res := (io.src1.asSInt / io.src2.asSInt).asUInt
    val mod_res = (io.src1.asSInt % io.src2.asSInt).asUInt

    io.res := MuxCase("hdeadbeef".U(32.W),
    Array((op_add | op_sub).asBool -> add_res,
        op_slt.asBool      -> slt_res,
        op_sltu.asBool     -> sltu_res,
        op_and.asBool      -> and_res,
        op_or.asBool       -> or_res,
        op_nor.asBool      -> nor_res,
        op_xor.asBool      -> xor_res,
        op_sll.asBool      -> sll_res,
        (op_sra | op_srl).asBool -> sr_res,
        op_lui.asBool      -> lui_res,
        op_mul.asBool      -> mul_res,
        op_mulh.asBool     -> mulh_res,
        op_mulhu.asBool    -> mulhu_res,
        op_div.asBool      -> div_res,
        op_mod.asBool      -> mod_res,
        op_divu.asBool     -> divu_res,
        op_modu.asBool     -> modu_res
    ).toIndexedSeq)
}

object ALUOP extends ChiselEnum {
    val none_ = Value(0.U)
    val add_,//1 
    sub_, //2
    slt_, //3
    sltu_, //4
    and_, //5
    nor_, //6
    or_, //7
    xor_, //8
    sll_, //9
    srl_, //a
    sra_, //b
    lui_, //c
    mul_, //d
    mulh_, //e
    mulhu_, //f
    div_, //10
    divu_, //11
    mod_, //12
    modu_ = Value

    val NONE_ = none_.asUInt
    val ADD_ = add_.asUInt
    val SUB_ = sub_.asUInt //2
    val SLT_ = slt_.asUInt //3
    val SLTU_ = sltu_.asUInt //4
    val AND_ = and_.asUInt //5
    val NOR_ = nor_.asUInt //6
    val OR_ = or_.asUInt //7
    val XOR_ = xor_.asUInt //8
    val SLL_ = sll_.asUInt //9
    val SRL_ = srl_.asUInt //a
    val SRA_ = sra_.asUInt //b
    val LUI_ = lui_.asUInt //c
    val MUL_ = mul_.asUInt //d
    val MULH_ = mulh_.asUInt //e
    val MULHU_ = mulhu_.asUInt //f
    val DIV_ = div_.asUInt //10
    val DIVU_ = divu_.asUInt //11
    val MOD_ = mod_.asUInt //12
    val MODU_ = modu_.asUInt
}
