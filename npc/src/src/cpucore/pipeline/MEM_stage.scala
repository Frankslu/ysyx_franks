package cpucore.pipeline

import chisel3._
import chisel3.util._

import cpucore.Unit.loongarch32r_inst._
import myUtil.myUtil._

class MEM_stage extends Module{
	val ms = IO(Flipped(Decoupled(new es2ms)))
	val tows = IO(Decoupled(new ms2ds))
	val data_sram = IO(new sram_io)

	data_sram := DontCare
	val mem_rdata = MuxLookup(ms.bits.inst_name, "hdead".U)(Array(
		u(INST_LDB) 	-> sign_extend(data_sram.rdata(7,0)),
		u(INST_LDBU) 	-> data_sram.rdata(7,0),
		u(INST_LDH) 	-> sign_extend(data_sram.rdata(15,0)),
		u(INST_LDHU) 	-> data_sram.rdata(15,0),
		u(INST_LDW) 	-> data_sram.rdata
	).toIndexedSeq)

	tows.bits.pc := ms.bits.pc
	tows.bits.rf_we := ms.bits.rf_we
	tows.bits.rf_waddr := ms.bits.rf_waddr
	tows.bits.rf_wdata := Mux(ms.bits.res_from_mem, data_sram.rdata, ms.bits.alu_res)

	ms.ready := 1.U
	tows.valid := 1.U
}
