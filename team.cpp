#include "team.h"

using namespace std;

Team::Team()
{
    //CarteJeu* c = new CarteJeu();
    //CarteInit cI = new carteInit();
    carteJeu_ = shared_ptr<CarteJeu> (new CarteJeu());
    //carteInit_ = shared_ptr<CarteInit>(new CarteInit());

    //partie_ = shared_ptr<Core>(new Core(new Mode1vs1()));

    /* Ceci est fait dans la partie initialisation
     * on a juste à récupérer la carteInit de chaque Team
     */
//    Bateau *b = new Bateau(3);
//    b->setX(2);
//    b->setY(3);

//    Bateau *b1 = new Bateau(3);
//    b1->setHorizontal(true);
//    b1->setX(7);
//    b1->setY(7);
//    carteJeu_->ajouterBateau(b);
//    carteJeu_->ajouterBateau(b1);
}

shared_ptr<Carte> Team::getCarte(){
    return carteJeu_;
}

shared_ptr<Carte> Team::getCarteInit(){
    return carteInit_;
}
