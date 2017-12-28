#ifndef MYTH_DIARY_H
#define MYTH_DIARY_H

#include "qsuite.hpp"
#include "SMARTobj.hpp"

class Diary {
public:
  Diary();
  ~Diary();

  void addDay(QDate);
  bool addObjToDate(QDate, SMARTobj *);
  QList<SMARTobj> *getObjsForDay(QDate);
  QList<QDate> getDates();

private:
  QMap<QDate, QList<SMARTobj> *> *_dailyObjectives;
};

#endif /* MYTH_DIARY_H */
