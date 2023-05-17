package cpucore.Unit

import chisel3._
import chisel3.util._
import chisel3.util.experimental.decode._

import myUtil.myUtil._
// object inst_type extends ChiselEnum{
//     val 
// }
class deco extends Module{
    val in = IO(Input(UInt(32.W)))
    val out = IO(Output(UInt(16.W)))

    out := loongarch32r_inst.loongarch32r_decoder(in)
}

object loongarch32r_inst{
    //transport ChiselEnum to BinaryString
    def trans(num: UInt, width: Int) = {num.litValue.toString(2).reverse.padTo(width, '0').reverse}
    //alu_op

    def trans1(num: UInt) = trans(num, 5)
    val OP_NONE = trans1(ALUOP.NONE_)
    val OP_ADD = trans1(ALUOP.ADD_)
    val OP_SUB = trans1(ALUOP.SUB_)
    val OP_SLT = trans1(ALUOP.SLT_)
    val OP_SLTU = trans1(ALUOP.SLTU_)
    val OP_AND = trans1(ALUOP.AND_)
    val OP_NOR = trans1(ALUOP.NOR_)
    val OP_OR = trans1(ALUOP.OR_)
    val OP_XOR = trans1(ALUOP.XOR_)
    val OP_SLL = trans1(ALUOP.SLL_)
    val OP_SRL = trans1(ALUOP.SRL_)
    val OP_SRA = trans1(ALUOP.SRA_)
    val OP_LUI = trans1(ALUOP.LUI_)
    val OP_MUL = trans1(ALUOP.MUL_)
    val OP_MULH = trans1(ALUOP.MULH_)
    val OP_MULHU = trans1(ALUOP.MULHU_)
    val OP_DIV = trans1(ALUOP.DIV_)
    val OP_DIVU = trans1(ALUOP.DIVU_)
    val OP_MOD = trans1(ALUOP.MOD_)
    val OP_MODU = trans1(ALUOP.MODU_)

    //inst_type
    val set_inst_type = set_num(_, 4)
    val INV     = set_inst_type(0)
    val R3      = set_inst_type(1)
    val R2I5    = set_inst_type(2)
    val R2I12   = set_inst_type(3)
    val R2I16   = set_inst_type(4)
    val R1I20   = set_inst_type(5)
    val I26     = set_inst_type(6)
    val BRK_T   = set_inst_type(7)
    val R2I12U  = set_inst_type(8)
//    val R2
//    val R4
//    val R2I8
//    val R2I14
//    val R1I21

    //MEM
    val MEM_EN = "0"
    val MEM_UN = "1"

    //inst name
    val set_inst_name = set_num(_, 5)
    val INST_BEQ  = set_inst_name(0)
    val INST_BNE  = set_inst_name(1)
    val INST_BLT  = set_inst_name(2)
    val INST_BGE  = set_inst_name(3)
    val INST_BLTU = set_inst_name(4)
    val INST_BGEU = set_inst_name(5)
    val INST_LDB  = set_inst_name(6)
    val INST_LDH  = set_inst_name(7)
    val INST_LDW  = set_inst_name(8)
    val INST_LDBU = set_inst_name(9)
    val INST_LDHU = set_inst_name(10)
    val INST_STB  = set_inst_name(11)
    val INST_STH  = set_inst_name(12)
    val INST_STW  = set_inst_name(13)
    val INST_B    = set_inst_name(14)
    val INST_BL   = set_inst_name(15)
    val INST_JIRL = set_inst_name(16)
    val INST_PCAD = set_inst_name(17)
    val INST_NNNN = set_inst_name(18)

    //reg_we
    val RF_WE = "1"
    val RF_UN = "0"

    //src2
    

