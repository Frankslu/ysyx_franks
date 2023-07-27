package cpucore.Unit

import chisel3._
import chisel3.util._

import myUtil.Util._

class Shifter_in(width: Int) extends Bundle {
	val src = Input(UInt(width.W))
	val offset = Input(UInt(log2(width).W))
	val right = Input(Bool())
	val arith = Input(Bool())

	require(width == math.pow(2, log2(width)))
}

class Shifter_out(width: Int) extends Bundle {
	val res = Output(UInt(width.W))
}

class Shifter(width: Int) extends Module {
	val in = IO(new Shifter_in(width))
	val out = IO(new Shifter_out(width))

	val buf = Cat(Fill(width, (in.arith === 1.B & in.src(31) === 1.B)), in.src)
	val select = Wire(Vec(log2(width) + 1, UInt((width*2).W)))
	select(0) := buf
	for (i <- 1 to log2(width)) {
		val left_shift = Cat(select(i-1)(width*2 - 1 - math.pow(2, i-1).toInt, 0), 0.U(math.pow(2, i-1).toInt.W))
		val right_shift = select(i-1)(width*2 - 1, math.pow(2, i-1).toInt)
		val shi = Mux(in.right === 1.B, right_shift, left_shift)
		select(i) := Mux(in.offset(i-1) === 1.B, shi, select(i-1))
	}
	out.res := select(log2(width))
}

object Shifter {
	def apply(width: Int, src: UInt, offset: UInt, right: Bool, arith: Bool): UInt = {
		val s = Module(new Shifter(width))
		s.in.src := src
		s.in.offset := offset
		s.in.right := right
		s.in.arith := arith

		s.out.res
	}
}