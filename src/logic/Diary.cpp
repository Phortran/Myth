#include "Diary.hpp"

Diary::Diary() {
  _dailyObjectives = new QMap<QDate, QList<SMARTobj> *>();
}

Diary::~Diary() {
  _dailyObjectives->clear();

  delete _dailyObjectives;
}

void Diary::addDay(QDate day) {
  _dailyObjectives->insert(day, new QList<SMARTobj>());
}

bool Diary::addObjToDate(QDate day, SMARTobj *obj) {
  QMap<QDate, QList<SMARTobj> *>::iterator i = _dailyObjectives->find(day);
  if (i != _dailyObjectives->end()) {
    i.value()->append(*obj);
  }
  else 
    return false;

  return true;
}

QList<SMARTobj> *Diary::getObjsForDay(QDate day) {
  if (_dailyObjectives->contains(day))
    return _dailyObjectives->value(day);
  else
    return NULL;
}

QList<QDate> Diary::getDates() {
  return _dailyObjectives->keys();
}
