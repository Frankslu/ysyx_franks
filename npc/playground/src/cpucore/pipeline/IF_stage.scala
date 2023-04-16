//package cpucore.pipeline
import chisel3._
import cpucore.Config.Configs._

class IF_stage extends Module{
    val tods = IO(new fs2ds)
    val inst_sram = IO(new sram_io_2)

    tods.inst := inst_sram.rdata
}