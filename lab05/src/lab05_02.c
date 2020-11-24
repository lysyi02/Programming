int main() {
  int input_number = 11;
  char is_simple = 't';
  if (input_number <= 1) {
    return 0;
  }
  if (input_number > 2 && input_number % 2 == 0) {
    is_simple = 'f';
  } else {
    for (int i = 3; i < input_number / 2; i+= 2) {
      if (input_number % i == 0) {
        is_simple = 'f';
        break;
      }
    }
  }
  /* Алгоритм можно оптимизировать до O(sqrt(n)/2), вместо O(n/4):
  для этого цикл выполняется до sqrt(my_number)*/
  printf("%c", is_simple);
  return 0;
}
