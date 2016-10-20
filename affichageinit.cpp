#include "affichageinit.h"
#include "QLabel"

AffichageInit::AffichageInit(Core* c) : IAffichage()
{
    core_ = shared_ptr<Core>(c);
    gLayoutCentral_ = new QGridLayout;
    gLayoutGauche_ = new QGridLayout;
    bLayoutDroite_ = new QVBoxLayout;


    gLayoutCentral_->addLayout(gLayoutGauche_,0,0,0,0);
    gLayoutCentral_->addLayout(bLayoutDroite_,0,1,0,0);


    this->setMinimumSize(200,200);
    this->setWindowTitle("Initialisation");
    this->setLayout(gLayoutCentral_);
}


void AffichageInit::afficher(){
    this->show();
}

void AffichageInit::changeToMenu(){}
void AffichageInit::changeToInitialisation(){}
void AffichageInit::changeToJeu(){}
