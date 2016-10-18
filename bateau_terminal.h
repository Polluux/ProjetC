#ifndef BATEAU_H
#define BATEAU_H

#include <vector>

#include "case.h"

class Bateau
{
    public:
        Bateau(int x, int y, bool h, int t);
        int toucher(int dx, int dy);
        std::vector<Case> getBateau();
        int getTaille();
        bool getHorizontal();
        int getNbElemTouche();
        bool estEgal(Bateau b);
        void toString();

        void setNbElemTouche(int);

    private:
        int m_taille;
        int m_nbElemTouche;
        bool m_horizontal;
        std::vector<Case> m_bateau;
};

#endif // BATEAU_H
