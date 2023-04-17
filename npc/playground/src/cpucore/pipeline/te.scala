package cpucore.pipeline

import chisel3._
import chisel3.util._
import cpucore.Unit.loongarch32r_inst._

class test extends Module{
    val inst = IO(Input(UInt(32.W)))
    val imm = IO(Output(UInt(32.W)))
    val inst_type = IO(Input(UInt(4.W)))

    val rj = inst(9,5)
    val rd = inst(4,0)
    val rk = inst(14,10)
    val imm5  = rk
    val imm12u = inst(21,10)
    val imm12  = Wire(SInt(32.W))
    imm12 := inst(21,10).asSInt
    val imm16  = Wire(SInt(32.W))
    imm16 := Cat(inst(25,10),0.U(2.W)).asSInt
    val imm20  = Cat(inst(24,5), 0.U(12.W))
    val imm26  = Cat(rj, rd, inst(25,10))

    imm := MuxCase(0x0.U(32.W), Seq(
        (inst_type === s"b${R2I5}".U)  -> imm5,
        (inst_type === s"b${R2I12}".U) -> imm12.asUInt,
        (inst_type === s"b${R2I12U}".U) -> imm12u,
        (inst_type === s"b${R2I16}".U) -> imm16.asUInt,
        (inst_type === s"b${R1I20}".U) -> imm20,
        (inst_type === s"b${I26}".U)   -> imm26
    ))
}