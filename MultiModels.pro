#-------------------------------------------------
#
# Project created by QtCreator 2015-02-22T01:29:45
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Puddin
TEMPLATE = app


SOURCES += main.cpp\
        tabwindowtest.cpp \
    widget.cpp

HEADERS  += tabwindowtest.h \
    widget.h

FORMS    += tabwindowtest.ui \
    widget.ui

SUBDIRS += \
    widgForMultiMods.pro
