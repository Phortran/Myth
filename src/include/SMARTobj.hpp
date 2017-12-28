#ifndef MYTH_SMARTOBJ_H
#define MYTH_SMARTOBJ_H

#include "qsuite.hpp"

class SMARTobj  {
public:
  SMARTobj();
  ~SMARTobj();

  SMARTobj(QString, QString, QDate, QString, QDate, QDate, QDate);

  // --------------------
  //  Getter and setter
  // --------------------
  QString getName();
  QString getDescription();
  QDate   getCreationDate();
  QString getAssignee();
  QDate   getStartDate();
  QDate   getEndDate();
  QDate   getDeadlineDate();

  void setName(QString);
  void setDescription(QString);
  void setCreationDate(QDate);
  void setAssignee(QString);
  void setStartDate(QDate);
  void setEndDate(QDate);
  void setDeadlineDate(QDate);

  inline bool operator==(const SMARTobj& other)
  { return this->_id == other._id; }

protected:
  static int nextID;
  
private:
  int     _id;
  QString _name;	
  QString _description;	
  QDate   _creationDate;
  QString _assignee;	
  QDate   _startDate;	
  QDate   _endDate;	
  QDate   _deadlineDate;
};

#endif /* MYTH_SMARTOBJ_H */
