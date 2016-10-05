#include "case.h"

using namespace std;

Case::Case(const QString& str, QWidget* parent, int x, int y, QString color) : QPushButton(str, parent)
{
    m_touche = false;
    m_abs = x;
    m_ord = y;
    this->setStyleSheet("background-color:"+ color +";");
}

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
    if((m_abs == dx) && (m_abs == dy))
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

int Case::getX()
{
    return m_abs;
}

int Case::getY()
{
    return m_ord;
}

void Case::toString()
{
    cout << "case en (" << m_abs  << ", " << m_ord << ")" << endl;
}

