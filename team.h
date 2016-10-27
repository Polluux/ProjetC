#ifndef TEAM_H
#define TEAM_H

#include <memory>

#include "cartejeu.h"

class Team
{
    public:
        Team();
        std::shared_ptr<Carte> getCarte();

    private:
        std::shared_ptr<Carte> carte_;
        //Joueur joueur_;
};

#endif // TEAM_H
