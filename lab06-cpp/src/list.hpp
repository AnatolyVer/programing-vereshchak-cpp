#ifndef LIST_H
#define LIST_H

#include "entity.hpp"

/**
 * @file kist.hpp
 * @brief Файл з функтором та функцією сортування
 *
 * @author Vereshchak A.
 * @date 25-may-2022
 * @version 1.0
 */

class compare {
public:
  bool operator()(BowedInstrument &b1, BowedInstrument &b2) {
    return (b1.getYear() > b2.getYear());
  }
};

template <class Functor>
void sort(vector<BowedInstrument> &vector, Functor func) {
  for (size_t i = 0; i < vector.size(); i++) {
    for (size_t j = 0; j < vector.size() - 1; j++) {
      if ((func(vector[j], vector[j + 1]))) {
        BowedInstrument temp = vector[j];
        vector[j] = vector[j + 1];
        vector[j + 1] = temp;
      }
    }
  }
}

void show(vector<BowedInstrument> vector) {
  for (auto vec : vector) {
    cout << vec;
  }
}

#endif
