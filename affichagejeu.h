#ifndef AFFICHAGEJEU_H
#define AFFICHAGEJEU_H

#include <QWidget>
#include <QGridLayout>
#include <QApplication>
#include <iostream>
#include <memory>

#include "iaffichage.h"
#include "core.h"

class AffichageJeu : public  IAffichage
{
    Q_OBJECT

    public:
        AffichageJeu(Core* c);
        void afficher();

        void changeToMenu();
        virtual void changeToInitialisationJ1();
        virtual void changeToInitialisationJ2();
        void changeToJeu();

        void addContent(QWidget* c,int x, int y);

    protected:
        void updateElements();

        QGridLayout *layout_;

    private:
        std::shared_ptr<Carte> carteJeuT1_;
        std::shared_ptr<Carte> carteJeuT2_;
};

#endif // AFFICHAGEJEU_H
