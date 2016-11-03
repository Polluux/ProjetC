#ifndef CARTEINIT_H
#define CARTEINIT_H

#include "carte.h"

class AffichageInit;

class CarteInit : public Carte
{
    public:
        CarteInit(AffichageInit *a);
        void actionBouton();

    private:
        std::shared_ptr<AffichageInit> aff_;
};

#endif // CARTEINIT_H
