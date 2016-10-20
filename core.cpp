#include "core.h"
#include <cstddef>
#include "iaffichage.h"
#include "affichagejeu.h"
#include <memory>
#include <iostream>

using namespace std;


Core::Core(CompMode* c)
{
    mode_ = shared_ptr<CompMode> (c);
    affJeu_ = shared_ptr<AffichageJeu> (new AffichageJeu(this));
    changeAffichageToJeu();

    team1_ = shared_ptr<Team>(new Team());
    team2_ = shared_ptr<Team>(new Team());
}

void Core::afficherMode(){
    mode_->getMode();
}

void Core::changeMode(CompMode *mode){
    mode_ = shared_ptr<CompMode> (mode);
}

void Core::changeAffichageToJeu(){
    affichageActif_ = affJeu_;
}

bool Core::start(){
    if(mode_ != nullptr){
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
