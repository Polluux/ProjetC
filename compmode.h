#ifndef COMPMODE_H
#define COMPMODE_H

#include <iostream>
#include <string>

class CompMode
{
    public:
        CompMode();

        virtual void getMode() = 0;
        virtual void initialiserJoueurs() = 0;
        virtual void initialiserCartes() = 0;
        virtual void lancer() = 0;
        virtual void arreter() = 0;
        virtual void checkFinis() = 0;
        virtual void debutTour() = 0;
        virtual void finTour() = 0;
        virtual void pret() = 0;

        virtual ~CompMode();
};

#endif // COMPMODE_H
