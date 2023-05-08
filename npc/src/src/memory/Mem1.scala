package cpucore.memory

import chisel3._
import chisel3.util._
import cpucore.pipeline._

class rdmem extends Module {
	val mem = Module(new dmem)
	val mem_io = IO(new Bundle{
		val r = new sram_io_1
		val w = new sram_io_2
	})
	mem.io <> mem_io
	
}