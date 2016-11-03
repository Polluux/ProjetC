#ifndef AFFICHAGEINITJ2_H
#define AFFICHAGEINITJ2_H

#include <QMessageBox>

#include "iaffichage.h"
#include "affichageinit.h"

class AffichageInitJ2 : public IAffichage, AffichageInit
{
    Q_OBJECT

    public:
        AffichageInitJ2(Core *c);

        void afficher();
        void changeToMenu();
        void changeToInitialisationJ1();
        void changeToInitialisationJ2();
        void changeToJeu();

    public slots:
        void clicBouton();
        void resetCarteInit();
};

#endif // AFFICHAGEINITJ2_H
