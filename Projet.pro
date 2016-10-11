HEADERS += \
    mode1vs1.h \
    mode1vsia.h \
    core.h \
    bateau.h \
    carte.h \
    case.h \
    partie.h \
    contenu.h \
    compmode.h \
    mer.h

SOURCES += \
    mode1vs1.cpp \
    maintest.cpp \
    mode1vsia.cpp \
    core.cpp \
    bateau.cpp \
    carte.cpp \
    case.cpp \
    partie.cpp \
    contenu.cpp \
    compmode.cpp \
    mer.cpp

QMAKE_CXXFLAGS += -std=c++11
QT += widgets
