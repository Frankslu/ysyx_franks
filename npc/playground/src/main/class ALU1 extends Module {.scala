
import chisel3._

class ALU1(alu_op_num: Int, data_width: Int = 32) extends Module {
    val io = IO(new Bundle {
        val alu_op = Input(UInt(alu_op_num.W))//0:add, 1:sub, 2:and 4:or 5:xor 6:
        val src1   = Input(UInt(data_width.W))
        val src2   = Input(UInt(data_width.W))
        val res    = Output(UInt(data_width.W))
    })

    val alu0 = Module(new ALU(12,32))
    io <> alu0.io
}