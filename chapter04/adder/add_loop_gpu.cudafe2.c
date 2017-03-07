# 1 "add_loop_gpu.cudafe1.gpu"
# 212 "/c1/apps/gcc/4.9.0/lib/gcc/x86_64-unknown-linux-gnu/4.9.0/include/stddef.h" 3
typedef unsigned long size_t;
#include "crt/host_runtime.h"
void *memcpy(void*, const void*, size_t); void *memset(void*, int, size_t);

#include "add_loop_gpu.cudafe2.stub.c"
