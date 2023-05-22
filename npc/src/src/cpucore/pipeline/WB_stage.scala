package cpucore.pipeline

import chisel3._
import chisel3.util._
import cpucore.pipeline._
import cpucore.Unit._

class WB_stage extends Module{
	val ws = IO(Flipped(Decoupled(new ms2ws)))
	val torf = IO(new ws2rf)
	
	torf.pc := ws.bits.pc
	torf.rf_we := ws.bits.rf_we
	torf.rf_waddr := ws.bits.rf_waddr
	torf.rf_wdata := ws.bits.rf_wdata
	torf.is_break := ws.bits.is_break
	torf.valid := ws.valid
	torf.inst := ws.bits.inst

	ws.ready := 1.U
}