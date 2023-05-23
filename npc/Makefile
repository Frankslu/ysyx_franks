include csrc/include/config/auto.conf

remove_quote = $(patsubst "%",%,$(1))

TOP ?= Main

VERILOG_DIR = $(NPC_HOME)/vsrc
VSRC = $(shell find $(VERILOG_DIR) -name "*.v")

ifeq ($(MAKECMDGOALS),unit)
CPP_DIR = $(NPC_HOME)/unit_test/$(TOP)_src
CSRC = $(shell find $(CPP_DIR) -name "*.cpp" -o -name "*.c")
INC = $(shell find $(CPP_DIR) -name "*.h")
else
CPP_DIR = $(NPC_HOME)/csrc
CSRC = $(shell find $(CPP_DIR)/src -name "*.cpp" -o -name "*.c")
INCLUDE = $(shell find $(CPP_DIR)/include -name "*.h")
INC = $(CPP_DIR)/include
endif
BUILD_DIR = $(NPC_HOME)/obj_dir

GDB = $(if $(CONFIG_CC_DEBUG), --debug, )
WAVE = $(if $(CONFIG_CC_WAVE), --trace, )
OPT = $(call remove_quote, $(CONFIG_CC_OPT))

override ARGS ?= --log=$(CPP_DIR)/log

export PATH := $(PATH):$(abspath ./utils)

test:
	mill -i __.test

verilog:
	@$(call git_commit, "generate verilog")
	@mkdir -p $(VERILOG_DIR)
	@mill -i __.test.runMain Elaborate -td $(VERILOG_DIR)

help:
	mill -i __.test.runMain Elaborate --help

compile:
	mill -i __.compile

bsp:
	mill -i mill.bsp.BSP/install

reformat:
	mill -i __.reformat

checkformat:
	mill -i __.checkFormat

clean:
	-rm -rf $(BUILD_DIR)

cleanv:
	-rm -rf $(VERILOG_DIR)

.PHONY: test verilog help compile bsp reformat checkformat clean insert unit sim

c: $(VERILOG_DIR)/*.v
	@sed -i '1s/^/\/* verilator lint_off WIDTHEXPAND *\/\n/' $(VERILOG_DIR)/$(TOP).v
	@sed -i '1s/^/\/* verilator lint_off DECLFILENAME *\/\n/' $(VERILOG_DIR)/$(TOP).v
	@sed -i '1s/^/\/* verilator lint_off UNUSEDSIGNAL *\/\n/' $(VERILOG_DIR)/$(TOP).v
	@verilator --top-module $(TOP) -cc $(VSRC)

V$(TOP): $(VSRC) $(CSRC) $(INCLUDE)
	@verilator -Wall $(WAVE) $(GDB) $(OPT) --cc $(VSRC) --top-module $(TOP) \
	--exe $(CSRC) \
	-CFLAGS "-I $(INC)" \
	-LDFLAGS "-l readline"
	echo "finish"
	@make OPT_FAST="$(OPT)" -j 8 -C $(BUILD_DIR) -f V$(TOP).mk V$(TOP)
	echo "finish2"


unit: V$(TOP)
	echo $(CSRC) $(INC)
	@./$(BUILD_DIR)/V$(TOP)

sim: V$(TOP)
	@$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@./$(BUILD_DIR)/V$(TOP)

gdb: V$(TOP)
	@gdb $(BUILD_DIR)/V$(TOP)
	

include ../Makefile
include csrc/scripts/config.mk
