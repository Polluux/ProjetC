#ifndef AFFICHAGEJEU_H
#define AFFICHAGEJEU_H

#include <QWidget>
#include <QGridLayout>
#include <QApplication>
#include <iostream>

#include "iaffichage.h"
#include "core.h"
#include <memory>

class AffichageJeu : public  IAffichage
{

    Q_OBJECT

    public:
        AffichageJeu(Core* c);
        void afficher();

        void changeToMenu();
        void changeToInitialisation();
        void changeToJeu();

        void addContent(QWidget* c,int x, int y);

    protected:
        void updateElements();

        QGridLayout *layout_;
        //shared_ptr<Core> core_;
};

#endif // AFFICHAGEJEU_H