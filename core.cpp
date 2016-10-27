#include "core.h"

#include "iaffichage.h"
#include "affichagejeu.h"
#include "affichagemenu.h"
#include "affichageinit.h"

using namespace std;

Core::Core(CompMode* c)
{
    mode_ = shared_ptr<CompMode> (c);
    affJeu_ = shared_ptr<AffichageJeu> (new AffichageJeu(this));
    affMen_ = shared_ptr<AffichageMenu> (new AffichageMenu(this));
    affIni_ = shared_ptr<AffichageInit> (new AffichageInit(this, "Joueur 1"));
    affichageActif_ = affMen_;

    team1_ = shared_ptr<Team>(new Team());
    team2_ = shared_ptr<Team>(new Team());
}

void Core::changeMode(CompMode *mode){
    mode_ = shared_ptr<CompMode> (mode);
}

void Core::changeAffichageToJeu(){
    affichageActif_->hide();
    affichageActif_ = affJeu_;
    affichageActif_->afficher();
}

void Core::changeAffichageToMenu(){
    affichageActif_->hide();
    affichageActif_ = affMen_;
    affichageActif_->afficher();
}

void Core::changeAffichageToInit(){
    affichageActif_->hide();
    affichageActif_ = affIni_;
    affichageActif_->afficher();
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
