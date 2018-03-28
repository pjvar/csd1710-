#-------------------------------------------------
#
# Project created by QtCreator 2018-02-04T12:01:47
#
#-------------------------------------------------

QT       += core gui
QT       += core gui multimedia
QT += multimediawidgets
QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = match
TEMPLATE = app


SOURCES += main.cpp\
        matchmainwindow.cpp \
    game.cpp \
    login.cpp \
    backmusic.cpp \
    sqlit.cpp \
    musicpliaythread.cpp

HEADERS  += matchmainwindow.h \
    game.h \
    login.h \
    backmusic.h \
    sqlit.h \
    musicpliaythread.h

FORMS    += matchmainwindow.ui \
    login.ui

RESOURCES += \
    image/im.qrc
