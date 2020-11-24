/*
Алгоритм Эвклида

Почему-то при использовании:
  number_a = number_a % number_b;
  number_b = number_b % number_a;
выдает Floating point exception.
*/

int main() {
  int number_a = 360;
  int number_b = 250;
  while (number_a != number_b) {
    if (number_a > number_b) {
      number_a -= number_b;
    } else {
      number_b -= number_a;
    }
  }
  return 0;
}
