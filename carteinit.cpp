#include "carteinit.h"

#include "affichageinit.h"

using namespace std;

CarteInit::CarteInit(AffichageInit *a) : Carte()
{
    aff_ = shared_ptr<AffichageInit>(a);
}

void CarteInit::actionBouton()
{
    QObject *emetteur = sender();

    Case *bouton = dynamic_cast<Case*>(emetteur);

    int x = bouton->getX();
    int y = bouton->getY();

    QRadioButton* bateauSelec = aff_->getBateauSelect();

    shared_ptr<Bateau> bateau = shared_ptr<Bateau>(new Bateau(0));

    if(bateauSelec == aff_->getB4()){
        factory = shared_ptr<FactoryCygne>(new FactoryCygne);
        bateau = factory->creerBateau();
    }
    else if(bateauSelec == aff_->getB3()){
        factory = shared_ptr<FactoryOie>(new FactoryOie);
        bateau = factory->creerBateau();
    }
    else if(bateauSelec == aff_->getB2()){
        factory = shared_ptr<FactoryCanard>(new FactoryCanard);
        bateau = factory->creerBateau();
    }
    else{
        factory = shared_ptr<FactoryCaneton>(new FactoryCaneton);
        bateau = factory->creerBateau();
    }

    string nb = bateauSelec->text().toStdString();

    bateau->setX(x);
    bateau->setY(y);

    if(aff_->hChecked())
        bateau->setHorizontal(true);

    if(nb != "x0" && ajouterBateau(bateau)){
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
    }
}







