#ifndef AFFICHAGEINITJ1_H
#define AFFICHAGEINITJ1_H

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

class AffichageInitJ1 : public IAffichage
{
    Q_OBJECT

    public:
        AffichageInitJ1(Core *c);

        void updateElements();
        void afficher();
        void changeToMenu();
        void changeToInitialisationJ1();
        void changeToInitialisationJ2();
        void changeToJeu();

        bool b4IsChecked();
        bool b3IsChecked();
        bool b2IsChecked();
        bool b1IsChecked();

        std::string nbRestantB4();
        std::string nbRestantB3();
        std::string nbRestantB2();
        std::string nbRestantB1();

    public slots:
        void clicBouton();

    private:
        QGridLayout *gLayoutCentral_;
        QGridLayout *gLayoutGauche_;
        QGridLayout *gLayoutDroite_;
        std::shared_ptr<Core> core_;
        Carte *carteInit_;
        QRadioButton *b1_;
        QRadioButton *b2_;
        QRadioButton *b3_;
        QRadioButton *b4_;
        QLineEdit *pseudo_;
};

#endif // AFFICHAGEINITJ1_H
