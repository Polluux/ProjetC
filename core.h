#ifndef CORE_H
#define CORE_H

/*!
 * \file Core.h
 * \brief Description du coeur de l'application
 * \author Dylan Monneau & Alexandre Boudine
 * \date 
*/

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

/*! \class Core
* \brief classe representant le coeur de l'application
*
*  La classe gère l'ensemble des actions entre les classes
*/

class Core
{
    public:
        /*!
        *  \brief Constructeur
        *
        *  Constructeur de la classe Core
        */
        Core();

        /*!
        *  \brief Changer le mode de jeu
        *
        *  Méthode permettant de passer du mode 1V1 vers 1VIA
        *  et inversement
        *
        *  \param mode : le nouveau mode de jeu
        */
        void changeMode(CompMode *mode);

        /*!
        *  \brief Permet d'afficher l'affichage actif
        *
        *  Méthode permettant de déléguer l'affichage à
        *  l'affichage actif
        */
        void afficher();

        /*!
        *  \brief Récupère le J1
        *
        *  Méthode permettant de récupérer le J1
        *
        *  \return le J1
        */
        std::shared_ptr<Team> getTeam1();

        /*!
        *  \brief Récupère le J2
        *
        *  Méthode permettant de récupérer le J2
        *
        *  \return le J2
        */
        std::shared_ptr<Team> getTeam2();

        /*!
        *  \brief Récupère le mode de jeu
        *
        *  Méthode permettant de récupérer le mode de jeu actif
        *
        *  \return le mode de jeu actif
        */
        std::shared_ptr<CompMode> getMode();

        /*!
        *  \brief Change l'affichage vers le celui de jeu
        *
        *  Méthode pour cacher l'affichage courant avec celui du jeu 
        */
        void changeAffichageToJeu();
        
        /*!
        *  \brief Change l'affichage vers le celui du menu
        *
        *  Méthode pour cacher l'affichage courant avec celui du menu 
        */
        void changeAffichageToMenu();

        /*!
        *  \brief Change l'affichage vers le celui de l'initialisation pour le J1
        *
        *  Méthode pour cacher l'affichage courant avec celui de l'initialisation du J1 
        */
        void changeAffichageToInitJ1();
        
        /*!
        *  \brief Change l'affichage vers le celui de l'initialisation pour le J2
        *
        *  Méthode pour cacher l'affichage courant avec celui de l'initialisation du J2 
        */
        void changeAffichageToInitJ2();
        
        /*!
        *  \brief Change l'affichage vers le celui de l'initialisation pour le J2
        *
        *  Méthode pour cacher l'affichage courant avec celui de l'initialisation du J2 
        */
        void finInitJ1();

        /*!
        *  \brief Change l'affichage vers le celui du jeu selon le mode
        *
        *  Méthode pour cacher l'affichage courant avec celui du jeu selon le mode
        *  avec 1V1 : on passe au jeu
        *  avec 1VIA : on passe au jeu après avoir initialiser automatiquement le J2
        */
        void finInitJ2();

        /*!
        *  \brief Tourne l'image pour l'AffichageJeu pour le tour des joueurs
        *
        *  Méthode qui est déléguée à l'AffichageJeu 
        */
        void setImageChgmtTour();

        /*!
        *  \brief Destructeur
        *  Destructeur de la classe Core
        */
        virtual ~Core();

    protected:
        std::shared_ptr<CompMode> mode_; /*!< correspond au mode de jeu */
        std::shared_ptr<Team> team1_; /*!< le J1 */
        std::shared_ptr<Team> team2_; /*!< le J2 */
        std::shared_ptr<IAffichage> affichageActif_; /*!< l'affichage actif qui prend pour valeur les différents affichages quand c'est nécessaire */
        std::shared_ptr<AffichageJeu> affJeu_; /*!< pour l'affichage du jeu */
        std::shared_ptr<IAffichage> affMen_; /*!< pour l'affichage du menu */
        std::shared_ptr<IAffichage> affIniJ1_; /*!< pour l'affichage de l'initialisation du J1 */
        std::shared_ptr<IAffichage> affIniJ2_; /*!< pour l'affichage de l'initialisation du J2 */
};

#endif // CORE_H
