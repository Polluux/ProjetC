#ifndef TEAM_H
#define TEAM_H

#include "carte.h"
#include <memory>

class Team
{
    public:
        Team();
        shared_ptr<Carte> getCarte();

    private:
        shared_ptr<Carte> carte_;
        //Joueur joueur_;
};

#endif // TEAM_H
