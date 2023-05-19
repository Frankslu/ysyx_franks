package cpucore.pipeline

import chisel3._
import Config.Configs._

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
    val alu_op = Output(UInt(ALUOP_WIDTH.W))
    val rf_waddr = Output(UInt(REG_ADDR_LEN.W))
    val rf_we = Output(Bool())
    val mem_we = Output(Bool())
    val inst_name = Output(UInt(INST_NAME_WIDTH.W))
    val mem_wdata = Output(UInt(DATA_WIDTH.W))
}

class es2ms extends Bundle{
    val pc = Output(UInt(ADDR_WIDTH.W))
    val alu_res = Output(UInt(DATA_WIDTH.W))
    val inst_name = Output(UInt(INST_NAME_WIDTH.W))
    val res_from_mem = Output(Bool())
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
    val en = Output(Bool())
    val wr = Output(Bool())
    val addr = Output(UInt(ADDR_WIDTH.W))
    val wdata = Output(UInt(DATA_WIDTH.W))
    val wstrb = Output(UInt(WSTRB_WIDTH.W))
    val rdata = Input(UInt(DATA_WIDTH.W))
}
