include $(AM_HOME)/scripts/isa/loongarch32r.mk

AM_SRCS := loongarch/npc/start.S \
           loongarch/npc/trm.c \
           loongarch/npc/ioe.c \
           loongarch/npc/timer.c \
           loongarch/npc/input.c \
           loongarch/npc/cte.c \
           loongarch/npc/trap.S \
           platform/dummy/vme.c \
           platform/dummy/mpe.c

CFLAGS    += -fdata-sections -ffunction-sections
LDFLAGS   += -T $(AM_HOME)/scripts/linker.ld --defsym=_pmem_start=0x1C000000 --defsym=_entry_offset=0x0
LDFLAGS   += --gc-sections -e _start
CFLAGS += -DMAINARGS=\"$(mainargs)\"
BATCHMODE = -b
NPCFLAGS += $(BATCHMODE) -l $(shell dirname $(IMAGE).elf)/npc-log.txt -e $(IMAGE).elf
.PHONY: $(AM_HOME)/am/src/loongarch/npc/trm.c

image: $(IMAGE).elf
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	@$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(IMAGE).elf $(IMAGE).bin

run: image
	@$(MAKE) -s -C $(NPC_HOME) sim ARGS="$(NPCFLAGS)" IMG=$(IMAGE).bin

gdb: image
	@$(MAKE) -s -C $(NPC_HOME) gdb ARGS="$(NPCFLAGS)" IMG=$(IMAGE).bin
