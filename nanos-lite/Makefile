IMG += hello
ISA = $(word 1, $(subst -, , $(ARCH)))
PLATFROM = $(word 2, $(subst -, , $(ARCH)))
APP_DIR = $(NAVY_HOME)/tests/$(IMG)

APP += hello dummy file-test
APP_ELF = $(foreach app, $(APP), $(addsuffix -loongarch32r, $(app)))
ELF_FILE = $(foreach app, $(APP_ELF), $(shell find $(NAVY_HOME)/tests -type f -name $(app)))

.PHONY: $(ELF_FILE) run

$(ELF_FILE):
	@loongarch32r-linux-gnusf-objdump -d $@ > build/$(notdir $@).txt

run:
	$(MAKE) -f nanos.mk ARCH=$(ARCH) run

gdb:
	$(MAKE) -f nanos.mk ARCH=$(ARCH) gdb
	
update:$(ELF_FILE)
	$(MAKE) -f nanos.mk ARCH=$(ARCH) update

hello:
	$(MAKE) -C $(NAVY_HOME) ISA=loongarch32r hello
