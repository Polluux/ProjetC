#include "factoryoie.h"

using namespace std;

FactoryOie::FactoryOie() : BateauFactory()
{

}

shared_ptr<Bateau> FactoryOie::creerBateau(){
    return shared_ptr<Oie>(new Oie());
}
