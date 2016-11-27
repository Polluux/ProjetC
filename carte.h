#ifndef CARTE_H
#define CARTE_H

#include <QWidget>
#include <QGridLayout>
#include <iostream>
#include <QApplication>
#include <QLabel>
#include <string>
#include <iterator>
#include <QVector>

#include "case.h"
#include "bateau.h"
#include "bateaufactory.h"
#include "factorycygne.h"
#include "factoryoie.h"
#include "factorycanard.h"
#include "factorycaneton.h"

class Carte : public QWidget
{
    Q_OBJECT

    public:
        Carte();
        bool ajouterBateau(std::shared_ptr<Bateau> b);
        void enleverBateau(std::shared_ptr<Bateau> b);
        void afficherCarte();
        QVector<std::shared_ptr<Bateau> > getTabBateau();
        QVector<Case*> getTabCase();
        void reset();

    public slots :
        virtual void actionBouton() = 0;

    protected:
        QVector<Case*> m_tabCase;
        QVector<std::shared_ptr<Bateau> > tabBateaux_;
        QIcon logoCase_;
        QPixmap cygne_;
        QPixmap oie_;
        QPixmap canard_;
        QPixmap caneton_;

        std::shared_ptr<BateauFactory> factory;
};

#endif // CARTE_H
