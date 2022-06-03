/**
 * @mainpage
 * # Загальне завдання
 * Розробити базовий клас та клас, що містить динамічний масив об'єктів, реалізація базових методів для роботи з цими класами 
 * 
 * @author Vereshchak A.
 * @date 25-may-2022
 * @version 1.0
 */

/**
 * @file main.c
 * @brief Файл з демонстрацією роботи програми роботи з класами.
 *
 * @author Vereshchak A.
 * @date 25-may-2022
 * @version 1.0
 */

#include "list.h"

using std::cout;
using std::string;

int main() {
  setlocale(LC_ALL, "rus");
  List list;
  BowedInstrument b1;
  BowedInstrument b2(true, "Yamaha", 1940, "стекло", "1/4");
  BowedInstrument b3(false, "Big", 1920, "стекло", "1/8");
  list.add(b1, 0);
  list.add(b2, 0);
  list.add(b3, 0);
  list.show();
  BowedInstrument result = list.findOldest("Yamaha");
  result.show();
}