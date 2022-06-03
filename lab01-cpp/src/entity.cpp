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

void BowedInstrument::show() {
  printf("%s\n", firm.c_str());
  printf("Год выпуска: %u\n", this->year);
  isAcoustic ? printf("Акустический инструмент\n")
             : printf("Не акустический инструмент\n");
  printf("Материал смычка: %s\n", this->bow.c_str());
  printf("Size: %s\n\n", this->size.c_str());
}

bool BowedInstrument::getAcoustic() { return this->isAcoustic; }

string BowedInstrument::getFirm() { return this->firm; }

int BowedInstrument::getYear() { return this->year; }

string BowedInstrument::getBow() { return this->bow; }

string BowedInstrument::getSize() { return this->size; }

void BowedInstrument::setAcoustic(bool _isAcoustic) {
  this->isAcoustic = _isAcoustic;
}

void BowedInstrument::setFirm(string _firm) { this->firm = _firm; }

void BowedInstrument::setYear(int _year) { this->year = _year; }

void BowedInstrument::setBow(string _bow) { this->bow = _bow; }

void BowedInstrument::setSize(string _size) { this->size = _size; }

BowedInstrument::~BowedInstrument() {}
