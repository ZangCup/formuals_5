#ifndef FORMUALTEST_H
#define FORMUALTEST_H

#include <QObject>
#include "formuals.h"
#include <QtTest/QtTest>

class formualTest : public QObject
{
    Q_OBJECT
public:
    explicit formualTest(QObject *parent = nullptr);

signals:
private slots:
    void formualsTest_null();
    void formualTest_one();
    void formualTest_two();
    void formualTest_3();
    void formualTest_4();
    void formualTest_5();
    void formualTest_6();
    void formualTest_7();
    void formualTest_8();
};

#endif // FORMUALTEST_H
