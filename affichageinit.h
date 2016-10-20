#ifndef AFFICHAGEINIT_H
#define AFFICHAGEINIT_H

#include <QWidget>
#include <QGridLayout>
#include <QApplication>
#include <iostream>

#include "iaffichage.h"
#include "core.h"
#include <memory>

class AffichageInit : public  IAffichage
{
    Q_OBJECT

    public:
        AffichageInit(Core* c);
        void afficher();

        void changeToMenu();
        void changeToInitialisation();
        void changeToJeu();

    protected:
        void updateElements();

    protected:
        QGridLayout *gLayoutCentral_;
        QGridLayout *gLayoutGauche_;
        QGridLayout *gLayoutDroite_;
        shared_ptr<Core> core_;
};





#endif // AFFICHAGEINIT_H
