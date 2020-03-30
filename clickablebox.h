#ifndef CLICKABLEBOX_H
#define CLICKABLEBOX_H

#include "clickablelabel.h"
#include <QLabel>
#include <QWidget>
#include <Qt>
#include <QMouseEvent>

class ClickableBox : public ClickableLabel {
    Q_OBJECT

public:
    explicit ClickableBox(QWidget* parent = Q_NULLPTR);
    ~ClickableBox();

protected:
    void mouseMoveEvent(QMouseEvent *ev);
};


#endif // CLICKABLEBOX_H
