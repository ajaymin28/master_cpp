# Graphics Processing Unit(GPU)

- Number of ALUs in GPU >>> ALUs in CPU

- AMD Fusion of CPU+GPU in the same die



## Terminologies

- SIMD (Single Instruction Multiple Data)
- SIMT (Single-Instruction Multiple-Threads)
- MIMD (Multiple Instruction Multiple Data)
- CUDA (TBA)
- OpenCL (TBA)
- Warps (Wavefronts in AMD terminology)
    - At runtime a group of scaler threads are executed in GPU in lockstep (all threads are doing same operation e.g. add)
- Warp Divergence
    - TBA
- BLAS (Basic Linear Algebra Software)
    - cublas for cuda
- SAXPY (TBA)
- Host Side Code (executed on CPU)
- Device Side Code (executed on GPU)

## GPU Simulator

- GPGPU 
    - energy based simulation

## Single-Instruction Multiple-Threads (SIMT)

- NVIDIA calls it streaming multiprocessors(SM)
- AMD calls it Compute Units(CU)



## Programming Model

ADD how SIMD,SIMT are executed

> #### NOTE: OpenCL is an alternative of Cuda

## Execution model

1. Starts in CPU
2. Allocate memory in gpu
    - cuda_malloc()
3. Initite data transfer from cpu to gpu
    - cudaMemcpyHostToDevice()
4. Lunch
    - Launch a kernel
    - Kernels consist of thousands of threads
    - SAXPY

5. Transfer data back to cpu
    - cudaMemcpyDeviceToHost()


### number of threadblocks

```cpp
// grid size 
// threads block size(how many threads per block)
int nblocks = (n + 255) / 256;
```