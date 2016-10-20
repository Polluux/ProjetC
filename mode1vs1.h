#ifndef MODE1VS1_H
#define MODE1VS1_H

#include "compmode.h"

class Mode1vs1 : public CompMode
{
public:
    Mode1vs1();
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

    ~Mode1vs1();
};

#endif // MODE1VS1_H