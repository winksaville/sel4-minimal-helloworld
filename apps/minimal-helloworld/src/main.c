/*
 * Copyright 2015, Wink Saville
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 */

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>
#include <libsel4_io.h>
#include <assert.h>
#include <sel4/arch/syscalls.h>
#include <sel4/benchmark.h>

/**
 * No parameters are passed to main, the return
 * value is ignored and the program hangs.
 */
int main(void) {
  seL4_BenchmarkResetLog();
  libsel4_printf("Hello, World\n");
  libsel4_printf("%=%%\n");
  libsel4_printf("str=%s\n", "string");
  libsel4_printf("int=%d\n", -123);
  libsel4_printf("uint=%u\n", -1);
  libsel4_printf("uint=0x%x\n", 0xfedcba98);
  libsel4_printf("uint64_t=0x%llx\n", 0xfedcba9876543210ll);
  libsel4_printf("&main=%p\n", &main);
  seL4_BenchmarkDumpFullLog();

  bool b = true;
  assert(b != false);

  int8_t i8 = 1;
  assert(i8 == 1);
  int16_t i16 = 2;
  assert(i16 == 2);
  int32_t i32 = 3;
  assert(i32 == 3);
  int64_t i64 = 4;
  assert(i64 == 4);

  uint8_t u8 = 1;
  assert(u8 == 1);
  uint16_t u16 = 2;
  assert(u16 == 2);
  uint32_t u32 = 3;
  assert(u32 == 3);
  uint64_t u64 = 4;
  assert(u64 == 4);

  uint8_t *p = NULL;
  assert(p == NULL);

  fail("end of main");

  return 0;
}
