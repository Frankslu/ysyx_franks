package memory

import chisel3._

import Config.Configs._

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