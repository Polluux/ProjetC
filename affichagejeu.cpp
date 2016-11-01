#include "affichagejeu.h"

using namespace std;

AffichageJeu::AffichageJeu(Core* c) : IAffichage()
{
    core_ = shared_ptr<Core>(c);
    layout_ = new QGridLayout;
    carteJeuT1_ = shared_ptr<CarteJeu>(new CarteJeu());
    carteJeuT2_ = shared_ptr<CarteJeu>(new CarteJeu());
}


void AffichageJeu::updateElements(){
    shared_ptr<Carte> cIniJ1 = core_->getTeam1()->getCarteInit();
    shared_ptr<Carte> cIniJ2 = core_->getTeam2()->getCarteInit();

    vector<Bateau*> batJ1 = cIniJ1->getTabBateau();
    vector<Bateau*> batJ2 = cIniJ2->getTabBateau();

    for(Bateau *b : batJ1)
        carteJeuT1_->ajouterBateau(b);

    for(Bateau *b : batJ2)
        carteJeuT2_->ajouterBateau(b);

    for(Case *c : carteJeuT1_->getTabCase())
        c->setIconSize(QSize(0,0));

    for(Case *c : carteJeuT2_->getTabCase())
        c->setIconSize(QSize(0,0));

    addContent(&*/*core_->getTeam1()->getCarteInit()*/carteJeuT1_,0,0);
    addContent(&*/*core_->getTeam2()->getCarteInit()*/carteJeuT2_,0,1);
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
