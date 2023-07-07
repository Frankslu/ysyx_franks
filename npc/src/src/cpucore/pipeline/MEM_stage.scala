package cpucore.pipeline

import chisel3._
import chisel3.util._

import cpucore.Unit.loongarch32r_inst._
import myUtil.Util._
import cpucore.pipeline._
import memory._

class MEM_stage extends Module{
	val ms = IO(Flipped(Decoupled(new es2ms)))
	val tows = IO(Decoupled(new ms2ws))
	val data_sram = IO(new sram_io)

	data_sram := DontCare
	val mem_rdata = MuxLookup(ms.bits.inst_name, "hdead".U, Array(
		u(INST_LDB) 	-> sign_extend(data_sram.rdata(7,0)),
		u(INST_LDBU) 	-> data_sram.rdata(7,0),
		u(INST_LDH) 	-> sign_extend(data_sram.rdata(15,0)),
		u(INST_LDHU) 	-> data_sram.rdata(15,0),
		u(INST_LDW) 	-> data_sram.rdata
	).toIndexedSeq)

	tows.bits.pc := ms.bits.pc
	tows.bits.rf_we := ms.bits.rf_we
	tows.bits.rf_waddr := ms.bits.rf_waddr
	tows.bits.rf_wdata := Mux(ms.bits.res_from_mem, mem_rdata, ms.bits.rf_wdata)
	tows.bits.dpi_c <> ms.bits.dpi_c

	ms.ready := 1.U
	tows.valid := ms.valid
}
