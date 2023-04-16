//package cpucore.pipeline
import chisel3._
import cpucore.Config.Configs._

class preIF extends Module{
    val io = IO(new pre_IF)
    val inst_sram = IO(new sram_io_1)

    val pc = RegInit(PC_INIT.U)
    val snpc = pc + 4.U
    pc := Mux(io.br_taken, io.br_target, snpc)

    inst_sram.en := 1.B
    inst_sram.we := 4.U
    inst_sram.addr := pc
    inst_sram.wdata := 0.U
}