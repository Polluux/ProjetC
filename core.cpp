#include "core.h"

#include "iaffichage.h"
#include "affichagejeu.h"
#include "affichagemenu.h"
#include "affichageinitj1.h"
#include "affichageinitj2.h"

using namespace std;

Core::Core(CompMode* c)
{
    mode_ = shared_ptr<CompMode> (c);
    affJeu_ = shared_ptr<AffichageJeu> (new AffichageJeu(this));
    affMen_ = shared_ptr<AffichageMenu> (new AffichageMenu(this));
    affIniJ1_ = shared_ptr<AffichageInitJ1> (new AffichageInitJ1(this));
    affIniJ2_ = shared_ptr<AffichageInitJ2> (new AffichageInitJ2(this));
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

void Core::changeAffichageToInitJ1(){
    affichageActif_->hide();
    //affIniJ1_->b4IsChecked();
    affichageActif_ = affIniJ1_;
    affichageActif_->afficher();
}

void Core::changeAffichageToInitJ2(){
    affichageActif_->hide();
    affichageActif_ = affIniJ2_;
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

//void Core::initialiser(){
//    bool b4J1 = affIniJ1_->b4IsChecked();
//    bool b3J1 = affIniJ1_->b4IsChecked();
//    bool b2J1 = affIniJ1_->b4IsChecked();
//    bool b1J1 = affIniJ1_->b4IsChecked();

//    string nbB4J1 = affIniJ1_->nbRestantB4();
//    string nbB3J1 = affIniJ1_->nbRestantB3();
//    string nbB2J1 = affIniJ1_->nbRestantB2();
//    string nbB1J1 = affIniJ1_->nbRestantB1();

//    bool b4J2 = affIniJ2_->b4IsChecked();
//    bool b3J2 = affIniJ2_->b4IsChecked();
//    bool b2J2 = affIniJ2_->b4IsChecked();
//    bool b1J2 = affIniJ2_->b4IsChecked();

//    while(nbB4J1 != "x0" && nbB3J1 != "x0" && nbB2J1 != "x0" && nbB1J1 != "x0"){
//        if(b3J1)
//            team1_->getCarteInit()->ajouterBateau(new Bateau(3));
//    }

//}

//void Core::jouer(){

//}

Core::~Core(){}
