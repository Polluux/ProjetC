#include "mode1vs1.h"
#include "iaffichage.h"
#include "core.h"

using namespace std;

Mode1vs1::Mode1vs1() : CompMode()
{

}

void Mode1vs1::getMode(){
    cout << "Je suis le mode 1vs1" << endl;
}

void Mode1vs1::initialiser(){

}
void Mode1vs1::finInitJ1(){
    aff_->changeToInitialisationJ2();
}

void Mode1vs1::setAffichage(shared_ptr<IAffichage> aff){
    aff_ = aff;
}

void Mode1vs1::lancer(){
    aff_->changeToJeu();
}

void Mode1vs1::jouer(){
    bool tourJ1 = aff_->getCore()->getTeam1()->getIsTurn();

    // si c'était au tour du joueur 1 et qu'il a touché de la mer
    if(tourJ1){
        aff_->getCore()->getTeam1()->setIsTurn(false);
        aff_->getCore()->getTeam2()->setIsTurn(true);
        for(Case *c : aff_->getCore()->getTeam1()->getCarteJeu()->getTabCase())
            c->setEnabled(true);
        for(Case *c : aff_->getCore()->getTeam2()->getCarteJeu()->getTabCase())
            c->setEnabled(false);
        //aff_->setImageChgmtTour();
        cout << "au tour du joueur 2" << endl;
    }
    else{
        aff_->getCore()->getTeam1()->setIsTurn(true);
        aff_->getCore()->getTeam2()->setIsTurn(false);
        for(Case *c : aff_->getCore()->getTeam1()->getCarteJeu()->getTabCase())
            c->setEnabled(false);
        for(Case *c : aff_->getCore()->getTeam2()->getCarteJeu()->getTabCase())
            c->setEnabled(true);
        //aff_->setImageChgmtTour();
        cout << "au tour du joueur 1" << endl;
    }
}

void Mode1vs1::choixPourJ2(){
    aff_->afficher();
}

Mode1vs1::~Mode1vs1(){}
