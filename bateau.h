#ifndef BATEAU_H
#define BATEAU_H

#include "case.h"

class Carte;
class Bateau
{
    public:
        Bateau(int x, int y, bool horizontal, int t, Carte *parent);
        int toucher(int dx, int dy);

    private:
        int m_taille;
        bool m_horizontal;
        std::vector<Case*> m_tabCases;
        Carte *m_parent;
};

#endif // BATEAU_H
