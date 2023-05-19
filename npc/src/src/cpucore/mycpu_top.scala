package cpucore

import chisel3._
import chisel3.util._

object StageConnect {
	def apply[T <: Data] (left: DecoupledIO[T], right: DecoupledIO[T]) = {
		val arch = "single"
		if		(arch == "single")	{right.bits := left.bits}
		else if (arch == "multi")	{right <> left}
		else if	(arch == "pipeline"){right <> RegEnable(left, left.fire)}
		else if	(arch == "ooo")		{right <> Queue(left, 16)}
	}
}