HEADERS += \
    mode1vs1.h \
    mode1vsia.h \
    core.h \
    bateau.h \
    carte.h \
    case.h \
    fenetre.h \
    partie.h \
    contenu.h \
    compmode.h

SOURCES += \
    mode1vs1.cpp \
    maintest.cpp \
    mode1vsia.cpp \
    core.cpp \
    bateau.cpp \
    carte.cpp \
    case.cpp \
    fenetre.cpp \
    main.cpp \
    partie.cpp \
    contenu.cpp \
    compmode.cpp

QMAKE_CXXFLAGS += -std=c++11
QT += widgets
