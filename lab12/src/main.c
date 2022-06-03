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
	FILE *file = fopen("../assets/input.txt", "r");
	char str[100];
	if (file == NULL) {
		printf("%s ", "Open file error\n");
		return 0;
	}
	fgets(str, sizeof(str), file);
	fclose(file);
	char *estr;
	estr = strtok(str, " ,.-");
	printf("%s", "All numbers: ");
	while (estr) {
		if (isdigit(estr)) {
			printf("%s; ", estr);
		}
		estr = strtok(NULL, " ");
	}
	printf("\n");
	return 0;
}
