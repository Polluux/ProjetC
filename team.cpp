#include "team.h"

using namespace std;

Team::Team()
{
    pseudo_ = "";
    isMyTurn_ = false;
}

shared_ptr<Carte> Team::getCarteInit(){
    return carteInit_;
}

void Team::setCarteInit(Carte *c){
    carteInit_ = shared_ptr<Carte>(c);

//    for(Case *c : carteInit_->getTabCase()){
//        QObject::connect(c, SIGNAL(clicked()), carteInit_, SLOT(actionBouton()));
//    }

//    for(Case *c : affJeu_->getCarteJeu()->getTabCase()){
//        QObject::connect(c, SIGNAL(clicked()), team2_->getCarteInit(), SLOT(actionBouton()));
//    }
}

string Team::getPseudo(){
    return pseudo_;
}

void Team::setPseudo(string p){
    pseudo_ = p;
}

bool Team::getIsTurn(){
    return isMyTurn_;
}

void Team::setIsTurn(bool t){
    isMyTurn_ = t;
}



void Team::setCarteActive(std::shared_ptr<Carte> c){
    carteActive_ = c;
}

void Team::actionBouton(){
    //carteActive_->actionBouton();
}

shared_ptr<Carte> Team::getCarteJeu(){
    return carteJeu_;
}

void Team::setCarteJeu(std::shared_ptr<Carte> c){
    carteJeu_ = shared_ptr<Carte>(c);
}

shared_ptr<Carte> Team::getCarteActive(){
    return carteActive_;
}



