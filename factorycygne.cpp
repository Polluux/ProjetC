#include "factorycygne.h"

using namespace std;

FactoryCygne::FactoryCygne() : BateauFactory()
{

}

shared_ptr<Bateau> FactoryCygne::creerBateau(){
    return shared_ptr<Cygne>(new Cygne());
}
