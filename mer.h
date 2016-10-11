#ifndef MER_H
#define MER_H

#include "contenu.h"

class Mer : public Contenu
{
    public:
        Mer();
        //void AbstractMemberFunction();
        bool Action();

        void setX(int x);
        void setY(int y);
        void setHorizontal(bool a);
        int getX();
        int getY();
        bool getHorizontal();
        int getTaille();

        ~Mer();

};

#endif // MER_H