    //I26
    def B         = BitPat("b010100_????????????????_??????????"    ) 
    def BL        = BitPat("b010101_????????????????_??????????"    )
    //2RI16 
    def JIRL      = BitPat("b010011_????????????????_?????_?????"   ) 
    def BEQ       = BitPat("b010110_????????????????_?????_?????"   ) 
    def BNE       = BitPat("b010111_????????????????_?????_?????"   ) 
    def BLT       = BitPat("b011000_????????????????_?????_?????"   ) 
    def BGE       = BitPat("b011001_????????????????_?????_?????"   ) 
    def BLTU      = BitPat("b011010_????????????????_?????_?????"   ) 
    def BGEU      = BitPat("b011011_????????????????_?????_?????"   )
    //1RI20 
    def LU12I_W   = BitPat("b0001010_?????_?????_?????_?????_?????" ) 
    def PCADDU12I = BitPat("b0001110_?????_?????_?????_?????_?????" )
    //2RI12
    def SLTI      = BitPat("b0000001000_????????????_?????_?????"   ) 
    def SLTUI     = BitPat("b0000001001_????????????_?????_?????"   ) 
    def ADDI_W    = BitPat("b0000001010_????????????_?????_?????"   ) 
    def ANDI      = BitPat("b0000001101_????????????_?????_?????"   ) 
    def ORI       = BitPat("b0000001110_????????????_?????_?????"   ) 
    def XORI      = BitPat("b0000001111_????????????_?????_?????"   ) 
    def LD_B      = BitPat("b0010100000_????????????_?????_?????"   ) 
    def LD_H      = BitPat("b0010100001_????????????_?????_?????"   ) 
    def LD_W      = BitPat("b0010100010_????????????_?????_?????"   ) 
    def ST_B      = BitPat("b0010100100_????????????_?????_?????"   ) 
    def ST_H      = BitPat("b0010100101_????????????_?????_?????"   ) 
    def ST_W      = BitPat("b0010100110_????????????_?????_?????"   ) 
    def LD_BU     = BitPat("b0010101000_????????????_?????_?????"   ) 
    def LD_HU     = BitPat("b0010101001_????????????_?????_?????"   )
    //3R 
    def ADD_W     = BitPat("b00000000000100000_?????_?????_?????"   ) 
    def SUB_W     = BitPat("b00000000000100010_?????_?????_?????"   ) 
    def SLT       = BitPat("b00000000000100100_?????_?????_?????"   ) 
    def SLTU      = BitPat("b00000000000100101_?????_?????_?????"   ) 
    def NOR       = BitPat("b00000000000101000_?????_?????_?????"   ) 
    def AND       = BitPat("b00000000000101001_?????_?????_?????"   ) 
    def MOVE      = BitPat("b00000000000101010_?????_?????_?????"   )
    def XOR       = BitPat("b00000000000101011_?????_?????_?????"   ) 
    def SLL_W     = BitPat("b00000000000101110_?????_?????_?????"   ) 
    def SRL_W     = BitPat("b00000000000101111_?????_?????_?????"   ) 
    def SRA_W     = BitPat("b00000000000110000_?????_?????_?????"   ) 
    def MUL_W     = BitPat("b00000000000111000_?????_?????_?????"   ) 
    def MULH_W    = BitPat("b00000000000111001_?????_?????_?????"   ) 
    def MULH_WU   = BitPat("b00000000000111010_?????_?????_?????"   ) 
    def DIV_W     = BitPat("b00000000001000000_?????_?????_?????"   ) 
    def MOD_W     = BitPat("b00000000001000001_?????_?????_?????"   ) 
    def DIV_WU    = BitPat("b00000000001000010_?????_?????_?????"   ) 
    def MOD_WU    = BitPat("b00000000001000011_?????_?????_?????"   ) 
    def SLLI_W    = BitPat("b00000000010000001_?????_?????_?????"   )//shift 
    def SRLI_W    = BitPat("b00000000010001001_?????_?????_?????"   )//shift
    def SRAI_W    = BitPat("b00000000010010001_?????_?????_?????"   )//shift
    def BREAK     = BitPat("b0000_0000_0010_10100_?????_?????_?????") 

