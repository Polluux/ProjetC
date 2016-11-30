#ifndef MER_H
#define MER_H

#include <iostream>

#include "contenu.h"
#include "case.h"

class Mer : public Contenu
{
    public:
        Mer();
        bool action(Case *c);

        void setX(int x);
        void setY(int y);
        void setHorizontal(bool a);
        int getX();
        int getY();
        bool getHorizontal();
        int getTaille();
        bool isEmpty();

        bool touche();
        bool estCoule();

        virtual ~Mer();

};

#endif // MER_H
