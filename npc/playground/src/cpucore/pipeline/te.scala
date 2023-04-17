package cpucore.pipeline

import chisel3.Input
import Chisel.UInt

import chisel3._
import chisel3.util._
import myUtil.myUtil._

class test extends Module{
    val in = IO(Input(UInt(3.W)))
    val out = IO(Output(Bool()))

    out := Cat(u("1001"), in)
}