#!/bin/bash -l
#!/bin/bash -l
#SBATCH --time=01:00:00
#SBATCH --nodes=128
#SBATCH --cpus-per-task=12
#SBATCH --ntasks=128
#SBATCH --constraint=gpu
#SBATCH --output=add_reduce-%j.log
#SBATCH --error=allreduce-%j.log

export OMP_NUM_THREADS=$SLURM_CPUS_PER_TASK

# env
module load daint-gpu
# module load TensorFlow/1.3.0-CrayGNU-17.08-cuda-8.0-python3

srun -n 128 -N 128 allreduce-test cpu
