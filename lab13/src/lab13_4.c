#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

#define KEY 3

/**
  * @file lab13_4.c
  * @brief Програма шифрує заданий рядок шифром Цезаря
  *
  * @author Lysenko M.
  * @date 23-dec-2020
  * @version 0.1
*/

/**
  * Шифрування рядку шифром цезаря.
  * @param str - вказівник на рядок.
  * @param b - довжина рядка.
*/
void encrypt(char *str, int len){
  for (size_t i = 0; i < len; i++) {
    if ( isalpha(str[i]) ) {
      str[i] = (str[i] + KEY);
      }
    }
  }
}

/**
Головна функція  {Оголошення вхідного рядка, його заповнення, визначення довжини
                  Виклик функції encrypt() для шифрування.
                  Виведення результату - зашифрованого рядка.
                 }
*/
int main() {
  char str[100];
  gets(str);
  encrypt(str, strlen(str));
  puts(str);
}
