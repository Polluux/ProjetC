#include <iostream>
#include <string>
#include "compmode.h"
#include "mode1vs1.h"
#include "mode1vsia.h"
#include "core.h"

#include <memory>

using namespace std;

int main(){
    Core myCore;
    if(myCore.start()){
        cout << "Initialisé" << endl;
    }else{
        cout << "NULL" << endl;
    }

    myCore.changeMode(new Mode1vs1());
    if(myCore.start()){
        cout << "Initialisé" << endl;
    }else{
        cout << "NULL" << endl;
    }

    return 0;
}


