#ifndef AFFICHAGEINIT_H
#define AFFICHAGEINIT_H

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

class AffichageInit
{
    public:
        AffichageInit();
        void updateElements(std::string nomJoueur, std::string txtBt);

        bool hChecked();

        bool b4IsChecked();
        bool b3IsChecked();
        bool b2IsChecked();
        bool b1IsChecked();

        std::string nbRestantB4();
        std::string nbRestantB3();
        std::string nbRestantB2();
        std::string nbRestantB1();

    protected:
        QGridLayout *gLayoutCentral_;
        QGridLayout *gLayoutGauche_;
        QGridLayout *gLayoutDroite_;
        Carte *carteInit_;
        QRadioButton *b1_;
        QRadioButton *b2_;
        QRadioButton *b3_;
        QRadioButton *b4_;
        QLineEdit *pseudo_;
        QCheckBox *horizontal_;
        QPushButton *boutonSuivant_;
};

#endif // AFFICHAGEINIT_H
