#ifndef AFFICHAGEINITIT_H
#define AFFICHAGEINITIT_H

class AffichageInitit
{
public:
    AffichageInitit();
};


#include <QWidget>
#include <QGridLayout>
#include <QApplication>
#include <iostream>

#include "iaffichage.h"
#include "core.h"
#include <memory>

class AffichageInitit : public  IAffichage
{
    Q_OBJECT

    public:
        AffichageInitit(Core* c);
        void afficher();

        void changeToMenu();
        void changeToInitialisation();
        void changeToJeu();

    public slots :
        void clicMode1vs1();

    protected:
        QVBoxLayout *bLayout_;
        QGridLayout *gLayout_;
};





#endif // AFFICHAGEINITIT_H
