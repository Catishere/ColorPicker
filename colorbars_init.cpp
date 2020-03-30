#include "colorbars_init.h"
#include <QPixmap>
#

colorbars_init::colorbars_init()
{

}

void init_hsv_boxes(Ui::MainWindow *ui) {
    QColor temp_color;
    QImage square(ui->color_1->width(), ui->color_1->height(), QImage::Format_ARGB32);
    for (int x = 0; x < square.width(); x++)
    {
        for (int y = 0; y < square.height(); y++)
        {
            temp_color.setHsvF(x/(square.width() * 1.0), 1, 1);
            square.setPixel(x,y,temp_color.rgb());
        }
    }

    ui->color_1->setPixmap(QPixmap(QPixmap::fromImage(square)));

    for (int x = 0; x < square.width(); x++)
    {
        for (int y = 0; y < square.height(); y++)
        {
            temp_color.setHsvF(color.hueF(),x/(square.width()*1.0), 1.0);
            square.setPixel(x,y,temp_color.rgb());
        }
    }

    ui->color_2->setPixmap(QPixmap(QPixmap::fromImage(square)));

    for (int x = 0; x < square.width(); x++)
    {
        for (int y = 0; y < square.height(); y++)
        {
            temp_color.setHsvF(color.hueF(), x/(square.height()*1.0), 1.0);
            square.setPixel(x,y,temp_color.rgb());
        }
    }

    ui->color_3->setPixmap(QPixmap(QPixmap::fromImage(square)));
}

void init_rgb_0to1_boxes(Ui::MainWindow *ui) {
    QColor temp_color;
    QImage square(ui->color_1->width(), ui->color_1->height(), QImage::Format_ARGB32);
    for (int x = 0; x < square.width(); x++)
    {
        for (int y = 0; y < square.height(); y++)
        {
            temp_color.setHsvF(x/(square.width() * 1.0), 1, 1);
            square.setPixel(x,y,temp_color.rgb());
        }
    }

    ui->color_1->setPixmap(QPixmap(QPixmap::fromImage(square)));

    for (int x = 0; x < square.width(); x++)
    {
        for (int y = 0; y < square.height(); y++)
        {
            temp_color.setHsvF(color.hueF(),x/(square.width()*1.0), 1.0);
            square.setPixel(x,y,temp_color.rgb());
        }
    }

    ui->color_2->setPixmap(QPixmap(QPixmap::fromImage(square)));

    for (int x = 0; x < square.width(); x++)
    {
        for (int y = 0; y < square.height(); y++)
        {
            temp_color.setHsvF(color.hueF(), x/(square.height()*1.0), 1.0);
            square.setPixel(x,y,temp_color.rgb());
        }
    }

    ui->color_3->setPixmap(QPixmap(QPixmap::fromImage(square)));
}

void init_rgb255_boxes(Ui::MainWindow *ui) {
    QColor temp_color;
    QImage square(ui->color_1->width(), ui->color_1->height(), QImage::Format_ARGB32);
    for (int x = 0; x < square.width(); x++)
    {
        for (int y = 0; y < square.height(); y++)
        {
            temp_color.setHsvF(x/(square.width() * 1.0), 1, 1);
            square.setPixel(x,y,temp_color.rgb());
        }
    }

    ui->color_1->setPixmap(QPixmap(QPixmap::fromImage(square)));

    for (int x = 0; x < square.width(); x++)
    {
        for (int y = 0; y < square.height(); y++)
        {
            temp_color.setHsvF(color.hueF(),x/(square.width()*1.0), 1.0);
            square.setPixel(x,y,temp_color.rgb());
        }
    }

    ui->color_2->setPixmap(QPixmap(QPixmap::fromImage(square)));

    for (int x = 0; x < square.width(); x++)
    {
        for (int y = 0; y < square.height(); y++)
        {
            temp_color.setHsvF(color.hueF(), x/(square.height()*1.0), 1.0);
            square.setPixel(x,y,temp_color.rgb());
        }
    }

    ui->color_3->setPixmap(QPixmap(QPixmap::fromImage(square)));
}
