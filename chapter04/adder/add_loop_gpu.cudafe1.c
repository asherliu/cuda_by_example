# 1 "add_loop_gpu.cu"
# 56 "/c1/apps/cuda/toolkit/7.5.18/bin/..//include/cuda_runtime.h"
#pragma GCC diagnostic push


#pragma GCC diagnostic ignored "-Wunused-function"
# 35 "/c1/apps/gcc/4.9.0/include/c++/4.9.0/exception" 3
#pragma GCC visibility push ( default )
# 159 "/c1/apps/gcc/4.9.0/include/c++/4.9.0/exception" 3
#pragma GCC visibility pop
# 42 "/c1/apps/gcc/4.9.0/include/c++/4.9.0/new" 3
#pragma GCC visibility push ( default )
# 157 "/c1/apps/gcc/4.9.0/include/c++/4.9.0/new" 3
#pragma GCC visibility pop
# 1888 "/c1/apps/cuda/toolkit/7.5.18/bin/..//include/cuda_runtime.h"
#pragma GCC diagnostic pop
# 1425 "/c1/apps/cuda/toolkit/7.5.18/bin/..//include/driver_types.h"
struct CUstream_st;
# 206 "/usr/include/libio.h" 3
enum __codecvt_result {

__codecvt_ok,
__codecvt_partial,
__codecvt_error,
__codecvt_noconv};
# 199 "/usr/include/math.h" 3
enum _ZUt_ {
FP_NAN,

FP_INFINITE,

FP_ZERO,

FP_SUBNORMAL,

FP_NORMAL};
# 292 "/usr/include/math.h" 3
enum _LIB_VERSION_TYPE {
_IEEE_ = (-1),
_SVID_,
_XOPEN_,
_POSIX_,
_ISOC_};
# 128 "/c1/apps/gcc/4.9.0/include/c++/4.9.0/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_voidIvEUt_E { _ZNSt9__is_voidIvE7__valueE = 1};
# 148 "/c1/apps/gcc/4.9.0/include/c++/4.9.0/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIbEUt_E { _ZNSt12__is_integerIbE7__valueE = 1};
# 155 "/c1/apps/gcc/4.9.0/include/c++/4.9.0/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIcEUt_E { _ZNSt12__is_integerIcE7__valueE = 1};
# 162 "/c1/apps/gcc/4.9.0/include/c++/4.9.0/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIaEUt_E { _ZNSt12__is_integerIaE7__valueE = 1};
# 169 "/c1/apps/gcc/4.9.0/include/c++/4.9.0/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIhEUt_E { _ZNSt12__is_integerIhE7__valueE = 1};
# 177 "/c1/apps/gcc/4.9.0/include/c++/4.9.0/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIwEUt_E { _ZNSt12__is_integerIwE7__valueE = 1};
# 201 "/c1/apps/gcc/4.9.0/include/c++/4.9.0/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIsEUt_E { _ZNSt12__is_integerIsE7__valueE = 1};
# 208 "/c1/apps/gcc/4.9.0/include/c++/4.9.0/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerItEUt_E { _ZNSt12__is_integerItE7__valueE = 1};
# 215 "/c1/apps/gcc/4.9.0/include/c++/4.9.0/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIiEUt_E { _ZNSt12__is_integerIiE7__valueE = 1};
# 222 "/c1/apps/gcc/4.9.0/include/c++/4.9.0/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIjEUt_E { _ZNSt12__is_integerIjE7__valueE = 1};
# 229 "/c1/apps/gcc/4.9.0/include/c++/4.9.0/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIlEUt_E { _ZNSt12__is_integerIlE7__valueE = 1};
# 236 "/c1/apps/gcc/4.9.0/include/c++/4.9.0/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerImEUt_E { _ZNSt12__is_integerImE7__valueE = 1};
# 243 "/c1/apps/gcc/4.9.0/include/c++/4.9.0/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIxEUt_E { _ZNSt12__is_integerIxE7__valueE = 1};
# 250 "/c1/apps/gcc/4.9.0/include/c++/4.9.0/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIyEUt_E { _ZNSt12__is_integerIyE7__valueE = 1};
# 268 "/c1/apps/gcc/4.9.0/include/c++/4.9.0/bits/cpp_type_traits.h" 3
enum _ZNSt13__is_floatingIfEUt_E { _ZNSt13__is_floatingIfE7__valueE = 1};
# 275 "/c1/apps/gcc/4.9.0/include/c++/4.9.0/bits/cpp_type_traits.h" 3
enum _ZNSt13__is_floatingIdEUt_E { _ZNSt13__is_floatingIdE7__valueE = 1};
# 282 "/c1/apps/gcc/4.9.0/include/c++/4.9.0/bits/cpp_type_traits.h" 3
enum _ZNSt13__is_floatingIeEUt_E { _ZNSt13__is_floatingIeE7__valueE = 1};
# 350 "/c1/apps/gcc/4.9.0/include/c++/4.9.0/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_charIcEUt_E { _ZNSt9__is_charIcE7__valueE = 1};
# 358 "/c1/apps/gcc/4.9.0/include/c++/4.9.0/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_charIwEUt_E { _ZNSt9__is_charIwE7__valueE = 1};
# 373 "/c1/apps/gcc/4.9.0/include/c++/4.9.0/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_byteIcEUt_E { _ZNSt9__is_byteIcE7__valueE = 1};
# 380 "/c1/apps/gcc/4.9.0/include/c++/4.9.0/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_byteIaEUt_E { _ZNSt9__is_byteIaE7__valueE = 1};
# 387 "/c1/apps/gcc/4.9.0/include/c++/4.9.0/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_byteIhEUt_E { _ZNSt9__is_byteIhE7__valueE = 1};
# 138 "/c1/apps/gcc/4.9.0/include/c++/4.9.0/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIeEUt_E { _ZNSt12__is_integerIeE7__valueE}; enum _ZNSt12__is_integerIdEUt_E { _ZNSt12__is_integerIdE7__valueE}; enum _ZNSt12__is_integerIfEUt_E { _ZNSt12__is_integerIfE7__valueE};
# 64 "/usr/include/bits/mathinline.h" 3
union _ZZ10__signbitlEUt_;
# 212 "/c1/apps/gcc/4.9.0/lib/gcc/x86_64-unknown-linux-gnu/4.9.0/include/stddef.h" 3
typedef unsigned long size_t;
#include "crt/host_runtime.h"
# 64 "/usr/include/bits/mathinline.h" 3
union _ZZ10__signbitlEUt_ { long double __l; int __i[3];};
void *memcpy(void*, const void*, size_t); void *memset(void*, int, size_t);
# 2782 "/c1/apps/cuda/toolkit/7.5.18/bin/..//include/cuda_runtime_api.h"
extern enum cudaError cudaConfigureCall(struct dim3, struct dim3, size_t, struct CUstream_st *);
# 3999 "/c1/apps/cuda/toolkit/7.5.18/bin/..//include/cuda_runtime_api.h"
extern enum cudaError cudaMemcpy(void *, const void *, size_t, enum cudaMemcpyKind);
# 28 "add_loop_gpu.cu"
extern int main(void);
extern int __cudaSetupArgSimple();
extern int __cudaLaunch();
extern void __nv_dummy_param_ref();
extern void __nv_save_fatbinhandle_for_managed_rt();
extern int __cudaRegisterEntry();
extern int __cudaRegisterBinary();
static void __sti___20_add_loop_gpu_cpp1_ii_00197a21(void) __attribute__((__constructor__));
# 28 "add_loop_gpu.cu"
int main(void) {  struct dim3 __T20;
 struct dim3 __T21;
# 29 "add_loop_gpu.cu"
 int __cuda_local_var_42851_9_non_const_a[10];
# 29 "add_loop_gpu.cu"
 int __cuda_local_var_42851_16_non_const_b[10];
# 29 "add_loop_gpu.cu"
 int __cuda_local_var_42851_23_non_const_c[10];
 int *__cuda_local_var_42852_10_non_const_dev_a;
# 30 "add_loop_gpu.cu"
 int *__cuda_local_var_42852_18_non_const_dev_b;
# 30 "add_loop_gpu.cu"
 int *__cuda_local_var_42852_26_non_const_dev_c;


cudaMalloc(((void **)(&__cuda_local_var_42852_10_non_const_dev_a)), 40UL);
cudaMalloc(((void **)(&__cuda_local_var_42852_18_non_const_dev_b)), 40UL);
cudaMalloc(((void **)(&__cuda_local_var_42852_26_non_const_dev_c)), 40UL); {


 int i;
# 38 "add_loop_gpu.cu"
i = 0; for (; (i < 10); i++) {
((__cuda_local_var_42851_9_non_const_a)[i]) = (-i);
((__cuda_local_var_42851_16_non_const_b)[i]) = (i * i);
} }


cudaMemcpy(((void *)__cuda_local_var_42852_10_non_const_dev_a), ((const void *)(__cuda_local_var_42851_9_non_const_a)), 40UL, cudaMemcpyHostToDevice);

cudaMemcpy(((void *)__cuda_local_var_42852_18_non_const_dev_b), ((const void *)(__cuda_local_var_42851_16_non_const_b)), 40UL, cudaMemcpyHostToDevice);


(cudaConfigureCall((((void)((((__T20.x) = 10U) , (void)((__T20.y) = 1U)) , (void)((__T20.z) = 1U))) , __T20), (((void)((((__T21.x) = 1U) , (void)((__T21.y) = 1U)) , (void)((__T21.z) = 1U))) , __T21), 0UL, ((struct CUstream_st *)0LL))) ? ((void)0) : (__device_stub__Z3addPiS_S_(__cuda_local_var_42852_10_non_const_dev_a, __cuda_local_var_42852_18_non_const_dev_b, __cuda_local_var_42852_26_non_const_dev_c));


cudaMemcpy(((void *)(__cuda_local_var_42851_23_non_const_c)), ((const void *)__cuda_local_var_42852_26_non_const_dev_c), 40UL, cudaMemcpyDeviceToHost); {



 int i;
# 56 "add_loop_gpu.cu"
i = 0; for (; (i < 10); i++) {
printf(((const char *)"%d + %d = %d\n"), ((__cuda_local_var_42851_9_non_const_a)[i]), ((__cuda_local_var_42851_16_non_const_b)[i]), ((__cuda_local_var_42851_23_non_const_c)[i]));
} }


cudaFree(((void *)__cuda_local_var_42852_10_non_const_dev_a));
cudaFree(((void *)__cuda_local_var_42852_18_non_const_dev_b));
cudaFree(((void *)__cuda_local_var_42852_26_non_const_dev_c));

return 0;
}
static void __sti___20_add_loop_gpu_cpp1_ii_00197a21(void) {   }

#include "add_loop_gpu.cudafe1.stub.c"
