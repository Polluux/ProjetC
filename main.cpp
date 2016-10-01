#include <QApplication>
#include <QPushButton>
#include <QGridLayout>

#include "carte.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Carte carte;

    carte.show();

    return app.exec();
}
