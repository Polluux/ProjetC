#include "mode1vs1.h"
#include "iaffichage.h"

using namespace std;

Mode1vs1::Mode1vs1() : CompMode()
{

}

void Mode1vs1::getMode(){
    cout << "Je suis le mode 1vs1" << endl;
}

void Mode1vs1::initialiser(){
    //affichage->ChangeToInitJ1();
}
void Mode1vs1::finInitJ1(){
    cout << "test3" << endl;
    aff_->changeToInitialisationJ2();
}

void Mode1vs1::setAffichage(shared_ptr<IAffichage> aff){
    aff_ = aff;
}

void Mode1vs1::lancer(){
    aff_->changeToJeu();
}
void Mode1vs1::arreter(){}
void Mode1vs1::checkFinis(){}
void Mode1vs1::debutTour(){}
void Mode1vs1::finTour(){}
void Mode1vs1::pret(){}

Mode1vs1::~Mode1vs1(){}
