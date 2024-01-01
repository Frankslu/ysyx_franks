#ifndef HEX_OUTPUT_H
#define HEX_OUTPUT_H

#include <stdio.h>
#include <stdint.h>

#define endl() printf("\n")

static inline void print_64b(uint64_t x) {
  union {
    uint64_t x;
    uint16_t s[4];
  } tmp = {.x = x};
  printf("%04x_%04x_%04x_%04x", tmp.s[3], tmp.s[2], tmp.s[1], tmp.s[0]);
}

static inline void print_0x64b(uint64_t x) {
  printf("0x");
  print_64b(x);
}

static inline void print_32b(uint32_t x) {
  union {
    uint32_t x;
    uint16_t s[2];
  } tmp = {.x = x};
  printf("%04x_%04x", tmp.s[1], tmp.s[0]);
}

static inline void print_0x32b(uint32_t x) {
  printf("0x");
  print_32b(x);
}

static inline void print_16b(uint16_t x) { printf("%04x", x); }

static inline void print_0x16b(uint16_t x) {
  printf("0x");
  print_16b(x);
}

static inline void print_b(uint64_t x) {
  if (x < 0xff)
    printf("%02x", (uint8_t)x);
  else if (x < 0xffff)
    print_16b(x);
  else if (x < 0xffffffff)
    print_32b(x);
  else
    print_64b(x);
}

static inline void print_0xb(uint64_t x) {
  printf("0x");
  print_b(x);
}

#endif