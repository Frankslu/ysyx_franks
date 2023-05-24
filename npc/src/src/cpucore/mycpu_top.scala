package cpucore

import chisel3._
import chisel3.util._

import cpucore.pipeline._
import cpucore.Unit._
import _root_.memory._

object StageConnect {
	def apply[T <: Data] (left: DecoupledIO[T], right: DecoupledIO[T]) = {
		val arch = "single"
		if		(arch == "single")	{right <> left}
		else if (arch == "multi")	{right <> left}
		else if	(arch == "pipeline"){right <> RegEnable(left, left.fire)}
		else if	(arch == "ooo")		{right <> Queue(left, 16)}
	}
}

class mycpu_top extends Module{
	val inst_sram = IO(new sram_io)
	val data_sram = IO(new sram_io)

	val pIF = Module(new preIF)
	val IF = Module(new IF_stage)
	val ID = Module(new ID_stage)
	val EXE = Module(new EX_stage)
	val MEM = Module(new MEM_stage)
	val WB = Module(new WB_stage)

	StageConnect(pIF.tofs, IF.fs)
	StageConnect(IF.tods, ID.ds)
	StageConnect(ID.toes, EXE.es)
	StageConnect(EXE.toms, MEM.ms)
	StageConnect(MEM.tows, WB.ws)

	pIF.br <> ID.br
	ID.torf <> WB.torf

	IF.inst_sram <> inst_sram
	pIF.inst_sram <> inst_sram

	MEM.data_sram <> data_sram
	EXE.data_sram <> data_sram
}