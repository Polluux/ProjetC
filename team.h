#ifndef TEAM_H
#define TEAM_H

#include <memory>

#include "cartejeu.h"
#include "carteinit.h"

class Team
{
    public:
        Team();
        std::shared_ptr<Carte> getCarteJeu();
        std::shared_ptr<Carte> getCarteInit();

    private:
        std::shared_ptr<Carte> carteJeu_;
        std::shared_ptr<Carte> carteInit_;
        //Joueur joueur_;
};

#endif // TEAM_H
