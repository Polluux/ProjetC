#ifndef CORE_H
#define CORE_H

#include "compmode.h"
#include <iostream>
#include <memory>

#include "team.h"
#include "iaffichage.h"

using namespace std;

class AffichageMenu;
class AffichageJeu;

class Core
{
public:
    Core();
    void changeMode(CompMode *mode);
    bool start();
    void afficher();
    shared_ptr<Team> getTeam1();
    shared_ptr<Team> getTeam2();

    void changeAffichageToJeu();
    void changeAffichageToMenu();

    ~Core();

protected:
    shared_ptr<CompMode> mode2_;
    shared_ptr<Team> team1_;
    shared_ptr<Team> team2_;
    shared_ptr<IAffichage> affichageActif_;
    shared_ptr<AffichageJeu> affJeu_;
    shared_ptr<AffichageMenu> affMen_;
};

#endif // CORE_H
