#include "list.h"

/**
 * @file list.h
 * @brief Файл з сигнатурою методів класу, що містить динамічний масив базового класу  
 *
 * @author Vereshchak A.
 * @date 25-may-2022
 * @version 1.0
 */

List::List() {
  this->array = NULL;
  this->size = 0;
}
void List::show() {
  for (size_t i = 0; i < size; i++) {
    array[i][0].show();
  }
}
void List::add(const BowedInstrument &instrument, size_t pos) {
  BowedInstrument **temp = new BowedInstrument *[size + 1];
  if (pos > size)
    pos = size;
  for (size_t i = 0; i < pos; i++) {
    temp[i] = array[i];
  }
  temp[pos] = new BowedInstrument(instrument);
  for (size_t i = pos; i < size; i++) {
    temp[i + 1] = array[i];
  }
  delete[] array;
  array = temp;
  size++;
}
void List::remove(size_t pos) {
  if (size == 0)
    return;
  BowedInstrument **temp = new BowedInstrument *[size - 1];
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
BowedInstrument &List::getElement(size_t pos) {
  if (pos >= 0 && pos < size)
    return array[pos][0];
  return array[0][0];
}
BowedInstrument &List::findOldest(string firm) {
  BowedInstrument current;
  size_t counter;
  for (size_t i = 0; i < size; i++) {
    if (array[i][0].getFirm() == firm) {
      current = array[i][0];
      break;
    }
  }
  for (size_t i = 0; i < size; i++) {
    if (array[i][0].getYear() < current.getYear() &&
        array[i][0].getFirm() == firm) {
      current = array[i][0];
      counter = i;
    }
  }
  return array[counter][0];
}

List::~List() { delete[] array; }