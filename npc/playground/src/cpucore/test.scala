import chisel3._
import chisel3.util.BitPat
import chisel3.util.experimental.decode._

class SimpleDecoder extends Module {
  val table = TruthTable(
    Map(
      BitPat("b001") -> BitPat("b?"),
      BitPat("b010") -> BitPat("b?"),
      BitPat("b100") -> BitPat("b1"),
      BitPat("b101") -> BitPat("b1"),
      BitPat("b111") -> BitPat("b1")
    ),
    BitPat("b0"))
  val input = IO(Input(UInt(3.W)))
  val output = IO(Output(UInt(1.W)))
  output := decoder(input, table)
}

