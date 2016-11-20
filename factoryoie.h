#ifndef FACTORYOIE_H
#define FACTORYOIE_H

#include "bateaufactory.h"
#include "oie.h"

class FactoryOie : public BateauFactory
{
    public:
        FactoryOie();

        std::shared_ptr<Bateau> creerBateau();
};

#endif // FACTORYOIE_H
