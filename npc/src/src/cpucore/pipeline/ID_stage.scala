package cpucore.pipeline

import chisel3._
import Config.Configs._
import chisel3.util._
import cpucore.Unit._
import cpucore.Unit.loongarch32r_inst._
import myUtil.myUtil._
import cpucore.pipeline._
import ujson.Arr

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
    val imm20  = Cat(inst(24,5), 0.U(12.W))
    val imm26  = Cat(rj, rd, inst(25,10))



    val decode_res = loongarch32r_decoder(inst)

    val inst_type = decode_res(11,8)
    val mem_we = decode_res(7,6)
    val inst_name = decode_res(5,1)
    val rf_we = decode_res(0)



    val imm = Wire(UInt(DATA_WIDTH.W))
    imm := MuxCase(0x0.U(DATA_WIDTH.W), Seq(
        (inst_type === u(R2I5))  -> imm5,
        (inst_type === u(R2I12)) -> imm12,
        (inst_type === u(R2I12U)) -> imm12u,
        (inst_type === u(R2I16)) -> 4.U,
        (inst_type === u(R1I20)) -> imm20,
        (inst_type === u(I26))   -> 4.U
    ))



    val rk_or_rd = (inst_name =/= u(INST_JIRL) & inst_type === u(R2I16)) | mem_we === u(MEM_WR)
    val reg = Module(new regfile)
    reg.io.raddr1 := rj
    reg.io.raddr2 := Mux(rk_or_rd, rk, rd)
    reg.io.waddr := torf.rf_waddr
    reg.io.wdata := torf.rf_wdata
    reg.io.wen := torf.rf_we
    reg.io.rf_pc := torf.dpi_c.next_pc
    reg.io.valid := torf.valid
    reg.io.is_break := torf.dpi_c.is_break 
    reg.io.inst := torf.dpi_c.inst

    val rj_value = reg.io.rdata1
    val rkd_value = reg.io.rdata2

    val rf_waddr = Mux(inst_name === u(INST_B), 1.U(5.W), rd)//output



    //branch
    val rj_eq_rd  = rj_value === rkd_value
    val rj_sub_rd = rj_value +& rkd_value + 1.U
    val slt_res = rj_value(31) & ~rkd_value(31) | ~(rj_value(31) ^ rkd_value(31)) & rj_sub_rd(31)
    val sltu_res = ~rj_sub_rd(32)
    br.taken  :=  inst_name === u(INST_BEQ)  & rj_eq_rd |
                    inst_name === u(INST_BNE)  & ~rj_eq_rd |
                    inst_name === u(INST_BLT)  & slt_res |
                    inst_name === u(INST_BGE)  & ~slt_res |
                    inst_name === u(INST_BLTU) & sltu_res |
                    inst_name === u(INST_BGEU) & ~sltu_res |
                    inst_name === u(INST_B) | inst_name === u(INST_BL) | inst_name === u(INST_JIRL)
    val ds_pc = ds.bits.pc
    br.target := MuxLookup(inst_name, ds_pc + imm)(Seq(
        u(INST_JIRL) -> (rj_value + imm),
        u(INST_BRK) -> ds_pc
    ))



    toes.bits.alu_op := decode_res(16,12)
    toes.bits.pc := ds_pc
    val src1_is_pc = inst_name === u(INST_JIRL) | inst_name === u(INST_PCAD) | inst_name === u(INST_BL)
    toes.bits.alu_src1 := Mux(src1_is_pc , ds_pc, rj_value)
    toes.bits.alu_src2 := Mux(inst_type === u(R3), rkd_value, imm)
    toes.bits.rf_waddr := rf_waddr
    toes.bits.inst_name := inst_name
    toes.bits.mem_we := mem_we
    toes.bits.rf_we := rf_we
    toes.bits.mem_wdata := rkd_value
    toes.bits.dpi_c.is_break := inst_type === u(BRK_T)
    toes.bits.dpi_c.inst := inst
    toes.bits.dpi_c.next_pc := ds.bits.next_pc

    ds.ready := 1.B
    toes.valid := ds.valid
}