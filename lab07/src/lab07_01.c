#include <stdarg.h>
#include <time.h>

/**
 * @mainpage
 * # Загальне завдання
 * 1. Переробити програми з тем "Масиви" та "Цикли" таким чином, щоб
 * використовувалися функції для обчислення результату
 *
 * @author Lysenko M.
 * @date 01-dec-2020
 * @version 0.1
 */

 /**
  * @file lab07_01.c
  * @brief визначення кількості пар у послідовності з
  * варіативною кількістю аргументів, де перше число менше наступного
  *
  * @author Lysenko M.
  * @date 01-dec-2020
  * @version 0.1
 */

 /**
  * Визначення кількості пар у послідовності, де перше число менше наступного
  * @param count кількість аргументів, що передаються у функцію
  * @return кількість пар, де перше число менше наступного
  */
int pairs(int count, ...) {
  va_list arr;
  int i;
  int counter = 0;

  va_start(arr, count);

  int tmp1 = va_arg(arr, int);
  int tmp2;
  for (i = 0; i < count - 1; i++) {
    tmp2 = va_arg(arr, int);
    if (tmp1 < tmp2) counter++;
    tmp1 = tmp2;
  }

  va_end(arr);
  return counter;
}


/**
Головна функція  {запис у змінні результату функції pairs для 7 та 3 аргументів.
                 }
*/
int main() {

/*  srand(time(NULL));

  int count = rand() % 100;
  for (size_t i = 0; i < count; i++) {

  }

  */

  int result_1 = pairs(7, 1,2,3,4,5,6,7);
  int result_2 = pairs(3, 3,5,2);
  return 0;
}
