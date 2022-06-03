/**
 * @file test.cpp
 * @brief Файл з тестами на реалізації функції знаходження найстарішої
 * скрипки обраної фірми
 *
 * @author Anatoly V.
 * @date 28-may-2022
 * @version 1.0
 */

#include "list.hpp"
#include <gtest/gtest.h>

TEST(programing01cpp, get_older_test) {
  List<int> list;
  list.add(14);
  list.add(2);
  list.add(25);
  list.add(29);
  list.add(17);
  list.add(4);
  int num = 17;
  int expected_value = 2;
  int actual_value = list.min();
  ASSERT_EQ(expected_value, actual_value);
  size_t eV = 4;
  size_t aV = list.check(17);
  ASSERT_EQ(eV, aV);
  list.remove(0);
  eV = 3;
  aV = list.check(17);
  ASSERT_EQ(eV, aV);
  list.sort();
  eV = 2;
  aV = list.check(17);
  ASSERT_EQ(eV, aV);
}
