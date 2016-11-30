#include "mer.h"

using namespace std;

Mer::Mer(): Contenu(){
    x_ = 0;
    y_ = 0;
    horizontal_ = false;
    taille_ = 1;
}

bool Mer::action(Case *c){
    c->setStyleSheet("background-color:blue;outline: none");
    return false;
}

bool Mer::touche(){
    return false;
}

bool Mer::estCoule(){
    return false;
}

bool Mer::isEmpty(){
    return true;
}

void Mer::setX(int x){
    x_ = x;
}
void Mer::setY(int y){
    y_ = y;
}
void Mer::setHorizontal(bool a){
    horizontal_ = a;
}
int Mer::getX(){
    return x_;
}
int Mer::getY(){
    return y_;
}
bool Mer::getHorizontal(){
    return horizontal_;
}
int Mer::getTaille(){
    return taille_;
}


Mer::~Mer(){}
