#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "clickablelabel.h"
#include "circletools.h"

QColor color(255, 0, 0, 0);

void init_shared_func(Ui::MainWindow *ui) {
    QColor temp_color;
    QImage square(100, 100, QImage::Format_ARGB32);

    for (int x = 0; x < square.width(); x++)
    {
        for (int y = 0; y < square.height(); y++)
        {
            temp_color.setHsvF(color.hueF(), x/100.0, y/100.0);
            square.setPixel(x,y,temp_color.rgb());
        }
    }

    QPixmap pix(61, 41);
    pix.fill((const QColor) color);

    ui->chosenColor->setPixmap(pix);
    ui->SquareSL->setPixmap(QPixmap(QPixmap::fromImage(square)));
}

void init_hsv_boxes(Ui::MainWindow *ui) {
    QColor temp_color;
    QImage square(ui->color_1->width(), ui->color_1->height(), QImage::Format_ARGB32);

    ui->label_1->setText("H:");
    ui->label_2->setText("S:");
    ui->label_3->setText("V:");

    ui->value_1->setRange(0, 359.999);
    ui->value_2->setRange(0, 1.0);
    ui->value_3->setRange(0, 1.0);

    ui->value_1->setDecimals(3);
    ui->value_2->setDecimals(3);
    ui->value_3->setDecimals(3);

    ui->value_1->setSingleStep(0.01);
    ui->value_2->setSingleStep(0.01);
    ui->value_3->setSingleStep(0.01);

    init_shared_func(ui);

    for (int x = 0; x < square.width(); x++)
    {
        for (int y = 0; y < square.height(); y++)
        {
            temp_color.setHsvF(x/(square.width() * 1.0), 1.0, 1.0);
            square.setPixel(x,y,temp_color.rgb());
        }
    }

    ui->color_1->setPixmap(QPixmap(QPixmap::fromImage(square)));

    for (int x = 0; x < square.width(); x++)
    {
        for (int y = 0; y < square.height(); y++)
        {
            temp_color.setHsvF(color.hueF(),x/(square.width()*1.0), color.valueF());
            square.setPixel(x,y,temp_color.rgb());
        }
    }

    ui->color_2->setPixmap(QPixmap(QPixmap::fromImage(square)));

    for (int x = 0; x < square.width(); x++)
    {
        for (int y = 0; y < square.height(); y++)
        {
            temp_color.setHsvF(color.hueF(), color.saturationF(), x/(square.width()*1.0));
            square.setPixel(x,y,temp_color.rgb());
        }
    }

    ui->color_3->setPixmap(QPixmap(QPixmap::fromImage(square)));
    ui->value_1->setValue(color.hueF() * 360);
    ui->value_2->setValue(color.saturationF());
    ui->value_3->setValue(color.valueF());
}

void init_rgb_0to1_boxes(Ui::MainWindow *ui) {
    QColor temp_color;
    QImage square(ui->color_1->width(), ui->color_1->height(), QImage::Format_ARGB32);

    ui->label_1->setText("R:");
    ui->label_2->setText("G:");
    ui->label_3->setText("B:");

    ui->value_1->setRange(0, 1.0);
    ui->value_2->setRange(0, 1.0);
    ui->value_3->setRange(0, 1.0);

    ui->value_1->setDecimals(3);
    ui->value_2->setDecimals(3);
    ui->value_3->setDecimals(3);

    ui->value_1->setSingleStep(0.01);
    ui->value_2->setSingleStep(0.01);
    ui->value_3->setSingleStep(0.01);

    init_shared_func(ui);

    for (int x = 0; x < square.width(); x++)
    {
        for (int y = 0; y < square.height(); y++)
        {
            temp_color.setRgbF(x/(square.width() * 1.0), color.greenF(), color.blueF());
            square.setPixel(x,y,temp_color.rgb());
        }
    }

    ui->color_1->setPixmap(QPixmap(QPixmap::fromImage(square)));

    for (int x = 0; x < square.width(); x++)
    {
        for (int y = 0; y < square.height(); y++)
        {
            temp_color.setRgbF(color.redF(), x/(square.width() * 1.0), color.blueF());
            square.setPixel(x,y,temp_color.rgb());
        }
    }

    ui->color_2->setPixmap(QPixmap(QPixmap::fromImage(square)));

    for (int x = 0; x < square.width(); x++)
    {
        for (int y = 0; y < square.height(); y++)
        {
            temp_color.setRgbF(color.redF(), color.greenF(), x/(square.width() * 1.0));
            square.setPixel(x,y,temp_color.rgb());
        }
    }

    ui->color_3->setPixmap(QPixmap(QPixmap::fromImage(square)));

    ui->value_1->setValue(color.redF());
    ui->value_2->setValue(color.greenF());
    ui->value_3->setValue(color.blueF());
}

