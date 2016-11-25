#ifndef FACTORYCANARD_H
#define FACTORYCANARD_H

#include "bateaufactory.h"
#include "canard.h"

class FactoryCanard : public BateauFactory
{
    public:
        FactoryCanard();

        std::shared_ptr<Bateau> creerBateau();
};

#endif // FACTORYCANARD_H
