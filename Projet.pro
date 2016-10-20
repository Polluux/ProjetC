HEADERS += \
    mode1vs1.h \
    mode1vsia.h \
    core.h \
    bateau.h \
    carte.h \
    case.h \
    contenu.h \
    compmode.h \
    mer.h \
    team.h \
    iaffichage.h \
    affichagejeu.h

SOURCES += \
    mode1vs1.cpp \
    maintest.cpp \
    mode1vsia.cpp \
    core.cpp \
    bateau.cpp \
    carte.cpp \
    case.cpp \
    contenu.cpp \
    compmode.cpp \
    mer.cpp \
    team.cpp \
    iaffichage.cpp \
    affichagejeu.cpp

QMAKE_CXXFLAGS += -std=c++11
QT += widgets
