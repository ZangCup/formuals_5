#include "formualtest.h"

formualTest::formualTest(QObject *parent) : QObject(parent)
{

}
void formualTest::formualsTest_null(){
    formuals form;
    QVERIFY(&form != nullptr);
}
void formualTest::formualTest_one(){
}
 QTEST_MAIN(formualTest)
