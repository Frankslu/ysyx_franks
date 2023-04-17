package myUtil

import chisel3._

object myUtil{
    def sign_extend(wire: UInt, width: Int = 32): UInt = {
        val sign = Wire(SInt(width.W))
        sign := wire.asSInt
        sign.asUInt
    }

//    def NtoString(num: Int, width: Int): String = {

 //   }

    def set_onehot(num: Int, width: Int, return_type: String) = {
        val x = 1 << num
        var string = x.toBinaryString
        val len = string.length()
        for(i <- len to (width - 1)){
                string = "0" + string
        }
        if(return_type == "UInt"){
            string.U
        }else if(return_type == "String"){
            string
        }
    }
}