#include "sparsedata.hpp"

void GenerateDenseArray(const int size, const float sparse_ratio,
    float** data_ptr) {
  srand((unsigned)time(NULL));
  *data_ptr = new float [size];
  float* data = *data_ptr;
//  data = new float [size];
  for(int i = 0; i < size; ++i) {
    float p = rand()/float(RAND_MAX);
    if(p > sparse_ratio) {
      data[i] = 0;
    } else {
      data[i] = p;
    }
  }
  return;
}

void Dense2Sparse(const float* denseData, const int denseSize,
    float** sparseDataPtr, int** index, int* sparseSize) {
  std::vector<float> buff_data;
  std::vector<int> buff_index;
  for(int i = 0; i < denseSize; ++i) {
    if(fabs(denseData[i] - 0.0) < 1e-6) {
      continue;
    } else {
      buff_data.push_back(denseData[i]);
      buff_index.push_back(i);
    }
  }
  *sparseSize = buff_data.size();
  *index = &buff_index[0];
  *sparseDataPtr= &buff_data[0];
  return;
}

void Sparse2Dense(float** denseData, int* denseSize, 
    const float* sparsedata, const int* index, const int sparseSize) {
}

