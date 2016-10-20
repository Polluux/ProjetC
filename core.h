#ifndef CORE_H
#define CORE_H

#include "compmode.h"
#include <iostream>
#include <memory>

#include "team.h"
#include "iaffichage.h"

using namespace std;

class AffichageJeu;

class Core
{
public:
    // le pattern Strategy permet de prendre en paramètre la stratégie à prendre
    // ici le mode de jeu (1Vs1 ou IA)
    Core(CompMode*);

    void afficherMode();

    void changeMode(CompMode *mode);
    bool start();
    void afficher();
    shared_ptr<Team> getTeam1();
    shared_ptr<Team> getTeam2();

    void changeAffichageToJeu();

    ~Core();

protected:
    shared_ptr<CompMode> mode_;
    shared_ptr<Team> team1_;
    shared_ptr<Team> team2_;
    shared_ptr<IAffichage> affichageActif_;
    shared_ptr<AffichageJeu> affJeu_;
};

#endif // CORE_H
