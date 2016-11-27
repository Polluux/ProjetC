#ifndef FACTORYCANETON_H
#define FACTORYCANETON_H

#include "bateaufactory.h"
#include "caneton.h"

class FactoryCaneton : public BateauFactory
{
    public:
        FactoryCaneton();

        std::shared_ptr<Bateau> creerBateau();
};

#endif // FACTORYCANETON_H
