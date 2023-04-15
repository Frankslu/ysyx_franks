import chisel3._
import cpucore.Config.Configs

class EX_stage extends Module{
    val a = IO(Flipped(new fs2es))

    val b = IO(new Bundle {
        val c = Output(UInt(1.W))
    })

    b.c := a.alu_op(1)
}
