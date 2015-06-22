#
# Copyright 2015, Wink Saville
#
# This software may be distributed and modified according to the terms of
# the BSD 2-Clause license. Note that NO WARRANTY is provided.
# See "LICENSE_BSD2.txt" for details.

# Targets
TARGETS := $(notdir $(SOURCE_DIR)).bin

# Entry point must at a minimum setup the stack and invoke main
ENTRY_POINT := _libsel4_start

# Source files required to build the target
CFILES   := src/main.c

ASMFILES :=

# Libraries we need
LIBS := sel4

# extra flags
CFLAGS += -Werror -ggdb -g3
ASFLAGS += -Werror -ggdb -g3
ifdef CONFIG_X86_64
CFLAGS += -mno-sse
endif

include $(SEL4_COMMON)/common.mk
