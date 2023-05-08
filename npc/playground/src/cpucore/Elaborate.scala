import circt.stage._
import chisel3.getVerilogString

import cpucore.pipeline._
import cpucore.Unit._
import cpucore.memory._

object Elaborate extends App {
  def top = new dmem
  
  val useMFC = true // use MLIR-based firrtl compiler
  val generator = Seq(chisel3.stage.ChiselGeneratorAnnotation(() => top))
  if (useMFC) {
    (new ChiselStage).execute(args, generator :+ CIRCTTargetAnnotation(CIRCTTarget.Verilog))
  } else {
    (new chisel3.stage.ChiselStage).execute(args, generator)
  }
}
