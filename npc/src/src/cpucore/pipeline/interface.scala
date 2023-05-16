package cpucore.pipeline

import chisel3._
import cpucore.Config.Configs._

class br_bus extends Bundle{
    val taken = Input(Bool())
    val target = Input(UInt(ADDR_WIDTH.W))
}

class pre2fs extends Bundle{
    val pc = Output(UInt(ADDR_WIDTH.W))
}

class fs2ds extends Bundle{
    val pc = Output(UInt(ADDR_WIDTH.W))
    val inst = Output(UInt(DATA_WIDTH.W))
}

class ds2es extends Bundle{
    val pc = Output(UInt(ADDR_WIDTH.W))
    val alu_src1 = Output(UInt(DATA_WIDTH.W))
    val alu_src2 = Output(UInt(DATA_WIDTH.W))
    val alu_op = Output(UInt(ALU_OP_NUM.W))
    val rf_waddr = Output(UInt(REG_ADDR_LEN.W))
}

class es2ms extends Bundle{
    val pc = Output(UInt(ADDR_WIDTH.W))
    val alu_res = Output(UInt(DATA_WIDTH.W))
}

class sram_io_1 extends Bundle{
    val en = Output(Bool())
    val wr = Output(Bool())
    val addr = Output(UInt(ADDR_WIDTH.W))
    val wdata = Output(UInt(DATA_WIDTH.W))
    val wstrb = Output(UInt(WSTRB_WIDTH.W))
}

class sram_io_2 extends Bundle{
    val rdata = Input(UInt(DATA_WIDTH.W))
}

class sram_io extends Bundle{
    val r = new sram_io_1
    val w = new sram_io_2
}