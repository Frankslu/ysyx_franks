package cpucore.pipeline

import chisel3._
import cpucore.Config.Configs._
import chisel3.util.experimental.decode._
import chisel3.util.BitPat
import chisel3.util.Cat

class ID_stage extends Module{
    val toes = IO(new ds2es)
    val tofs = IO(Flipped(new fs2ds))
    val br   = IO(Flipped(new br_bus))

    val inst = tofs.inst
    val rj = inst(9,5)
    val rd = inst(4,0)
    val rk = inst(14,10)
    val imm12 = inst(21,10)
    val imm16 = inst(25,10)
    val imm20 = Cat(rd, inst(25,10))
    val imm26 = Cat(rj, rd, inst(25,10))

}