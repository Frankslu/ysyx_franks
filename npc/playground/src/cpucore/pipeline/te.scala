package cpucore.pipeline

import chisel3._
import chisel3.util._
import myUtil.myUtil._

class test extends Module{
    val in1 = IO(Input(UInt(32.W)))
    val in2 = IO(Input(UInt(32.W)))
    val out1 = IO(Output(UInt(32.W)))
    val out2 = IO(Output(UInt(32.W)))
    val out3 = IO(Output(UInt(32.W)))

    out1 := in1 + in2
    out2 := in1 - in2
    out3 := in1 < in2
}