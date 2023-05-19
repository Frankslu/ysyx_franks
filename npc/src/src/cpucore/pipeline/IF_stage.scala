// package cpucore.pipeline

// import chisel3._
// import chisel3.util._
// import cpucore.Config.Configs._

// class IF_stage extends Module{
//     val tods = DecoupledIO(new fs2ds)
//     val inst_sram = IO(new sram_io)
//     val frompre = Flipped(DecoupledIO(new pre2fs))

//     tods.bits.inst := inst_sram.rdata
//     tods.bits.pc := frompre.bits.pc
// }