#include "core.h"
#include <cstddef>
#include "iaffichage.h"
#include "affichagejeu.h"
#include "affichagemenu.h"
#include <memory>
#include <iostream>

using namespace std;

Core::Core()
{
    mode2_ = (nullptr);
    affJeu_ = shared_ptr<AffichageJeu> (new AffichageJeu(this));
    affMen_ = shared_ptr<AffichageMenu> (new AffichageMenu(this));
    affichageActif_ = affMen_;
    //changeAffichageToMenu();

    team1_ = shared_ptr<Team>(new Team());
    team2_ = shared_ptr<Team>(new Team());
}

void Core::changeMode(CompMode *mode){
    mode2_ = shared_ptr<CompMode> (mode);
}

void Core::changeAffichageToJeu(){
    affichageActif_->hide();
    affichageActif_ = affJeu_;
}

void Core::changeAffichageToMenu(){
    affichageActif_->hide();
    affichageActif_ = affMen_;
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
