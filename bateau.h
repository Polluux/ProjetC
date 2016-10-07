#ifndef BATEAU_H
#define BATEAU_H

#include "contenu.h"

class Bateau : public Contenu
{
    public:
        Bateau(int taille);
        void AbstractMemberFunction();
        bool Action();

        void setX(int x);
        void setY(int y);
        void setHorizontal(bool a);
        int getX();
        int getY();
        bool getHorizontal();
        int getTaille();

    private:
        int pvActuels_;
};

#endif // BATEAU_H
