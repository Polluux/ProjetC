#include "bateau.h"

using namespace std;

Bateau::Bateau(int x, int y, bool horizontal, int t, Carte *parent)
{
    m_horizontal = horizontal;
    m_taille = t;
    m_parent = parent;

    for(int i=0; i<m_taille; ++i)
    {
        if(horizontal)
            m_tabCases.push_back(new Case("", m_parent, x+i, y, "green"));
        else
            m_tabCases.push_back(new Case("", m_parent, x, y+i, "green"));
    }
}

/*
 * 0 : dans l'eau
 * 1 : touche un élément déjà touché
 * 2 : touche un élément pour la première fois
 * 3 : bateau coulé
 * */
int Bateau::toucher(int dx, int dy)
{
    int cpt = 0;
    int res = 0;

    for(int i=0; i<m_tabCases.size(); ++i)
    {
        int r = m_tabCases[i]->toucher(dx, dy);

        if(r == 1)
        {
            res = 1;
            ++cpt;
        }
        else if(r == 2)
        {
            res = 2;
            ++cpt;
        }
    }
    if(cpt == m_taille)
    {
        return 3;
    }
    else
    {
        return res;
    }
}
