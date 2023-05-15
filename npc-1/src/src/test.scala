import chisel3._
import chisel3.util.HasBlackBoxInline

class add extends Module{
	val io = IO(new Bundle {
		val in1 = Input(UInt(64.W))
		val in2 = Input(UInt(64.W))
		val out = Output(UInt(64.W))
	})
	val my = Module(new Add)
	my.io.in1 := io.in1
	my.io.in2 := io.in2
	io.out := my.io.out

}

class Add extends BlackBox with HasBlackBoxInline {
	val io = IO(new Bundle {
		val in1 = Input(UInt(64.W))
		val in2 = Input(UInt(64.W))
		val out = Output(UInt(64.W))
	})
	setInline("BlackBoxRealAdd.v",
	"""module BlackBoxRealAdd(
	  |    input  [15:0] in1,
	  |    input  [15:0] in2,
	  |    output [15:0] out
	  |);
	  |always @* begin
	  |  out <= $realtobits($bitstoreal(in1) + $bitstoreal(in2));
	  |end
	  |endmodule
	""".stripMargin)
}
