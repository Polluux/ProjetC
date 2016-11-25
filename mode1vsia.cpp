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
    shared_ptr<Carte> carteIA = shared_ptr<CarteInit>(new CarteInit(aff_));

    shared_ptr<BateauFactory> factory;

    factory = shared_ptr<FactoryCygne>(new FactoryCygne);
    shared_ptr<Bateau> b1 = factory->creerBateau();
    carteIA->ajouterBateau(b1);

    factory = shared_ptr<FactoryOie>(new FactoryOie);
    shared_ptr<Bateau> b2 = factory->creerBateau();
    b2->setY(1);
    carteIA->ajouterBateau(b2);

    factory = shared_ptr<FactoryOie>(new FactoryOie);
    shared_ptr<Bateau> b3 = factory->creerBateau();
    b3->setY(2);
    carteIA->ajouterBateau(b3);

    factory = shared_ptr<FactoryCanard>(new FactoryCanard);
    shared_ptr<Bateau> b4 = factory->creerBateau();
    b4->setY(3);
    carteIA->ajouterBateau(b4);

    factory = shared_ptr<FactoryCanard>(new FactoryCanard);
    shared_ptr<Bateau> b5 = factory->creerBateau();
    b5->setY(4);
    carteIA->ajouterBateau(b5);

    factory = shared_ptr<FactoryCanard>(new FactoryCanard);
    shared_ptr<Bateau> b6 = factory->creerBateau();
    b6->setY(5);
    carteIA->ajouterBateau(b6);

    factory = shared_ptr<FactoryCaneton>(new FactoryCaneton);
    shared_ptr<Bateau> b7 = factory->creerBateau();
    b7->setY(6);
    carteIA->ajouterBateau(b7);

    factory = shared_ptr<FactoryCaneton>(new FactoryCaneton);
    shared_ptr<Bateau> b8 = factory->creerBateau();
    b8->setY(7);
    carteIA->ajouterBateau(b8);

    factory = shared_ptr<FactoryCaneton>(new FactoryCaneton);
    shared_ptr<Bateau> b9 = factory->creerBateau();
    b9->setY(8);
    carteIA->ajouterBateau(b9);

    factory = shared_ptr<FactoryCaneton>(new FactoryCaneton);
    shared_ptr<Bateau> b10 = factory->creerBateau();
    b10->setY(9);
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
