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

    if(!res) // si on a touché de la mer
    {
        aff_->getCore()->getMode()->jouer();
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
