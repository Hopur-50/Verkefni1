QT += core
QT -= gui

TARGET = verk1
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
interface.cpp \
ComputerScientist.cpp \
    datalayer.cpp \
    servicelayer.cpp

HEADERS += \
ComputerScientist.h \
interface.h \
    datalayer.h \
    servicelayer.h\
    Computer_Scientists.txt
