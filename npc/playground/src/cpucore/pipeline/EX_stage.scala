import chisel3._
import cpucore.Config.Configs

class EX_stage extends Module{
    val a = IO(new fs2es)

    val b = IO(new Bundle {
        val c = Input(UInt(1.W))
    })

    b := a.alu_op
}
