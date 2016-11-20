#ifndef BATEAU_H
#define BATEAU_H

#include <iostream>

#include "contenu.h"
#include "case.h"

class Bateau : public Contenu
{
    public:
        Bateau(int taille);
        bool action(Case *c);

        void setX(int x);
        void setY(int y);
        void setHorizontal(bool a);
        int getX();
        int getY();
        bool getHorizontal();
        int getTaille();
        int getPvActuels();
        bool isEmpty();
        bool estCoule();
        bool estEgal(std::shared_ptr<Bateau> b);

        virtual ~Bateau();

    private:
        int pvActuels_;
};

#endif // BATEAU_H
