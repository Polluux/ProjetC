#include "team.h"

using namespace std;

Team::Team()
{
    CarteJeu* c = new CarteJeu();
    carte_ = shared_ptr<Carte> (c);
    Bateau *b = new Bateau(3);
    b->setX(2);
    b->setY(3);

    Bateau *b1 = new Bateau(3);
    b1->setHorizontal(true);
    b1->setX(7);
    b1->setY(7);

    c->ajouterBateau(b);
    c->ajouterBateau(b1);

}

shared_ptr<Carte> Team::getCarte(){
    return carte_;
}
