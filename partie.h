#ifndef PARTIE_H
#define PARTIE_H

#include "carte.h"

class Partie : public QWidget
{
    public:
        Partie();

    private:
        Carte *m_carte;
};

#endif // PARTIE_H
