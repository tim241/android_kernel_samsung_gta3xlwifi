#
# Makefile for the linux kernel.
#

init/_uh.S:
	@echo "#include <linux/uh.h>" > $@
	echo "" >> $@
	echo "#define uh_ELF_PATH \"$(KBUILD_SRC)/init/uh.elf\"" >> $@
	echo "" >> $@
	echo "#define SMC_64BIT_RET_MAGIC 0xC2000401" >> $@
	echo "" >> $@
	echo ".section .init.text, \"ax\"" >> $@
	echo ".global _uh_goto_EL2" >> $@
	echo "_uh_goto_EL2:" >> $@
	echo "smc #0" >> $@
	echo "isb" >> $@
	echo "ret" >> $@
	echo "" >> $@
	echo ".global _uh_disable" >> $@
	echo "_uh_disable:" >> $@
	echo "ldr x0, =SMC_64BIT_RET_MAGIC" >> $@
	echo "smc #0" >> $@
	echo "isb" >> $@
	echo "" >> $@
	echo ".global _start_uh" >> $@
	echo "_start_uh:" >> $@
	echo ".incbin uh_ELF_PATH" >> $@
	echo ".global _end_uh" >> $@
	echo "_end_uh:" >> $@
	echo ".section .text" >> $@

obj-y                          := main.o version.o mounts.o
obj-y                          += noinitramfs.o
obj-$(CONFIG_BLK_DEV_INITRD)   += initramfs.o
obj-$(CONFIG_GENERIC_CALIBRATE_DELAY) += calibrate.o

obj-$(CONFIG_UH)              += _uh.o uh.o

ifneq ($(CONFIG_ARCH_INIT_TASK),y)
obj-y                          += init_task.o
endif

mounts-y			:= do_mounts.o
mounts-$(CONFIG_BLK_DEV_RAM)	+= do_mounts_rd.o
mounts-$(CONFIG_BLK_DEV_INITRD)	+= do_mounts_initrd.o
mounts-$(CONFIG_BLK_DEV_MD)	+= do_mounts_md.o
mounts-$(CONFIG_BLK_DEV_DM)	+= do_mounts_dm.o

# dependencies on generated files need to be listed explicitly
$(obj)/version.o: include/generated/compile.h

# compile.h changes depending on hostname, generation number, etc,
# so we regenerate it always.
# mkcompile_h will make sure to only update the
# actual file if its content has changed.

       chk_compile.h = :
 quiet_chk_compile.h = echo '  CHK     $@'
silent_chk_compile.h = :
include/generated/compile.h: FORCE
	@$($(quiet)chk_compile.h)
	$(Q)$(CONFIG_SHELL) $(srctree)/scripts/mkcompile_h $@ \
	"$(UTS_MACHINE)" "$(CONFIG_SMP)" "$(CONFIG_PREEMPT)" "$(CC) $(KBUILD_CFLAGS)"

.PHONY: init/_uh.S
