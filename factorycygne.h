#ifndef FACTORYCYGNE_H
#define FACTORYCYGNE_H

#include "bateaufactory.h"
#include "cygne.h"

#include <iostream>

class FactoryCygne : public BateauFactory
{
    public:
        FactoryCygne();

        std::shared_ptr<Bateau> creerBateau();
};

#endif // FACTORYCYGNE_H
