#include "affichageinit.h"

using namespace std;

AffichageInit::AffichageInit()
{

}

void AffichageInit::updateElements(string txtBt){
    gLayoutCentral_ = new QGridLayout;
    gLayoutGauche_ = new QGridLayout;
    gLayoutDroite_ = new QGridLayout;

    carteInit_ = shared_ptr<Carte>(new CarteInit(shared_ptr<AffichageInit>(this)));
    gLayoutGauche_->addWidget(&*carteInit_,0,0);

    QLabel *p = new QLabel;
    p->setMaximumHeight(100);
    p->setMinimumSize(200,100);
    p->setStyleSheet("background-color:green;");
    gLayoutGauche_->addWidget(p,1,0);

    pseudo_ = new QLineEdit;
    pseudo_->setMaximumSize(500,75);
    pseudo_->setMinimumSize(500,75);
    QFont fontP = pseudo_->font();
    fontP.setPointSize(18);
    pseudo_->setFont(fontP);
    pseudo_->setPlaceholderText("Entrez votre pseudo ici");

    gLayoutDroite_->addWidget(pseudo_,0,0,1,5,Qt::AlignCenter);

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

    labelCygne->setPixmap(cygne.scaled ( 90, 90, Qt::KeepAspectRatio));
    labelCygne2->setPixmap(cygne.scaled ( 90, 90, Qt::KeepAspectRatio));
    labelCygne3->setPixmap(cygne.scaled ( 90, 90, Qt::KeepAspectRatio));
    labelCygne4->setPixmap(cygne.scaled ( 90, 90, Qt::KeepAspectRatio));
    labelOie->setPixmap(oie.scaled ( 90, 90, Qt::KeepAspectRatio));
    labelOie2->setPixmap(oie.scaled ( 90, 90, Qt::KeepAspectRatio));
    labelOie3->setPixmap(oie.scaled ( 90, 90, Qt::KeepAspectRatio));
    labelCanard->setPixmap(canard.scaled ( 90, 90, Qt::KeepAspectRatio));
    labelCanard2->setPixmap(canard.scaled ( 90, 90, Qt::KeepAspectRatio));
    labelCaneton->setPixmap(caneton.scaled ( 90, 90, Qt::KeepAspectRatio));

    gLayoutDroite_->addWidget(b4_,1,0);
    gLayoutDroite_->addWidget(labelCygne,1,1);
    gLayoutDroite_->addWidget(labelCygne2,1,2);
    gLayoutDroite_->addWidget(labelCygne3,1,3);
    gLayoutDroite_->addWidget(labelCygne4,1,4,Qt::AlignLeft);

    gLayoutDroite_->addWidget(b3_,2,0);
    gLayoutDroite_->addWidget(labelOie,2,1);
    gLayoutDroite_->addWidget(labelOie2,2,2);
    gLayoutDroite_->addWidget(labelOie3,2,3);

    gLayoutDroite_->addWidget(b2_,3,0);
    gLayoutDroite_->addWidget(labelCanard,3,1);
    gLayoutDroite_->addWidget(labelCanard2,3,2);

    gLayoutDroite_->addWidget(b1_,4,0);
    gLayoutDroite_->addWidget(labelCaneton,4,1);

    horizontal_ = new QCheckBox("horizontal ?");
    gLayoutDroite_->addWidget(horizontal_,5,0);

    reset_ = new QPushButton("Reset");
    reset_->setMinimumSize(90,30);
    reset_->setMaximumSize(90,30);
    gLayoutDroite_->addWidget(reset_,5,1);

    boutonSuivant_ = new QPushButton(QString::fromStdString(txtBt));
    boutonSuivant_->setMaximumSize(200,75);
    boutonSuivant_->setMinimumSize(200,75);
    QFont fontB = boutonSuivant_->font();
    fontB.setPointSize(12);
    boutonSuivant_->setFont(fontB);
    boutonSuivant_->setShortcut(Qt::Key_Enter);//pour le enter du pad numerique
    boutonSuivant_->setShortcut(Qt::Key_Return);// pour le clavier alphabetique

    gLayoutDroite_->addWidget(boutonSuivant_,6,0,1,5,Qt::AlignCenter);

    gLayoutCentral_->addLayout(gLayoutGauche_,0,0);
    gLayoutCentral_->addLayout(gLayoutDroite_,0,1);
}

bool AffichageInit::hChecked(){
    return horizontal_->isChecked();
}

QRadioButton* AffichageInit::getBateauSelect(){
    if(b4_->isChecked())
        return b4_;
    else if(b3_->isChecked())
        return b3_;
    else if(b2_->isChecked())
        return b2_;
    else
        return b1_;
}

QRadioButton* AffichageInit::getB4(){
    return b4_;
}

QRadioButton* AffichageInit::getB3(){
    return b3_;
}

QRadioButton* AffichageInit::getB2(){
    return b2_;
}

QRadioButton* AffichageInit::getB1(){
    return b1_;
}

void AffichageInit::resetBouton(){
    b4_->setText("x1");
    b3_->setText("x2");
    b2_->setText("x3");
    b1_->setText("x4");

    b4_->setEnabled(true);
    b3_->setEnabled(true);
    b2_->setEnabled(true);
    b1_->setEnabled(true);
}
