#ifndef AFFICHAGEINITJ1_H
#define AFFICHAGEINITJ1_H

#include <QMessageBox>

#include "iaffichage.h"
#include "affichageinit.h"

class AffichageInitJ1 : public IAffichage, AffichageInit
{
    Q_OBJECT

    public:
        AffichageInitJ1(Core *c);

        void afficher();
        void changeToMenu();
        void changeToInitialisationJ1();
        void changeToInitialisationJ2();
        void changeToJeu();

    public slots:
        void clicBouton();
        void resetCarteInit();
};

#endif // AFFICHAGEINITJ1_H
