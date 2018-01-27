module load daint-gpu
# module load cray-mpich/7.5.0
module load cudatoolkit/8.0.61_2.4.3-6.0.4.0_3.1__gb475d12
export CRAYPE_LINK_TYPE=dynamic
make CUDA_ROOT=/opt/nvidia/cudatoolkit8.0/8.0.61_2.4.3-6.0.4.0_3.1__gb475d12 MPI_ROOT=/opt/cray/pe/mpt/7.6.0/gni/mpich-cray/8.6
