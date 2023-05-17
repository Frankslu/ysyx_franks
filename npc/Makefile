VERILOG_DIR = ./vsrc
CPP_DIR = ./csrc
BUILD_DIR = ./obj_dir

TOP = main

export PATH := $(PATH):$(abspath ./utils)

test:
	mill -i __.test

verilog:
	$(call git_commit, "generate verilog")
	mkdir -p $(VERILOG_DIR)
	mill -i __.test.runMain Elaborate -td $(VERILOG_DIR)
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

.PHONY: test verilog help compile bsp reformat checkformat clean

c:
	verilator --top-module $(TOP) -cc vsrc/*.v

unit:
	verilator -Wall --trace --cc vsrc/*.v --top-module $(TOP) --exe unit_test/src/$(TOP)_test.cpp
	make -j -C $(BUILD_DIR) -f V$(TOP).mk V$(TOP)
	./$(BUILD_DIR)/V$(TOP)

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator -Wall --trace --cc vsrc/*.v --top-module $(TOP) --exe csrc/*.cpp
	make -C $(BUILD_DIR) -f V$(TOP).mk V$(TOP)
	./$(BUILD_DIR)/V$(TOP)
	

include ../Makefile
