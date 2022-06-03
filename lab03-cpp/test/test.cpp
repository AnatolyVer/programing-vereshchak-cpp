/**
 * @file test.cpp
 * @brief Файл з тестами на реалізації функції знаходження найстарішої
 * скрипки обраної фірми
 *
 * @author Anatoly V.
 * @date 28-may-2022
 * @version 1.0
 */

#include "list.h"
#include <gtest/gtest.h>

TEST(programing01cpp, get_older_test) {
  List list;
  BowedInstrument b1("Yamaha 1950 1 дерево 1/4");
  BowedInstrument b2("Yamaha 1951 1 дерево 1/4");
  list.readFromFile("../assets/text-out.txt");
  bool expected_value = true;
  bool actual_value = b1 != b2;
  ASSERT_EQ(expected_value, actual_value);
  b2.setYear(1950);
  actual_value = b1 == b2;
  ASSERT_EQ(expected_value, actual_value);
  actual_value = b1 == list[0];
  ASSERT_EQ(expected_value, actual_value);
  list[0] = b2;
  list.writeToFile("../assets/text-in.txt");
  list.readFromFile("../assets/text-out.txt");
  actual_value = b2 == list[0];
  ASSERT_EQ(expected_value, actual_value);
}
