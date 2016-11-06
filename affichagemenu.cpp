#include "affichagemenu.h"

using namespace std;

AffichageMenu::AffichageMenu(Core* c) : IAffichage()
{
    core_ = shared_ptr<Core>(c);
    gLayout_ = new QGridLayout;
    bLayout_ = new QVBoxLayout;

    QLabel *label = new QLabel;
    QPixmap pic("fonts/Title.jpg");
    label->setPixmap(pic.scaled ( 500, 100, Qt::KeepAspectRatio));
    label->setAlignment(Qt::AlignHCenter);
    gLayout_->addWidget(label,0,0,1,3);


    QPushButton *boutonMode1vs1 = new QPushButton("Mode Joueur\n contre Joueur");
    QObject::connect(boutonMode1vs1, SIGNAL(clicked()), this, SLOT(clicMode1vs1()));
    boutonMode1vs1->setStyleSheet("background-color:gray;outline: none;color:black;");

    QPushButton *boutonMode1vsIA = new QPushButton("Mode Joueur\n contre IA");
    boutonMode1vsIA->setStyleSheet("background-color:gray;outline: none");
    boutonMode1vsIA->setEnabled(false);

    QPushButton *boutonQuitter = new QPushButton("Quitter");
    boutonQuitter->setStyleSheet("background-color:gray;outline: none;color:black;");
    QWidget::connect(boutonQuitter, SIGNAL(clicked()), this, SLOT(close()));

    gLayout_->addWidget(boutonMode1vs1,1,1); // Ajout du bouton
    gLayout_->addWidget(boutonMode1vsIA,2,1); // Ajout du bouton
    gLayout_->addWidget(boutonQuitter,4,1); // Ajout du bouton

   // bLayout_->addLayout(gLayout_);

    this->setMinimumWidth(200);
    this->setWindowTitle("Menu");
    this->setStyleSheet("background-color:black;");
    this->setLayout(gLayout_);

}

void AffichageMenu::afficher(){
    this->show();
}

void AffichageMenu::clicMode1vs1(){
    core_->changeMode(new Mode1vs1());
    changeToInitialisationJ1();
}

void AffichageMenu::changeToMenu(){}
void AffichageMenu::changeToInitialisationJ1(){
    core_->changeAffichageToInitJ1();
}
void AffichageMenu::changeToInitialisationJ2(){}
void AffichageMenu::changeToJeu(){}
