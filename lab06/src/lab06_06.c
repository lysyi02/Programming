#define SIZE_A 3

int main() {
  int matrix_a[SIZE_A][SIZE_A] = {
    {11, 12, 13},
    {21, 22, 23},
    {31, 32, 33}
  };
  int result[SIZE_A][SIZE_A] = {
    {0, 0, 0},
    {0, 0, 0},
    {0, 0, 0}
  };
  for (int i = 0; i < SIZE_A; i++) {
    for (int j = 0; j < SIZE_A; j++) {
      for (int k = 0; k < SIZE_A; k++) {
        result[i][j] += matrix_a[i][k] * matrix_a[k][j];
      }
    }
  }
  return 0;
}
