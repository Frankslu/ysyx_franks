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

    val op_add   = io.alu_op(add_  )
    val op_sub   = io.alu_op(sub_  )
    val op_slt   = io.alu_op(slt_  )
    val op_sltu  = io.alu_op(sltu_ )
    val op_and   = io.alu_op(and_  )
    val op_nor   = io.alu_op(nor_  )
    val op_or    = io.alu_op(or_   )
    val op_xor   = io.alu_op(xor_  )
    val op_sll   = io.alu_op(sll_  )
    val op_srl   = io.alu_op(srl_  )
    val op_sra   = io.alu_op(sra_  )
    val op_lui   = io.alu_op(lui_  )
    val op_mul   = io.alu_op(mul_  )
    val op_mulh  = io.alu_op(mulh_ )
    val op_mulhu = io.alu_op(mulhu_)
    val op_div   = io.alu_op(div_  )
    val op_mod   = io.alu_op(mod_  )
    val op_divu  = io.alu_op(divu_ )
    val op_modu  = io.alu_op(modu_ )

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
    val mul_per = io.src1 * io.src2
    val mul_res = mul_per(31,0)
    val mulhu_res = mul_pre(63,32)
    val mulh_res = (io.src1.asSInt * io.src2.asSInt)(63,32)
    val divu_res = io.src1 / io.src2
    val modu_res = io.src1 % io.src2
    val div_res = io.src1.asSInt / io.src2.asSInt
    val mod_res = io.src1/asSInt % io.src2.asSInt

    io.res := Mux1H(Seq(
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
        op_divu     -> divu_r,
        op_modu     -> modu_res
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

    private val add_   = 0 ;val OP_ADD  = to_onehot(1 << add_ )//"0000000000000000001"
    private val sub_   = 1 ;val OP_SUB  = to_onehot(1 << sub_ )//"0000000000000000010"
    private val slt_   = 2 ;val OP_SLT  = to_onehot(1 << slt_ )//"0000000000000000100"
    private val sltu_  = 3 ;val OP_SLTU = to_onehot(1 << sltu_)//"0000000000000001000"
    private val and_   = 4 ;val OP_AND  = to_onehot(1 << nor_ )//"0000000000000010000"
    private val nor_   = 5 ;val OP_NOR  = to_onehot(1 << nor_ )//"0000000000000100000"
    private val or_    = 6 ;val OP_OR   = to_onehot(1 << or_  )//"0000000000001000000"
    private val xor_   = 7 ;val OP_XOR  = to_onehot(1 << xor_ )//"0000000000010000000"
    private val sll_   = 8 ;val OP_SLL  = to_onehot(1 << sll_ )//"0000000000100000000"
    private val srl_   = 9 ;val OP_SRL  = to_onehot(1 << srl_ )//"0000000001000000000"
    private val sra_   = 10;val OP_SRA  = to_onehot(1 << sra_ )//"0000000010000000000"
    private val lui_   = 11;val OP_LUI  = to_onehot(1 << lui_ )//"0000000100000000000"
    private val mul_   = 12;val OP_MUL  = to_onehot(1 << mul_ )//"0000001000000000000"
    private val mulh_  = 13;val OP_MULH = to_onehot(1 << mulh_)//"0000010000000000000"
    private val mulhu_ = 14;val OP_MULHU= to_onehot(1 << mulhu_)//"0000100000000000000"
    private val div_   = 15;val OP_DIV  = to_onehot(1 << div_ )//"0001000000000000000"
    private val divu_  = 16;val OP_DIVU = to_onehot(1 << divu_)//"0010000000000000000"
    private val mod_   = 17;val OP_MOD  = to_onehot(1 << mod_ )
    private val modu_  = 18;val OP_MODU = to_onehot(1 << modu_)
    val OP_NONE = creat_?
}
