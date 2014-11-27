#-------------------------------------------------
#
# Project created by QtCreator 2014-11-15T10:15:01
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QRTFWidget
TEMPLATE = app


SOURCES += main.cpp\
        dialog.cpp \
    rtfparser.cpp

HEADERS  += dialog.h \
    rtfparser.h

FORMS    += dialog.ui

INCLUDEPATH += ../include
LIBS += -L../lib/ -lrtfcpp
