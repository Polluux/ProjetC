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
#include "mode1vsia.h"

class AffichageMenu : public  IAffichage
{
    Q_OBJECT

    public:
        AffichageMenu(Core* c);
        void afficher();

        void changeToMenu();
        void changeToInitialisationJ1();
        void changeToInitialisationJ2();
        void changeToJeu();

    public slots :
        void clicMode1vs1();
        void clicMode1vsIA();

    protected:
        QVBoxLayout *bLayout_;
        QGridLayout *gLayout_;
};


#endif // AFFICHAGEMENU_H
