package cpucore.pipeline

import chisel3._
import chisel3.util._
import myUtil.myUtil._

class test extends Module{
    val in = IO(Input(UInt(26.W)))
    val out = IO(Output(UInt(32.W)))

    out := Cat(u("100101"), in)
}