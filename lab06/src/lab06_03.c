/*Что может быть лучше работы со строками в си?*/

#define ARRAY_LENGTH 4

int main() {
  char answer[ARRAY_LENGTH][100];
  int input_number = 4231;
  switch (input_number / 1000) {
    case 1: {char word_1[] = "одна тисяча";
             for (int i = 0; i < 100; i++) {answer[0][i] = word_1[i];} break; }
    case 2: {char word_1[] = "дві тисячі";
             for (int i = 0; i < 100; i++) {answer[0][i] = word_1[i];} break; }
    case 3: {char word_1[] = "три тисячі";
             for (int i = 0; i < 100; i++) {answer[0][i] = word_1[i];} break; }
    case 4: {char word_1[] = "чотири тисячі";
             for (int i = 0; i < 100; i++) {answer[0][i] = word_1[i];} break; }
    case 5: {char word_1[] = "п\'ять тисяч";
             for (int i = 0; i < 100; i++) {answer[0][i] = word_1[i];} break; }
    case 6: {char word_1[] = "шість тисяч";
             for (int i = 0; i < 100; i++) {answer[0][i] = word_1[i];} break; }
    case 7: {char word_1[] = "сім тисяч";
             for (int i = 0; i < 100; i++) {answer[0][i] = word_1[i];} break; }
    case 8: {char word_1[] = "вісім тисяч";
             for (int i = 0; i < 100; i++) {answer[0][i] = word_1[i];} break; }
    case 9: {char word_1[] = "дев\'ять тисяч";
             for (int i = 0; i < 100; i++) {answer[0][i] = word_1[i];} break; }
  }
  switch (input_number / 100 % 10) {
    case 1: {char word_2[] = "сто";
             for (int i = 0; i < 100; i++) {answer[1][i] = word_2[i];} break; }
    case 2: {char word_2[] = "двісті";
             for (int i = 0; i < 100; i++) {answer[1][i] = word_2[i];} break; }
    case 3: {char word_2[] = "триста";
             for (int i = 0; i < 100; i++) {answer[1][i] = word_2[i];} break; }
    case 4: {char word_2[] = "чотириста";
             for (int i = 0; i < 100; i++) {answer[1][i] = word_2[i];} break; }
    case 5: {char word_2[] = "п\'ятсот";
             for (int i = 0; i < 100; i++) {answer[1][i] = word_2[i];} break; }
    case 6: {char word_2[] = "шістсот";
             for (int i = 0; i < 100; i++) {answer[1][i] = word_2[i];} break; }
    case 7: {char word_2[] = "сімсот";
             for (int i = 0; i < 100; i++) {answer[1][i] = word_2[i];} break; }
    case 8: {char word_2[] = "вісімсот";
             for (int i = 0; i < 100; i++) {answer[1][i] = word_2[i];} break; }
    case 9: {char word_2[] = "дев\'ятсот";
             for (int i = 0; i < 100; i++) {answer[1][i] = word_2[i];} break; }
  }
  switch (input_number / 10 % 10) {
    case 2: {char word_3[] = "двадцять";
             for (int i = 0; i < 100; i++) {answer[2][i] = word_3[i];} break; }
    case 3: {char word_3[] = "тридцять";
             for (int i = 0; i < 100; i++) {answer[2][i] = word_3[i];} break; }
    case 4: {char word_3[] = "сорок";
             for (int i = 0; i < 100; i++) {answer[2][i] = word_3[i];} break; }
    case 5: {char word_3[] = "п\'ятдесят";
             for (int i = 0; i < 100; i++) {answer[2][i] = word_3[i];} break; }
    case 6: {char word_3[] = "шістдесят";
             for (int i = 0; i < 100; i++) {answer[2][i] = word_3[i];} break; }
    case 7: {char word_3[] = "сімдесят";
             for (int i = 0; i < 100; i++) {answer[2][i] = word_3[i];} break; }
    case 8: {char word_3[] = "вісімдесят";
             for (int i = 0; i < 100; i++) {answer[2][i] = word_3[i];} break; }
    case 9: {char word_3[] = "дев\'яносто";
             for (int i = 0; i < 100; i++) {answer[2][i] = word_3[i];} break; }
  }
  if (input_number / 10 % 10 == 1) {
    char word_3 = "\0";
    answer[2][0] = word_3;
    switch (input_number % 10) {
      case 1: {char word_4[] = "одинадцять";
               for (int i = 0; i < 100; i++) {answer[3][i] = word_4[i];} break; }
      case 2: {char word_4[] = "дванадцять";
               for (int i = 0; i < 100; i++) {answer[3][i] = word_4[i];} break; }
      case 3: {char word_4[] = "тринадцять";
               for (int i = 0; i < 100; i++) {answer[3][i] = word_4[i];} break; }
      case 4: {char word_4[] = "чотирнадцять";
               for (int i = 0; i < 100; i++) {answer[3][i] = word_4[i];} break; }
      case 5: {char word_4[] = "п\'ятнадцять";
               for (int i = 0; i < 100; i++) {answer[3][i] = word_4[i];} break; }
      case 6: {char word_4[] = "шістнадцять";
               for (int i = 0; i < 100; i++) {answer[3][i] = word_4[i];} break; }
      case 7: {char word_4[] = "сімнадцять";
               for (int i = 0; i < 100; i++) {answer[3][i] = word_4[i];} break; }
      case 8: {char word_4[] = "вісімнадцять";
               for (int i = 0; i < 100; i++) {answer[3][i] = word_4[i];} break; }
      case 9: {char word_4[] = "дев\'ятнадцять";
               for (int i = 0; i < 100; i++) {answer[3][i] = word_4[i];} break; }
    }
  } else {
    switch (input_number % 10) {
      case 1: {char word_4[] = "один";
             for (int i = 0; i < 100; i++) {answer[3][i] = word_4[i];} break; }
      case 2: {char word_4[] = "два";
             for (int i = 0; i < 100; i++) {answer[3][i] = word_4[i];} break; }
      case 3: {char word_4[] = "три";
             for (int i = 0; i < 100; i++) {answer[3][i] = word_4[i];} break; }
      case 4: {char word_4[] = "чотири";
             for (int i = 0; i < 100; i++) {answer[3][i] = word_4[i];} break; }
      case 5: {char word_4[] = "п\'ять";
             for (int i = 0; i < 100; i++) {answer[3][i] = word_4[i];} break; }
      case 6: {char word_4[] = "шість";
             for (int i = 0; i < 100; i++) {answer[3][i] = word_4[i];} break; }
      case 7: {char word_4[] = "сім";
             for (int i = 0; i < 100; i++) {answer[3][i] = word_4[i];} break; }
      case 8: {char word_4[] = "вісім";
             for (int i = 0; i < 100; i++) {answer[3][i] = word_4[i];} break; }
      case 9: {char word_4[] = "дев\'ять";
             for (int i = 0; i < 100; i++) {answer[3][i] = word_4[i];} break; }
    }
  }
  return 0;
}
