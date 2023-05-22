TOP ?= Main

VERILOG_DIR = $(NPC_HOME)/vsrc
ifeq ($(MAKECMDGOALS),unit)
CPP_DIR = $(NPC_HOME)/unit_test/$(TOP)_src
CSRC = $(shell find $(CPP_DIR) -name "*.cpp" -o -name "*.c")
INC = $(shell find $(CPP_DIR) -name "*.h")
else
CPP_DIR = $(NPC_HOME)/csrc
CSRC = $(shell find $(CPP_DIR)/src -name "*.cpp" -o -name "*.c")
# INC = $(shell find $(CPP_DIR)/include -name "*.h")
INC = $(CPP_DIR)/include
endif
BUILD_DIR = obj_dir

VSRC = $(shell find $(VERILOG_DIR) -name "*.v")

export PATH := $(PATH):$(abspath ./utils)

test:
	mill -i __.test

verilog:
	@$(call git_commit, "generate verilog")
	@mkdir -p $(VERILOG_DIR)
	@mill -i __.test.runMain Elaborate -td $(VERILOG_DIR)
# 	find . -name "*.v" | xargs sed -i -E "/^(\w+\/)+\w+\.v/d"

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
	-rm -rf $(BUILD_DIR) $(VERILOG_DIR)

.PHONY: test verilog help compile bsp reformat checkformat clean insert unit sim

c: $(VERILOG_DIR)/*.v
	@verilator --top-module $(TOP) -cc $(VSRC)

insert:
	@sed -i '1s/^/\/* verilator lint_off WIDTHEXPAND *\/\n/' $(VERILOG_DIR)/$(TOP).v
	@sed -i '1s/^/\/* verilator lint_off DECLFILENAME *\/\n/' $(VERILOG_DIR)/$(TOP).v
	@sed -i '1s/^/\/* verilator lint_off UNUSEDSIGNAL *\/\n/' $(VERILOG_DIR)/$(TOP).v

V$(TOP): $(VSRC)
	@verilator -Wall --trace --cc $(VSRC) --top-module $(TOP) \
	--exe $(CSRC) \
	-CFLAGS "-I $(INC)"
	echo "finish"
	@make -C $(BUILD_DIR) -f V$(TOP).mk V$(TOP)

d:
	@make -C $(BUILD_DIR) -f V$(TOP).mk V$(TOP)

unit: V$(TOP)
	echo $(CSRC) $(INC)
	@./$(BUILD_DIR)/V$(TOP)

sim: V$(TOP)
	@$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@./$(BUILD_DIR)/V$(TOP)
	

include ../Makefile
include csrc/scripts/config.mk
