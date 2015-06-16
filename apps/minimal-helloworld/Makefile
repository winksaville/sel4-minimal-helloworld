#
# Copyright 2015, Wink Saville
#
# This software may be distributed and modified according to the terms of
# the BSD 2-Clause license. Note that NO WARRANTY is provided.
# See "LICENSE_BSD2.txt" for details.

# Targets
TARGETS := $(notdir $(SOURCE_DIR)).bin

# Entry point is just main for now
ENTRY_POINT := main

# Source files required to build the target
CFILES   := src/main.c

# No libraries yet
LIBS :=

# extra cflag for sel4test
CFLAGS += -Werror -g
ifdef CONFIG_X86_64
CFLAGS += -mno-sse
endif

include $(SEL4_COMMON)/common.mk
