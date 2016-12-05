#ifndef AFFICHAGEINITJ1_H
#define AFFICHAGEINITJ1_H

/*!
 * \file AffichageInitJ1.h
 * \brief Affichage de l'initialisation du J1
 * \author Dylan Monneau & Alexandre Boudine
 * \date 
*/

#include <QMessageBox>

#include "iaffichage.h"
#include "affichageinit.h"

/*! \class AffichageInitJ1
* \brief classe representant l'affichage de la phase d'initialisation du J1
*
*  La classe gère l'affichage et le changement de ce dernier pour le J1 
*/

class AffichageInitJ1 : public IAffichage, AffichageInit
{
    Q_OBJECT

    public:
        /*!
        *  \brief Constructeur
        *
        *  Constructeur de la classe AffichageInitJ1
        *
        *  \param c : le Core de l'application
        */
        AffichageInitJ1(Core *c);

        /*!
        *  \brief Affiche la fenêtre
        *
        *  Méthode pour afficher la fenêtre concernant l'initialisation pour le J1
        */
        void afficher();

        /*!
        *  \brief Change la fenêtre vers le menu
        *
        *  Méthode pour switcher la fenêtre courante avec celle du menu
        *  Pas implémenté pour cette classe 
        */
        void changeToMenu();
        
        /*!
        *  \brief Change la fenêtre vers l'initialisation pour le J1
        *
        *  Méthode pour switcher la fenêtre courante avec celle de l'initialisation du J1
        *  Pas implémenté pour cette classe 
        */
        void changeToInitialisationJ1();

        /*!
        *  \brief Change la fenêtre vers l'initialisation pour le J2
        *
        *  Méthode pour switcher la fenêtre courante avec celle de l'initialisation du J2
        */
        void changeToInitialisationJ2();

        /*!
        *  \brief Change la fenêtre vers le jeu
        *
        *  Méthode pour switcher la fenêtre courante avec celle du jeu
        *  Pas implémenté pour cette classe 
        */
        void changeToJeu();

    public slots:
        /*!
        *  \brief Action pour le bouton "Pret"
        *
        *  Méthode pour passer à l'étape suivante (ici, soit initJ2 pour le mode 1V1 soit jeu pour le mode 1VIA)
        */
        void clicBouton();

        /*!
        *  \brief Action pour reset la carte
        *
        *  Méthode pour réinitialiser la carte en enlevant les bateaux présent pour les replacer
        */
        void resetCarteInit();
};

#endif // AFFICHAGEINITJ1_H
