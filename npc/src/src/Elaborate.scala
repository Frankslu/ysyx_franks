import circt.stage._
import chisel3.getVerilogString
import chisel3._

import cpucore._
import cpucore.Unit._
import cpucore.pipeline.preIF
import cpucore.pipeline.IF_stage
import cpucore.pipeline._

object Elaborate extends App {
  def top = new mycpu_top()
  
  val useMFC = false // use MLIR-based firrtl compiler
  val generator = Seq(chisel3.stage.ChiselGeneratorAnnotation(() => top))
  if (useMFC) {
    (new ChiselStage).execute(args, generator :+ CIRCTTargetAnnotation(CIRCTTarget.Verilog))
  } else {
    (new chisel3.stage.ChiselStage).execute(args, generator)
  }
}
