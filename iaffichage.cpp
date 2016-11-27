#include "iaffichage.h"

using namespace std;

IAffichage::IAffichage() : QWidget()
{
}

shared_ptr<Core> IAffichage::getCore(){
    return core_;
}

IAffichage::~IAffichage(){}
