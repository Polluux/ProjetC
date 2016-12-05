#ifndef TEAM_H
#define TEAM_H

/*!
 * \file Team.h
 * \brief Description d'un joueur
 * \author Dylan Monneau & Alexandre Boudine
 * \date 
*/

#include <memory>
#include <string>

#include "cartejeu.h"
#include "carteinit.h"

/*! \class Team
* \brief classe representant un Joueur
*
*  La classe modélise un Joueur et ce qui le compose
*/

class Team
{
    public:
        /*!
        *  \brief Constructeur
        *
        *  Constructeur de la classe Team
        */
        Team();

        /*!
        *  \brief Récupère la carte d'initialisation du Joueur
        *
        *  Méthode permettant de récupérer la carte d'initialisation 
        *  du joueur une fois qu'il a fini
        *
        *  \return la carte d'initialisation
        */
        std::shared_ptr<Carte> getCarteInit();

        /*!
        *  \brief Modifie la carte d'initialisation
        *
        *  Méthode permettant de modifier la carte d'initialisation
        *  après l'ajout des bateaux
        *
        *  \param c : la carte d'initialisation
        */
        void setCarteInit(std::shared_ptr<Carte> c);

        /*!
        *  \brief Récupère la carte de jeu du Joueur
        *
        *  Méthode permettant de récupérer la carte de jeu
        *
        *  \return la carte de jeu du Joueur
        */
        std::shared_ptr<Carte> getCarteJeu();

        /*!
        *  \brief Modifie la carte de jeu
        *
        *  Méthode permettant de modifier la carte de jeu
        *
        *  \param c : la carte de jeu
        */
        void setCarteJeu(std::shared_ptr<Carte> c);

        /*!
        *  \brief Récupère le pseudo du Joueur
        *
        *  Méthode permettant de récupérer le pseudo du joueur
        *
        *  \return le pseudo du Joueur
        */
        std::string getPseudo();

        /*!
        *  \brief Modifie le pseudo du Joueur
        *
        *  Méthode permettant de modifier le pseudo du joueur
        *
        *  \param p : le nouveau pseudo du joueur
        */
        void setPseudo(std::string p);

        /*!
        *  \brief Savoir à qui est le tour de jeu
        *
        *  Méthode permettant de savoir si c'est au tour
        *  du Joueur 1 ou du Joueur 2
        *
        *  \return si c'est au tour du Joueur courant 
        */
        bool getIsTurn();

        /*!
        *  \brief Modifie le tour du Joueur
        *
        *  Méthode permettant de modifier le tour du joueur courant
        *
        *  \param t : booléen à true pour changer le tour, false sinon 
        */
        void setIsTurn(bool t);

    private:
        std::shared_ptr<Carte> carteInit_; /*< carte d'initialisation du joueur */
        std::shared_ptr<Carte> carteJeu_; /*< carte de jeu du joueur */
        std::string pseudo_; /*< pseudo du joueur */
        bool isMyTurn_; /*< booléen pour savoir si c'est au tour du joueur */
};

#endif // TEAM_H
