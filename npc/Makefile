all:
	make -C obj_dir -f Vmux.mk Vmux
	
sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	make -C obj_dir -f Vexample.mk Vexample

a:vsrc/*.v
	verilator --cc vsrc/*.v --top mux

b:vsrc/*.v csrc/*.cpp
	verilator -Wall --trace --cc vsrc/*.v --top-module mux --exe csrc/*.cpp

clean:
	rm -rf obj_dir

include ../Makefile
