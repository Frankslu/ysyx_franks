package cpucore.pipeline

import chisel3._
import chisel3.util._

import cpucore.Unit._
import cpucore.Unit.loongarch32r_inst._
import cpucore.Unit.ALUOP
import myUtil.Util._
import cpucore.pipeline._
import memory._
import cpucore.csr.csr_io

class EX_stage extends Module{
    val es = IO(Flipped(Decoupled(new ds2es)))
    val toms = IO(Decoupled(new es2ms))
    val data_sram = IO(new sram_io)
    val csr = IO(Flipped(new csr_io))

    val alu = Module(new ALU)
    alu.io.alu_op := es.bits.alu_op
    alu.io.src1 := es.bits.alu_src1
    alu.io.src2 := es.bits.alu_src2

    data_sram.en := es.bits.mem_we =/= u(MEM_UN)
    data_sram.wr := es.bits.mem_we === u(MEM_WR)
    data_sram.addr := alu.io.res
    data_sram.wdata := es.bits.mem_wdata
    data_sram.wstrb := MuxLookup(es.bits.inst_name, "hdead".U, Array(
        u(INST_STB) -> 1.U,
        u(INST_STH) -> 3.U,
        u(INST_STW) -> 7.U
    ).toIndexedSeq)

    csr.ex := es.bits.ex
    csr.ertn := es.bits.ertn
    csr.num := es.bits.csr_num
    csr.we := es.bits.csr_we
    csr.wmask := es.bits.csr_wmask
    csr.wvalue := es.bits.alu_src2
    csr.exe_pc := es.bits.pc
    csr.ecode := MuxCase(0.U, Seq(
        (es.bits.inst_name === u(INST_SYS)) -> 0xB.U,
        (es.bits.inst_name === u(INST_BRK)) -> 0xC.U
    ))
    csr.esubcode := 0.U

    val res_from_csr = es.bits.inst_name === u(INST_CSR)

    toms.bits.rf_wdata := Mux(res_from_csr, csr.rvalue, alu.io.res)
    toms.bits.inst_name := es.bits.inst_name
    toms.bits.res_from_mem := es.bits.mem_we === u(MEM_RD)
    toms.bits.pc := es.bits.pc
    toms.bits.rf_we := es.bits.rf_we
    toms.bits.rf_waddr := es.bits.rf_waddr
    toms.bits.dpi_c <> es.bits.dpi_c
    //
    toms.bits.dpi_c.csr <> csr.dpic

    es.ready := true.B
    toms.valid := es.valid
}
