QT += core
QT -= gui

CONFIG += c++11

TARGET = leetCode
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    src/sums.cpp

HEADERS += \
    include/interface.h
