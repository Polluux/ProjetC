#include "bateau.h"
#include <iostream>

using namespace std;

Bateau::Bateau(int taille): Contenu(){
    x_ = 0;
    y_ = 0;
    horizontal_ = false;
    taille_ = taille;
    pvActuels_ = taille;
}

bool Bateau::action(Case *c){
    cout << "Touché" << endl;
    c->setStyleSheet("background-color:red;outline: none");
    --pvActuels_;
    return true;
}

bool Bateau::isEmpty(){
    return false;
}

bool Bateau::estCoule(){
    return pvActuels_ == 0;
}

void Bateau::setX(int x){
    x_ = x;
}
void Bateau::setY(int y){
    y_ = y;
}
void Bateau::setHorizontal(bool a){
    horizontal_ = a;
}
int Bateau::getX(){
    return x_;
}
int Bateau::getY(){
    return y_;
}
bool Bateau::getHorizontal(){
    return horizontal_;
}
int Bateau::getTaille(){
    return taille_;
}

int Bateau::getPvActuels(){
    return pvActuels_;
}

bool Bateau::estEgal(Bateau *b)
{
    return x_ == b->x_ &&
           y_ == b->y_ &&
           horizontal_ == b->horizontal_ &&
           taille_ == b->taille_ &&
           pvActuels_ == b->pvActuels_;
}


Bateau::~Bateau(){}

