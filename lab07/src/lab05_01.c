#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * @file lab05_01.c
 * @brief Визначення найбільших спільних дільників пар чисел
 *
 * @author Lysenko M.
 * @date 01-dec-2020
 * @version 0.1
*/

/**
 * Визначення найбільшого спільного дільника двох чисел
 * @param a перше число для визначення НСД
 * @param b друге число для визначення НСД
 * @return найбыльший спільний дільник вхідних чисел a і b
 */
long long gcd (long long a, long long b) {
  while (b)
    b ^= a ^= b ^= a %= b;
  return llabs(a);
}

/**
Головна функція  {оголошення першої та другої пари вхідних чисел,
                  генерація третьої пари псевдовипадкових чисел,
                  запис НСД вхідних чисел у змінні
                 }
*/
int main() {
  srand(time(NULL));
  long long a_1 = 360;
  long long b_1 = 250;
  long long a_2 = 25;
  long long b_2 = 705;
  long long a_3 = rand();
  long long b_3 = rand();
  long long result_1 = gcd(a_1, b_1);
  long long result_2 = gcd(a_2, b_2);
  long long result_3 = gcd(a_3, b_3);
}
