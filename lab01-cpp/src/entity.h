#ifndef ENTITY_H
#define ENTITY_H

#include <iostream>

using std::cout;
using std::string;

/**
 * @file entity.h
 * @brief Файл з сигнатурою методів базового класу
 *
 * @author Vereshchak A.
 * @date 25-may-2022
 * @version 1.0
 */

class BowedInstrument {
private:
  bool isAcoustic;
  string firm;
  int year;
  string bow;
  string size;

public:
  BowedInstrument();
  BowedInstrument(bool isAcoustic, string firm, int year, string bow,
                  string size);
  BowedInstrument(const BowedInstrument &instrument);
  /**
 * Метод show
 * Вивід елементу масиву у консоль
 */
  void show();
  /**
 * Метод getAcoustic
 * Повертає стан поля isAcoustic
 */
  bool getAcoustic();
  /**
 * Метод getFirm
 * Повертає стан поля firm
 */
  string getFirm();
  /**
 * Метод getYear
 * Повертає стан поля year
 */
  int getYear();
  /**
 * Метод getBow
 * Повертає стан поля bow
 */
  string getBow();
  /**
 * Метод getSize
 * Повертає стан поля size
 */
  string getSize();
  /**
 * Метод setAcoustic
 * Встановлення значення поля isAcoustic
 */
  void setAcoustic(bool _isAcoustic);
  /**
 * Метод setFirm
 * Встановлення значення поля firm
 */
  void setFirm(string _firm);
  /**
 * Метод setYear
 * Встановлення значення поля year
 */
  void setYear(int _year);
  /**
 * Метод setBow
 * Встановлення значення поля bow
 */
  void setBow(string _bow);
  /**
 * Метод setSize
 * Встановлення значення поля size
 */
  void setSize(string _size);
  ~BowedInstrument();
};

#endif
