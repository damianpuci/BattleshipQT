#-------------------------------------------------
#
# Project created by QtCreator 2017-02-15T12:02:41
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BattleshipQT
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    field.cpp \
    ship.cpp

HEADERS  += mainwindow.h \
    field.h \
    ship.h

FORMS    += mainwindow.ui
