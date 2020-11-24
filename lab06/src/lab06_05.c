#define ARRAY_WIDTH 5
#define ARRAY_HEIGTH 3

int main() {
  int tablet[ARRAY_HEIGTH][ARRAY_WIDTH] = {
    {11, 12, 13, 14, 15},
    {21, 22, 23, 24, 25},
    {31, 32, 33, 34, 35}
  };
  int buffer = 0;
  for (int i = 0; i < ARRAY_HEIGTH; i++) {
    buffer = tablet[i][0];
    for (int j = 1; j < ARRAY_WIDTH; j++) {
      tablet[i][j-1] = tablet[i][j];
    }
    tablet[i][ARRAY_WIDTH-1] = buffer;
  }
  return 0;
}
