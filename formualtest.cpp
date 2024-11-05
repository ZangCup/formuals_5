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

}
void formualTest::formualTest_3(){

}
void formualTest::formualTest_4(){
}

void formualTest::formualTest_5(){

}
 QTEST_MAIN(formualTest)
