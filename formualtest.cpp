#include "formualtest.h"

formualTest::formualTest(QObject *parent) : QObject(parent)
{

}
void formualTest::formualsTest_null(){
    formuals form;

    QVERIFY(&form != nullptr);
}
void formualTest::formualTest_one(){
    formuals form;
    form.setA(1);
    QCOMPARE(1,form.getA());
}
void formualTest::formualTest_two(){
    formuals form;
    form.setB(2);
    QCOMPARE(2,form.getB());
}
void formualTest::formualTest_3(){
    formuals form;
    QCOMPARE(0,form.getS());
}
void formualTest::formualTest_4(){
    formuals form;
    form.setH(1);
    QCOMPARE(1,form.getH());
}

void formualTest::formualTest_5(){

}
 QTEST_MAIN(formualTest)
