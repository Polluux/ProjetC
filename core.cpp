#include "core.h"

#include "iaffichage.h"
#include "affichagejeu.h"
#include "affichagemenu.h"
#include "affichageinitj1.h"
#include "affichageinitj2.h"

using namespace std;

Core::Core()
{
    team1_ = shared_ptr<Team>(new Team());
    team2_ = shared_ptr<Team>(new Team());

    affJeu_ = shared_ptr<AffichageJeu> (new AffichageJeu(this));
    affMen_ = shared_ptr<AffichageMenu> (new AffichageMenu(this));
    affIniJ1_ = shared_ptr<AffichageInitJ1> (new AffichageInitJ1(this));
    affIniJ2_ = shared_ptr<AffichageInitJ2> (new AffichageInitJ2(this));
    affichageActif_ = affMen_;
}

void Core::changeMode(CompMode *mode){
    mode_ = shared_ptr<CompMode> (mode);
    mode_->setAffichage(affichageActif_);
}

void Core::changeAffichageToJeu(){
    affichageActif_->hide();
    affichageActif_ = affJeu_;
    mode_->setAffichage(affichageActif_);
    affichageActif_->afficher();
}

void Core::changeAffichageToMenu(){
    affichageActif_->hide();
    affichageActif_ = affMen_;
    affichageActif_->afficher();
}

void Core::changeAffichageToInitJ1(){
    affichageActif_->hide();
    affichageActif_ = affIniJ1_;
    mode_->setAffichage(affichageActif_);
    affichageActif_->afficher();
}

void Core::changeAffichageToInitJ2(){
    affichageActif_->hide();
    affichageActif_ = affIniJ2_;
    mode_->setAffichage(affichageActif_);
    mode_->choixPourJ2();
}

void Core::finInitJ1(){
    mode_->finInitJ1();
}

void Core::finInitJ2(){
    mode_->lancer();
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
