package myUtil

import chisel3._

object myUtil{
    def sign_extend(wire: UInt, width: Int = 32): UInt = {
        val sign = Wire(SInt(width.W))
        sign := wire.asSInt
        sign.asUInt
    }

    def set_num(num: Int, width: Int) = {
        var string = num.toBinaryString
        val len = string.length()
        for(i <- len to (width - 1)){
            string = "0" + string
        }
        string
    }

    def creat_?(width: Int) = {
        var a = ""
        for(i <- 1 to width){
            a = a + "?"
        }
        a
    }

    def eq_list(input: UInt, list: UInt*) = {
        var res = true.B
        for(i <- list){
            res = res | (input === i)
        }
        res
    }

    def u(input: String) = {
        val c = "b"+input
        c.U
    }
}