#
# Copyright 2015, Wink Saville
#
# This software may be distributed and modified according to the terms of
# the BSD 2-Clause license. Note that NO WARRANTY is provided.
# See "LICENSE_BSD2.txt" for details.

# Targets
TARGETS := libsel4minimal.a

# Entry point must at a minimum setup the stack and invoke main
ENTRY_POINT := _min_start

# C source files
CFILES   :=

# Assembly files
ASMFILES := src/min_start.S

# Header file/directories this library exports
HDRFILES :=

# extra flags
CFLAGS += -Werror -ggdb -g3
ASFLAGS += -Werror -ggdb -g3
ifdef CONFIG_X86_64
CFLAGS += -mno-sse
endif

include $(SEL4_COMMON)/common.mk
