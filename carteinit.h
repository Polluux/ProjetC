#ifndef CARTEINIT_H
#define CARTEINIT_H

#include "carte.h"

class AffichageInit;
#include "iaffichage.h"

class CarteInit : public Carte
{
    public:
        CarteInit(std::shared_ptr<IAffichage> a);
        CarteInit(std::shared_ptr<AffichageInit> a);
        void actionBouton();

    private:
        //std::shared_ptr<IAffichage> aff_;
        std::shared_ptr<AffichageInit> aff_;
};

#endif // CARTEINIT_H
