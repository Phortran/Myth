#include "test.hpp"
#include "Diary.hpp"
#include "SMARTobj.hpp"

class DiaryTest : public QObject {
  Q_OBJECT

public:
  DiaryTest();

private:
  Diary _d;
  QDate _date1;
  QDate _date2;
  QDate _date3;
  SMARTobj *_so;
	
private Q_SLOTS:
  void initTestCase()
  { qDebug("Diary test BEGIN"); }
  void insertObjToExistingDay();
  void insertObjToNonExistingDay();
  void getDaysSorted();
  void getObjsForExistingDay();
  void getObjsForNonExistingDay();
  void cleanupTestCase()
  { qDebug("Diary test END"); }
};

DiaryTest::DiaryTest() {
  _d = *new Diary();
  _date1 = *new QDate(2016, 12, 12);
  _date2 = *new QDate(2016, 12, 8);
  _date3 = *new QDate(2017, 6, 10);
  _so = new SMARTobj("test_obj",
		     "A test object for unit tests",
		     *new QDate(2017, 10, 10),
		     "John Doe",
		     *new QDate(2017, 10, 12),
		     *new QDate(),
		     *new QDate(2017, 11, 1));
  
  _d.addDay(_date1);
  _d.addDay(_date2);
  _d.addDay(_date3);
}

void DiaryTest::insertObjToExistingDay() {
  QVERIFY2(_d.addObjToDate(_date2, _so), "insertObjToExistingDay FAILED");
}

void DiaryTest::insertObjToNonExistingDay() {
  QDate *notIn = new QDate(1574, 3, 16);
  QVERIFY2(!_d.addObjToDate(*notIn, _so), "insertObjToNonExistingDay FAILED");
}

void DiaryTest::getDaysSorted() {
  QList<QDate> dates;

  dates = _d.getDates();

  QCOMPARE(dates.size(), 3);
  QCOMPARE(dates[0], _date2);
  QCOMPARE(dates[1], _date1);
  QCOMPARE(dates[2], _date3);
}

void DiaryTest::getObjsForExistingDay() {
  QList<SMARTobj> *objs;

  objs = _d.getObjsForDay(_date1);
  QVERIFY(objs->isEmpty());

  objs = _d.getObjsForDay(_date2);
  QCOMPARE(objs->size(), 1);
  QVERIFY2(objs->first() == *_so, "getObjForExistingDay FAILED");
}

void DiaryTest::getObjsForNonExistingDay() {
  QList<SMARTobj> *objs;
  QDate *notIn = new QDate(1574, 3, 16);

  objs = _d.getObjsForDay(*notIn);
  QVERIFY2(objs == NULL, "getObjForNonExistingDay FAILED");
}

QTEST_APPLESS_MAIN(DiaryTest)

#include "tst_diarytest.moc"
