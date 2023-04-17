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


    val rk_or_rd = Wire(Bool())
    val inst_type = Wire(UInt(4.W))
    val inst_name = Wire(UInt(4.W))
    val decode_res = Cat(toes.alu_op, inst_type)
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

    val reg = Module(new regfile)
    reg.io.raddr1 := rj
    reg.io.raddr2 := Mux(rk_or_rd, rk, rd)
    reg.io.waddr := 0.U
    reg.io.wdata := 0.U
    reg.io.wen := 1.U

    val rj_value = reg.io.rdata1
    val rkd_value = reg.io.rdata2

    toes.alu_src1 := rj_value
    toes.alu_src2 := rkd_value

    //branch
    //val beq_taken = inst_name === inst_beq
}