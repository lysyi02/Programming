#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * @file lab06_04.c
 * @brief Визначення кількості слів у рядку
 *
 * @author Lysenko M.
 * @date 01-dec-2020
 * @version 0.1
*/


/**
 * Визначення кількості слів, розділених пробілами, у заданому рядку
 * @param sentence вхідний рядок
 * @return кількість слів у заданому рядку
 */
int wnum(char sentence[]) {
  int length = strlen(sentence);
  int words_counter = 0;
  for (size_t i = 1; i < length; i++) {
    if (sentence[i] == ' ' && sentence[i-1] != ' ') {
      words_counter++;
    }
  }
  if (sentence[length] != ' ') words_counter++;
  return words_counter;
}


/**
Головна функція  {оголошення першого та другого рядка,
                  генерація третього псевдовипадково заповненого рядка
                  запис кількості слів у рядках у змінні
                 }
*/
int main() {
  srand(time(NULL));
  char sentence_1[] = "dsffdssdf sdfsdfsd sdfdsf sdfs    fsd";

  char sentence_2[] = "fssdfsf dsfghgf hdsff reg gfhg wae gf fsd trh trgdf ery hf fdf sdf";

  /*обьявляем строку случайной длинны, в диапазоне от 1 до 100*/
  const int rand_sentence_length = rand() % 100; /**< Довжина псевдовипадково заповненого рядка. */

  /*Заполняем стороку случайными символами от a до z (с вероятностью 1/5 - пробел)*/
  for (size_t i = 0; i < rand_sentence_length; i++)
     if (rand() % 5) sentence_3[i] = 'a' + rand() % 26; else sentence_3[i] = ' ';

  int result_1 = wnum(sentence_1);
  int result_2 = wnum(sentence_2);
  int result_3 = wnum(sentence_3);
}
