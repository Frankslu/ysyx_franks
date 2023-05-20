import chisel3._
import chisel3.util._

import memory._
import cpucore._

class Main extends Module{
	val cpucore = Module(new mycpu_top)
	val dram	= Module(new d_mem)
	val iram	= Module(new i_mem)

	cpucore.data_sram <> dram.io
	cpucore.inst_sram <> iram.io
}