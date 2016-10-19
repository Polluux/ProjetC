#include "core.h"
#include <cstddef>
#include "iaffichage.h"
#include "affichagejeu.h"
#include <memory>
#include <iostream>

using namespace std;

Core::Core()
{
    mode2_ = (nullptr);
    affJeu_ = shared_ptr<AffichageJeu> (new AffichageJeu(this));
    changeAffichageToJeu();



    Team* t1 = new Team();
    Team* t2 = new Team();
    team1_ = shared_ptr<Team>(t1);
    team2_ = shared_ptr<Team>(t2);
}

void Core::changeMode(CompMode *mode){
    mode2_ = shared_ptr<CompMode> (mode);
}

void Core::changeAffichageToJeu(){
    affichageActif_ = affJeu_;
}

bool Core::start(){
    if(mode2_ != nullptr){
        return true;
    }else{
        return false;
    }
}

void Core::afficher(){
    affichageActif_->afficher();
}

shared_ptr<Team> Core::getTeam1(){
    return team1_;
}

shared_ptr<Team> Core::getTeam2(){
    return team2_;
}

Core::~Core(){}
