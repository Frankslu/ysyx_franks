package cpucore.pipeline

import chisel3._
import cpucore.Config.Configs._
import chisel3.util._
import cpucore.Unit._
import cpucore.Unit.loongarch32r_inst._
import myUtil.myUtil._

class ID_stage extends Module{
    val toes = IO(new ds2es())
    val fromfs = IO(Flipped(new fs2ds()))
    val br   = IO(Flipped(new br_bus()))

    val inst = fromfs.inst
    val rj = inst(9,5)
    val rd = inst(4,0)
    val rk = inst(14,10)
    val imm5   = rk
    val imm12u = inst(21,10)
    val imm12  = sign_extend(inst(21,10))
    val imm16  = sign_extend(Cat(inst(25,10),0.U(2.W)))
    val imm20  = Cat(inst(24,5), 0.U(12.W))
    val imm26  = Cat(rj, rd, inst(25,10))


    
    //val decode_res = Cat(toes.alu_op, mem_we, inst_type, inst_name, rf_we)
    val decode_res = loongarch32r_decoder(inst)

    toes.alu_op := decode_res(29,11)
    val inst_type = decode_res(10,7)
    val mem_we = decode_res(6)
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

    val rk_or_rd = inst_name =/= u(INST_JIRL) & inst_type === u(R2I16)
    val reg = Module(new regfile)
    reg.io.raddr1 := rj
    reg.io.raddr2 := Mux(rk_or_rd, rk, rd)
    reg.io.waddr := 0.U
    reg.io.wdata := 0.U
    reg.io.wen := 1.U

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
    val ds_pc = fromfs.pc
    br.target := Mux(inst_name === u(INST_JIRL), rj_value, ds_pc) + imm

    toes.pc := ds_pc
    toes.alu_src1 := Mux(eq_list(inst_name, u(INST_JIRL), u(INST_PCAD), u(INST_BL)), ds_pc, rj_value)
    toes.alu_src2 := Mux(inst_type === u(R3), rkd_value, imm)
    toes.rf_waddr := rf_waddr
}