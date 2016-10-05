#ifndef CARTE_H
#define CARTE_H

#include <QWidget>
#include <QGridLayout>
#include <iostream>
#include <QApplication>

#include "case.h"
//#include "esc3nard.h"

class Carte : public QWidget
{
    Q_OBJECT

    public:
        Carte();
        void ajouterBateau(/*Esc3nard *b*/);

    public slots :
        void afficherCoordonnees();

    private:
        Case *m_cases;
        QGridLayout *m_layout;
        std::vector<Case*> m_tabCase;
};

#endif // CARTE_H
