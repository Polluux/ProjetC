#include "case.h"

using namespace std;

Case::Case(int x, int y, string s) : 
    m_touche(false),
    m_abs(x),
    m_ord(y),
    m_motif(s) 
{}

//bool Case::getTouche()
//{
//    return m_touche;
//}

/*
 * 0 : dans l'eau
 * 1 : touche un élément déjà touché
 * 2 : touche un élément pour la première fois
 * */
int Case::toucher(int dx, int dy)
{
    if((m_abs == dx) && (m_ord == dy))
    {
        if(m_touche)
            return 1;
        else
        {
            m_touche = true;
            return 2;
        }
    }
    else
        return 0;
}

int Case::getAbs()
{
    return m_abs;
}

int Case::getOrd()
{
    return m_ord;
}

void Case::setAbs(int x)
{
    m_abs = x;
}

void Case::setOrd(int y)
{
    m_ord = y;
}

string Case::getMotif()
{
    return m_motif;
}

void Case::setMotif(string m)
{
    m_motif = m;
}

bool Case::estEgale(Case c)
{
    return m_abs == c.m_abs &&
           m_ord == c.m_ord &&
           m_motif == c.m_motif;
}

void Case::toString()
{
    cout << "Case en (" << m_abs << ", " << m_ord << ")\n";
}