package cpucore.pipeline

import chisel3.Input
import Chisel.UInt

import chisel3._
import myUtil.myUtil._

class test extends Module{
    val in = IO(Input(UInt(3.W)))
    val out = IO(Output(Bool()))

    out := eq_list(in, "b001".U, "b010".U, "b101".U)
}