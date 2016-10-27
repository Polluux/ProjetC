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

class AffichageInit : public IAffichage
{
    Q_OBJECT

    public:
        AffichageInit(Core* c, std::string nom);
        void afficher();

        void changeToMenu();
        void changeToInitialisation();
        void changeToJeu();

    public slots:
        void clicBouton();

    protected:
        void updateElements();

    protected:
        QGridLayout *gLayoutCentral_;
        QGridLayout *gLayoutGauche_;
        QGridLayout *gLayoutDroite_;
        std::shared_ptr<Core> core_;
        QRadioButton *b1_;
        QRadioButton *b2_;
        QRadioButton *b3_;
        QRadioButton *b4_;
        std::string nomJoueur_;
};

#endif // AFFICHAGEINIT_H
