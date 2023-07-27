package cpucore.pipeline

import chisel3._
import Config.Configs._
import chisel3.util._
import cpucore.Unit._
import cpucore.Unit.loongarch32r_inst._
import myUtil.Util._
import cpucore.pipeline._
import firrtl.PrimOps

class ID_stage extends Module{
    val toes = IO(Decoupled(new ds2es))
    val ds = IO(Flipped(Decoupled(new fs2ds)))
    val torf = IO(Flipped(new ws2rf))
    val br   = IO(Flipped(new br_bus))

    val inst = ds.bits.inst
    val rj = inst(9,5)
    val rd = inst(4,0)
    val rk = inst(14,10)
    val imm5   = rk
    val imm12u = inst(21,10)
    val imm12  = sign_extend(inst(21,10))
    val imm16  = sign_extend(Cat(inst(25,10),0.U(2.W)))
    val imm20u  = Cat(inst(24,5), 0.U(12.W))
    val imm20 = sign_extend(imm20u)
    val imm26  = sign_extend(Cat(rj, rd, inst(25,10), 0.U(2.W)))
    val code = inst(14,0)


    val decode_res = loongarch32r_decoder(inst)

    val inst_type = decode_res(11,8)
    val mem_we = decode_res(7,6)
    val inst_name = decode_res(5,1)
    val rf_we = decode_res(0)



    val imm = Wire(UInt(DATA_WIDTH.W))
    imm := MuxCase(0.U(DATA_WIDTH.W), Seq(
        (inst_type === u(R2I5))  -> imm5,
        (inst_type === u(R2I12)) -> imm12,
        (inst_type === u(R2I12U)) -> imm12u,
        (inst_type === u(R2I16)) -> 4.U,
        (inst_type === u(R1I20)) -> imm20,
        (inst_type === u(R1I20U)) -> imm20u,
        (inst_type === u(I26))   -> 4.U
    ))



    val src2_is_rd = (inst_name =/= u(INST_JIRL) & inst_type === u(R2I16)) | mem_we === u(MEM_WR) | inst_type === u(R2CSR)
    val reg = Module(new regfile)
    reg.io.raddr1 := rj
    reg.io.raddr2 := Mux(src2_is_rd, rd, rk)
    reg.io.waddr := Mux(inst_name === u(INST_BL), 1.U, torf.rf_waddr)
    reg.io.wdata := torf.rf_wdata
    reg.io.wen := torf.rf_we
    reg.io.rf_pc := torf.dpi_c.next_pc
    reg.io.valid := torf.valid
    reg.io.is_break := torf.dpi_c.is_break 
    reg.io.inst := torf.dpi_c.inst
    reg.io.inv := torf.dpi_c.inv
    reg.io.csr <> torf.dpi_c.csr

    val rj_value = reg.io.rdata1
    val rkd_value = reg.io.rdata2

    val rf_waddr = Mux(inst_name === u(INST_B), 1.U(5.W), rd)//output



    //branch
    val rj_eq_rd  = rj_value === rkd_value
    val rj_sub_rd = Adder(DATA_WIDTH, rj_value, ~rkd_value, 1.B)
    val slt_res = rj_value(31) & ~rkd_value(31) | ~(rj_value(31) ^ rkd_value(31)) & rj_sub_rd(31)
    val sltu_res = ~rj_sub_rd(32)
    br.taken  :=  inst_name === u(INST_BEQ)  & rj_eq_rd |
                    inst_name === u(INST_BNE)  & ~rj_eq_rd |
                    inst_name === u(INST_BLT)  & slt_res |
                    inst_name === u(INST_BGE)  & ~slt_res |
                    inst_name === u(INST_BLTU) & sltu_res |
                    inst_name === u(INST_BGEU) & ~sltu_res |
                    inst_name === u(INST_B) | inst_name === u(INST_BL) |
                    inst_name === u(INST_JIRL) | inst_name === u(INST_BRK)
    val ds_pc = ds.bits.pc
    val br_add1 = MuxLookup(inst_name, imm16, Seq(
        u(INST_JIRL) -> rj_value,
        u(INST_BRK) -> 0.U,
        u(INST_B) -> imm26,
        u(INST_BL) -> imm26
    ))
    val br_add2 = MuxLookup(inst_name, ds_pc, Seq(
        u(INST_JIRL) -> 0.U,
        u(INST_BRK) -> ds_pc,
        u(INST_B) -> ds_pc,
        u(INST_BL) -> ds_pc
    ))

    br.target := Adder(32, br_add1, br_add2)



    toes.bits.alu_op := decode_res(16,12)
    toes.bits.pc := ds_pc
    val src1_is_pc = inst_name === u(INST_JIRL) | inst_name === u(INST_PCAD) | inst_name === u(INST_BL)
    toes.bits.alu_src1 := Mux(src1_is_pc , ds_pc, rj_value)
    toes.bits.alu_src2 := Mux(inst_type === u(R3) || inst_type === u(R2CSR), rkd_value, imm)
    toes.bits.rf_waddr := rf_waddr
    toes.bits.inst_name := inst_name
    toes.bits.mem_we := mem_we
    toes.bits.rf_we := rf_we
    toes.bits.mem_wdata := rkd_value
    toes.bits.csr_we := rj =/= 0.U & inst_name === u(INST_CSR)
    toes.bits.csr_num := inst(23,10)
    if(for_test == 1){
        val is_syscall_0x1 = inst_name === u(INST_SYS) & code === 1.U
        toes.bits.ex := inst_type === u(SYS) & inst_name =/= u(INST_ERTN) & inst_name =/= u(INST_BRK) & is_syscall_0x1 =/= 1.B
    }else{
        toes.bits.ex := inst_type === u(SYS) & inst_name =/= u(INST_ERTN)
    }
    toes.bits.ertn := inst_name === u(INST_ERTN)
    toes.bits.csr_wmask := Mux(rj === 1.U, Fill(32, 1.B), rj_value)

    toes.bits.dpi_c.is_break := inst_name === u(INST_BRK)
    toes.bits.dpi_c.inst := inst
    toes.bits.dpi_c.next_pc := ds.bits.next_pc
    toes.bits.dpi_c.inv := inst_type === u(INV)
    toes.bits.dpi_c.csr := DontCare

    ds.ready := 1.B
    toes.valid := ds.valid
}