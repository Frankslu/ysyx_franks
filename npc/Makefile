all:
	make -C obj_dir -f Vexample.mk Vexample
	
sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."

a:vsrc/example.v
	verilator --cc vsrc/example.v

b:vsrc/example.v csrc/main.cpp
	verilator -Wall --trace --cc vsrc/example.v --exe csrc/main.cpp

include ../Makefile
