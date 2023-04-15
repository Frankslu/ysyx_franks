import chisel3._
import cpucore.Config.Configs

class EX_stage extends Module{
    val io = IO(new Bundle {
        val a = Input(UInt(1.W))
        val b = Output(UInt(1.W))
    })

    val reg = RegNext(io)
    io.b := 1.U
}
