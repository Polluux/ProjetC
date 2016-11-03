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

#include "core.h"
#include "carteinit.h"

class AffichageInit
{
    public:
        AffichageInit();
        void updateElements(std::string txtBt);

        bool hChecked();

        QRadioButton* getB4();
        QRadioButton* getB3();
        QRadioButton* getB2();
        QRadioButton* getB1();

        QRadioButton* getBateauSelect();

        void resetBouton();

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
        QPushButton *reset_;
        std::shared_ptr<Team> joueur1;
        std::shared_ptr<Team> joueur2;
};

#endif // AFFICHAGEINIT_H
