#include "lib.h"


int main() {
  srand(time(NULL));

  int seq_start = 0;
  int seq_len = 0;

  int N = (rand() % 100) + 1;

  int* in_arr = (int*)malloc(N * sizeof(int));
  
  randomize(in_arr, N);

  int seq_num = find_max_seq(in_arr, N, &seq_start, &seq_len) ;
  if (seq_num) {
    int* res_arr = (int*)malloc(seq_len * sizeof(int));

    for (size_t i = 0; i < seq_len; i++) {
      *(res_arr + i) = *(in_arr + seq_start + i);
    }

    free(res_arr);
  }

  free(in_arr);

  return 0;
}
