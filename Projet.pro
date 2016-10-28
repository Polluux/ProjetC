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
    affichagejeu.h \
    affichagemenu.h \
    carteinit.h \
    cartejeu.h \
    affichageinitj1.h \
    affichageinitj2.h \
    affichageinit.h

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
    affichagejeu.cpp \
    affichagemenu.cpp \
    carteinit.cpp \
    cartejeu.cpp \
    affichageinitj1.cpp \
    affichageinitj2.cpp \
    affichageinit.cpp

QMAKE_CXXFLAGS += -std=c++11
QT += widgets
