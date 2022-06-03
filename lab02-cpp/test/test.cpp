/**
 * @file test.cpp
 * @brief Файл з тестами на реалізації запису та читання з файлу
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
  list.add({true, "Yamaha", 1940, "стекловолокно", "1/4"}, 0);
  list.add({false, "Yamaha", 1920, "стекловолокно", "1/2"}, 1);
  list.add({true, "Beam", 1910, "стекловолокно", "1/2"}, 2);
  list.writeToFile("../assets/text-in");
  list.remove(2);
  list.remove(1);
  list.remove(0);
  list.readFromFile("../assets/text-in.txt");
  BowedInstrument expected_instrument(false, "Yamaha", 1920, "стекловолокно",
                                      "1/2");
  BowedInstrument actual_instrument = list.getElement(1);
  assert_instrument(expected_instrument, actual_instrument);
}
