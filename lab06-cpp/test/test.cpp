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
  BowedInstrument b1("Beam 1940 1 wood 1/4");
  vector<BowedInstrument> vec;
  compare func;
  vec.push_back(b1);
  b1.setYear(1920);
  vec.push_back(b1);
  b1.setYear(1918);
  vec.push_back(b1);
  b1.setYear(1937);
  vec.push_back(b1);
  int expected = 1940;
  int actual = vec[0].getYear();
  ASSERT_EQ(expected, actual);
  sort(vec, func);
  expected = 1918;
  actual = vec[0].getYear();
  ASSERT_EQ(expected, actual);
}
