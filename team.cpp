#include "team.h"

using namespace std;

Team::Team()
{
    carteJeu_ = shared_ptr<CarteJeu> (new CarteJeu());
    //carteInit_ = shared_ptr<CarteInit>(new CarteInit(new AffichageInit()));
}

shared_ptr<Carte> Team::getCarteJeu(){
    return carteJeu_;
}

shared_ptr<Carte> Team::getCarteInit(){
    return carteInit_;
}
