import circt.stage._
import chisel3.getVerilogString
import chisel3._

// import cpucore.pipeline._
import cpucore.Unit._
import cpucore.memory._
// import cpucore.pipeline._

object Elaborate extends App {
  def top = new mem()
  
  val useMFC = true // use MLIR-based firrtl compiler
  val generator = Seq(chisel3.stage.ChiselGeneratorAnnotation(() => top))
  if (useMFC) {
    // (new ChiselStage).execute(args, generator :+ CIRCTTargetAnnotation(CIRCTTarget.Verilog))
    (new ChiselStage).execute(args, generator)
  }// else {
//    (new chisel3.stage.ChiselStage).execute(args, generator)
//  }
}
