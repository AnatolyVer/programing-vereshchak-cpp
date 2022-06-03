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
