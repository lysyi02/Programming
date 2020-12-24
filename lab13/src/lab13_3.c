#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
  char str[] = "15/4";

  int num_1 = atoi(strtok(str, "+-*/"));
  char op = strtok(str, "1234567890");
  int num_2 = atoi(strtok(NULL, "+-*/"));

  float result = 0;
  switch (symbol(char *str, int len)) {
    case '+':
      result = num_1 + num_2
      break;
    case '-':
      result = num_1 - num_2
      break;
    case '/':
      result = (float) num_1 / num_2
      break;
    case '*':
      result = num_1 * num_2
      break;
  }
  printf("%d\n", result);
  return 0;
}
