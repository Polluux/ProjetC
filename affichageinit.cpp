#include "affichageinit.h"
#include "QLabel"

AffichageInit::AffichageInit(Core* c) : IAffichage()
{
    core_ = shared_ptr<Core>(c);
}


void AffichageInit::afficher(){
    updateElements();
    this->show();
}

void AffichageInit::updateElements(){
    gLayoutCentral_ = new QGridLayout;
    gLayoutGauche_ = new QGridLayout;
    gLayoutDroite_ = new QGridLayout;


    //core_->getMode()->getActiveTeam()->getCarte()
    shared_ptr<Team> team1 = core_->getTeam1();
    gLayoutGauche_->addWidget(&*team1->getCarte(),0,0);

    QLabel *p = new QLabel;
    p->setMaximumHeight(100);
    p->setMinimumSize(200,100);
    p->setStyleSheet("background-color:green;");
    gLayoutGauche_->addWidget(p,1,0);


    QLabel *p1 = new QLabel;
    p1->setMinimumSize(200,75);
    p1->setMaximumSize(200,75);
    p1->setStyleSheet("background-color:orange;");

    QLabel *p2 = new QLabel;
    p2->setMinimumHeight(75);
    p2->setStyleSheet("background-color:green;");

    QLabel *p3 = new QLabel;
    p3->setMinimumSize(200,100);
    p3->setMaximumSize(200,100);
    p3->setStyleSheet("background-color:orange;");
    gLayoutDroite_->addWidget(p1);
    gLayoutDroite_->addWidget(p2);
    gLayoutDroite_->addWidget(p3);
    gLayoutDroite_->setHorizontalSpacing(0);
    gLayoutDroite_->setVerticalSpacing(0);


    gLayoutCentral_->addLayout(gLayoutGauche_,0,0);
    gLayoutCentral_->addLayout(gLayoutDroite_,0,1);


    this->setMinimumSize(200,200);
    this->setWindowTitle("Initialisation");
    this->setLayout(gLayoutCentral_);
}

void AffichageInit::changeToMenu(){}
void AffichageInit::changeToInitialisation(){}
void AffichageInit::changeToJeu(){}
