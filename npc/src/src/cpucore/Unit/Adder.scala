package cpucore.Unit

import chisel3._
import chisel3.util._

import myUtil.Util._
class Adder_in(width: Int) extends Bundle {
	val a = Input(UInt(width.W))
	val b = Input(UInt(width.W))
	val cin = Input(Bool())
}

class Adder_out(width: Int) extends Bundle {
	val s = Output(UInt(width.W))
	val cout = Output(Bool())
}

object FA {
	def apply(a: Bool, b: Bool, cin: Bool, s: Bool, cout: Bool) = {
		s := a ^ b ^ cin
		cout := (a & b) | (cin & (a ^ b))
	}
}

object CLA {
	def CLU(g: UInt, p: UInt, c: Bool, c4: Bool, gg: Bool, pg: Bool) = {
		gg := g(3) | (g(2) & p(3)) | (g(1) & p(3,2).andR) | (g(0) & p(3,1).andR)
		pg := p.andR
		c4 := gg | (c & pg)
		val carry = Wire(Vec(4, Bool()))
		carry(0) := c
		for (i <- 0 to 2) {carry(i + 1) := g(i) | (carry(i) & p(i))}
		carry.asUInt
	}

	def apply(width: Int, a: UInt, b: UInt, cin: Bool, s: UInt, cout: Bool, gg: Bool, pg: Bool): Unit = {
		width match {
			case 4 => {
				val g = a & b
				val p = a ^ b
				val c = CLU(g, p, cin, cout, gg, pg)
				s := p ^ c
			}
			case _ => {
				require(width % 4 == 0)
				val w = width / 4
				val sum = Wire(Vec(4, UInt(w.W)))
				val g = Wire(Vec(4, Bool()))
				val p = Wire(Vec(4, Bool()))
				val c = CLU(g.asUInt, p.asUInt, cin, cout, gg, pg)
				for (i <- 0 to 3) {CLA(w, a(i*w+w-1, i*w), b(i*w+w-1, i*w), c(i), sum(i), Wire(Bool()), g(i), p(i))}
				s := sum.asUInt
			}
		}
	}
}

class CLA(width: Int) extends Module {
	val in = IO(new Adder_in(width))
	val out = IO(new Adder_out(width))

	CLA(width, in.a, in.b, in.cin, out.s, out.cout, Wire(Bool()), Wire(Bool()))
}

class Adder(width: Int) extends Module {
	val in = IO(new Adder_in(width))
	val out = IO(new Adder_out(width))

	if (log2(width) % 2 == 0) {
		val add = Module(new CLA(width))
		add.in <> in
		add.out <> out
	}
	else {
		val add = List.fill(2)(Module(new CLA(width / 2)))
		add(0).in.a := in.a(width/2 - 1,0)
		add(0).in.b := in.b(width/2 - 1,0)
		add(0).in.cin := in.cin
		add(1).in.a := in.a(width - 1,width/2)
		add(1).in.b := in.b(width - 1,width/2)
		add(1).in.cin := add(0).out.cout
		out.s := Cat(add(1).out.s, add(0).out.s)
		out.cout := add(1).out.cout
	}
}

object Adder {
	def apply(width: Int, a: UInt, b: UInt, cin: Bool, s:UInt, cout: UInt) = {
		val _adder_ = Module(new Adder(width))
		_adder_.in.a := a
		_adder_.in.b := b
		_adder_.in.cin := cin
		s := _adder_.out.s
		cout := _adder_.out.cout
	}
	
	def apply(width: Int, a: UInt, b: UInt, cin: Bool): UInt = {
		val _adder_ = Module(new Adder(width))
		_adder_.in.a := a
		_adder_.in.b := b
		_adder_.in.cin := cin
		Cat(_adder_.out.cout, _adder_.out.s)
	}

	def apply(width: Int, a: UInt, b: UInt): UInt = {
		val adder_ = Module(new Adder(width))
		adder_.in.a := a
		adder_.in.b := b
		adder_.in.cin := 0.B
		Cat(adder_.out.cout, adder_.out.s)
	}
}