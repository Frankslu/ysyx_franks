package cpucore.Unit

import Config.Configs._
import chisel3._
/*
class regfile extends Module{
    val io = IO(new Bundle {
        val waddr = Input(UInt(REG_ADDR_LEN.W))
        val raddr1 = Input(UInt(REG_ADDR_LEN.W))
        val raddr2 = Input(UInt(REG_ADDR_LEN.W))
        val wdata = Input(UInt(DATA_WIDTH.W))
        val rdata1 = Output(UInt(DATA_WIDTH.W))
        val rdata2 = Output(UInt(DATA_WIDTH.W))
        val wen = Input(Bool())
    })

    val regfile = Reg(Vec(REG_NUM, UInt(DATA_WIDTH.W)))

    when(io.wen){
        regfile(io.waddr) := io.wdata
    }

    io1.rdata1 := Mux(io1.raddr1 === 0.U, 0.U, regfile(io1.raddr1))
    io1.rdata2 := Mux(io1.raddr2 === 0.U, 0.U, regfile(io1.raddr2))
}*/
class regfile extends Module{
    val io = IO(new Bundle {
        val raddr1 = Input(UInt(REG_ADDR_LEN.W))
        val raddr2 = Input(UInt(REG_ADDR_LEN.W))
        val rdata1 = Output(UInt(DATA_WIDTH.W))
        val rdata2 = Output(UInt(DATA_WIDTH.W))
        val waddr = Input(UInt(REG_ADDR_LEN.W))
        val wdata = Input(UInt(DATA_WIDTH.W))
        val wen = Input(Bool())
        val rf_pc = Input(UInt(ADDR_WIDTH.W))
    })
    val rf = Mem(REG_NUM ,UInt(DATA_WIDTH.W))
    when(io.wen) {rf(io.waddr) := io.wdata}
    io.rdata1 := Mux(io.raddr1 === 0.U, 0.U, rf(io.raddr1))
    io.rdata2 := Mux(io.raddr2 === 0.U, 0.U, rf(io.raddr2))

    //for test
    val pc = RegNext(io.rf_pc)
}