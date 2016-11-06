#ifndef CARTEJEU_H
#define CARTEJEU_H

#include <QMessageBox>

#include "carte.h"

class AffichageJeu;

class CarteJeu : public Carte
{
    public:
        CarteJeu(AffichageJeu *a);
        void actionBouton();

    private:
        std::shared_ptr<AffichageJeu> aff_;
};

#endif // CARTEJEU_H
