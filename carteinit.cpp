#include "carteinit.h"

using namespace std;

CarteInit::CarteInit() : Carte()
{

}

void CarteInit::actionBouton()
{
    QObject *emetteur = sender();

    Case *bouton = dynamic_cast<Case*>(emetteur);

    int x = bouton->getX();
    int y = bouton->getY();

    Bateau *b = new Bateau(4);
    b->setX(x);
    b->setY(y);
    bool a = ajouterBateau(b);
}
