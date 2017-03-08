ptxas  -arch=sm_35 -m64  "add_loop_gpu.ptx"  -o "add_loop_gpu.sm_35.cubin" 
fatbinary --create="add_loop_gpu.fatbin" -64 --key="xxxxxxxxxx" "--image=profile=sm_35,file=add_loop_gpu.sm_35.cubin" "--image=profile=compute_35,file=add_loop_gpu.ptx" --embedded-fatbin="add_loop_gpu.fatbin.c" --cuda
gcc -D__CUDA_ARCH__=350 -E -x c++     -DCUDA_DOUBLE_MATH_FUNCTIONS   -D__CUDA_PREC_DIV -D__CUDA_PREC_SQRT "-I/usr/local/cuda-7.5/bin/..//include"   -m64 "add_loop_gpu.cudafe1.cpp" > "add_loop_gpu.cu.cpp.ii" 
gcc -c -x c++ "-I/usr/local/cuda-7.5/bin/..//include"   -fpreprocessed -m64 -o "add_loop_gpu.o" "add_loop_gpu.cu.cpp.ii" 
nvlink --arch=sm_35 --register-link-binaries="bfs_dlink.reg.c" -m64   "-L/usr/local/cuda-7.5/bin/..//lib64/stubs" "-L/usr/local/cuda-7.5/bin/..//lib64" -cpu-arch=X86_64 "add_loop_gpu.o"  -lcudadevrt  -o "bfs_dlink.sm_35.cubin"
fatbinary --create="bfs_dlink.fatbin" -64 --key="bfs_dlink" -link "--image=profile=sm_35,file=bfs_dlink.sm_35.cubin" --embedded-fatbin="bfs_dlink.fatbin.c" 
gcc -c -x c++ -DFATBINFILE="\"bfs_dlink.fatbin.c\"" -DREGISTERLINKBINARYFILE="\"bfs_dlink.reg.c\"" -I. "-I/usr/local/cuda-7.5/bin/..//include"   -D"__CUDACC_VER__=70517" -D"__CUDACC_VER_BUILD__=17" -D"__CUDACC_VER_MINOR__=5" -D"__CUDACC_VER_MAJOR__=7" -m64 -o "bfs_dlink.o" "/usr/local/cuda-7.5/bin/crt/link.stub" 
g++ -m64 -o "bfs.bin" -Wl,--start-group "bfs_dlink.o" "add_loop_gpu.o"   "-L/usr/local/cuda-7.5/bin/..//lib64/stubs" "-L/usr/local/cuda-7.5/bin/..//lib64" -lcudadevrt  -lcudart_static  -lrt -lpthread  -ldl  -Wl,--end-group 
