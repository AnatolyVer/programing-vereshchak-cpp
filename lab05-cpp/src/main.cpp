#include "list.hpp"

/**
 * @mainpage
 * # Загальне завдання
 * Замінити клас-список на вектор, та виконати виконання сортування за допомогою функтора 
 *
 * @author Vereshchak A.
 * @date 25-may-2022
 * @version 1.0
 */

/**
 * @file main.c
 * @brief Файл з демонстрацією роботи програми роботи з вектором
 *
 * @author Vereshchak A.
 * @date 25-may-2022
 * @version 1.0
 */

int main() {
  setlocale(LC_ALL, "rus");
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
  sort(vec, func);
  show(vec);
}
