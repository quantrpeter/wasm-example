#include "nanolibc/libc.h"
#include "nanolibc/libc_extra.h"

#define WASM_EXPORT __attribute__((visibility("default"))) extern "C"

WASM_EXPORT void helloWorld() {
  printf("Hello, World!\n");
}
