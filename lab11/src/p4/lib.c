#include "lib.h"

void sort(int* arr, int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size - 1; j++) {
      if ( *(arr + j) > *(arr + j + 1) ) {
        swap((arr + j), (arr + j + 1));
      }
    }
  }
}

void swap(int* a, int* b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void diagonal(int** arr, int* result_array, int size) {
  for (int i = 0; i < size; i++){
    *(result_array + i) = arr[i][i];
  }
}

void randomize(int** arr, int size) {
  for(int i=0; i<size; i++) {
    for(int j=0; j<size; j++){
       arr[i][j] = rand() % 10;
    }
  }
}
