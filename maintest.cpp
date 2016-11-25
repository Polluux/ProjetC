#include <QApplication>
#include <memory>

#include "core.h"

using namespace std;

int main(int argc, char *argv[]){
    QApplication app(argc, argv);

    shared_ptr<Core> myCore = shared_ptr<Core>(new Core());
    myCore->afficher();

    return app.exec();
}




