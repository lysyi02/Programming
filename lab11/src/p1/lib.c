#include "lib.h"

void randomize(int* arr, int size) {
  for (size_t i = 0; i < size; i++) {
    *(arr + i) = rand() % 10;
  }
}

int already_checked(int current_number, int* res_arr, int res_len) {
  for (size_t i = 0; i <= res_len; i += 2) {
    if( *(res_arr + i) == current_number) {
      return 1;
    }
  }
  return 0;
}

void fill_res(int current_number, int same_numbers, int* res_arr, int res_len) {
  *(res_arr + res_len - 1) = current_number;
  *(res_arr + res_len) = same_numbers;
}

void get_pairs(int* in_arr, int N, int* res_arr) {
  int current_number = 0;
  int same_numbers = 0;
  int res_len = -1;

  for (size_t i = 0; i < N; i++) {

    current_number = *(in_arr + i);
    same_numbers = 0;

    if ( already_checked(current_number, res_arr, res_len) ) {
      continue;
    } else {

      for (size_t j = i + 1; j < N; j++) {
        if ( *(in_arr + j) == current_number ) {
          same_numbers++;
        }
      }

      if ( same_numbers != 0 ) {
        res_len+= 2;
        fill_res(current_number, same_numbers + 1, res_arr, res_len);
      }
    }
  }
}

for (size_t i = 0; i < res_len; i++) {
  printf("%d ", *(res_arr + i));
}
