package cpucore.pipeline

import chisel3._
import Config.Configs._
import cpucore.csr._

class csr_for_dpic extends Bundle {
    val ex = Output(Bool())
    val ertn = Output(Bool())
    val ecode = Output(UInt(6.W))
    val esubcode = Output(UInt(9.W))
    val ex_pc = Output(UInt(DATA_WIDTH.W))

    val crmd = Output(UInt(DATA_WIDTH.W))
    val prmd = Output(UInt(DATA_WIDTH.W))
    val estat = Output(UInt(DATA_WIDTH.W))
    val era = Output(UInt(DATA_WIDTH.W))
    val eentry = Output(UInt(DATA_WIDTH.W))
}

class dpi_c_bus extends Bundle{
    val is_break = Output(Bool())
    val inst = Output(UInt(DATA_WIDTH.W))
    val next_pc = Output(UInt(ADDR_WIDTH.W))
    val inv = Output(Bool())
    val csr = new csr_for_dpic
}

class br_bus extends Bundle{
    val taken = Input(Bool())
    val target = Input(UInt(ADDR_WIDTH.W))
}

class pre2fs extends Bundle{
    val pc = Output(UInt(ADDR_WIDTH.W))
    val next_pc = Output(UInt(ADDR_WIDTH.W))
}

class fs2ds extends Bundle{
    val pc = Output(UInt(ADDR_WIDTH.W))
    val inst = Output(UInt(DATA_WIDTH.W))
    val next_pc = Output(UInt(ADDR_WIDTH.W))
}

class ds2es extends Bundle{
    val pc = Output(UInt(ADDR_WIDTH.W))
    val alu_src1 = Output(UInt(DATA_WIDTH.W))
    val alu_src2 = Output(UInt(DATA_WIDTH.W))
    val alu_op = Output(UInt(ALUOP_WIDTH.W))
    val rf_waddr = Output(UInt(REG_ADDR_LEN.W))
    val rf_we = Output(Bool())
    val mem_we = Output(UInt(2.W))
    val inst_name = Output(UInt(INST_NAME_WIDTH.W))
    val mem_wdata = Output(UInt(DATA_WIDTH.W))
    val csr_num = Output(UInt(14.W))
    val csr_we = Output(Bool())
    val ex = Output(Bool())
    val ertn = Output(Bool())
    val csr_wmask = Output(UInt(DATA_WIDTH.W))
    val dpi_c = new dpi_c_bus
}

class es2ms extends Bundle{
    val pc = Output(UInt(ADDR_WIDTH.W))
    val rf_wdata = Output(UInt(DATA_WIDTH.W))
    val inst_name = Output(UInt(INST_NAME_WIDTH.W))
    val res_from_mem = Output(Bool())
    val rf_we = Output(Bool())
    val rf_waddr = Output(UInt(REG_ADDR_LEN.W))
    val dpi_c = new dpi_c_bus
}

class ms2ws extends Bundle{
    val pc = Output(UInt(ADDR_WIDTH.W))
    val rf_we = Output(Bool())
    val rf_waddr = Output(UInt(REG_ADDR_LEN.W))
    val rf_wdata = Output(UInt(DATA_WIDTH.W))
    val dpi_c = new dpi_c_bus
}

class ws2rf extends Bundle{
    val pc = Output(UInt(ADDR_WIDTH.W))
    val rf_we = Output(Bool())
    val rf_waddr = Output(UInt(REG_ADDR_LEN.W))
    val rf_wdata = Output(UInt(DATA_WIDTH.W))
    val valid = Output(Bool())
    val dpi_c = new dpi_c_bus
}


