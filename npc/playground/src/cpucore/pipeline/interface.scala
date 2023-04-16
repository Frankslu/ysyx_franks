import chisel3._
import cpucore.Config.Configs._

class ds2es extends Bundle{
    val alu_src1 = Output(UInt(DATA_WIDTH.W))
    val alu_src2 = Output(UInt(DATA_WIDTH.W))
    val alu_op = Output(UInt(ALU_OP_NUM.W))
}

class fs2ds extends Bundle{
    val inst = Output(UInt(DATA_WIDTH.W))
    val br_taken = Input(Bool())
    val br_target = Input(UInt(ADDR_WIDTH.W))
}

class sram_io_1 extends Bundle{
    val en = Output(Bool())
    val we = Output(UInt(WSTRB_WIDTH.W))
    val addr = Output(UInt(ADDR_WIDTH.W))
    val wdata = Output(UInt(DATA_WIDTH.W))
}

class sram_io_2 extends Bundle{
    val rdata = Input(UInt(DATA_WIDTH.W))
}