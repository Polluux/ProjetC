#include "cartejeu.h"

using namespace std;

CarteJeu::CarteJeu() : Carte()
{

}

void CarteJeu::actionBouton()
{
    QObject *emetteur = sender();

    Case *bouton = dynamic_cast<Case*>(emetteur);

    bool res = bouton->clic();
    //Passage de main au joueur suivant si false sinon ... on continue

    for(Bateau *b : tabBateaux_){
        if(b->estCoule()){
            enleverBateau(b);
            cout << "Bateau coulé !" << endl;
        }
    }
}
