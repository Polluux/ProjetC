#ifndef PORTE4NARD_H
#define PORTE4NARD_H

#include "bateau.h"

class Porte4nard: public Bateau
{
    public:
        Porte4nard(int x, int y, bool horizontal, Carte *parent);
};

#endif // PORTE4NARD_H
