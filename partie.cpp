#include "partie.h"

Partie::Partie() : QWidget()
{
    m_carte = new Carte();
    m_carte->ajouterBateau();
}
