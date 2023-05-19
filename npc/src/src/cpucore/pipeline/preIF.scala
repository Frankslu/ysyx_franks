package cpucore.pipeline

import chisel3._
import chisel3.util._
import cpucore.Config.Configs._

class preIF extends Module{
    val br = IO(new br_bus)
    val inst_sram = IO(new sram_io_1)
    val tofs = IO(Decoupled(new pre2fs))

    val pc = RegInit(PC_INIT.U)
    val snpc = pc + 4.U
    pc := Mux(br.taken, br.target ,pc)

    inst_sram.en := 1.B
    inst_sram.wr := 0.B
    inst_sram.addr := pc
    inst_sram.wdata := 0.U
    inst_sram.wstrb := 0.U

    tofs.bits.pc := pc
}