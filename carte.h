#ifndef CARTE_H
#define CARTE_H

#include <QWidget>
#include <QGridLayout>
#include <iostream>
#include <QApplication>

#include "case.h"
#include "bateau.h"

class Carte : public QWidget
{
    Q_OBJECT

    public:
        Carte();
        void ajouterBateau(Bateau b);
        void enleverBateau(Bateau b);
        void afficherCarte();

    public slots :
        void afficherCoordonnees();

    private:
        QGridLayout *m_layout;
        std::vector<Case*> m_tabCase;
};

#endif // CARTE_H
