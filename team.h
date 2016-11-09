#ifndef TEAM_H
#define TEAM_H

#include <memory>
#include <string>

#include "cartejeu.h"
#include "carteinit.h"

class Team
{
    public:
        Team();
        std::shared_ptr<Carte> getCarteInit();
        void setCarteInit(Carte *c);
        std::string getPseudo();
        void setPseudo(std::string p);
        bool getIsTurn();
        void setIsTurn(bool t);

        void actionBouton();
        void setCarteActive(std::shared_ptr<Carte> c);
        std::shared_ptr<Carte> getCarteJeu();
        void setCarteJeu(std::shared_ptr<Carte> c);
        std::shared_ptr<Carte> getCarteActive();


    private:
        std::shared_ptr<Carte> carteInit_;
        std::string pseudo_;
        bool isMyTurn_;

        std::shared_ptr<Carte> carteActive_;
        std::shared_ptr<Carte> carteJeu_;

        //Joueur joueur_;
};

#endif // TEAM_H
