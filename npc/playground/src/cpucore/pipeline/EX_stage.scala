import chisel3._
import cpucore.Config.Configs

class EX_stage extends Module{
    val a = IO(Flipped(new ds2es))
    val b = IO(Output(UInt(32.W)))

    val alu_u = Module(new ALU)
    alu_u.io.alu_op := a.alu_op
    alu_u.io.src1 := a.alu_src1
    alu_u.io.src2 := a.alu_src2
    val alu_res = alu_u.io.res
    b := alu_res
}
