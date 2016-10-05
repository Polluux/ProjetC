#ifndef CANAILL2EUR_H
#define CANAILL2EUR_H

#include "bateau.h"
#include "carte.h"

class Canaill2eur : public Bateau
{
    public:
        Canaill2eur(int x, int y, bool horizontal, Carte *parent);
};

#endif // CANAILL2EUR_H
