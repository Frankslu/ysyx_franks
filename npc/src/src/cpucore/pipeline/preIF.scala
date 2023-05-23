package cpucore.pipeline

import chisel3._
import chisel3.util._

import Config.Configs._
import cpucore.pipeline._
import memory._

class preIF extends Module{
    val br = IO(new br_bus)
    val inst_sram = IO(new sram_io)
    val tofs = IO(Decoupled(new pre2fs))

    val pc = RegInit(PC_INIT.U)
    val snpc = pc + 4.U
    pc := Mux(br.taken, br.target, snpc)

    inst_sram.en := ~reset.asBool
    inst_sram.wr := 0.B
    inst_sram.addr := pc
    inst_sram.wdata := 0.U
    inst_sram.wstrb := 0.U

    tofs.bits.pc := pc
    tofs.valid := 1.B
}