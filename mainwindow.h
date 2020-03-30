#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDesktopWidget>
#include <QScreen>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;


public slots:
    void circleMouseHandle(QPoint& pos);
    void squareMouseHandle(QPoint& pos);
    void color_1_MouseHandle(QPoint& pos);
    void color_2_MouseHandle(QPoint& pos);
    void color_3_MouseHandle(QPoint& pos);

private slots:
    void on_comboBox_currentIndexChanged(const QString &arg1);
    void on_value_1_valueChanged(double arg1);
    void on_value_2_valueChanged(double arg1);
    void on_value_3_valueChanged(double arg1);
    void on_drop_tool_clicked();
    void on_pushButton_clicked();
};

#endif // MAINWINDOW_H
