#include "factorycaneton.h"

using namespace std;

FactoryCaneton::FactoryCaneton() : BateauFactory()
{

}

shared_ptr<Bateau> FactoryCaneton::creerBateau(){
    return shared_ptr<Caneton>(new Caneton());
}
