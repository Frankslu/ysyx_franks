package cpucore.pipeline

import chisel3._
import cpucore.Config.Configs._
import chisel3.util._
import cpucore.Unit._
import cpucore.Unit.loongarch32r_inst._
import myUtil.myUtil._

class ID_stage extends Module{
    val toes = IO(new ds2es)
    val tofs = IO(Flipped(new fs2ds))
    val br   = IO(Flipped(new br_bus))

    val inst = tofs.inst
    val rj = inst(9,5)
    val rd = inst(4,0)
    val rk = inst(14,10)
    val imm5   = rk
    val imm12u = inst(21,10)
    val imm12  = sign_extend(inst(21,10))
    val imm16  = sign_extend(Cat(inst(25,10),0.U(2.W)))
    val imm20  = Cat(inst(24,5), 0.U(12.W))
    val imm26  = Cat(rj, rd, inst(25,10))


    
    val inst_type = Wire(UInt(4.W))
    val inst_name = Wire(UInt(5.W))
    val mem_we = Wire(Bool())
    val rf_we = Wire(Bool())
    val decode_res = Cat(toes.alu_op, mem_we, inst_type, inst_name, rf_we)
    decode_res := loongarch32r_decoder(inst)

    val imm = Wire(UInt(32.W))
    imm := MuxCase(0x0.U(32.W), Seq(
        (inst_type === s"b${R2I5}".U)  -> imm5,
        (inst_type === s"b${R2I12}".U) -> imm12,
        (inst_type === s"b${R2I12U}".U) -> imm12u,
        (inst_type === s"b${R2I16}".U) -> imm16,
        (inst_type === s"b${R1I20}".U) -> imm20,
        (inst_type === s"b${I26}".U)   -> imm26
    ))

    val rk_or_rd = Wire(Bool())////////////
    val reg = Module(new regfile)
    reg.io.raddr1 := rj
    reg.io.raddr2 := Mux(rk_or_rd, rk, rd)
    reg.io.waddr := 0.U
    reg.io.wdata := 0.U
    reg.io.wen := 1.U

    val rj_value = reg.io.rdata1
    val rkd_value = reg.io.rdata2

    val rf_waddr = Mux(inst_name === INST_B.U, 1.U(5.W), rd)//output

    //branch
    val rj_eq_rd  = rj_value === rkd_value
    val rj_sub_rd = rj_value +& rkd_value + 1.U
    val slt_res = rj_value(31) & ~rkd_value(31) | ~(rj_value(31) ^ rkd_value(31)) & rj_sub_rd(31)
    val sltu_res = ~rj_sub_rd(32)
    val br_taken =  inst_name === u(INST_BEQ)  & rj_eq_rd |
                    inst_name === u(INST_BNE)  & ~rj_eq_rd |
                    inst_name === u(INST_BLT)  & slt_res |
                    inst_name === u(INST_BGE)  & ~slt_res |
                    inst_name === u(INST_BLTU) & sltu_res |
                    inst_name === u(INST_BGEU) & ~sltu_res |
                    inst_name === u(INST_B) | inst_name === u(INST_BL) | inst_name === u(INST_JIRL)
    val br_target = "1"

    toes.alu_src1 := rj_value
    toes.alu_src2 := rkd_value
}