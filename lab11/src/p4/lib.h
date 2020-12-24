#ifndef __LIB_H__
#define __LIB_H__

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
  * Сортування елементів масиву за зростанням.
  * @param arr - вказівник на массив.
  * @param size розмір масиву.
*/
void sort(int* arr, int size);

/**
  * Обмін значеннями двох цілих чисел.
  * @param a - вказівник на перше число.
  * @param b - вказівник на друге число.
*/
void swap(int *a, int *b);

/**
  * Заповнення масиву значеннями головної дагоналі таблиці.
  * @param arr - вказівник на таблицю.
  * @param result_array - вказівник на результуючий масив.
  * @param size - розміри масивів.
*/
void diagonal(int** arr, int* result_array, int size);

/**
  * Заповнення двовимірного масиву випадковими числами.
  * @param arr - вказівник на таблицю.
  * @param size - розмір таблиці.
*/
void randomize(int** arr, int size);

#endif
