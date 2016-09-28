#include <iostream>
#include <string>
#include "compmode.h"
#include "mode1vs1.h"
#include "mode1vsia.h"

using namespace std;

int main(){
    CompMode * mode;

    //mode = new CompMode();
    //mode->getMode();

    mode = new Mode1vs1();
    mode->getMode();

    mode = new Mode1vsIA();
    mode->getMode();

    delete mode;

    return 0;
}


