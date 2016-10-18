#ifndef CORE_H
#define CORE_H

#include "compmode.h"
#include <iostream>
#include <memory>

#include "team.h"
#include "affichage.h"

using namespace std;



class Core
{
public:
    Core();
    void changeMode(CompMode *mode);
    bool start();
    void afficher();

    ~Core();

private:
    shared_ptr<CompMode> mode2_;
    shared_ptr<Team> team1_;
    shared_ptr<Team> team2_;
    shared_ptr<Affichage> affichage_;
};

#endif // CORE_H
