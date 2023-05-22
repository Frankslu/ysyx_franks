# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f VMain.mk

default: VMain

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/local/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = VMain
# Module prefix (from --prefix)
VM_MODPREFIX = VMain
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-I ./csrc/tools/kconfig/list.h ./csrc/tools/kconfig/lkc_proto.h ./csrc/tools/kconfig/lxdialog/dialog.h ./csrc/tools/kconfig/lkc.h ./csrc/tools/kconfig/expr.h ./csrc/tools/kconfig/build/parser.tab.h ./csrc/include/isa.h ./csrc/include/config/msize.h ./csrc/include/config/iring.h ./csrc/include/config/mtrace/start.h ./csrc/include/config/mtrace/end.h ./csrc/include/config/seed.h ./csrc/include/config/timer/gettimeofday.h ./csrc/include/config/jirl/ret.h ./csrc/include/config/itrace/cond.h ./csrc/include/config/mbase.h ./csrc/include/config/rt/check.h ./csrc/include/config/pc/reset/offset.h ./csrc/include/config/watchpoint.h ./csrc/include/config/wavetrace.h ./csrc/include/config/difftest.h ./csrc/include/config/trace/start.h ./csrc/include/config/trace/end.h ./csrc/include/config/ftrace.h ./csrc/include/config/mtrace.h ./csrc/include/config/pmem/garray.h ./csrc/include/config/itrace.h ./csrc/include/config/breakpoint.h ./csrc/include/config/trace.h ./csrc/include/config/mem/random.h ./csrc/include/vaddr.h ./csrc/include/ve.h ./csrc/include/ALU_test.h ./csrc/include/common.h ./csrc/include/sdb.h ./csrc/include/mmio.h ./csrc/include/device/alarm.h ./csrc/include/device/mmio.h ./csrc/include/device/map.h ./csrc/include/generated/autoconf.h ./csrc/include/paddr.h ./csrc/include/trace/trace.h ./csrc/include/host.h ./csrc/include/debug.h ./csrc/include/cpu/decode.h ./csrc/include/cpu/difftest.h ./csrc/include/cpu/ifetch.h ./csrc/include/cpu/cpu.h ./csrc/include/difftest-def.h ./csrc/include/utils.h ./csrc/include/reg.h ./csrc/include/macro.h \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	cpu-exec \
	difftest \
	reg \
	verilator \
	hostcall \
	main \
	paddr \
	vaddr \
	init \
	monitor \
	breakpoint \
	expr \
	sdb \
	watchpoint \
	trace \
	disasm \
	log \
	rand \
	timer \
	fixdep \
	lexer \
	parser \
	conf \
	confdata \
	expr \
	checklist \
	inputbox \
	menubox \
	textbox \
	util \
	yesno \
	mconf \
	menu \
	preprocess \
	symbol \
	util \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	./csrc/src \
	./csrc/src/exec \
	./csrc/src/interpreter \
	./csrc/src/memory \
	./csrc/src/monitor \
	./csrc/src/monitor/sdb \
	./csrc/src/trace \
	./csrc/src/util \
	./csrc/tools/fixdep \
	./csrc/tools/kconfig \
	./csrc/tools/kconfig/build \
	./csrc/tools/kconfig/lxdialog \


### Default rules...
# Include list of all generated classes
include VMain_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

cpu-exec.o: ./csrc/src/exec/cpu-exec.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
difftest.o: ./csrc/src/exec/difftest.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
reg.o: ./csrc/src/exec/reg.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
verilator.o: ./csrc/src/exec/verilator.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
hostcall.o: ./csrc/src/interpreter/hostcall.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main.o: ./csrc/src/main.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
paddr.o: ./csrc/src/memory/paddr.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
vaddr.o: ./csrc/src/memory/vaddr.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
init.o: ./csrc/src/monitor/init.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
monitor.o: ./csrc/src/monitor/monitor.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
breakpoint.o: ./csrc/src/monitor/sdb/breakpoint.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
expr.o: ./csrc/src/monitor/sdb/expr.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
sdb.o: ./csrc/src/monitor/sdb/sdb.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
watchpoint.o: ./csrc/src/monitor/sdb/watchpoint.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
trace.o: ./csrc/src/trace/trace.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
disasm.o: ./csrc/src/util/disasm.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
log.o: ./csrc/src/util/log.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
rand.o: ./csrc/src/util/rand.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
timer.o: ./csrc/src/util/timer.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
fixdep.o: ./csrc/tools/fixdep/fixdep.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
lexer.o: ./csrc/tools/kconfig/build/lexer.lex.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
parser.o: ./csrc/tools/kconfig/build/parser.tab.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
conf.o: ./csrc/tools/kconfig/conf.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
confdata.o: ./csrc/tools/kconfig/confdata.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
expr.o: ./csrc/tools/kconfig/expr.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
checklist.o: ./csrc/tools/kconfig/lxdialog/checklist.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
inputbox.o: ./csrc/tools/kconfig/lxdialog/inputbox.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
menubox.o: ./csrc/tools/kconfig/lxdialog/menubox.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
textbox.o: ./csrc/tools/kconfig/lxdialog/textbox.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
util.o: ./csrc/tools/kconfig/lxdialog/util.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
yesno.o: ./csrc/tools/kconfig/lxdialog/yesno.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
mconf.o: ./csrc/tools/kconfig/mconf.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
menu.o: ./csrc/tools/kconfig/menu.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
preprocess.o: ./csrc/tools/kconfig/preprocess.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
symbol.o: ./csrc/tools/kconfig/symbol.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
util.o: ./csrc/tools/kconfig/util.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
VMain: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
