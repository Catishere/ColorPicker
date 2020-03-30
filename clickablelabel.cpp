#include "clickablelabel.h"

ClickableLabel::ClickableLabel(QWidget* parent)
    : QLabel(parent) {
    is_clicked = false;
}

ClickableLabel::~ClickableLabel() {}

void ClickableLabel::mousePressEvent(QMouseEvent *ev) {
    is_clicked = true;
    QPoint mouse_pos = ev->pos();

    if (this->height() > 150)
    {
        int abcissa = mouse_pos.x() - this->width()/2;
        int ordinate = mouse_pos.y() - this->height()/2;
        int dist = abcissa*abcissa + ordinate*ordinate;
        int radius2 = 105*105;
        int inner_radius2 = 80*80;

        if (dist < radius2 && dist > inner_radius2 && is_clicked)
        {
            mouse_pos.setX(abcissa);
            mouse_pos.setY(ordinate);
            emit sendMousePosition(mouse_pos);
        }
    }
    else if (mouse_pos.x() <= this->width()
             && mouse_pos.y()  <= this->height()
             && mouse_pos.x() > 0
             && mouse_pos.y() > 0
             && is_clicked)
    {
        emit sendMousePosition(mouse_pos);
    }
}

void ClickableLabel::mouseMoveEvent(QMouseEvent *ev) {
    QPoint mouse_pos = ev->pos();

    if (this->height() > 150)
    {
        int abcissa = mouse_pos.x() - this->width()/2;
        int ordinate = mouse_pos.y() - this->height()/2;
        int dist = abcissa*abcissa + ordinate*ordinate;
        int radius2 = 105*105;
        int inner_radius2 = 80*80;

        if (dist < radius2 && dist > inner_radius2 && is_clicked)
        {
            mouse_pos.setX(abcissa);
            mouse_pos.setY(ordinate);
            emit sendMousePosition(mouse_pos);
        }
    }
    else if (mouse_pos.x() <= this->width()
             && mouse_pos.y()  <= this->height()
             && mouse_pos.x() > 0
             && mouse_pos.y() > 0
             && is_clicked)
    {
        emit sendMousePosition(mouse_pos);
    }
}

void ClickableLabel::mouseReleaseEvent(QMouseEvent *ev) {
    is_clicked = false;
    emit mouseReleased();
}
