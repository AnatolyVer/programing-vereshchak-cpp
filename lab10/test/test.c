/**
 * @file test.c
 * @brief Файл з тестами на реалізації функції на пошук досконалого числа
 *
 * @author  Vereshchak A.
 * @date 12-feb-2022
 */

#include <check.h>
#include <stdlib.h>
#include "lib.h"

#define ARRAY_SIZE 4

START_TEST(test_writeD)
{
	int **input_data_a = (int **)malloc(ARRAY_SIZE * sizeof(int *));
	for (int i = 0; i < ARRAY_SIZE; i++) {
		*(input_data_a + i) = (int *)malloc(ARRAY_SIZE * sizeof(int));
	}
	int *input_data_b = (int *)malloc(ARRAY_SIZE * sizeof(int));
	int c = 1;
	for (int i = 0; i < ARRAY_SIZE; i++) {
		for (int j = 0; j < ARRAY_SIZE; j++) {
			*(*(input_data_a + i) + j) = c++;
		}
	}
	int expected_values[] = { 1, 6, 11, 16 };
	writeD(input_data_b, input_data_a, ARRAY_SIZE);
	for (int i = 0; i < ARRAY_SIZE; i++) {
		ck_assert_int_eq(*(expected_values + i), *(input_data_b + i));
	}
	for (int i = 0; i < ARRAY_SIZE; i++) {
		free(*(input_data_a + i));
	}
	free(input_data_a);
	free(input_data_b);
}
END_TEST

int main(void)
{
	Suite *s = suite_create("Programing");
	TCase *tc_core = tcase_create("lab10");
	tcase_add_test(tc_core, test_writeD);
	suite_add_tcase(s, tc_core);
	SRunner *sr = srunner_create(s);
	srunner_run_all(sr, CK_VERBOSE);
	int number_failed = srunner_ntests_failed(sr);
	srunner_free(sr);
	return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
