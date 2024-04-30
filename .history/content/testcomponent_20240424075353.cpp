#include "testcomponent.h"
#include <QIODevice>
#include <QFile>
#include <QTextStream>
#include <QtCore>


testcomponent::testcomponent(QObject *parent) : QObject{parent}
{}

int basic()
{
    QString name = qin.readLine();

    qout << "enter something" << Qt::endl;

    qout << name << Qt::endl;

    return;
}
                                