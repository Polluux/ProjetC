#include <QApplication>
#include <QPushButton>
#include <QGridLayout>

#include "partie.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    new Partie();

    return app.exec();
}
