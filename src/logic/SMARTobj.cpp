#include "SMARTobj.hpp"

// initialize static class members
int SMARTobj::nextID = 0;  // This should be automatically initialized to 0

// default constructor
SMARTobj::SMARTobj() {
  _id = SMARTobj::nextID++;
}

//default destructor
SMARTobj::~SMARTobj() {}

// rich constructor
SMARTobj::SMARTobj(QString name , QString description, QDate creationDate,
		   QString assignee, QDate startDate, QDate endDate, QDate deadlineDate) {
  _id = SMARTobj::nextID++;
  _name	        = name;
  _description	= description;
  _creationDate = creationDate;
  _assignee	= assignee;
  _startDate	= startDate;
  _endDate	= endDate;
  _deadlineDate = deadlineDate;
}

//getter
QString SMARTobj::getName() {
  return this->_name;
}
QString SMARTobj::getDescription() {
  return this->_description;
}
QDate   SMARTobj::getCreationDate() {
  return this->_creationDate;
}
QString SMARTobj::getAssignee() {
  return this->_assignee;
}
QDate   SMARTobj::getStartDate() {
  return this->_startDate;
}
QDate   SMARTobj::getEndDate() {
  return this->_endDate;
}
QDate   SMARTobj::getDeadlineDate() {
  return this->_deadlineDate;
}


// setter
void SMARTobj::setName(QString name) {
  this->_name = name;
}
void SMARTobj::setDescription(QString description) {
  this->_description = description;
}
void SMARTobj::setCreationDate(QDate creationDate) {
  this->_creationDate = creationDate;
}
void SMARTobj::setAssignee(QString assignee) {
  this->_assignee = assignee;
}
void SMARTobj::setStartDate(QDate startDate) {
  this->_startDate = startDate;
}
void SMARTobj::setEndDate(QDate endDate) {
  this->_endDate = endDate;
}
void SMARTobj::setDeadlineDate(QDate deadlineDate) {
  this->_deadlineDate = deadlineDate;
}
