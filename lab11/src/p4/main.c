#include "lib.h"
/**
  * @file main.c
  * @brief Програма виписує елементи головної
  * діагоналі двовимірного масиву в одновимірний
  * та упорядковує їх за зростанням,
  *
  * @author Lysenko M.
  * @date 23-dec-2020
  * @version 0.1
*/

/**
Головна функція  {Оголошення змінної N з розміром масиву
                  вказівників на радки матриці та масиву результатів.
                  Матриця заповнюється за допомогою псевдовипадкового генератора.
                  Результуючий масив заповнюється елементами головної діагоналі,
                  Після чого викликається функція sort, котра сортує елементи
                  головної діагоналі за зростанням.
                 }
*/
int main(){
  srand(time(NULL));

  int N = 10; /**< Розмір массиву*/
  int** arr = (int **)malloc(N * sizeof(int *));
  int * result_array = (int*)malloc(N * sizeof(int));

  for(int i=0; i<N; i++){
    arr[i] = (int *)malloc(N*sizeof(int));
  }

  randomize(arr, N);


  for(int i=0; i<N; i++){
    for(int j=0; j<N; j++){
      printf("%d  ", arr[i][j]);
    }
    printf("\n");
  }
  printf("\n");

  diagonal(arr, result_array, N);
  sort(result_array, N);

  for(int i = 0; i < N; i++){
    printf("%d ", * (result_array + i));
  }
printf("\n");
  free(result_array);
  free(arr);

  return 0;
}
