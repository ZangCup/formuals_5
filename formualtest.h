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

};

#endif // FORMUALTEST_H
