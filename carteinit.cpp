#include "carteinit.h"

#include "affichageinit.h"

//#include "affichageinitj1.h"
//#include "affichageinitj2.h"

using namespace std;

CarteInit::CarteInit(AffichageInit/*J1*/ *a) : Carte()
{
    aff_/*J1_*/ = shared_ptr<AffichageInit/*J1*/>(a);
}

//CarteInit::CarteInit(AffichageInitJ2 *a) : Carte()
//{
//    affJ2_ = shared_ptr<AffichageInitJ2>(a);
//}

void CarteInit::actionBouton()
{
    QObject *emetteur = sender();

    Case *bouton = dynamic_cast<Case*>(emetteur);

    int x = bouton->getX();
    int y = bouton->getY();

    int tailleB = 0;

    if(aff_/*J1_*/->b1IsChecked())
        tailleB = 1;
    else if(aff_/*J1_*/->b2IsChecked())
        tailleB = 2;
    else if(aff_/*J1_*/->b3IsChecked())
        tailleB = 3;
    else
        tailleB = 4;

    Bateau *b = new Bateau(tailleB);
    b->setX(x);
    b->setY(y);

    if(aff_/*J1_*/->hChecked())
        b->setHorizontal(true);

    ajouterBateau(b);
}

