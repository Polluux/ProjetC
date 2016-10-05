HEADERS += \
    compmode.h \
    mode1vs1.h \
    mode1vsia.h \
    core.h \
    bateau.h \
    canaill2eur.h \
    carte.h \
    case.h \
    croi1nard.h \
    esc3nard.h \
    fenetre.h \
    partie.h \
    porte4nard.h

SOURCES += \
    compmode.cpp \
    mode1vs1.cpp \
    maintest.cpp \
    mode1vsia.cpp \
    core.cpp \
    bateau.cpp \
    canaill2eur.cpp \
    carte.cpp \
    case.cpp \
    croi1nard.cpp \
    esc3nard.cpp \
    fenetre.cpp \
    main.cpp \
    partie.cpp \
    porte4nard.cpp

QMAKE_CXXFLAGS += -std=c++11
QT += widgets
