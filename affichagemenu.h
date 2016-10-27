#ifndef AFFICHAGEMENU_H
#define AFFICHAGEMENU_H

#include <QWidget>
#include <QGridLayout>
#include <QApplication>
#include <iostream>
#include <memory>
#include <QLabel>

#include "iaffichage.h"
#include "core.h"
#include "mode1vs1.h"

class AffichageMenu : public  IAffichage
{
    Q_OBJECT

    public:
        AffichageMenu(Core* c);
        void afficher();

        void changeToMenu();
        virtual void changeToInitialisationJ1();
        virtual void changeToInitialisationJ2();
        void changeToJeu();

    public slots :
        void clicMode1vs1();

    protected:
        QVBoxLayout *bLayout_;
        QGridLayout *gLayout_;
};


#endif // AFFICHAGEMENU_H
