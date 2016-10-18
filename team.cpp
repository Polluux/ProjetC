#include "team.h"

Team::Team()
{
    Carte* c = new Carte();
    carte_ = shared_ptr<Carte> (c);
}

shared_ptr<Carte> Team::getCarte(){
    return carte_;
}
