#include "carteinit.h"

#include "affichageinit.h"


using namespace std;

CarteInit::CarteInit(AffichageInit *a) : Carte()
{
    aff_ = shared_ptr<AffichageInit>(a);

//    for(Case* c : m_tabCase)
//        c->setStyleSheet("background-color:blue;outline: none");
}

void CarteInit::actionBouton()
{
    QObject *emetteur = sender();

    Case *bouton = dynamic_cast<Case*>(emetteur);

    int x = bouton->getX();
    int y = bouton->getY();

    int tailleB = 0;

    QRadioButton* bateauSelec = aff_->getBateauSelect();

    if(bateauSelec == aff_->getB4())
        tailleB = 4;
    else if(bateauSelec == aff_->getB3())
        tailleB = 3;
    else if(bateauSelec == aff_->getB2())
        tailleB = 2;
    else
        tailleB = 1;

    string nb = bateauSelec->text().toStdString();

    Bateau *b = new Bateau(tailleB);
    b->setX(x);
    b->setY(y);

    if(aff_->hChecked())
        b->setHorizontal(true);

    if(nb != "x0"){
        if(nb == "x4")
            bateauSelec->setText("x3");
        else if(nb == "x3")
            bateauSelec->setText("x2");
        else if(nb == "x2")
            bateauSelec->setText("x1");
        else
        {
            bateauSelec->setText("x0");
            bateauSelec->setEnabled(false);
        }

        ajouterBateau(b);
    }
}


