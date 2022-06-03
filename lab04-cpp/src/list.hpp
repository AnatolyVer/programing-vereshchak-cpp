#ifndef LIST_H
#define LIST_H

#include <cstring>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::istream;
using std::istringstream;
using std::ofstream;
using std::ostream;
using std::string;
using std::stringstream;
using std::swap;

/**
 * @file list.hpp
 * @brief Файл з сигнатурою методів шаблоного класу-списку
 *
 * @author Vereshchak A.
 * @date 25-may-2022
 * @version 1.0
 */

template <typename T> class List {
private:
  size_t size;
  T **array;

public:
  List() {
    this->array = NULL;
    this->size = 0;
  }
/**
   * Метод add
   * Додавання елементу на позицію
   */
  void add(const T &obj) {
    T **temp = new T *[size + 1];
    size_t pos = size;
    for (size_t i = 0; i < pos; i++) {
      temp[i] = array[i];
    }
    temp[pos] = new T(obj);
    delete[] array;
    array = temp;
    size++;
  }
 /**
   * Метод min
   * Повертає мінімальний елемент
   */  
  T &min() {
    T min = array[0][0];
    size_t c = 0;
    for (size_t i = 0; i < size; i++) {
      if (array[i][0] < min) {
        min = array[i][0];
        c = i;
      }
    }
    return array[c][0];
  }
 /**
   * Метод sort
   * Сортує масив за зростанням
   */
  void sort() {
    for (size_t i = 0; i < size; i++) {
      for (size_t j = 0; j < size; j++) {
        if (array[i][0] < array[j][0]) {
          swap(array[i][0], array[j][0]);
        }
      }
    }
  }
 /**
   * Метод check
   * Повертає індекс елементу
   */
  size_t check(const T &obj) {
    for (size_t i = 0; i < size; i++) {
      if (array[i][0] == obj) {
        return i;
      }
    }
    return size;
  }
 /**
   * Метод remove
   * Видалення елемента з позиції
   */
  void remove(size_t pos) {
    if (size == 0)
      return;
    T **temp = new T *[size - 1];
    if (pos >= size)
      pos = size - 1;
    for (size_t i = 0; i < pos; i++) {
      temp[i] = array[i];
    }
    for (size_t i = pos; i < size - 1; i++) {
      temp[i] = array[i + 1];
    }
    delete array[pos];
    delete[] array;
    array = temp;
    size--;
  }
    /**
   * Перевантажений оператор [] 
   * Повертає елемент масиву за позицією
   */
  T &operator[](size_t pos) const { return *array[pos]; }
 /**
   * Перевантажений оператор << 
   * Запис даних про масив з консоль чи читання з файлу
   */  
  friend ostream &operator<<(ostream &os, const List &list) {
    for (size_t i = 0; i < list.size; i++) {
      os << list[i] << "\t";
    }
    cout << endl;
    return os;
  }

  ~List() { delete[] array; }
};

#endif
