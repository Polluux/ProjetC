#ifndef AFFICHAGEMENU_H
#define AFFICHAGEMENU_H

#include <QWidget>
#include <QGridLayout>
#include <QApplication>
#include <iostream>

#include "iaffichage.h"
#include "core.h"
#include <memory>

class AffichageMenu : public  IAffichage
{
    Q_OBJECT

    public:
        AffichageMenu(Core* c);
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


#endif // AFFICHAGEMENU_H
