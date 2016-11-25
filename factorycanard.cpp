#include "factorycanard.h"

using namespace std;

FactoryCanard::FactoryCanard() : BateauFactory()
{

}

shared_ptr<Bateau> FactoryCanard::creerBateau(){
    return shared_ptr<Canard>(new Canard());
}
