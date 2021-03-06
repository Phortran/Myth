#include "test.hpp"

class MetaTest : public QObject {
  Q_OBJECT

public:
  MetaTest();

private Q_SLOTS:
  void initTestCase()
  { qDebug("called before everything else"); }
  void testCase1();
  void testCase2();
  void cleanupTestCase()
  { qDebug("called after testCase1 and testCase2"); }
};

MetaTest::MetaTest() {}

void MetaTest::testCase1() {
  QVERIFY2(true, "Failure");
}

void MetaTest::testCase2() {
  QEXPECT_FAIL("", "Example of failing test (won't abort testing)", Continue);
  QVERIFY2(false, "Failure");
}

QTEST_APPLESS_MAIN(MetaTest)

#include "tst_metatest.moc"
