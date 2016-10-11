#include <iostream>
#include <string>
#include "compmode.h"

using namespace std;

CompMode::CompMode()
{

}

void CompMode::getMode(){
    cout << "Je suis un mode normal" << endl;
}

void CompMode::initialiserJoueurs(){}
void CompMode::initialiserCartes(){}
void CompMode::lancer(){}
void CompMode::arreter(){}
void CompMode::checkFinis(){}
void CompMode::debutTour(){}
void CompMode::finTour(){}
void CompMode::pret(){}

CompMode::~CompMode(){}
