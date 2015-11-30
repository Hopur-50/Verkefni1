QT += core
QT -= gui

TARGET = verk1
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
interface.cpp \
getinfo.cpp \
ComputerScientist.cpp \
    datalayer.cpp

HEADERS += \
ComputerScientist.h \
getinfo.h \
interface.h \
    datalayer.h
