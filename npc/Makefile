VERILOG_DIR = ./vsrc
CPP_DIR = ./csrc
BUILD_DIR = ./obj_dir

export PATH := $(PATH):$(abspath ./utils)

test:
	mill -i __.test

verilog:
	$(call git_commit, "generate verilog")
	mkdir -p $(VERILOG_DIR)
	mill -i __.test.runMain Elaborate -td $(VERILOG_DIR)

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

.PHONY: test verilog help compile bsp reformat checkformat clean

c:
	verilator --top-module mem -cc vsrc/*.v

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator -Wall --trace --cc vsrc/*.v --top-module mycpu_top --exe  csrc/*.cpp
	make -C $(BUILD_DIR) -f VGCD.mk VGCD
	./$(BUILD_DIR)/VGCD
	

include ../Makefile
