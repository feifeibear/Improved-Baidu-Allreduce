export MPI_ROOT=$(HOME)/soft_install
export CUDA_ROOT=/usr/local/cuda

LDFLAGS:=-L$(CUDA_ROOT)/lib64 -L$(MPI_ROOT)/lib -lcudart -lmpi -DOMPI_SKIP_MPICXX
CFLAGS:=-std=c++11 -I$(MPI_ROOT)/include -I. -I$(CUDA_ROOT)/include -DOMPI_SKIP_MPICXX=

all: reduce_avg_cuda
reduce_avg: reduce_avg.o
	mpicc $^ -o $@
reduce_avg.o: reduce_avg.c
	mpicc -c -O2 $^ -o $@
reduce_avg_cuda: ./reduce_avg_cuda.o
	mpicc $^ $(LDFLAGS) -o $@
reduce_avg_cuda.o: ./reduce_avg_cuda.cu
	nvcc -c $^ $(CFLAGS) -o $@

