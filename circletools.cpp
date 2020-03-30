#include "circletools.h"

circleTools::circleTools(){}

qreal circleTools::get_angle(QPoint p1, QPoint p2)
{
    qreal xDiff = p2.x() - p1.x();
    qreal yDiff = p2.y() - p1.y();
    qreal result = qAtan2(yDiff, xDiff) * (180 / M_PI) -90;
    if ( result < 0) result += 360;
    return result;
}

