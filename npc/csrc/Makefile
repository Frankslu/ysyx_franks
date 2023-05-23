c: $(VERILOG_DIR)/*.v
	@sed -i '1s/^/\/* verilator lint_off WIDTHEXPAND *\/\n/' $(VERILOG_DIR)/$(TOP).v
	@sed -i '1s/^/\/* verilator lint_off DECLFILENAME *\/\n/' $(VERILOG_DIR)/$(TOP).v
	@sed -i '1s/^/\/* verilator lint_off UNUSEDSIGNAL *\/\n/' $(VERILOG_DIR)/$(TOP).v
	@verilator --top-module $(TOP) -cc $(VSRC)

V$(TOP): $(VSRC) $(CSRC) $(INCLUDE)
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
	@gdb $(BUILD_DIR)/V$(TOP)

wave:
	gtkwave wave.vcd	

