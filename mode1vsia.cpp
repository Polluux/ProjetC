#include "mode1vsia.h"
#include "iaffichage.h"
#include "core.h"

using namespace std;

Mode1vsIA::Mode1vsIA() : CompMode()
{

}

void Mode1vsIA::getMode(){
    cout << "Je suis le mode 1vsIA" << endl;
}

void Mode1vsIA::initialiser(){
    shared_ptr<Bateau> b1 = shared_ptr<Bateau>(new Bateau(4));
    shared_ptr<Bateau> b2 = shared_ptr<Bateau>(new Bateau(3));
    b2->setY(1);
    shared_ptr<Bateau> b3 = shared_ptr<Bateau>(new Bateau(3));
    b3->setY(2);
    shared_ptr<Bateau> b4 = shared_ptr<Bateau>(new Bateau(2));
    b4->setY(3);
    shared_ptr<Bateau> b5 = shared_ptr<Bateau>(new Bateau(2));
    b5->setY(4);
    shared_ptr<Bateau> b6 = shared_ptr<Bateau>(new Bateau(2));
    b6->setY(5);
    shared_ptr<Bateau> b7 = shared_ptr<Bateau>(new Bateau(1));
    b7->setY(6);
    shared_ptr<Bateau> b8 = shared_ptr<Bateau>(new Bateau(1));
    b8->setY(7);
    shared_ptr<Bateau> b9 = shared_ptr<Bateau>(new Bateau(1));
    b9->setY(8);
    shared_ptr<Bateau> b10 = shared_ptr<Bateau>(new Bateau(1));
    b10->setY(9);

    shared_ptr<Carte> carteIA = shared_ptr<CarteInit>(new CarteInit(aff_));

    carteIA->ajouterBateau(b1);
    carteIA->ajouterBateau(b2);
    carteIA->ajouterBateau(b3);
    carteIA->ajouterBateau(b4);
    carteIA->ajouterBateau(b5);
    carteIA->ajouterBateau(b6);
    carteIA->ajouterBateau(b7);
    carteIA->ajouterBateau(b8);
    carteIA->ajouterBateau(b9);
    carteIA->ajouterBateau(b10);

    aff_->getCore()->getTeam2()->setCarteInit(carteIA);
    aff_->getCore()->getTeam2()->setPseudo("IA très très facile");
}
void Mode1vsIA::finInitJ1(){
    aff_->changeToInitialisationJ2();
}

void Mode1vsIA::setAffichage(shared_ptr<IAffichage> aff){
    aff_ = aff;
}

void Mode1vsIA::lancer(){
    aff_->changeToJeu();
}
void Mode1vsIA::arreter(){}
void Mode1vsIA::checkFinis(){}
void Mode1vsIA::debutTour(){}
void Mode1vsIA::finTour(){}
void Mode1vsIA::pret(){}

void Mode1vsIA::choixPourJ2(){
    initialiser();
    aff_->getCore()->finInitJ2();
}

Mode1vsIA::~Mode1vsIA(){}
