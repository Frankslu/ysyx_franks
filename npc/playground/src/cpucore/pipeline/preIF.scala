//package cpucore.pipeline
import chisel3._
import cpucore.Config.Configs._

class preIF extends Module{
    val br = IO(new br_bus)
    val inst_sram = IO(new sram_io_1)

    val pc = RegInit(PC_INIT.U)
    val snpc = pc + 4.U
    pc := Mux(br.taken, br.target ,pc)

    inst_sram.en := 1.B
    inst_sram.we := 4.U
    inst_sram.addr := pc
    inst_sram.wdata := 0.U
}