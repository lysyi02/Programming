#include <stdio.h>
#include <string.h>

int main() {
  char str[] = "Это не баг, это фича.";

  char* curr_word = strtok(str, " ,.");
  char* max_word = curr_word;
  char* min_word = curr_word;

  int max_len = strlen(curr_word);
  int min_len = max_len;

  while (curr_word != NULL) {
    if ( strlen(curr_word) > max_len ) {
      max_len = strlen(curr_word);
      max_word = curr_word;
    }
    if ( strlen(curr_word) < min_len ) {
      min_len = strlen(curr_word);
      min_word = curr_word;
    }
    curr_word = strtok(NULL, " ,.");
  }

  puts(max_word);
  puts(min_word);
  return 0;
}
