#include "affichagejeu.h"

using namespace std;

AffichageJeu::AffichageJeu(Core* c) : IAffichage()
{
    core_ = shared_ptr<Core>(c);
    layout_ = new QGridLayout;
}


void AffichageJeu::updateElements(){
    shared_ptr<Team> team1 = core_->getTeam1();
    shared_ptr<Team> team2 = core_->getTeam2();
    layout_->addWidget(&*team1->getCarteInit(),0,0);
    layout_->addWidget(&*team2->getCarteInit(),0,1);
    this->setLayout(layout_);
    this->setWindowTitle("Jeu !!");
}

void AffichageJeu::afficher(){
    updateElements();
    this->show();
}

void AffichageJeu::addContent(QWidget* c, int x, int y){
    layout_->addWidget(c,x,y);
}

void AffichageJeu::changeToMenu(){}
void AffichageJeu::changeToInitialisationJ1(){}
void AffichageJeu::changeToInitialisationJ2(){}
void AffichageJeu::changeToJeu(){}
