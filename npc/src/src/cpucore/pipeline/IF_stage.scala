package cpucore.pipeline

import chisel3._
import chisel3.util._
import cpucore.Config.Configs._

class IF_stage extends Module{
    val tods = IO(Decoupled(new fs2ds))
    val inst_sram = IO(new sram_io)
    val frompre = IO(Flipped(Decoupled(new pre2fs)))

    inst_sram := DontCare
    inst_sram.addr := 11.U
    tods.bits.inst := inst_sram.rdata
    tods.bits.pc := frompre.bits.pc
    tods.valid := 1.U
    frompre.ready := 1.U
}