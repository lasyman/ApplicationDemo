#-------------------------------------------------
#
# Project created by QtCreator 2017-05-05T09:46:10
#
#-------------------------------------------------

QT       += widgets sql

QT       -= gui

TARGET = AuthModule
TEMPLATE = lib

DEFINES += AUTHMODULE_LIBRARY

SOURCES += authmodule.cpp \
    authwidget.cpp

HEADERS += authmodule.h\
        authmodule_global.h \
    authwidget.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

FORMS += \
    authwidget.ui

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
}else{
    CONFIG -= debug
    DESTDIR= $$PWD/../../bin/release
}
