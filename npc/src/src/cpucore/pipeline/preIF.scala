package cpucore.pipeline

import chisel3._
import chisel3.util._

import Config.Configs._
import cpucore.pipeline._
import memory._
import cpucore.csr._

class preIF extends Module{
    val br = IO(new br_bus)
    val inst_sram = IO(new sram_io)
    val tofs = IO(Decoupled(new pre2fs))
    val csr_br = IO(Flipped(new csr_br))

    val pc = RegInit(PC_INIT.U(ADDR_WIDTH.W))
    val snpc = pc + 4.U
    val next_pc = MuxCase(snpc, Seq(
        (br.taken === 1.B) -> br.target,
        (csr_br.taken === 1.B) -> csr_br.pc
    ))
    pc := next_pc

    inst_sram.en := RegNext(~reset.asBool)
    inst_sram.wr := 0.B
    inst_sram.addr := pc
    inst_sram.wdata := 0.U
    inst_sram.wstrb := 0.U

    tofs.bits.pc := pc
    tofs.valid := ~reset.asBool
    tofs.bits.next_pc := next_pc
}