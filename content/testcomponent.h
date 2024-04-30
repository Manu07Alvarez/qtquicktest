#ifndef TESTCOMPONENT_H
#define TESTCOMPONENT_H

#include <QObject>
#include <QTextStream>//


class testcomponent : public QObject
{
    Q_OBJECT

public:
    explicit testcomponent(QObject *parent = nullptr);


signals:
};

QTextStream qin(stdin);
QTextStream qout(stdout);


#endif // TESTCOMPONENT_H
