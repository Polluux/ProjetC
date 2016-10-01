#ifndef CARTE_H
#define CARTE_H

#include <QWidget>
#include <QGridLayout>
#include <iostream>
#include <QApplication>

#include "case.h"

class Carte : public QWidget
{
    Q_OBJECT

    public:
        Carte();

    public slots :
        void afficherCoordonnees();

    private:
        Case *cases;
        QGridLayout *layout;
        std::vector<Case*> tabCase;
};

#endif // CARTE_H
