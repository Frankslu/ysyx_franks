package cpucore.pipeline

import chisel3._
import chisel3.util._

import Config.Configs
import cpucore.Unit._
import cpucore.Unit.loongarch32r_inst._
import cpucore.Unit.ALUOP
import myUtil.myUtil._

class EX_stage extends Module{
    val es = IO(Flipped(Decoupled(new ds2es)))
    val toms = IO(Decoupled(new es2ms))
    val data_sram = IO(new sram_io)

    val alu = Module(new ALU)
    val (alu_op, valid) = ALUOP.safe(es.bits.alu_op)
    alu.io.alu_op := alu_op
    alu.io.src1 := es.bits.alu_src1
    alu.io.src2 := es.bits.alu_src2

    toms.bits.alu_res := alu.io.res
    toms.bits.inst_name := es.bits.inst_name
    toms.bits.res_from_mem := es.bits.mem_we === u(MEM_RD)
    toms.bits.pc := es.bits.pc

    data_sram.en := es.bits.mem_we =/= u(MEM_UN)
    data_sram.wr := es.bits.mem_we === u(MEM_WR)
    data_sram.addr := alu.io.res
    data_sram.wdata := es.bits.mem_wdata
    data_sram.wstrb := MuxLookup(es.bits.inst_name, "hdead".U)(Array(
        u(INST_STB) -> 1.U,
        u(INST_STH) -> 2.U,
        u(INST_STW) -> 4.U
    ).toIndexedSeq)

    es.ready := true.B
    toms.valid := true.B
}