void init_rgb255_boxes(Ui::MainWindow *ui) {
    QColor temp_color;
    QImage square(ui->color_1->width(), ui->color_1->height(), QImage::Format_ARGB32);


    ui->label_1->setText("R:");
    ui->label_2->setText("G:");
    ui->label_3->setText("B:");

    ui->value_1->setRange(0, 255);
    ui->value_2->setRange(0, 255);
    ui->value_3->setRange(0, 255);

    ui->value_1->setDecimals(0);
    ui->value_2->setDecimals(0);
    ui->value_3->setDecimals(0);

    ui->value_1->setSingleStep(1.0);
    ui->value_2->setSingleStep(1.0);
    ui->value_3->setSingleStep(1.0);

    init_shared_func(ui);

    for (int x = 0; x < square.width(); x++)
    {
        for (int y = 0; y < square.height(); y++)
        {
            temp_color.setRgbF(x/(square.width() * 1.0), color.greenF(), color.blueF());
            square.setPixel(x,y,temp_color.rgb());
        }
    }

    ui->color_1->setPixmap(QPixmap(QPixmap::fromImage(square)));

    for (int x = 0; x < square.width(); x++)
    {
        for (int y = 0; y < square.height(); y++)
        {
            temp_color.setRgbF(color.redF(), x/(square.width() * 1.0), color.blueF());
            square.setPixel(x,y,temp_color.rgb());
        }
    }

    ui->color_2->setPixmap(QPixmap(QPixmap::fromImage(square)));

    for (int x = 0; x < square.width(); x++)
    {
        for (int y = 0; y < square.height(); y++)
        {
            temp_color.setRgbF(color.redF(), color.greenF(), x/(square.width() * 1.0));
            square.setPixel(x,y,temp_color.rgb());
        }
    }

    ui->color_3->setPixmap(QPixmap(QPixmap::fromImage(square)));

    ui->value_1->setValue(color.red());
    ui->value_2->setValue(color.green());
    ui->value_3->setValue(color.blue());
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->CircleH, SIGNAL(sendMousePosition(QPoint&)), this, SLOT(circleMouseHandle(QPoint&)));
    connect(ui->SquareSL, SIGNAL(sendMousePosition(QPoint&)), this, SLOT(squareMouseHandle(QPoint&)));
    connect(ui->color_1, SIGNAL(sendMousePosition(QPoint&)), this, SLOT(color_1_MouseHandle(QPoint&)));
    connect(ui->color_2, SIGNAL(sendMousePosition(QPoint&)), this, SLOT(color_2_MouseHandle(QPoint&)));
    connect(ui->color_3, SIGNAL(sendMousePosition(QPoint&)), this, SLOT(color_3_MouseHandle(QPoint&)));

    int w = ui->CircleH->width();
    int h = ui->CircleH->height();

    QPixmap pix(":/images/color_wheel_hsl.png");
    ui->CircleH->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));

    init_hsv_boxes(ui);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::circleMouseHandle(QPoint &pos)
{
    qreal hue_angle = circleTools::get_angle(pos, QPoint(0,0));

    color.setHsvF(hue_angle/360.0, color.saturationF(), color.valueF());

    if (ui->comboBox->currentIndex() == 0)
        init_hsv_boxes(ui);
    else if (ui->comboBox->currentIndex() == 1)
        init_rgb_0to1_boxes(ui);
    else if (ui->comboBox->currentIndex() == 2)
        init_rgb255_boxes(ui);
}

void MainWindow::squareMouseHandle(QPoint &pos)
{
    color.setHsvF(color.hslHueF(), pos.x()/100.0, pos.y()/100.0);

    if (ui->comboBox->currentIndex() == 0)
        init_hsv_boxes(ui);
    else if (ui->comboBox->currentIndex() == 1)
        init_rgb_0to1_boxes(ui);
    else if (ui->comboBox->currentIndex() == 2)
        init_rgb255_boxes(ui);
}

void MainWindow::color_1_MouseHandle(QPoint &pos)
{
    if (ui->comboBox->currentIndex() == 0)
    {
        color.setHsvF(pos.x()/(ui->color_1->width()* 1.0), color.saturationF(), color.valueF());
        init_hsv_boxes(ui);
    }
    else if (ui->comboBox->currentIndex() == 1)
    {
        color.setRgbF(pos.x()/(ui->color_1->width() * 1.0), color.greenF(), color.blueF());
        init_rgb_0to1_boxes(ui);
    }
    else if (ui->comboBox->currentIndex() == 2)
    {
        color.setRgbF(pos.x()/(ui->color_1->width() * 1.0), color.greenF(), color.blueF());
        init_rgb255_boxes(ui);
    }
}

