/*
"Попробуй что-то типо метода
итераций через деление пополам
с использованием эпсилона точности"
*/

#define INACCURACY 0.00001

int main() {
  double input_number = 28;
  double epsilon = input_number / 2;
  double square_tongue = epsilon;
  while (square_tongue * square_tongue > input_number + INACCURACY  ||
         square_tongue * square_tongue < input_number - INACCURACY) {
    epsilon /= 2;
    if (square_tongue * square_tongue > input_number) square_tongue -= epsilon;
    if (square_tongue * square_tongue < input_number) square_tongue += epsilon;
  }
  return 0;
}
