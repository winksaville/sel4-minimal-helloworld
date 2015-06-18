/**
 * Copyright 2014, Wink Saville
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 */

#define __ASM__
#include <autoconf.h>

#define STACK_SIZE 8192

  .global _min_start
  .extern main

  .text

/**
 * The barest minimum is to setup the stack because
 * ESP is 0 otherwise and we'll call main with no
 * parameters for now. When/if main returns we'll
 * hang as there is no "exit" at the moment.
 */
_min_start:
  leal _stack_top, %esp
  call main
1:
  jmp 1b

  .bss
  .align  8

_stack_bottom:
  .space STACK_SIZE
_stack_top:

