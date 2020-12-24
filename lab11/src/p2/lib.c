#include "lib.h"

void randomize(int* arr, int size) {
  for (size_t i = 0; i < size; i++) {
    *(arr + i) = rand() % 10 - 4;
  }
}

void find_max_seq(int* arr, int N, int* seq_start, int* seq_len) {
  int start_pos = 0;
  int sum = 0;
  int max_sum = 0;
  bool new_seq = true;

  for (size_t i = 0; i < N; i++) {
    if (*(arr+i) > 0) {
      sum += *(arr+i);
      if ( new_seq ) {
        new_seq = false;
        start_pos = i;
      }
    } else {
      new_seq = true;
      if (sum > max_sum) {
        max_sum = sum;
        sum = 0;
        *seq_start = start_pos;
        *seq_len = i - start_pos;
      }
    }
  }

  if (sum > max_sum) {
    max_sum = sum;
    sum = 0;
    *seq_start = start_pos;
    *seq_len = N - start_pos;
  }
}
