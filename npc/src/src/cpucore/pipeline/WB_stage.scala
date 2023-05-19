package cpucore.pipeline

import chisel3._
import chisel3.util._

class WB_stage extends Module{
	val ws = IO(Flipped(Decoupled(new ms2ws)))
	val torf = IO(new ws2rf)
	
	torf.pc := ws.bits.pc
	torf.rf_we := ws.bits.rf_we
	torf.rf_waddr := ws.bits.rf_waddr
	torf.rf_wdata := ws.bits.rf_wdata

	ws.ready := 1.U
}