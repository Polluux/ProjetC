#ifndef AFFICHAGEINITJ2_H
#define AFFICHAGEINITJ2_H

#include <QWidget>
#include <QGridLayout>
#include <QApplication>
#include <iostream>
#include <QLabel>
#include <memory>
#include <string>
#include <QRadioButton>
#include <QLineEdit>
#include <QCheckBox>
#include <QMessageBox>

#include "iaffichage.h"
#include "core.h"
#include "carteinit.h"

class AffichageInitJ2 : public IAffichage
{
    Q_OBJECT

    public:
        AffichageInitJ2(Core *c);

        void updateElements();
        void afficher();
        void changeToMenu();
        void changeToInitialisationJ1();
        void changeToInitialisationJ2();
        void changeToJeu();

    public slots:
        void clicBouton();

    private:
        QGridLayout *gLayoutCentral_;
        QGridLayout *gLayoutGauche_;
        QGridLayout *gLayoutDroite_;
        std::shared_ptr<Core> core_;
        QRadioButton *b1_;
        QRadioButton *b2_;
        QRadioButton *b3_;
        QRadioButton *b4_;
};

#endif // AFFICHAGEINITJ2_H
