package cpucore.Unit

import chisel3._
import chisel3.util._

class BoothIO(width: Int) extends Bundle{
	val a = Input(UInt(width.W))
	val b = Input(UInt(width.W))
	val sign = Input(Bool())
	val lowBit = Output(UInt((width*2).W))
	val signedHighBit = Output(UInt((width*2).W))
	val unsignedHighBit = Output(UInt((width*2).W))
}

// object BoothSignedMultiplier {
// 	def apply
// }

class Booth(width: Int) extends Module {
	val io = IO(Decoupled(new BoothIO(width)))
	
	
	//signed mul
}
