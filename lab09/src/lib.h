#ifndef LAB_09_LIB_H
#define LAB_09_LIB_H

/**
 * @file lib.h
 * @brief Файл з ініціалізацією функцій 
 * @author Vereshchak A.
 * @date 12-feb-2022
 * @version 1.0
 */

#include <stdbool.h>
#include <stdlib.h>

/**
 * Число для перевірки на ідеальне.
 */
#define NUM 7

/**
 * Функція checkNumber.
 *
 * Послідовність дій:
 * - ініціалізація змінної для збереження результату.
 * - знаходження усіх дільників числа та розрахунок їх суми та її порівняння з числом
 * @return успішний код повернення з програми (ideal)
 */

bool checkNumber(long int num);

#endif
