package myUtil

import chisel3._

object Util{
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

	def log2(x : Int): Int = {
		(math.log(x) / math.log(2)).toInt
	}

}

trait MyEnum {
    var cnt = 0

    def Value: Int = {
        val old = cnt
        cnt += 1
        return old
    }

    def get_width: Int = {
        if (cnt == 0)
            0
        else if(cnt == 1)
            1
        else if(cnt == 2)
            1
        else
            (math.log(cnt-1)/math.log(2)).toInt + 1
    }

    def rst = {
        cnt = 0;
    }
}