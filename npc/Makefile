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

GDB = $(if $(CONFIG_CC_DEBUG), -CFLAGS -g, )
WAVE = $(if $(CONFIG_CC_WAVE), --trace, )
OPT = $(call remove_quote, $(CONFIG_CC_OPT))

override ARGS ?= --log=$(CPP_DIR)/log/npc-log.txt

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

include csrc/Makefile
include ../Makefile
include csrc/scripts/config.mk
