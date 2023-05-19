package cpucore.pipeline

import chisel3._
import chisel3.util._
import Config.Configs._

class IF_stage extends Module{
    val tods = IO(Decoupled(new fs2ds))
    val inst_sram = IO(new sram_io)
    val fs = IO(Flipped(Decoupled(new pre2fs)))

    inst_sram := DontCare
    tods.bits.inst := inst_sram.rdata
    tods.bits.pc := fs.bits.pc
    tods.valid := 1.U
    fs.ready := 1.U
}