#include "mode1vsia.h"
#include "iaffichage.h"

using namespace std;

Mode1vsIA::Mode1vsIA() : CompMode()
{

}

void Mode1vsIA::getMode(){
    cout << "Je suis le mode 1vsIA" << endl;
}

void Mode1vsIA::initialiser(){
    //affichage->changeToInitJ1();
}
void Mode1vsIA::finInitJ1(){
    //Demerde toi init IA en tant que J2
    lancer();
}

void Mode1vsIA::setAffichage(shared_ptr<IAffichage> aff){
    aff_ = aff;
}

void Mode1vsIA::lancer(){
    aff_->changeToJeu();
}
void Mode1vsIA::arreter(){}
void Mode1vsIA::checkFinis(){}
void Mode1vsIA::debutTour(){}
void Mode1vsIA::finTour(){}
void Mode1vsIA::pret(){}

Mode1vsIA::~Mode1vsIA(){}
