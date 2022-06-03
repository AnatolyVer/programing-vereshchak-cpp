/**
 * @mainpage
 * # Загальне завдання
 * Розширити базовий клас та клас, додавши роботу з файлами
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
  BowedInstrument b1("Beam 1940 1 стекловолокно 1/4");
  list.add(b1, 0);
  list.readFromFile("../assets/text-out.txt");
  list.writeToFile("../assets/text-in.txt");
}