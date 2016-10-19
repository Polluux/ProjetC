#include "team.h"

Team::Team()
{
    Carte* c = new Carte();
    carte_ = shared_ptr<Carte> (c);
    Bateau *b = new Bateau(3);
    b->setX(2);
    b->setY(3);
    c->ajouterBateau(b);
}

shared_ptr<Carte> Team::getCarte(){
    return carte_;
}
