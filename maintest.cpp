#include <QApplication>
#include <memory>

#include "core.h"

using namespace std;

int main(int argc, char *argv[]){
    QApplication app(argc, argv);

    Core *myCore = new Core();
    myCore->afficher();

    return app.exec();
}




