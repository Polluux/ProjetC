#ifndef BATEAUFACTORY_H
#define BATEAUFACTORY_H

#include "bateau.h"


class BateauFactory
{
    public:
        BateauFactory();

        virtual std::shared_ptr<Bateau> creerBateau() = 0;
};

#endif // BATEAUFACTORY_H
