//package cpucore.pipeline

import chisel3._
import cpucore.Config.Configs._
import chisel3.util.experimental.decode._

class ID_stage extends Module{
    val toes = IO(new ds2es)
    val tofs = IO(Flipped(new fs2ds))

    val io = new Bundle {
        val a = toes
        val b = tofs
    }
}