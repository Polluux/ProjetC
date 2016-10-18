#include "bateau.h"

using namespace std;

Bateau::Bateau(int x, int y, bool h, int t) :
    m_nbElemTouche(0),
    m_horizontal(h), 
    m_taille(t)
{

    for(int i=0; i<m_taille; ++i)
    {
        // si le bateau est horizontal, il gardera 
        if(m_horizontal)
            m_bateau.push_back(Case(x, y+i, " V "));
        else
            m_bateau.push_back(Case(x+i, y, " V "));
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
    int res = 0;

    // on parcourt les éléments du bateau pour savoir 
    // si l'élément courant est touché
    for(int i=0; i<m_bateau.size(); ++i)
    {
        // on regarde si l'élément courant est touché (ou déjà touché)
        int r = m_bateau[i].toucher(dx, dy);

        if(r == 1)
        {
            res = 1;
            //++m_nbElemTouche;
        }
        else if(r == 2)
        {
            res = 2;
            ++m_nbElemTouche;
        }
    }

    if(m_nbElemTouche == m_taille)
        return 3;
    else
        return res;
}

vector<Case> Bateau::getBateau()
{
    return m_bateau;
} 

int Bateau::getTaille()
{
    return m_taille;
}

bool Bateau::getHorizontal()
{
    return m_horizontal;
}

int Bateau::getNbElemTouche()
{
    return m_nbElemTouche;
}

bool Bateau::estEgal(Bateau b)
{
    return m_bateau[0].getAbs() == b.getBateau()[0].getAbs() && 
           m_bateau[0].getOrd() == b.getBateau()[0].getOrd() && 
           m_horizontal == b.m_horizontal && 
           m_taille == b.m_taille;
}

void Bateau::toString()
{
    for(int i=0; i<m_taille; ++i)
    {
        m_bateau[i].toString();
    }       
}

void Bateau::setNbElemTouche(int e)
{
    m_nbElemTouche = e;
}
