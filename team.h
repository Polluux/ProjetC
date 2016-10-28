#ifndef TEAM_H
#define TEAM_H

#include <memory>

#include "cartejeu.h"
#include "carteinit.h"
//#include "core.h"
//#include "mode1vs1.h"

class Team
{
    public:
        Team();
        std::shared_ptr<Carte> getCarte();
        std::shared_ptr<Carte> getCarteInit();

    private:
        std::shared_ptr<Carte> carteJeu_;
        std::shared_ptr<Carte> carteInit_;
        //std::shared_ptr<Core> partie_;
        //Joueur joueur_;
};

#endif // TEAM_H
