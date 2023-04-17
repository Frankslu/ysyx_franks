package cpucore.pipeline

import chisel3.Input
import Chisel.UInt

import chisel3._
import chisel3.util._
import myUtil.myUtil._

class test extends Module{
    val out = IO(Output(Bool()))

    out := u("1001")
}