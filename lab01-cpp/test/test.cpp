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

void assert_instrument(BowedInstrument &expected_instrument,
                       BowedInstrument &actual_instrument) {
  ASSERT_EQ(expected_instrument.getAcoustic(), actual_instrument.getAcoustic());
  ASSERT_EQ(expected_instrument.getBow(), actual_instrument.getBow());
  ASSERT_EQ(expected_instrument.getFirm(), actual_instrument.getFirm());
  ASSERT_EQ(expected_instrument.getSize(), actual_instrument.getSize());
  ASSERT_EQ(expected_instrument.getYear(), actual_instrument.getYear());
}

TEST(programing01cpp, get_older_test) {
  List list;
  list.add({true, "Yamaha", 1940, "sss", "1/4"}, 0);
  list.add({false, "Yamaha", 1920, "sss", "1/2"}, 1);
  list.add({true, "Beam", 1910, "sss", "1/2"}, 2);
  BowedInstrument expected_instrument(false, "Yamaha", 1920, "sss", "1/2");
  BowedInstrument actual_instrument = list.findOldest("Yamaha");
  assert_instrument(expected_instrument, actual_instrument);
}
