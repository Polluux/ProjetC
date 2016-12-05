#ifndef AFFICHAGEMENU_H
#define AFFICHAGEMENU_H

/*!
 * \file AffichageMenu.h
 * \brief Affichage du menu
 * \author Dylan Monneau & Alexandre Boudine
 * \date 
*/

#include <QWidget>
#include <QGridLayout>
#include <QApplication>
#include <iostream>
#include <memory>
#include <QLabel>

#include "iaffichage.h"
#include "core.h"
#include "mode1vs1.h"
#include "mode1vsia.h"

/*! \class AffichageMenu
* \brief classe representant l'affichage du menu
*
*  La classe gère l'affichage des boutons de choix de jeu au sein du menu
*/

class AffichageMenu : public  IAffichage
{
    Q_OBJECT

    public:
        /*!
        *  \brief Constructeur
        *
        *  Constructeur de la classe AffichageMenu
        *
        *  \param c : le Core de l'application
        */
        AffichageMenu(Core* c);

        /*!
        *  \brief Affiche la fenêtre
        *
        *  Méthode pour afficher la fenêtre concernant le jeu
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
        *  Pas implémenté pour cette classe 
        */
        void changeToJeu();

    public slots :
        /*!
        *  \brief Action pour le mode 1V1
        *
        *  Méthode pour lancer le jeu avec le mode 1V1 
        */
        void clicMode1vs1();
        
        /*!
        *  \brief Action pour le mode 1V1
        *
        *  Méthode pour lancer le jeu avec le mode 1VIA
        */
        void clicMode1vsIA();

    protected:
        QVBoxLayout *bLayout_; /*!< layout contenant les boutons */
        QGridLayout *gLayout_; /*!< Layout principal */
};


#endif // AFFICHAGEMENU_H
