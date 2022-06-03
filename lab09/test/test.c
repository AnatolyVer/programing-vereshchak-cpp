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
#define DATA_SIZE_SUM 3

START_TEST(test_checkNumber)
{
	long int input_data_a[] = { 6, 28, 14 };
	bool expected_values[] = { true, true, false };
	for (int i = 0; i < DATA_SIZE_SUM; i++) {
		bool actual_value = checkNumber(input_data_a[i]);
		ck_assert_int_eq((int)expected_values[i], (int)actual_value);
	}
}
END_TEST

int main(void)
{
	Suite *s = suite_create("Programing");
	TCase *tc_core = tcase_create("lab09");
	tcase_add_test(tc_core, test_checkNumber);
	suite_add_tcase(s, tc_core);
	SRunner *sr = srunner_create(s);
	srunner_run_all(sr, CK_VERBOSE);
	int number_failed = srunner_ntests_failed(sr);
	srunner_free(sr);
	return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
