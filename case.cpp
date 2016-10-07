#include "case.h"

using namespace std;

Case::Case(const QString& str, QWidget* parent, int x, int y, QString color) : QPushButton(str, parent)
{
    hit_ = false;
    x_ = x;
    y_ = y;
    this->setStyleSheet("background-color:"+ color +";");
}

bool Case::clic(){
    if(hit){
        cout << "Cette case à déjà été cliquée\n";
        return false
    }else{
        cout << "Clic de la case en (" << x_  << ", " << y_<< ")" << endl;
        hit_ = true;
        return true; // A changer par la suite, en rendant le résultat de contenu.action();
    }
}

/*
 * 0 : dans l'eau
 * 1 : touche un élément déjà touché
 * 2 : touche un élément pour la première fois
 * */
/*int Case::toucher(int dx, int dy)
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
}*/

int Case::getX()
{
    return x_;
}

int Case::getY()
{
    return y_;
}

void Case::toString()
{
    cout << "case en (" << x_  << ", " << y_<< ")" << endl;
}

