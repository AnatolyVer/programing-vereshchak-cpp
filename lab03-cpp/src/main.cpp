#include "list.h"

/**
 * @mainpage
 * # Загальне завдання
 * Розширити базовий клас та клас-масив, додавши перевантаження операторів
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

int main() {
  setlocale(LC_ALL, "rus");
  List list;
  BowedInstrument b1("Beam 1940 0 стекловолокно 1/4 ");
  BowedInstrument b2 = b1;

  list.add(b1, 0);
  list.add(b2, 1);
  for (size_t i = 0; i < list.getSize(); i++) {
    cout << list[i];
  }
  cout << endl;
  list.readFromFile("../assets/text-out.txt");
  list.writeToFile("../assets/text-in.txt");
  /* for (size_t i = 0; i < list.getSize(); i++) {
    cout << list[i];
  }
  b1 != b2 ? cout << "TRUe" << endl : cout << "FALse" << endl;
  BowedInstrument test;
  cin >> test;
  cout << test; */
  cout << list;
}
