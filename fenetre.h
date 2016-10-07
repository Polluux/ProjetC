#ifndef FENETRE_H
#define FENETRE_H

#include <QWidget>
#include <QGridLayout>
#include <iostream>
#include <QApplication>
#include <vector>

#include "case.h"

class Fenetre : public QWidget
{
    Q_OBJECT

    public :
        Fenetre();

    public slots :
        void afficherCoordonnees();

    private :
        Case *c;
};
#endif // FENETRE_H
