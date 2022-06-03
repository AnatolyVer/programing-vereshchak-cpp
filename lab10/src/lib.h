#ifndef LAB_10_LIB_H
#define LAB_10_LIB_H

#include "time.h"
#include "stdlib.h"

/**
 * @file lib.h
 * @brief Файл з ініціалізацією функцій 
 * @author Vereshchak A.
 * @date 25-apr-2022
 * @version 1.0
 */

/**
 * Розмір масиву
 */

#define N 3

/**
 * Функція write
 * Випадково заповнює двовимірний масив
 */

void write(int **arr, int n);

/**
 * Функція cmp
 * Порівнює два числа
 */

int cmp(const void *a, const void *b);
/**
 * Функція writeD
 * Запис головної діагоналі в одновимірний масив.
 */

void writeD(int *arr1, int **arr2, int size);

/**
 * Функція sort
 * Виконує сортування одновимірного масиву за зростанням.
 */

void sort(int *arr);

#endif
