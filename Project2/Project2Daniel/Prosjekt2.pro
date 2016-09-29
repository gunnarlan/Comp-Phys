TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    eigensolver.cpp \
    schrodinger.cpp \
    potential.cpp \
    harmonicoscillator.cpp

HEADERS += \
    eigensolver.h \
    schrodinger.h \
    potential.h \
    harmonicoscillator.h

LIBS += -lblas -llapack -larmadillo