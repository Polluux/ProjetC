#include "mode1vsia.h"
#include "iaffichage.h"
#include "core.h"
#include <time.h>

using namespace std;

Mode1vsIA::Mode1vsIA() : CompMode()
{
    srand (time(NULL));
}

void Mode1vsIA::getMode(){
    cout << "Je suis le mode 1vsIA" << endl;
}

void Mode1vsIA::initialiser(){
    shared_ptr<Carte> carteIA = shared_ptr<CarteInit>(new CarteInit(aff_));

    shared_ptr<BateauFactory> factory;

    factory = shared_ptr<FactoryCygne>(new FactoryCygne);
    shared_ptr<Bateau> b1 = factory->creerBateau();
   // carteIA->ajouterBateau(b1);

    factory = shared_ptr<FactoryOie>(new FactoryOie);
    shared_ptr<Bateau> b2 = factory->creerBateau();
    b2->setY(1);
    //carteIA->ajouterBateau(b2);

    shared_ptr<Bateau> b3 = factory->creerBateau();
    b3->setY(2);
   // carteIA->ajouterBateau(b3);

    factory = shared_ptr<FactoryCanard>(new FactoryCanard);
    shared_ptr<Bateau> b4 = factory->creerBateau();
    b4->setY(3);
    //carteIA->ajouterBateau(b4);

    shared_ptr<Bateau> b5 = factory->creerBateau();
    b5->setY(4);
    //carteIA->ajouterBateau(b5);

    shared_ptr<Bateau> b6 = factory->creerBateau();
    b6->setY(5);
    //carteIA->ajouterBateau(b6);

    factory = shared_ptr<FactoryCaneton>(new FactoryCaneton);
    shared_ptr<Bateau> b7 = factory->creerBateau();
    b7->setY(6);
    //carteIA->ajouterBateau(b7);

    shared_ptr<Bateau> b8 = factory->creerBateau();
    b8->setY(7);
    //carteIA->ajouterBateau(b8);

    shared_ptr<Bateau> b9 = factory->creerBateau();
    b9->setY(8);
    //carteIA->ajouterBateau(b9);

    shared_ptr<Bateau> b10 = factory->creerBateau();
    b10->setY(9);
    //carteIA->ajouterBateau(b10);

    QVector<shared_ptr<Bateau> > bs;
    bs.push_back(b1);
    bs.push_back(b2);
    bs.push_back(b3);
    bs.push_back(b4);
    bs.push_back(b5);
    bs.push_back(b6);
    bs.push_back(b7);
    bs.push_back(b8);
    bs.push_back(b9);
    bs.push_back(b10);
    int i = 0;

    do{
      bs.at(i)->setX(rand() % 10);
      bs.at(i)->setY(rand() % 10);
      if((rand() % 2) == 0){
          bs.at(i)->setHorizontal(true);
      }
      if(carteIA->ajouterBateau(bs.at(i))){
          ++i;
      }
    } while(i != 10);

    aff_->getCore()->getTeam2()->setCarteInit(carteIA);
    aff_->getCore()->getTeam2()->setCarteJeu(carteIA);
    aff_->getCore()->getTeam2()->setPseudo("IA très très facile");
}
void Mode1vsIA::finInitJ1(){
    aff_->changeToInitialisationJ2();
}

void Mode1vsIA::setAffichage(shared_ptr<IAffichage> aff){
    aff_ = aff;
}

void Mode1vsIA::lancer(){
    aff_->changeToJeu();
}

void Mode1vsIA::jouer(){
    QVector<Case*> cases = aff_->getCore()->getTeam1()->getCarteJeu()->getTabCase();
    int caseAlea;
    QVector<shared_ptr<Bateau> > bxT1 = aff_->getCore()->getTeam1()->getCarteJeu()->getTabBateau();

    do {
        do {
            caseAlea = rand() % 100;
        } while(casesTouchees_.contains(caseAlea));

        casesTouchees_.push_back(caseAlea);

        cases.at(caseAlea)->clic();

        if(cases.at(caseAlea)->getContent()->touche()){
            for(shared_ptr<Bateau> b : bxT1){
                if(b->estCoule() && b == cases.at(caseAlea)->getContent()){ //Si on tue 2 bateaux à suivre on va vouloir enleverBateau(b) d'un bateau déjà enlevé dans le meme appel de la fonction (sans reprendre le tableau des bateaux en vie)
                    aff_->getCore()->getTeam1()->getCarteJeu()->enleverBateau(b);
                }
            }
        }
    } while(cases.at(caseAlea)->getContent()->touche());
}

void Mode1vsIA::touche(){
    QVector<shared_ptr<Bateau> > bxIA = aff_->getCore()->getTeam2()->getCarteJeu()->getTabBateau();

    for(shared_ptr<Bateau> b : bxIA){
        if(b->estCoule()){
            aff_->getCore()->getTeam2()->getCarteJeu()->enleverBateau(b);
        }
    }
}

void Mode1vsIA::choixPourJ2(){
    initialiser();
    aff_->getCore()->finInitJ2();
}

Mode1vsIA::~Mode1vsIA(){}
