#ifndef COMPMODE_H
#define COMPMODE_H

#include <iostream>
#include <memory>
#include <string>

#include "iaffichage.h"

//class Core;

using namespace std;

class CompMode
{
    public:
        CompMode();

        virtual void getMode() = 0;
        virtual void initialiser() = 0;
        virtual void finInitJ1() = 0;
        virtual void lancer() = 0;
        virtual void arreter() = 0;
        virtual void checkFinis() = 0;
        virtual void debutTour() = 0;
        virtual void finTour() = 0;
        virtual void pret() = 0;
        virtual void setAffichage(shared_ptr<IAffichage> aff) = 0;

        virtual ~CompMode();

    protected:
        //std::shared_ptr<Core> c;
        shared_ptr<IAffichage> aff_;
};

#endif // COMPMODE_H
