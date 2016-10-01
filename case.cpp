#include "case.h"

using namespace std;

Case::Case(const QString& str, QWidget* parent, int x, int y) : QPushButton(str, parent)
{
    touche = false;
    abs = x;
    ord = y;
}

bool Case::getTouche()
{
    return touche;
}

void Case::toucher()
{
    touche = true;
}

void Case::toString()
{
    cout << "case en (" << abs  << ", " << ord << ")" << endl;
}

