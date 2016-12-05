#ifndef AFFICHAGEINITJ2_H
#define AFFICHAGEINITJ2_H

/*!
 * \file AffichageInitJ2.h
 * \brief Affichage de l'initialisation du J2
 * \author Dylan Monneau & Alexandre Boudine
 * \date 
*/

#include <QMessageBox>

#include "iaffichage.h"
#include "affichageinit.h"

/*! \class AffichageInitJ2
* \brief classe representant l'affichage de la phase d'initialisation du J2
*
*  La classe gère l'affichage et le changement de ce dernier pour le J2
*/

class AffichageInitJ2 : public IAffichage, AffichageInit
{
    Q_OBJECT

    public:
        /*!
        *  \brief Constructeur
        *
        *  Constructeur de la classe AffichageInitJ2
        *
        *  \param c : le Core de l'application
        */
        AffichageInitJ2(Core *c);

        /*!
        *  \brief Affiche la fenêtre
        *
        *  Méthode pour afficher la fenêtre concernant l'initialisation pour le J2
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
        *  \brief Change la fenêtre vers l'initialisation pour le J2
        *
        *  Méthode pour switcher la fenêtre courante avec celle de l'initialisation du J2
        *  Pas implémenté pour cette classe 
        */
        void changeToInitialisationJ1();

        /*!
        *  \brief Change la fenêtre vers l'initialisation pour le J2
        *
        *  Méthode pour switcher la fenêtre courante avec celle de l'initialisation du J2
        *  Pas implémenté pour cette classe 
        */
        void changeToInitialisationJ2();

        /*!
        *  \brief Change la fenêtre vers le jeu
        *
        *  Méthode pour switcher la fenêtre courante avec celle du jeu 
        */
        void changeToJeu();

    public slots:
        /*!
        *  \brief Action pour le bouton "Pret"
        *
        *  Méthode pour passer à l'étape suivante (ici, jeu)
        */
        void clicBouton();

        /*!
        *  \brief Action pour reset la carte
        *
        *  Méthode pour réinitialiser la carte en enlevant les bateaux présent pour les replacer
        */
        void resetCarteInit();
};

#endif // AFFICHAGEINITJ2_H
