#include "entity.h"

BowedInstrument::BowedInstrument() {
  this->isAcoustic = true;
  this->firm = "Yamaha";
  this->year = 1975;
  this->bow = "стекловолокно";
  this->size = "1/2";
}

BowedInstrument::BowedInstrument(bool _isAcoustic, string _firm, int _year,
                                 string _bow, string _size) {
  this->isAcoustic = _isAcoustic;
  this->firm = _firm;
  this->year = _year;
  this->bow = _bow;
  this->size = _size;
}

BowedInstrument::BowedInstrument(const BowedInstrument &instrument) {
  this->isAcoustic = instrument.isAcoustic;
  this->firm = instrument.firm;
  this->year = instrument.year;
  this->bow = instrument.bow;
  this->size = instrument.size;
}

BowedInstrument::BowedInstrument(string str) {
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

string BowedInstrument::toString() {
  stringstream ss;
  ss << this->firm << " " << this->year << " " << this->isAcoustic << " "
     << this->bow << " " << this->size << " end\n";
  string str = ss.str();
  return str;
}

bool BowedInstrument::getAcoustic() const { return this->isAcoustic; }

string BowedInstrument::getFirm() const { return this->firm; }

int BowedInstrument::getYear() const { return this->year; }

string BowedInstrument::getBow() const { return this->bow; }

string BowedInstrument::getSize() const { return this->size; }

void BowedInstrument::setAcoustic(bool _isAcoustic) {
  this->isAcoustic = _isAcoustic;
}

void BowedInstrument::setFirm(string _firm) { this->firm = _firm; }

void BowedInstrument::setYear(int _year) { this->year = _year; }

void BowedInstrument::setBow(string _bow) { this->bow = _bow; }

void BowedInstrument::setSize(string _size) { this->size = _size; }

BowedInstrument &BowedInstrument::operator=(BowedInstrument &instrument) {
  this->isAcoustic = instrument.isAcoustic;
  this->firm = instrument.firm;
  this->bow = instrument.bow;
  this->size = instrument.size;
  this->year = instrument.year;
  return *this;
}

bool BowedInstrument::operator==(const BowedInstrument &instrument) {
  return instrument.getAcoustic() == this->isAcoustic &&
         instrument.getBow() == this->bow &&
         instrument.getFirm() == this->firm &&
         instrument.getSize() == this->size &&
         instrument.getYear() == this->year;
}

bool BowedInstrument::operator!=(const BowedInstrument &instrument) {
  return instrument.getAcoustic() != this->isAcoustic ||
         instrument.getBow() != this->bow ||
         instrument.getFirm() != this->firm ||
         instrument.getSize() != this->size ||
         instrument.getYear() != this->year;
}

ostream &operator<<(ostream &os, const BowedInstrument &instrument) {
  os << instrument.getFirm() << " " << instrument.getYear() << " года, ";
  instrument.getAcoustic() ? os << "" : os << "не ";
  os << "акустический иструмент, "
     << "материал смычка: " << instrument.getBow()
     << ", размер: " << instrument.getSize() << endl;
  return os;
}

istream &operator>>(ifstream &is, BowedInstrument &instrument) {
  string firm;
  int year;
  bool isAcoustic;
  string bow;
  string size;
  is >> firm >> year >> isAcoustic >> bow >> size;
  instrument.setFirm(firm);
  instrument.setYear(year);
  instrument.setAcoustic(isAcoustic);
  instrument.setBow(bow);
  instrument.setSize(size);
  return is;
}

BowedInstrument::~BowedInstrument() {}
