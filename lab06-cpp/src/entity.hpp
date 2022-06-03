#include <cstring>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

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
using std::vector;

/**
 * @file entity.hpp
 * @brief Файл з базовим класом
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
  BowedInstrument() {
    this->isAcoustic = true;
    this->firm = "Yamaha";
    this->year = 1975;
    this->bow = "стекловолокно";
    this->size = "1/2";
  }
  BowedInstrument(bool _isAcoustic, string _firm, int _year, string _bow,
                  string _size) {
    this->isAcoustic = _isAcoustic;
    this->firm = _firm;
    this->year = _year;
    this->bow = _bow;
    this->size = _size;
  }

  BowedInstrument(const BowedInstrument &instrument) {
    this->isAcoustic = instrument.isAcoustic;
    this->firm = instrument.firm;
    this->year = instrument.year;
    this->bow = instrument.bow;
    this->size = instrument.size;
  }

  BowedInstrument(string str) {
    string parsed[5];
    size_t j = 0;
    size_t a = 0;
    for (size_t i = 0; i < str.size(); i++) {
      if (str[i] != ' ' && (str[i + 1] == ' ' || !str[i + 1])) {
        parsed[j] = str.substr(a, i + 1 - a);
        a = i + 2;
        j++;
      }
    }
    this->firm = parsed[0];
    this->year = atoi(parsed[1].c_str());
    this->isAcoustic = atoi(parsed[2].c_str());
    this->bow = parsed[3];
    this->size = parsed[4];
  }
  string toString() {
    stringstream ss;
    ss << this->firm << " " << this->year << " " << this->isAcoustic << " "
       << this->bow << " " << this->size << " end\n";
    string str = ss.str();
    return str;
  }
  bool getAcoustic() const { return this->isAcoustic; }
  string getFirm() const { return this->firm; }
  int getYear() const { return this->year; }
  string getBow() const { return this->bow; }
  string getSize() const { return this->size; }
  void setAcoustic(bool _isAcoustic) { this->isAcoustic = _isAcoustic; }
  void setFirm(string _firm) { this->firm = _firm; }
  void setYear(int _year) { this->year = _year; }
  void setBow(string _bow) { this->bow = _bow; }
  void setSize(string _size) { this->size = _size; }

  BowedInstrument &operator=(BowedInstrument &instrument) {
    this->isAcoustic = instrument.isAcoustic;
    this->firm = instrument.firm;
    this->bow = instrument.bow;
    this->size = instrument.size;
    this->year = instrument.year;
    return *this;
  }

  friend ostream &operator<<(ostream &os, const BowedInstrument &instrument);

  friend istream &operator>>(ifstream &is, BowedInstrument &instrument);

  bool operator==(const BowedInstrument &instrument) {
    return instrument.getAcoustic() == this->isAcoustic &&
           instrument.getBow() == this->bow &&
           instrument.getFirm() == this->firm &&
           instrument.getSize() == this->size &&
           instrument.getYear() == this->year;
  }

  bool operator!=(const BowedInstrument &instrument) {
    return instrument.getAcoustic() != this->isAcoustic ||
           instrument.getBow() != this->bow ||
           instrument.getFirm() != this->firm ||
           instrument.getSize() != this->size ||
           instrument.getYear() != this->year;
  }

  friend ostream &operator<<(ostream &os, const BowedInstrument &instrument) {
    os << instrument.getFirm() << " " << instrument.getYear() << " года, ";
    instrument.getAcoustic() ? os << "" : os << "не ";
    os << "акустический иструмент, "
       << "материал смычка: " << instrument.getBow()
       << ", размер: " << instrument.getSize() << endl;
    return os;
  }

  friend istream &operator>>(ifstream &is, BowedInstrument &instrument) {
    string _firm;
    int _year;
    bool _isAcoustic;
    string _bow;
    string _size;
    is >> _firm >> _year >> _isAcoustic >> _bow >> _size;
    instrument.setFirm(_firm);
    instrument.setYear(_year);
    instrument.setAcoustic(_isAcoustic);
    instrument.setBow(_bow);
    instrument.setSize(_size);
    return is;
  }

  ~BowedInstrument() {}
};
