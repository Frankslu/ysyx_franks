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

// class sram_io(send: Int, receive: Int) extends Bundle{
//         val en = if(send == 1) Some(Output(Bool())) else None
//         val wr = if(send == 1) Some(Output(Bool())) else None
//         val addr = if(send == 1) Some(Output(UInt(ADDR_WIDTH.W))) else None
//         val wdata = if(send == 1) Some(Output(UInt(DATA_WIDTH.W))) else None
//         val wstrb = if(send == 1) Some(Output(UInt(WSTRB_WIDTH.W))) else None
//         val rdata = if(receive == 1) Some(Input(UInt(DATA_WIDTH.W))) else None
// }

class sram_io(send: Int, receive: Int) extends Bundle{
    if(send == 1){
        val en = Some(Output(Bool()))
        val wr = Some(Output(Bool()))
        val addr = Some(Output(UInt(ADDR_WIDTH.W)))
        val wdata = Some(Output(UInt(DATA_WIDTH.W)))
        val wstrb = Some(Output(UInt(WSTRB_WIDTH.W)))
    }
    else 
        None

    if(receive == 1){
        val rdata = Some(Input(UInt(DATA_WIDTH.W)))
    }
    else
        None
}
