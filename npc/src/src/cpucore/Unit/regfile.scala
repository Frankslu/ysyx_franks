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
        val is_break = Input(Bool())
        val valid = Input(Bool())
        val inst = Input(UInt(DATA_WIDTH.W))
    })
    val rf = Mem(REG_NUM ,UInt(DATA_WIDTH.W))
    when(io.wen) {rf(io.waddr) := io.wdata}
    io.rdata1 := Mux(io.raddr1 === 0.U, 0.U, rf(io.raddr1))
    io.rdata2 := Mux(io.raddr2 === 0.U, 0.U, rf(io.raddr2))

    //for test
    val difftest = Module(new Difftest)
    difftest.io.rf(0) := 0.U
    for(i <- 1 to 31){
        difftest.io.rf(i) := rf(i)
    }

    val npc_brk = Module(new npc_break)
    npc_brk.io.is_break := io.is_break

    val inst_exec_once = Module(new Exec)
    inst_exec_once.io.valid := io.valid
    inst_exec_once.io.inst := io.inst
    inst_exec_once.io.pc := io.rf_pc
}