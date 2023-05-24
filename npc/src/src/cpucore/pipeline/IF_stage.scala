package cpucore.pipeline

import chisel3._
import chisel3.util._

import Config.Configs._
import cpucore.pipeline._
import memory._

class IF_stage extends Module{
    val tods = IO(Decoupled(new fs2ds))
    val inst_sram = IO(new sram_io)
    val fs = IO(Flipped(Decoupled(new pre2fs)))

    inst_sram := DontCare
    tods.bits.inst := inst_sram.rdata
    tods.bits.pc := fs.bits.pc
    tods.valid := fs.valid
    fs.ready := 1.U
}