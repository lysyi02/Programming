#ifndef __LIB_H__
#define __LIB_H__

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>

void randomize(int* arr, int size);

void find_max_seq(int* arr, int N, int* seq_start, int* seq_len);

#endif
