/**
 * @file lib.c
 * @brief Файл з реалізацією функцій
 * @author Vereshchak A.
 * @date 12-feb-2022
 * @version 1.0
 */

#include "lib.h"

bool checkNumber(long int num)
{
	int sum = 0;
	bool ideal = false;
	for (int i = 1; i < num; i++) {
		if (num % i == 0) {
			sum += i;
		}
	}
	if (num == sum) {
		ideal = true;
	}
	return ideal;
}