void MainWindow::color_2_MouseHandle(QPoint &pos)
{
    if (ui->comboBox->currentIndex() == 0)
    {
        color.setHsvF(color.hueF(), pos.x()/(ui->color_2->width() * 1.0) , color.valueF());
        init_hsv_boxes(ui);
    }
    else if (ui->comboBox->currentIndex() == 1)
    {
        color.setRgbF(color.redF(), pos.x()/(ui->color_2->width() * 1.0), color.blueF());
        init_rgb_0to1_boxes(ui);
    }
    else if (ui->comboBox->currentIndex() == 2)
    {
        color.setRgbF(color.redF(), pos.x()/(ui->color_2->width() * 1.0), color.blueF());
        init_rgb255_boxes(ui);
    }
}

void MainWindow::color_3_MouseHandle(QPoint &pos)
{
    if (ui->comboBox->currentIndex() == 0)
    {
        color.setHsvF(color.hueF(), color.saturationF(), pos.x()/(ui->color_3->width() * 1.0));
        init_hsv_boxes(ui);
    }
    else if (ui->comboBox->currentIndex() == 1)
    {
        color.setRgbF(color.redF(), color.greenF(), pos.x()/(ui->color_3->width() * 1.0));
        init_rgb_0to1_boxes(ui);
    }
    else if (ui->comboBox->currentIndex() == 2)
    {
        color.setRgbF(color.redF(), color.greenF(), pos.x()/(ui->color_3->width() * 1.0));
        init_rgb255_boxes(ui);
    }
}

void MainWindow::on_comboBox_currentIndexChanged(const QString &arg1)
{
    if (arg1 == "HSV")
    {
        init_hsv_boxes(ui);
    }
    else if (arg1 == "RGB (0 to 1.0)")
    {
        init_rgb_0to1_boxes(ui);
    }
    else if (arg1 == "RGB (0 to 255)")
    {
        init_rgb255_boxes(ui);
    }
}

void MainWindow::on_value_1_valueChanged(double arg1)
{
//    int type = ui->comboBox->currentIndex();
//    if (type == 0)
//    {
//        color.setHsvF(arg1, color.saturationF(), color.valueF());
//        init_hsv_boxes(ui);
//    }
//    else if (type == 1)
//    {
//        init_rgb_0to1_boxes(ui);
//    }
//    else if (type == 2)
//    {
//        init_rgb255_boxes(ui);
//    }
}

void MainWindow::on_value_2_valueChanged(double arg1)
{
//    int type = ui->comboBox->currentIndex();

//    if (type == 0)
//    {
//        init_hsv_boxes(ui);
//    }
//    else if (type == 1)
//    {
//        init_rgb_0to1_boxes(ui);
//    }
//    else if (type == 2)
//    {
//        init_rgb255_boxes(ui);
//    }
}

void MainWindow::on_value_3_valueChanged(double arg1)
{
//    int type = ui->comboBox->currentIndex();
//    if (type == 0)
//    {
//        init_hsv_boxes(ui);
//    }
//    else if (type == 1)
//    {
//        init_rgb_0to1_boxes(ui);
//    }
//    else if (type == 2)
//    {
//        init_rgb255_boxes(ui);
//    }
}

void MainWindow::on_drop_tool_clicked()
{
    QScreen *screen = QGuiApplication::primaryScreen();
    QPixmap pixmap = screen->grabWindow(QApplication::desktop()->winId(), 550, 550, 1, 1);
    QRgb pixelValue = pixmap.toImage().pixel(0,0);
    color.setRgba(pixelValue);
    QPixmap pix(61, 41);
    pix.fill((const QColor) color);
    ui->chosenColor->setPixmap(pix);
}

void MainWindow::on_pushButton_clicked()
{
    ui->chosenColor_2->setPixmap(ui->chosenColor->pixmap()->scaled(61,16));
    ui->color_history_6->setPixmap(ui->color_history_5->pixmap()->copy(0,0,16,16));
    ui->color_history_5->setPixmap(ui->color_history_4->pixmap()->copy(0,0,16,16));
    ui->color_history_4->setPixmap(ui->color_history_3->pixmap()->copy(0,0,16,16));
    ui->color_history_3->setPixmap(ui->color_history_2->pixmap()->copy(0,0,16,16));
    ui->color_history_2->setPixmap(ui->color_history_1->pixmap()->copy(0,0,16,16));
    ui->color_history_1->setPixmap(ui->chosenColor->pixmap()->scaled(16,16));

}
