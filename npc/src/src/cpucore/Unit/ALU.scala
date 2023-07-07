package cpucore.Unit

import chisel3._
import chisel3.util._
import Config.Configs._
import myUtil.Util._
import myUtil._

class ALU_io extends Bundle{
	val alu_op = Input(UInt(ALUOP.get_width.W))
	val src1   = Input(UInt(DATA_WIDTH.W))
	val src2   = Input(UInt(DATA_WIDTH.W))
	val res    = Output(UInt(DATA_WIDTH.W))
}

class ALU extends Module{
	val io = IO(new ALU_io)

	// val op_add   = io.alu_op === ALUOP.add_
	val op_add   = io.alu_op.asUInt === ALUOP.ADD_
	// val op_sub   = io.alu_op === ALUOP.sub_
	val op_sub   = io.alu_op === ALUOP.SUB_
	val op_slt   = io.alu_op === ALUOP.SLT_ 
	val op_sltu  = io.alu_op === ALUOP.SLTU_ 
	val op_and   = io.alu_op === ALUOP.AND_  
	val op_nor   = io.alu_op === ALUOP.NOR_  
	val op_or    = io.alu_op === ALUOP.OR_   
	val op_xor   = io.alu_op === ALUOP.XOR_  
	val op_sll   = io.alu_op === ALUOP.SLL_  
	val op_srl   = io.alu_op === ALUOP.SRL_  
	val op_sra   = io.alu_op === ALUOP.SRA_  
	val op_lui   = io.alu_op === ALUOP.LUI_  
	val op_mul   = io.alu_op === ALUOP.MUL_  
	val op_mulh  = io.alu_op === ALUOP.MULH_ 
	val op_mulhu = io.alu_op === ALUOP.MULHU_
	val op_div   = io.alu_op === ALUOP.DIV_  
	val op_mod   = io.alu_op === ALUOP.MOD_  
	val op_divu  = io.alu_op === ALUOP.DIVU_ 
	val op_modu  = io.alu_op === ALUOP.MODU_ 

	val add_sub = (op_sub | op_slt | op_sltu).asBool
	val add_res = Wire(UInt((DATA_WIDTH + 1).W))
	add_res := Adder(32, io.src1, Mux(add_sub, ~io.src2, io.src2), Mux(add_sub, 1.B, 0.B))
	val slt_res = io.src1(31) & ~io.src2(31) | ~(io.src1(31) ^ io.src2(31)) & add_res(31)
	val sltu_res = ~add_res(32)
	val and_res = io.src1 & io.src2
	val or_res  = io.src1 | io.src2
	val nor_res = ~or_res
	val xor_res = io.src1 ^ io.src2
	val right = ~(op_sll === 1.B)
	val arith = op_sra === 1.B
	val shift_res = Wire(UInt(DATA_WIDTH.W))
	shift_res := Shifter(DATA_WIDTH, io.src1, io.src2(4,0), right, arith)
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
	// Array((op_add | op_sub).asBool -> add_res,
	//     op_slt.asBool      -> slt_res,
	//     op_sltu.asBool     -> sltu_res,
	//     op_and.asBool      -> and_res,
	//     op_or.asBool       -> or_res,
	//     op_nor.asBool      -> nor_res,
	//     op_xor.asBool      -> xor_res,
	//     op_sll.asBool      -> sll_res,
	//     (op_sra | op_srl).asBool -> sr_res,
	//     op_lui.asBool      -> lui_res,
	//     op_mul.asBool      -> mul_res,
	//     op_mulh.asBool     -> mulh_res,
	//     op_mulhu.asBool    -> mulhu_res,
	//     op_div.asBool      -> div_res,
	//     op_mod.asBool      -> mod_res,
	//     op_divu.asBool     -> divu_res,
	//     op_modu.asBool     -> modu_res
	// ).toIndexedSeq)

	Array((op_add | op_sub) -> add_res,
		op_slt      -> slt_res,
		op_sltu     -> sltu_res,
		op_and      -> and_res,
		op_or       -> or_res,
		op_nor      -> nor_res,
		op_xor      -> xor_res,
		(op_sll | op_sra | op_srl) -> shift_res,
		op_lui      -> lui_res,
		op_mul      -> mul_res,
		op_mulh     -> mulh_res,
		op_mulhu    -> mulhu_res,
		op_div      -> div_res,
		op_mod      -> mod_res,
		op_divu     -> divu_res,
		op_modu     -> modu_res
	).toIndexedSeq)
}


object ALUOP extends MyEnum{
	val NONE_ = Value.U
	val ADD_ = Value.U
	val SUB_ = Value.U //2
	val SLT_ = Value.U //3
	val SLTU_ = Value.U //4
	val AND_ = Value.U //5
	val NOR_ = Value.U //6
	val OR_ = Value.U //7
	val XOR_ = Value.U //8
	val SLL_ = Value.U //9
	val SRL_ = Value.U //a
	val SRA_ = Value.U //b
	val LUI_ = Value.U //c
	val MUL_ = Value.U //d
	val MULH_ = Value.U //e
	val MULHU_ = Value.U //f
	val DIV_ = Value.U //10
	val DIVU_ = Value.U //11
	val MOD_ = Value.U //12
	val MODU_ = Value.U

	// val NONE_ = 0.U
	// val ADD_ = 1.U
	// val SUB_ = 2.U //2
	// val SLT_ = 3.U //3
	// val SLTU_ = 4.U //4
	// val AND_ = 5.U //5
	// val NOR_ = 6.U //6
	// val OR_ = 7.U //7
	// val XOR_ = 8.U //8
	// val SLL_ = 9.U //9
	// val SRL_ = 10.U //a
	// val SRA_ = 11.U //b
	// val LUI_ = 12.U //c
	// val MUL_ = 13.U //d
	// val MULH_ = 14.U //e
	// val MULHU_ = 15.U //f
	// val DIV_ = 16.U //10
	// val DIVU_ = 17.U //11
	// val MOD_ = 18.U //12
	// val MODU_ = 19.U

	// val get_width = 6
}
