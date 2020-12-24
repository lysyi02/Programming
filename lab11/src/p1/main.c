#include "lib.h"

int main() {
  srand(time(NULL));

  int N = (rand() % 100) + 1; //размер массива

  int* in_arr = (int*)malloc(N * sizeof(int));

  int* res_arr = (int*)malloc(N * sizeof(int));

  randomize(in_arr, N);

  get_pairs(in_arr, N, res_arr);

  free(in_arr);
  free(res_arr);

  return 0;
}
