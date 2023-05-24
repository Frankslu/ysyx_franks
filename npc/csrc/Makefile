c: $(VERILOG_DIR)/*.v
	@verilator --top-module $(TOP) -cc $(VSRC)

V$(TOP): $(VSRC) $(CSRC) $(INCLUDE)
	@make -s -C $(NEMU_HOME) -f Makefile
	@verilator -Wall $(WAVE) $(GDB) $(OPT) --cc $(VSRC) --top-module $(TOP) \
	--exe $(CSRC) -CFLAGS "-I $(INC)" \
	-CFLAGS -Wno-narrowing \
	-LDFLAGS "-l readline" \
	-LDFLAGS "-l dl"
	@echo "finish verilator"
	@make -s OPT_FAST="$(OPT)" -j 8 -C $(BUILD_DIR) -f V$(TOP).mk V$(TOP)
	@echo "finish make"


unit: V$(TOP)
	@$(BUILD_DIR)/V$(TOP)

sim: V$(TOP)
	@$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@$(BUILD_DIR)/V$(TOP) $(ARGS)

gdb: V$(TOP)
	@echo $(BUILD_DIR)/V$(TOP)
	@gdb $(BUILD_DIR)/V$(TOP) --args $(BUILD_DIR)/V$(TOP) $(ARGS)

wave:
	gtkwave wave.vcd	

