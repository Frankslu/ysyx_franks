//package cpucore.pipeline
import chisel3._
import cpucore.Config.Configs._

class IF_stage extends Module{

    val pc = RegInit(PC_INIT.U)
    val snpc = pc + 4.U
    pc := Mux()
}