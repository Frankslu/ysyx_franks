package cpucore.csr

import chisel3._
import chisel3.util._
import Config.Configs._
import cpucore.pipeline._

class csr_io extends Bundle {
	val we = Input(Bool())
	val num = Input(UInt(14.W))
	val wvalue = Input(UInt(32.W))
	val wmask = Input(UInt(32.W))
	val rvalue = Output(UInt(32.W))

	val ex = Input(Bool())
	val ertn = Input(Bool())
	val exe_pc = Input(UInt(32.W))
	val ecode = Input(UInt(6.W))
	val esubcode = Input(UInt(9.W))

	val dpic = new csr_for_dpic
}

class csr_br extends Bundle {
	val taken = Output(Bool())
	val pc = Output(UInt(32.W))
}

class csr extends Module {
	val io = IO(new csr_io)
	val csr_br = IO(new csr_br)

	val crmd   = RegInit(8.U(DATA_WIDTH.W))
	val prmd   = RegInit(0.U(DATA_WIDTH.W))
	val era    = RegInit(0.U(DATA_WIDTH.W))
	val estat  = RegInit(0.U(DATA_WIDTH.W))
	val eentry = RegInit(0.U(DATA_WIDTH.W))

	val crmd_plv = crmd(1,0)
	val crmd_ie  = crmd(2)

	val prmd_pplv = prmd(1,0)
	val prmd_pie  = prmd(2)

	val era_pc = era
	val eentry_pc = eentry(31,6)

	val estat_ecode = estat(21,16)
	val estat_esubcode = estat(30,22)

	io.dpic.crmd   := crmd
	io.dpic.prmd   := prmd
	io.dpic.estat  := estat
	io.dpic.era    := era
	io.dpic.eentry := eentry
	io.dpic.ex_pc  := io.exe_pc

	io.dpic.ex := io.ex
	io.dpic.ertn := io.ertn
	io.dpic.ecode := io.ecode
	io.dpic.esubcode := io.esubcode

	when(io.num === 0x0.U && io.we === 1.B) {
		crmd := crmd & ~io.wmask | io.wvalue & io.wmask
		io.dpic.crmd := crmd & ~io.wmask | io.wvalue & io.wmask
	}
	.elsewhen(io.ertn === 1.B) {
		crmd := Cat(crmd(31,3), prmd(2,0))
		io.dpic.crmd := Cat(crmd(31,3), prmd(2,0))
	}
	.elsewhen(io.ex === 1.B) {
		crmd := Cat(crmd(31,3), 0.U(3.W))
		io.dpic.crmd := Cat(crmd(31,3), 0.U(3.W))
	}

	when(io.num === 0x1.U && io.we === 1.B) {
		prmd := prmd & ~io.wmask | io.wvalue & io.wmask
		io.dpic.prmd := prmd & ~io.wmask | io.wvalue & io.wmask
	}
	.elsewhen(io.ex === 1.B) {
		prmd := Cat(prmd(31,3), crmd(2,0))
		io.dpic.prmd := Cat(prmd(31,3), crmd(2,0))
	}

	when(io.num === 0x5.U && io.we === 1.B) {
		estat := estat & ~io.wmask | io.wvalue & io.wmask
		io.dpic.estat := estat & ~io.wmask | io.wvalue & io.wmask
	}
	.elsewhen(io.ex === 1.B) {
		estat := Cat(0.B, io.esubcode, io.ecode, estat(15, 0))
		io.dpic.estat := Cat(0.B, io.esubcode, io.ecode, estat(15, 0))
	}

	when(io.num === 0x6.U && io.we === 1.B) {
		era := era & ~io.wmask | io.wvalue & io.wmask
		io.dpic.era := era & ~io.wmask | io.wvalue & io.wmask
	}
	.elsewhen(io.ex === 1.B) {
		era := io.exe_pc
		io.dpic.era := io.exe_pc
	}

	when(io.num === 0xc.U && io.we === 1.B) {
		eentry := eentry & ~io.wmask | io.wvalue & io.wmask
		io.dpic.eentry := eentry & ~io.wmask | io.wvalue & io.wmask
	}

	csr_br.taken := io.ex | io.ertn
	csr_br.pc := Mux(io.ertn === 1.B, era, eentry)

	io.rvalue := Fill(32, io.num === 0x0.U) & crmd |
				Fill(32, io.num === 0x1.U) & prmd |
				Fill(32, io.num === 0x5.U) & estat |
				Fill(32, io.num === 0x6.U) & era |
				Fill(32, io.num === 0xC.U) & eentry
}