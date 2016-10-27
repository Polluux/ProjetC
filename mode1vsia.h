#ifndef MODE1VSIA_H
#define MODE1VSIA_H

#include <iostream>
#include <string>

#include "compmode.h"

class Mode1vsIA : public CompMode
{
    public:
        Mode1vsIA();
        void AbstractMemberFunction();
        void getMode();

        void initialiserJoueurs();
        void initialiserCartes();
        void lancer();
        void arreter();
        void checkFinis();
        void debutTour();
        void finTour();
        void pret();

        ~Mode1vsIA();
};

#endif // MODE1VSIA_H
