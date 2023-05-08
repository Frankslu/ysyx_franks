package cpucore.memory

import chisel3._
import chisel3.util._
import cpucore.pipeline._

class rdmem extends Module {
	val mem = Module(new mem)
	val mem_io = IO(new ioo)
	mem.io <> mem_io
	
}