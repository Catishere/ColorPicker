#ifndef CIRCLETOOLS_H
#define CIRCLETOOLS_H

#include <QtCore/qmath.h>
#include <QPoint>
#include <iostream>

class circleTools
{
public:
    circleTools();
public:
    static qreal get_angle(QPoint p1, QPoint p2);
};

#endif // CIRCLETOOLS_H
