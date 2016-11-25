#include "joueur.h"

using namespace std;

Joueur::Joueur(string n)
{
    nom_ = n;
}

string Joueur::getNom(){
    return nom_;
}
