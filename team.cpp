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
