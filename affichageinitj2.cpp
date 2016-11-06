#include "affichageinitj2.h"

using namespace std;

AffichageInitJ2::AffichageInitJ2(Core* c)
{
    core_ = shared_ptr<Core>(c);

    updateElements("Go !!!!");
    QObject::connect(boutonSuivant_, SIGNAL(clicked()), this, SLOT(clicBouton()));
    //QObject::connect(reset_, SIGNAL(clicked()), this, SLOT(resetCarteInit()));
}

void AffichageInitJ2::afficher(){
    this->setMinimumSize(1000,580);
    this->setMaximumSize(1000,580);
    this->setWindowTitle("Initialisation J2");
    this->setLayout(gLayoutCentral_);

    this->show();
}

void AffichageInitJ2::clicBouton(){
    bool allPlaced = b4_->text().toStdString() == "x0"
                  && b3_->text().toStdString() == "x0"
                  && b2_->text().toStdString() == "x0"
                  && b1_->text().toStdString() == "x0";

    if(pseudo_->text().isEmpty())
        QMessageBox::warning(this, "Erreur pseudo","Veuillez entrer un pseudo !");
    else if(!allPlaced)
        QMessageBox::warning(this, "Ce n'est pas encore l'heure de jouer", "Il reste encore des bateaux à placer !");
    else
    {
        core_->getTeam2()->setCarteInit(carteInit_);
        core_->getTeam2()->setPseudo(pseudo_->text().toStdString());
        changeToJeu();
    }
}

void AffichageInitJ2::resetCarteInit(){
    carteInit_->reset();
    resetBouton();
}

void AffichageInitJ2::changeToMenu(){}
void AffichageInitJ2::changeToInitialisationJ1(){}
void AffichageInitJ2::changeToInitialisationJ2(){}
void AffichageInitJ2::changeToJeu(){
    core_->changeAffichageToJeu();
}
