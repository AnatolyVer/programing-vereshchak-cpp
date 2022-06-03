/**
 * @file lib.c
 * @brief Файл з реалізацією функцій
 * @author Vereshchak A.
 * @date 25-apr-2022
 * @version 1.0
 */

#include "lib.h"

int cmp(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}

void write(int **arr, int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			*(*(arr + i) + j) = rand() % 20;
		}
	}
}

void writeD(int *arr1, int **arr2, int size)
{
	for (int i = 0; i < size; i++) {
		*(arr1 + i) = *(*(arr2 + i) + i);
	}
}
