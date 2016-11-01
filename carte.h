#ifndef CARTE_H
#define CARTE_H

#include <QWidget>
#include <QGridLayout>
#include <iostream>
#include <QApplication>
#include <QLabel>
#include <string>

#include "case.h"
#include "bateau.h"

class Team;

class Carte : public QWidget
{
    Q_OBJECT

    public:
        Carte();
        bool ajouterBateau(Bateau *b);
        void enleverBateau(Bateau *b);
        void afficherCarte();
        std::vector<Bateau*> getTabBateau();
        std::vector<Case*> getTabCase();
        void reset();

    public slots :
        virtual void actionBouton() = 0;

    protected:
        std::vector<Case*> m_tabCase;
        std::vector<Bateau*> tabBateaux_;
        QIcon logoCase_;
        QPixmap cygne_;
        QPixmap oie_;
        QPixmap canard_;
        QPixmap caneton_;
};

#endif // CARTE_H
