#include "affichageinitj1.h"

using namespace std;

AffichageInitJ1::AffichageInitJ1(Core* c)
{
    core_ = shared_ptr<Core>(c);
}

void AffichageInitJ1::afficher(){
    updateElements();
    this->show();
}

void AffichageInitJ1::updateElements(){
    gLayoutCentral_ = new QGridLayout;
    gLayoutGauche_ = new QGridLayout;
    gLayoutDroite_ = new QGridLayout;

    carteInit_ = new CarteInit();
    gLayoutGauche_->addWidget(carteInit_,0,0);


    QLabel *p = new QLabel;
    p->setMaximumHeight(100);
    p->setMinimumSize(200,100);
    p->setStyleSheet("background-color:green;");
    gLayoutGauche_->addWidget(p,1,0);


    pseudo_ = new QLineEdit(QString::fromStdString("Joueur 1"));
    pseudo_->setMaximumSize(200,75);
    pseudo_->setMinimumSize(200,75);
    QFont fontP = pseudo_->font();
    fontP.setPointSize(18);
    pseudo_->setFont(fontP);
    pseudo_->setAlignment(Qt::AlignCenter);

    gLayoutDroite_->addWidget(pseudo_,0,3,1,6,Qt::AlignTop);

    b4_ = new QRadioButton("x1");
    b4_->setChecked(true);
    b3_ = new QRadioButton("x2");
    b2_ = new QRadioButton("x3");
    b1_ = new QRadioButton("x4");

    QLabel *labelCygne = new QLabel;
    QLabel *labelCygne2 = new QLabel;
    QLabel *labelCygne3 = new QLabel;
    QLabel *labelCygne4 = new QLabel;

    QLabel *labelOie = new QLabel;
    QLabel *labelOie2 = new QLabel;
    QLabel *labelOie3 = new QLabel;

    QLabel *labelCanard = new QLabel;
    QLabel *labelCanard2 = new QLabel;

    QLabel *labelCaneton = new QLabel;

    QPixmap cygne("fonts/cygne.jpg");
    QPixmap oie("fonts/oie.jpg");
    QPixmap canard("fonts/canard.jpg");
    QPixmap caneton("fonts/caneton.jpg");

    labelCygne->setPixmap(cygne.scaled ( 100, 100, Qt::KeepAspectRatio));
    labelCygne2->setPixmap(cygne.scaled ( 100, 100, Qt::KeepAspectRatio));
    labelCygne3->setPixmap(cygne.scaled ( 100, 100, Qt::KeepAspectRatio));
    labelCygne4->setPixmap(cygne.scaled ( 100, 100, Qt::KeepAspectRatio));
    labelOie->setPixmap(oie.scaled ( 100, 100, Qt::KeepAspectRatio));
    labelOie2->setPixmap(oie.scaled ( 100, 100, Qt::KeepAspectRatio));
    labelOie3->setPixmap(oie.scaled ( 100, 100, Qt::KeepAspectRatio));
    labelCanard->setPixmap(canard.scaled ( 100, 100, Qt::KeepAspectRatio));
    labelCanard2->setPixmap(canard.scaled ( 100, 100, Qt::KeepAspectRatio));
    labelCaneton->setPixmap(caneton.scaled ( 100, 100, Qt::KeepAspectRatio));

    gLayoutDroite_->addWidget(b4_,1,0);
    gLayoutDroite_->addWidget(labelCygne,1,2);
    gLayoutDroite_->addWidget(labelCygne2,1,3);
    gLayoutDroite_->addWidget(labelCygne3,1,4);
    gLayoutDroite_->addWidget(labelCygne4,1,5);

    gLayoutDroite_->addWidget(b3_,2,0);
    gLayoutDroite_->addWidget(labelOie,2,2);
    gLayoutDroite_->addWidget(labelOie2,2,3);
    gLayoutDroite_->addWidget(labelOie3,2,4);

    gLayoutDroite_->addWidget(b2_,3,0);
    gLayoutDroite_->addWidget(labelCanard,3,2);
    gLayoutDroite_->addWidget(labelCanard2,3,3);

    gLayoutDroite_->addWidget(b1_,4,0);
    gLayoutDroite_->addWidget(labelCaneton,4,2);

    /* sur le coté mettre chaque "bateau" (image) avec un RadioButton
     * cocher le bateau que l'on veut placer
     * après l'avoir placé, désactiver le radioButton
     */

    QCheckBox *horizontal = new QCheckBox("horizontal ?");
    gLayoutDroite_->addWidget(horizontal,5,0);

    QPushButton *boutonJeu = new QPushButton("Au tour du joueur 2");
    boutonJeu->setMaximumSize(200,75);
    boutonJeu->setMinimumSize(200,75);
    QObject::connect(boutonJeu, SIGNAL(clicked()), this, SLOT(clicBouton()));
    QFont fontB = boutonJeu->font();
    fontB.setPointSize(13);
    boutonJeu->setFont(fontB);

    gLayoutDroite_->addWidget(boutonJeu,6,3,1,6,Qt::AlignBottom);

    gLayoutCentral_->addLayout(gLayoutGauche_,0,0);
    gLayoutCentral_->addLayout(gLayoutDroite_,0,1);

    this->setMinimumSize(200,200);
    this->setWindowTitle("Initialisation");
    this->setLayout(gLayoutCentral_);
}

void AffichageInitJ1::clicBouton(){
    bool allPlaced = b4_->text().toStdString() == "x0"
                  && b3_->text().toStdString() == "x0"
                  && b2_->text().toStdString() == "x0"
                  && b1_->text().toStdString() == "x0";

    if(pseudo_->text() == "")
        QMessageBox::warning(this, "Erreur pseudo","Veuillez entrer un pseudo !");
    else if(!allPlaced)
    {
        QMessageBox::warning(this, "Ce n'est pas encore l'heure de jouer", "Il reste encore des bateaux à placer !");
//        b4_->setText("x0");
//        b3_->setText("x0");
//        b2_->setText("x0");
//        b1_->setText("x0");
    }
    else
        changeToInitialisationJ2();
}

bool AffichageInitJ1::b4IsChecked(){
    return b4_->isChecked();
}

bool AffichageInitJ1::b3IsChecked(){
    return b3_->isChecked();
}

bool AffichageInitJ1::b2IsChecked(){
    return b2_->isChecked();
}

bool AffichageInitJ1::b1IsChecked(){
    return b1_->isChecked();
}

string AffichageInitJ1::nbRestantB4(){
    return QString::fromStdString(b4_->text());
}

string AffichageInitJ1::nbRestantB3(){
    return QString::fromStdString(b3_->text());
}

string AffichageInitJ1::nbRestantB2(){
    return QString::fromStdString(b2_->text());
}

string AffichageInitJ1::nbRestantB1(){
    return QString::fromStdString(b1_->text());
}


void AffichageInitJ1::changeToMenu(){}
void AffichageInitJ1::changeToInitialisationJ1(){}
void AffichageInitJ1::changeToInitialisationJ2(){
    core_->changeAffichageToInitJ2();
}
void AffichageInitJ1::changeToJeu(){}





