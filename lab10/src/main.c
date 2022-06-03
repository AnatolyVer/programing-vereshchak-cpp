/**
 * @mainpage
 * # Загальне завдання
 * Елементи головної діагоналі масиву N * N записати в одновимірний масив та упорядкувати його за зростанням.
 *
 * @author Vereshchak A.
 * @date 25-apr-2022
 * @version 1.0
 */

/**
 * @file main.c
 * @brief Файл з демонстрацією роботи програми, що упорядковує масив з елементами головної діагоналі масиву N * N.
 *
 * @author Vereshchak A.
 * @date 25-apr-2022
 * @version 1.0
 */

#include "lib.h"

/**
 * Головна функція.
 *
 * Послідовність дій:
 * - знаходження та запис елементів головної діагоналі в одновимірний масив.
 * - сортування масиву за зростанням.
 * @return успішний код повернення з програми (0)
 */

int main()
{
	srand((unsigned int)time(NULL));
	int **arr = (int **)malloc(N * sizeof(int *));
	for (int i = 0; i < N; i++) {
		*(arr + i) = (int *)malloc(N * sizeof(int));
	}
	int *diag = (int *)malloc(N * sizeof(int *));
	write(arr, N);
	writeD(diag, arr, N);
	int a = arr[1][1];
	qsort(diag, N, sizeof(int), cmp);
	free(diag);
	for (int i = 0; i < N; i++) {
		free(*(arr + i));
	}
	free(arr);
	return 0;
}
