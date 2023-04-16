package cpucore.pipeline

import chisel3._
import cpucore.Config.Configs._
import chisel3.util.experimental.decode._
import chisel3.util.BitPat
import chisel3.util.Cat
import cpucore.Unit._

class ID_stage extends Module{
    val toes = IO(new ds2es)
    val tofs = IO(Flipped(new fs2ds))
    val br   = IO(Flipped(new br_bus))
    br.taken := true.B
    br.target := 0.U

    val inst = tofs.inst
    val rj = inst(9,5)
    val rd = inst(4,0)
    val rk = inst(14,10)
    val imm12 = inst(21,10)
    val imm16 = inst(25,10)
    val imm20 = Cat(rd, inst(25,10))
    val imm26 = Cat(rj, rd, inst(25,10))

    val reg = Module(new regfile)
    reg.io.raddr1 := rj
    reg.io.raddr2 := rk
    reg.io.waddr := 0.U
    reg.io.wdata := 0.U
    reg.io.wen := 1.U

    val rj_value = reg.io.rdata1
    val rk_value = reg.io.rdata2

    toes.alu_op := loongarch32r_inst.loongarch32r_decoder(inst)
    toes.alu_src1 := rj_value
    toes.alu_src2 := rk_value
}