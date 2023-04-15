import chisel3._
import config.Configs._

class regfile extends Module{
    val io = new Bundle {
        val waddr = Input(UInt(REG_ADDR_LEN.W))
        val raddr1 = Input(UInt(REG_ADDR_LEN.W))
        val raddr2 = Input(UInt(REG_ADDR_LEN.W))
        val wdata = Input(UInt(DATA_WIDTH.W))
        val rdata1 = Output(UInt(DATA_WIDTH.W))
        val rdata2 = Output(UInt(DATA_WIDTH.W))
        val wen = Input(Bool())
    }

    val regfile = Reg(Vec(REG_NUM, UInt(DATA_WIDTH.W)))

    when(io.wen){
        regfile(io.waddr.asInstanceOf[Int]) := io.wdata
    }

    io.rdata1 := Mux(io.raddr1 === 0.U, 0.U, regfile(io.raddr1.asInstanceOf[Int]))
    io.rdata2 := Mux(io.raddr2 === 0.U, 0.U, regfile(io.raddr2.asInstanceOf[Int]))
}
