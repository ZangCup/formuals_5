#include "formualtest.h"

formualTest::formualTest(QObject *parent) : QObject(parent)
{

}
void formualTest::formualsTest_null(){
    formuals form;

    QVERIFY(&form != nullptr);
}
void formualTest::formualTest_one() {
    formuals form;
    form.setA(1);
    QCOMPARE(1, form.getA());
}
void formualTest::formualTest_two() {
    formuals form;
    form.setB(2);
    QCOMPARE(2, form.getB());
}
void formualTest::formualTest_3() {
    formuals form;
    QCOMPARE(0, form.getS());
}
void formualTest::formualTest_4() {
    formuals form;
    form.setH(1);
    QCOMPARE(1, form.getH());
}

void formualTest::formualTest_5() {
    formuals form;
    form.setA(2);
    form.setB(2);
    QCOMPARE(2, form.getNum_C());
}

void formualTest::formualTest_6() {
    formuals form;
    form.setA(2);
    form.setB(2);
    form.setH(2);
    QCOMPARE(4, form.formuals_num());
}

void formualTest::formualTest_7() {
    formuals form;
    form.setA(-2);
    form.setB(-2);
    QCOMPARE(false, form.getDataOk());
}

void formualTest::formualTest_8() {
    formuals form;
    form.setA(2);
    form.setB(2);
    QCOMPARE(true, form.getDataOk());
}

 QTEST_MAIN(formualTest)
