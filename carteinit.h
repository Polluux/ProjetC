#ifndef CARTEINIT_H
#define CARTEINIT_H

#include "carte.h"
//#include "affichageinitj1.h"
//class AffichageInitJ1;
//class AffichageInitJ2;
class AffichageInit;

class CarteInit : public Carte
{
    public:
        CarteInit(AffichageInit/*J1*/ *a);
        //CarteInit(AffichageInitJ2 *a);
        void actionBouton();

    private:
//        std::shared_ptr<AffichageInitJ1> affJ1_;
//        std::shared_ptr<AffichageInitJ2> affJ2_;
        std::shared_ptr<AffichageInit> aff_;
};

#endif // CARTEINIT_H
