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

    if(!res)
    {
        aff_->setImageChgmtTour();
        //if()
    }

    for(Bateau *b : tabBateaux_){
        if(b->estCoule()){
            enleverBateau(b);
            cout << "Bateau coulé !" << endl;
        }
    }
}
