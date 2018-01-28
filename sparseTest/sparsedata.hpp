#ifndef _SPARSEDATA_H_
#define _SPARSEDATA_H_
#include <cstdlib>
#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>

void GenerateDenseArray(const int size, const float sparse_ratio,
    float** data_ptr); 

void Dense2Sparse(const float* denseData, const int denseSize,
    float** sparsedata, int** index, int* sparseSize);

void Sparse2Dense(float** denseData, int* denseSize, 
    const float* sparsedata, const int* index, const int sparseSize); 

#endif
