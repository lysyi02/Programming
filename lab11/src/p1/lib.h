#ifndef __LIB_H__
#define __LIB_H__

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>

void randomize(int* arr, int size);

int already_checked(int current_number, int* res_arr, int res_len);

void fill_res(int current_number, int same_numbers, int* res_arr, int res_len);

void get_pairs(int* in_arr, int* res_arr, int N);

#endif
