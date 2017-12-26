#include <QString>
#include <QtTest>

class MetaTest : public QObject {
  Q_OBJECT

public:
  MetaTest();

private Q_SLOTS:
  void testCase1();
  void testCase2();
};

MetaTest::MetaTest() {}

void MetaTest::testCase1() {
  QVERIFY2(true, "Failure");
}

void MetaTest::testCase2() {
  QVERIFY2(false, "Failure");
}

QTEST_APPLESS_MAIN(MetaTest)

#include "tst_metatest.moc"
