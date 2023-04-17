package myUtil

import chisel3._

object SignalExtend{
    def sign_extend(wire: UInt, width: Int = 32): UInt = {
        val sign = Wire(SInt(width.W))
        sign := wire.asSInt
        sign.asUInt
    }
}