#ifndef MODE1VS1_H
#define MODE1VS1_H

#include <iostream>
#include <string>

#include "compmode.h"

class Mode1vs1 : public CompMode
{
    public:
        Mode1vs1();
        void getMode();

        void initialiser();
        void lancer();
        void finInitJ1();
        void arreter();
        void checkFinis();
        void debutTour();
        void finTour();
        void pret();
        void setAffichage(shared_ptr<IAffichage> aff);

        void choixPourJ2();

        ~Mode1vs1();
};

#endif // MODE1VS1_H
