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

class Carte : public QWidget
{
    Q_OBJECT

    public:
        Carte();
        bool ajouterBateau(Bateau *b);
        void enleverBateau(Bateau *b);
        void afficherCarte();

    public slots :
        virtual void actionBouton() = 0;

    protected:
        std::vector<Case*> m_tabCase;
        std::vector<Bateau*> tabBateaux_;
};

#endif // CARTE_H
