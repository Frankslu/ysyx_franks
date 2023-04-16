//package cpucore.pipeline
import chisel3._
import cpucore.Config.Configs._

class IF_stage extends Module{
    val io = IO(new fs2ds)
    val inst_sram = IO(new sram_io_1)

    val pc = RegInit(PC_INIT.U)
    val snpc = pc + 4.U
    val next_pc = Mux(io.br_taken, io.br_target, snpc)
    pc := next_pc

    inst_sram.addr := pc
    inst_sram.en := 1.B
    inst_sram.we := 0.U
    inst_sram.wdata := 0.U
}