import chisel3._
import chisel3.util._
import chiseltest._
import chisel3.experimental._
import chisel3.experimental.BundleLiterals._
import chiseltest.formal._
import chiseltest.formal.BoundedCheck
import utest._

import cpucore.Unit._

class Add_test extends Module {
	val in = IO(new Adder_in(32))
	val out = IO(new Adder_out(32))

	val add = Module(new Adder(32))
	add.in <> in
	add.out <> out
	val ref = in.a +& in.b +& in.cin
	chisel3.assert(out.s === ref(31,0))
	chisel3.assert(out.cout === ref(32))
}

object Add extends TestSuite {
	val tests: Tests = Tests {
		test("mytest") {
			new Formal with HasTestName {
				def getTestName: String = s"add"
			}.verify(new Add_test, Seq(BoundedCheck(100)))
		}
	}
}