#ifndef CORE_H
#define CORE_H

#include <iostream>
#include <memory>
#include <cstddef>

#include "compmode.h"
#include "team.h"
#include "iaffichage.h"

class AffichageMenu;
class AffichageJeu;
class AffichageInitJ1;
class AffichageInitJ2;

class Core
{
    public:
        Core();
        void changeMode(CompMode *mode);
        void afficher();
        std::shared_ptr<Team> getTeam1();
        std::shared_ptr<Team> getTeam2();

        void changeAffichageToJeu();
        void changeAffichageToMenu();
        void changeAffichageToInitJ1();
        void changeAffichageToInitJ2();
        void finInitJ1();
        void finInitJ2();

<<<<<<< HEAD
=======
        void setAffichageActif(std::shared_ptr<IAffichage> a);


>>>>>>> 443b7fa8dcb2e6e3717b5f139d5a04cee051a601
        ~Core();

    protected:
        std::shared_ptr<CompMode> mode_;
        std::shared_ptr<Team> team1_;
        std::shared_ptr<Team> team2_;
        std::shared_ptr<IAffichage> affichageActif_;
        std::shared_ptr<IAffichage> affJeu_;
        std::shared_ptr<IAffichage> affMen_;
        std::shared_ptr<IAffichage> affIniJ1_;
        std::shared_ptr<IAffichage> affIniJ2_;
};

#endif // CORE_H
