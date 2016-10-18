#include <iostream>
#include <string>
#include "compmode.h"
#include "mode1vs1.h"
#include "mode1vsia.h"
#include "core.h"

#include <QApplication>
#include <QPushButton>
#include <QGridLayout>


#include <memory>

using namespace std;

int main(int argc, char *argv[]){
    QApplication app(argc, argv);


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

    myCore.afficher();

    return app.exec();
}




