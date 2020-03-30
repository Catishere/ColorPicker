#-------------------------------------------------
#
# Project created by QtCreator 2018-01-09T21:14:43
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ColorPicker
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    clickablelabel.cpp \
    circletools.cpp

HEADERS  += mainwindow.h \
    clickablelabel.h \
    circletools.h

FORMS    += mainwindow.ui

RESOURCES += \
    image.qrc
