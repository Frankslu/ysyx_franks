// import chisel3._
// import chiseltest._
// import chisel3.experimental.BundleLiterals._

// import utest._

// /**
//   * This is a trivial example of how to run this Specification
//   * From within sbt use:
//   * {{{
//   * testOnly gcd.GcdDecoupledTester
//   * }}}
//   * From a terminal shell use:
//   * {{{
//   * sbt 'testOnly gcd.GcdDecoupledTester'
//   * }}}
//   */
// object Unittest extends ChiselUtestTester {
//   val tests = Tests {
//     test("ALU_test") {
//       testCircuit(new ALU) {
//         dut =>
//           // dut.input.initSource()
//           // dut.input.setSourceClock(dut.clock)
//           // dut.output.initSink()
//           // dut.output.setSinkClock(dut.clock)
//           dut
//       }
//     }
//   }
// }