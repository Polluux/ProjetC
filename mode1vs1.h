#ifndef MODE1VS1_H
#define MODE1VS1_H

/*!
 * \file Mode1vs1.h
 * \brief Classe pour le mode de jeu 1VS1
 * \author Dylan Monneau & Alexandre Boudine
 * \date 
*/

#include <iostream>
#include <string>

#include "compmode.h"

/*! \class Mode1vs1
* \brief classe representant le mode de jeu 1VS1
*
*  La classe décrit les comportements pour le mode de jeu 1VS1
*/

class Mode1vs1 : public CompMode
{
    public:
        /*!
        *  \brief Constructeur
        *
        *  Constructeur de la classe Mode1vs1
        */
        Mode1vs1();

        /*!
        *  \brief Décrit le mode dans lequel on est
        *
        *  Méthode permettant décrire le mode 1V1
        */
        void getMode();

        /*!
        *  \brief Initialiser la carte d'initialisation 
        *
        *  Méthode permettant d'initialiser la carte 
        *  Pas implémenté pour cette classe
        */
        void initialiser();

        /*!
        *  \brief Indiquer lorsque le J2 a fini d'initialiser sa carte
        *
        *  Méthode permettant de passer à la phase de jeu
        */
        void lancer();

        /*!
        *  \brief Indiquer lorsque le J1 a fini d'initialiser sa carte
        *
        *  Méthode permettant de passer à la phase d'initialisation pour le J2
        */
        void finInitJ1();

        /*!
        *  \brief Jouer pour le mode 1VS1
        *
        *  Méthode permettant de décrire les actions produits pendant un tour de jeu
        */
        void jouer();

        /*!
        *  \brief Action produit après avoir touché un bateau
        *
        *  Méthode permettant de décrire les actions à faire après 
        *  avoir touché un bateau pour les 2 joueurs
        */
        void touche();

        /*!
        *  \brief Permet de changer l'affichage actif
        *
        *  Méthode permettant changer l'affichage actif pour pouvoir
        *  effectuer les actions nécessaires
        */
        void setAffichage(std::shared_ptr<IAffichage> aff);

        /*!
        *  \brief Action produit pour le J2
        *
        *  Méthode permettant de choisir l'action à effectuer pour le J2
        *  Pour ce mode, il s'agit d'afficher l'initialisation 
        */
        void choixPourJ2();

        /*!
        *  \brief Destructeur
        *  Destructeur de la classe Mode1vs1
        */
        virtual ~Mode1vs1();
};

#endif // MODE1VS1_H
