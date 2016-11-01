#ifndef CARTEJEU_H
#define CARTEJEU_H

#include "carte.h"

class CarteInit;

class CarteJeu : public Carte
{
    public:
        CarteJeu();
        void actionBouton();
};

#endif // CARTEJEU_H
