#include "lib.h"

void randomize(int* arr, int size) {
  for (size_t i = 0; i < size; i++) {
    *(arr + i) = rand() % 10;
  }
}

int find_max_seq(int* arr, int N, int* seq_start, int* seq_len) {
  int start_pos = 0;
  int cur_len = 0;
  int seq_num = 0;
  bool new_seq = true;

  for (size_t i = 1; i < N; i++) {
    if ( *(arr+i) >= *(arr+i-1) ) {
      if ( new_seq ) {
        seq_num ++;
        new_seq = false;
        start_pos = i - 1;
      }
    } else {
      cur_len = i - start_pos;
      new_seq = true;
      if (cur_len > *seq_len) {
        *seq_start = start_pos;
        *seq_len = cur_len;
      }
    }
  }
  if (cur_len > *seq_len) {
    *seq_start = start_pos;
    *seq_len = N - cur_len;
  }
  return seq_num;
}
