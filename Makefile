#
# Copyright 2014, General Dynamics C4 Systems
#
# This software may be distributed and modified according to the terms of
# the GNU General Public License version 2. Note that NO WARRANTY is provided.
# See "LICENSE_GPLv2.txt" for details.
#
# @TAG(GD_GPL)
#

lib-dirs := libs

all: app-images

-include .config

include tools/common/project.mk

# Some example qemu invocations

# note: this relies on qemu after version 2.0
simulate-mhw-ia32:
	qemu-system-i386 \
		-m 512 -nographic -kernel images/kernel-ia32-pc99 \
		-initrd images/minimal-helloworld-image-ia32-pc99

.PHONY: help
help:
	@echo "mimimal hello world program"
	@echo " make menuconfig      - Select build configuration via menus."
	@echo " make <defconfig>     - Apply one of the default configurations. See"
	@echo "                        below for valid configurations."
	@echo " make silentoldconfig - Update configuration with the defaults of any"
	@echo "                        newly introduced settings."
	@echo " make                 - Build with the current configuration."
	@echo ""
	@echo "Valid default configurations are:"
	@ls -1 configs | sed -e 's/\(.*\)/\t\1/g'
