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

    Core *myCore = new Core(nullptr);

    if(myCore->start())
    {
        myCore->afficherMode();
        cout << "Initialisé" << endl;
        myCore->afficher();
    }
    else{
        cout << "NULL" << endl;
    }

    myCore->changeMode(new Mode1vsIA);

    if(myCore->start())
    {
        myCore->afficherMode();
        cout << "Initialisé" << endl;
        myCore->afficher();
    }
    else{
        cout << "NULL" << endl;
    }


//    if(myCore.start())
//    {
//        cout << "Initialisé" << endl;
//        myCore.afficher();
//    }
//    else{
//        cout << "NULL" << endl;
//    }

//    myCore.changeMode(new Mode1vs1());
//    if(myCore.start()){
//        cout << "Initialisé" << endl;
//        myCore.afficher();
//    }else{
//        cout << "NULL" << endl;
//    }

    return app.exec();
}




