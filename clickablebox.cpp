#include "clickablebox.h"

ClickableBox::ClickableBox(QWidget* parent)
    : ClickableLabel(parent){}

ClickableBox::~ClickableBox() {}

void mouseMoveEvent(QMouseEvent *ev)
{
    QPoint mouse_pos = ev->pos();
    emit send
}