    val inst_table = TruthTable(Map(
        //                      ALUOP   INSTTYPE   MEMEN  INST       RFWE 
        B         -> BitPat("b" +OP_NONE  +I26    +MEM_UN +INST_B    +RF_UN),
        BL        -> BitPat("b" +OP_ADD   +I26    +MEM_UN +INST_BL   +RF_WE),
        JIRL      -> BitPat("b" +OP_ADD   +R2I16  +MEM_UN +INST_JIRL +RF_WE),
        BEQ       -> BitPat("b" +OP_NONE  +R2I16  +MEM_UN +INST_BEQ  +RF_UN),
        BNE       -> BitPat("b" +OP_NONE  +R2I16  +MEM_UN +INST_BNE  +RF_UN),
        BLT       -> BitPat("b" +OP_NONE  +R2I16  +MEM_UN +INST_BLT  +RF_UN),
        BGE       -> BitPat("b" +OP_NONE  +R2I16  +MEM_UN +INST_BGE  +RF_UN),
        BLTU      -> BitPat("b" +OP_NONE  +R2I16  +MEM_UN +INST_BLTU +RF_UN),
        BGEU      -> BitPat("b" +OP_NONE  +R2I16  +MEM_UN +INST_BGEU +RF_UN),
        LU12I_W   -> BitPat("b" +OP_LUI   +R1I20  +MEM_UN +INST_NNNN +RF_WE),
        PCADDU12I -> BitPat("b" +OP_ADD   +R1I20  +MEM_UN +INST_PCAD +RF_WE),
        SLTI      -> BitPat("b" +OP_SLT   +R2I12  +MEM_UN +INST_NNNN +RF_WE),
        SLTUI     -> BitPat("b" +OP_SLTU  +R2I12  +MEM_UN +INST_NNNN +RF_WE),
        ADDI_W    -> BitPat("b" +OP_ADD   +R2I12  +MEM_UN +INST_NNNN +RF_WE),
        ANDI      -> BitPat("b" +OP_AND   +R2I12U +MEM_UN +INST_NNNN +RF_WE),
        ORI       -> BitPat("b" +OP_OR    +R2I12U +MEM_UN +INST_NNNN +RF_WE),
        XORI      -> BitPat("b" +OP_XOR   +R2I12U +MEM_UN +INST_NNNN +RF_WE),
        LD_B      -> BitPat("b" +OP_ADD   +R2I12  +MEM_EN +INST_LDB  +RF_WE),
        LD_H      -> BitPat("b" +OP_ADD   +R2I12  +MEM_EN +INST_LDH  +RF_WE),
        LD_W      -> BitPat("b" +OP_ADD   +R2I12  +MEM_EN +INST_LDW  +RF_WE),
        ST_B      -> BitPat("b" +OP_ADD   +R2I12  +MEM_EN +INST_STB  +RF_UN),
        ST_H      -> BitPat("b" +OP_ADD   +R2I12  +MEM_EN +INST_STH  +RF_UN),
        ST_W      -> BitPat("b" +OP_ADD   +R2I12  +MEM_EN +INST_STW  +RF_UN),
        LD_BU     -> BitPat("b" +OP_ADD   +R2I12  +MEM_EN +INST_LDBU +RF_WE),
        LD_HU     -> BitPat("b" +OP_ADD   +R2I12  +MEM_EN +INST_LDHU +RF_WE),
        ADD_W     -> BitPat("b" +OP_ADD   +R3     +MEM_UN +INST_NNNN +RF_WE),
        SUB_W     -> BitPat("b" +OP_SUB   +R3     +MEM_UN +INST_NNNN +RF_WE),
        SLT       -> BitPat("b" +OP_SLT   +R3     +MEM_UN +INST_NNNN +RF_WE),
        SLTU      -> BitPat("b" +OP_SLTU  +R3     +MEM_UN +INST_NNNN +RF_WE),
        NOR       -> BitPat("b" +OP_NOR   +R3     +MEM_UN +INST_NNNN +RF_WE),
        AND       -> BitPat("b" +OP_AND   +R3     +MEM_UN +INST_NNNN +RF_WE),
        MOVE      -> BitPat("b" +OP_OR    +R3     +MEM_UN +INST_NNNN +RF_WE),
        XOR       -> BitPat("b" +OP_XOR   +R3     +MEM_UN +INST_NNNN +RF_WE),
        SLL_W     -> BitPat("b" +OP_SLL   +R3     +MEM_UN +INST_NNNN +RF_WE),
        SRL_W     -> BitPat("b" +OP_SRL   +R3     +MEM_UN +INST_NNNN +RF_WE),
        SRA_W     -> BitPat("b" +OP_SRA   +R3     +MEM_UN +INST_NNNN +RF_WE),
        MUL_W     -> BitPat("b" +OP_MUL   +R3     +MEM_UN +INST_NNNN +RF_WE),
        MULH_W    -> BitPat("b" +OP_MULH  +R3     +MEM_UN +INST_NNNN +RF_WE),
        MULH_WU   -> BitPat("b" +OP_MULHU +R3     +MEM_UN +INST_NNNN +RF_WE),
        DIV_W     -> BitPat("b" +OP_DIV   +R3     +MEM_UN +INST_NNNN +RF_WE),
        MOD_W     -> BitPat("b" +OP_MOD   +R3     +MEM_UN +INST_NNNN +RF_WE),
        DIV_WU    -> BitPat("b" +OP_DIVU  +R3     +MEM_UN +INST_NNNN +RF_WE),
        MOD_WU    -> BitPat("b" +OP_MODU  +R3     +MEM_UN +INST_NNNN +RF_WE),
        SLLI_W    -> BitPat("b" +OP_SLL   +R2I5   +MEM_UN +INST_NNNN +RF_WE),
        SRLI_W    -> BitPat("b" +OP_SRL   +R2I5   +MEM_UN +INST_NNNN +RF_WE),
        SRAI_W    -> BitPat("b" +OP_SRA   +R2I5   +MEM_UN +INST_NNNN +RF_WE),
        BREAK     -> BitPat("b" +OP_NONE  +BRK_T  +MEM_UN +INST_NNNN +RF_UN)),
                     BitPat("b" +OP_NONE  +INV    +MEM_UN +INST_NNNN +RF_UN))

    def loongarch32r_decoder(inst : UInt) = decoder(inst, inst_table)
}