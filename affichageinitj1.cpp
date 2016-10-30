#include "affichageinitj1.h"

using namespace std;

AffichageInitJ1::AffichageInitJ1(Core* c)
{
    core_ = shared_ptr<Core>(c);

    updateElements("Joueur 1", "Au tour du Joueur 2");
    QObject::connect(boutonSuivant_, SIGNAL(clicked()), this, SLOT(clicBouton()));
    //QObject::connect(reset_, SIGNAL(clicked()), this, SLOT(resetCarteInit()));
}

void AffichageInitJ1::afficher(){
    this->setMinimumSize(1000,580);
    this->setMaximumSize(1000,580);
    this->setWindowTitle("Initialisation");
    this->setLayout(gLayoutCentral_);

    this->show();
}

void AffichageInitJ1::clicBouton(){
    bool allPlaced = b4_->text().toStdString() == "x0"
                  && b3_->text().toStdString() == "x0"
                  && b2_->text().toStdString() == "x0"
                  && b1_->text().toStdString() == "x0";

    if(pseudo_->text() == "")
        QMessageBox::warning(this, "Erreur pseudo","Veuillez entrer un pseudo !");
    else if(!allPlaced)
        QMessageBox::warning(this, "Ce n'est pas encore l'heure de jouer", "Il reste encore des bateaux à placer !");
    else
        changeToInitialisationJ2();
}

void AffichageInitJ1::resetCarteInit(){
    carteInit_->reset();
    resetBouton();
}

void AffichageInitJ1::changeToMenu(){}
void AffichageInitJ1::changeToInitialisationJ1(){}
void AffichageInitJ1::changeToInitialisationJ2(){
    core_->changeAffichageToInitJ2();
}
void AffichageInitJ1::changeToJeu(){}





