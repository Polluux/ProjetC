#include "affichagejeu.h"

using namespace std;

AffichageJeu::AffichageJeu(Core* c) : IAffichage()
{
    core_ = shared_ptr<Core>(c);
    layout_ = new QGridLayout;
    carteJeuT1_ = shared_ptr<CarteJeu>(new CarteJeu(this));
    carteJeuT2_ = shared_ptr<CarteJeu>(new CarteJeu(this));
    core_->getTeam1()->setIsTurn(true);
    for(Case *c : carteJeuT1_->getTabCase())
        c->setEnabled(false);
}

void AffichageJeu::updateElements(){
    QVector<shared_ptr<Bateau> > batJ1 = core_->getTeam1()->getCarteInit()->getTabBateau();
    QVector<shared_ptr<Bateau> > batJ2 = core_->getTeam2()->getCarteInit()->getTabBateau();

    for(shared_ptr<Bateau> b : batJ1)
        carteJeuT1_->ajouterBateau(b);

    for(shared_ptr<Bateau> b : batJ2)
        carteJeuT2_->ajouterBateau(b);

    for(Case *c : carteJeuT1_->getTabCase())
        c->setIconSize(QSize(0,0));

    for(Case *c : carteJeuT2_->getTabCase())
        c->setIconSize(QSize(0,0));

    QLabel *pseudoJ1 = new QLabel;
    QLabel *pseudoJ2 = new QLabel;

    pseudoJ1->setText(QString::fromStdString(core_->getTeam1()->getPseudo()));
    QFont fontP = pseudoJ1->font();
    fontP.setPointSize(18);
    pseudoJ1->setFont(fontP);

    pseudoJ2->setText(QString::fromStdString(core_->getTeam2()->getPseudo()));
    QFont fontP2 = pseudoJ2->font();
    fontP2.setPointSize(18);
    pseudoJ2->setFont(fontP2);

    layout_->addWidget(pseudoJ1,0,0,Qt::AlignCenter);
    layout_->addWidget(pseudoJ2,0,2,Qt::AlignCenter);
    addContent(&*carteJeuT1_,1,0);

    labelChgmtTour_ = new QLabel;
    triangleTour_ = QPixmap("fonts/triangle_tour.png");
    labelChgmtTour_->setPixmap(triangleTour_.scaled(50,50,Qt::KeepAspectRatio));
    layout_->addWidget(labelChgmtTour_,1,1);

    addContent(&*carteJeuT2_,1,2);
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

void AffichageJeu::setImageChgmtTour(){
    triangleTour_ = triangleTour_.transformed(QMatrix().rotate(180));
    labelChgmtTour_->setPixmap(triangleTour_.scaled(50,50,Qt::KeepAspectRatio));
}

std::shared_ptr<Carte> AffichageJeu::getCarteJeuT1(){
    return carteJeuT1_;
}

std::shared_ptr<Carte> AffichageJeu::getCarteJeuT2(){
    return carteJeuT2_;
}

void AffichageJeu::changeToMenu(){}
void AffichageJeu::changeToInitialisationJ1(){}
void AffichageJeu::changeToInitialisationJ2(){}
void AffichageJeu::changeToJeu(){}
