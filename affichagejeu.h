#ifndef AFFICHAGEJEU_H
#define AFFICHAGEJEU_H

#include <QWidget>
#include <QGridLayout>
#include <QApplication>
#include <iostream>
#include <memory>
#include <QVector>

#include "iaffichage.h"
#include "core.h"

class AffichageJeu : public  IAffichage
{
    Q_OBJECT

    public:
        AffichageJeu(Core* c);
        void afficher();
        void updateElements();

        void changeToMenu();
        virtual void changeToInitialisationJ1();
        virtual void changeToInitialisationJ2();
        void changeToJeu();

        void addContent(QWidget* c,int x, int y);

        void setImageChgmtTour();

        std::shared_ptr<Carte> getCarteJeuT1();
        std::shared_ptr<Carte> getCarteJeuT2();

    private:
        std::shared_ptr<Carte> carteJeuT1_;
        std::shared_ptr<Carte> carteJeuT2_;
        QPixmap triangleTour_;
        QLabel *labelChgmtTour_;
        QGridLayout *layout_;
};

#endif // AFFICHAGEJEU_H
