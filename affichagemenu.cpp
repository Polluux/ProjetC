#include "affichagemenu.h"
#include "QLabel"
#include "mode1vs1.h"

AffichageMenu::AffichageMenu(Core* c) : IAffichage()
{
    core_ = shared_ptr<Core>(c);
    gLayout_ = new QGridLayout;
    bLayout_ = new QVBoxLayout;

    QLabel *label = new QLabel;
    label->setText("Game");
    label->setAlignment(Qt::AlignCenter);
    gLayout_->addWidget(label,0,0,1,3);


    QPushButton *boutonQuitter = new QPushButton("Quitter");
    QPushButton *boutonMode1vs1 = new QPushButton("Mode Joueur\n contre Joueur");
    QObject::connect(boutonMode1vs1, SIGNAL(clicked()), this, SLOT(clicMode1vs1()));
    QPushButton *boutonMode1vsIA = new QPushButton("Mode Joueur\n contre IA");
    //QWidget::connect(boutonQuitter, SIGNAL(clicked()), &app, SLOT(quit()));
    gLayout_->addWidget(boutonMode1vs1,1,1); // Ajout du bouton
    gLayout_->addWidget(boutonMode1vsIA,2,1); // Ajout du bouton
    gLayout_->addWidget(boutonQuitter,4,1); // Ajout du bouton

   // bLayout_->addLayout(gLayout_);

    this->setMinimumWidth(200);
    this->setWindowTitle("Menu");
    this->setLayout(gLayout_);

}

void AffichageMenu::afficher(){
    this->show();
}

void AffichageMenu::clicMode1vs1(){
    cout << "test" << endl;
    core_->changeMode(new Mode1vs1());
    core_->changeAffichageToJeu();
    core_->afficher();
}

void AffichageMenu::changeToMenu(){}
void AffichageMenu::changeToInitialisation(){}
void AffichageMenu::changeToJeu(){}
