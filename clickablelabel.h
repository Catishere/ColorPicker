#ifndef CLICKABLELABEL
#define CLICKABLELABEL

#include <QLabel>
#include <QWidget>
#include <Qt>
#include <QMouseEvent>

class ClickableLabel : public QLabel {
    Q_OBJECT

public:
    explicit ClickableLabel(QWidget* parent = Q_NULLPTR);
    ~ClickableLabel();

    int x, y;
    bool is_clicked;

signals:
    void sendMousePosition(QPoint&);
    void mousePressed();
    void mouseReleased();

protected:
    void mouseMoveEvent(QMouseEvent *ev);
    void mousePressEvent(QMouseEvent *ev);
    void mouseReleaseEvent(QMouseEvent *ev);
};

#endif // CLICKABLELABEL
