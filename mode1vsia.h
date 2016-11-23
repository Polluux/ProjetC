#ifndef MODE1VSIA_H
#define MODE1VSIA_H

#include <iostream>
#include <string>

#include "compmode.h"
#include "bateau.h"

#include "carteinit.h"

class Mode1vsIA : public CompMode
{
    public:
        Mode1vsIA();
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

        ~Mode1vsIA();
};

#endif // MODE1VSIA_H
