#-------------------------------------------------
#
# Project created by QtCreator 2017-05-05T09:14:47
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Demo
TEMPLATE = app

SOURCES += main.cpp\
        demo.cpp

HEADERS  += demo.h

FORMS    += demo.ui

INCLUDEPATH += ../AuthModule \
    ./GeneratedFiles \
    . \
    ./GeneratedFiles/debug

MOC_DIR += ./GeneratedFiles/debug
OBJECTS_DIR += debug

UI_DIR += ./GeneratedFiles
RCC_DIR += ./GeneratedFiles

CONFIG += debug_and_release
CONFIG += debug_and_release_target
CONFIG += c++11

CONFIG(debug, debug|release){
    CONFIG -= release
    DESTDIR= $$PWD/../../bin/debug
    LIBS += -L../../bin/debug \
            -lAuthModule
}else{
    CONFIG -= debug
    DESTDIR= $$PWD/../../bin/release
    LIBS += -L../../bin/release \
            -lAuthModule
}
