#include "core.h"
#include <cstddef>
#include "affichage.h"

using namespace std;

Core::Core()
{
    mode2_ = (nullptr);
    Team* t1 = new Team();
    Team* t2 = new Team();
    team1_ = shared_ptr<Team>(t1);
    team2_ = shared_ptr<Team>(t2);

    affichage_ = shared_ptr<Affichage> (new Affichage);
    affichage_->addContent(&*team1_->getCarte(),0,0);
    affichage_->addContent(&*team2_->getCarte(),0,1);
}

void Core::changeMode(CompMode *mode){
    mode2_ = shared_ptr<CompMode> (mode);
}

bool Core::start(){
    if(mode2_ != nullptr){
        return true;
    }else{
        return false;
    }
}

void Core::afficher(){
    affichage_->afficher();
}

Core::~Core(){}
