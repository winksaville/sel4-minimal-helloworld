/*
 * Copyright 2015, Wink Saville
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 */

#include <stddef.h>
#include <sel4/arch/syscalls.h>

/**
 * Print a string. Only works with debug version of Kernel.
 * In make menuconfig enable:
 *   seL4 Kernel ---> Build Options ---> Build the kernel with debug support
 */
void printstrg(char *s) {
  if (s != NULL) {
    char c;
    while ((c = *s++) != 0) {
      seL4_DebugPutChar(c);
    }
  }
}

/**
 * Currently no parameters are passed to main
 * and the program hangs when we return.
 */
int main(void) {
  printstrg("Hello, World\r\n");

  // Return success
  return 0;
}
