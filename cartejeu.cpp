#include "cartejeu.h"

#include "affichagejeu.h"

using namespace std;

CarteJeu::CarteJeu(AffichageJeu *a) : Carte()
{
    aff_ = shared_ptr<AffichageJeu>(a);
}

void CarteJeu::actionBouton()
{
    QObject *emetteur = sender();

    Case *bouton = dynamic_cast<Case*>(emetteur);

    bool res = bouton->clic();
    //Passage de main au joueur suivant si false sinon ... on continue

    bool tourJ1 = aff_->getCore()->getTeam1()->getIsTurn();

    if(!res)
    {
        if(tourJ1){
            aff_->getCore()->getTeam1()->setIsTurn(false);
            aff_->getCore()->getTeam2()->setIsTurn(true);
            for(Case *c : aff_->getCarteJeuT1()->getTabCase())
                c->setEnabled(true);
            for(Case *c : aff_->getCarteJeuT2()->getTabCase())
                c->setEnabled(false);
            aff_->setImageChgmtTour();
        }
        else{
            aff_->getCore()->getTeam1()->setIsTurn(true);
            aff_->getCore()->getTeam2()->setIsTurn(false);
            for(Case *c : aff_->getCarteJeuT1()->getTabCase())
                c->setEnabled(false);
            for(Case *c : aff_->getCarteJeuT2()->getTabCase())
                c->setEnabled(true);
            aff_->setImageChgmtTour();
        }
    }

    for(shared_ptr<Bateau> b : tabBateaux_){
        if(b->estCoule()){
            enleverBateau(b);
        }
    }

    string pseudoJ1 = aff_->getCore()->getTeam1()->getPseudo();
    string pseudoJ2 = aff_->getCore()->getTeam2()->getPseudo();

    if(aff_->getCarteJeuT1()->getTabBateau().empty())
    {
        QMessageBox::information(this, "Fin", QString::fromStdString(pseudoJ2 + " GAGNE !"));
        aff_->close();
    }
    else if(aff_->getCarteJeuT2()->getTabBateau().empty())
    {
        QMessageBox::information(this, "Fin", QString::fromStdString(pseudoJ1 + " GAGNE !"));
        aff_->close();
    }
}
