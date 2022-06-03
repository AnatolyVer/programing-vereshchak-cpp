#include "list.hpp"

/**
 * @mainpage
 * # Загальне завдання
 * Створити шаблоний клас-список на базі динамічного масиву
 *
 * @author Vereshchak A.
 * @date 25-may-2022
 * @version 1.0
 */

/**
 * @file main.c
 * @brief Файл з демонстрацією роботи програми роботи з шаблоним класом
 *
 * @author Vereshchak A.
 * @date 25-may-2022
 * @version 1.0
 */

int main() {
  setlocale(LC_ALL, "rus");
  List<int> list;
  list.add(14);
  list.add(2);
  list.add(25);
  list.add(29);
  list.add(17);
  list.add(4);
  int num = 17;
  cout << "Min: " << list.min() << endl;
  cout << list;
  cout << "Your element is " << list.check(num) << endl;
  list.sort();
  cout << list;
  cout << "Your element is " << list.check(num) << endl;
  list.remove(1);
  cout << list;
}
