#include <iostream>
#include "sparsedata.hpp"

int main() {
  float* dense_data;
  const int dense_size = 20;
  //dense_data = new float [dense_size];
  const float sparse_ratio = 0.2;
  GenerateDenseArray(dense_size, sparse_ratio, &dense_data);
  for(int i = 0; i < dense_size; ++i) {
    std::cout << dense_data[i] << " ";
  }
  std::cout << std::endl;

  //test Dense2Sparse
  float* sparseData;
  int* index;
  int sparseSize;
  Dense2Sparse(dense_data, dense_size, )

  delete [] dense_data;
  return 0;
}
