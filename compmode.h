#ifndef COMPMODE_H
#define COMPMODE_H

/*!
 * \file CompMode.h
 * \brief Interface pour le comportement d'un mode de jeu
 * \author Dylan Monneau & Alexandre Boudine
 * \date 
*/

#include <iostream>
#include <memory>
#include <string>

#include "iaffichage.h"

/*! \class CompMode
* \brief classe representant un comportement de mode de jeu
*
*  La classe décrit les actions possibles dans les comportements de mode
*/

class CompMode
{
    public:
        /*!
        *  \brief Constructeur
        *
        *  Constructeur de la classe CompMode
        */
        CompMode();

        /*!
        *  \brief Décrit le mode dans lequel on est
        *
        *  Méthode permettant décrire le mode 1V1 ou 1VIA
        */
        virtual void getMode() = 0;

        /*!
        *  \brief Initialiser la carte d'initialisation 
        *
        *  Méthode permettant d'initialiser la carte (pour l'IA)
        */
        virtual void initialiser() = 0;

        /*!
        *  \brief Indiquer lorsque le J1 a fini d'initialiser sa carte
        *
        *  Méthode permettant de passer à la phase d'initialisation pour le J2
        */
        virtual void finInitJ1() = 0;

        /*!
        *  \brief Indiquer lorsque le J2 a fini d'initialiser sa carte
        *
        *  Méthode permettant de passer à la phase de jeu
        */
        virtual void lancer() = 0;

        /*!
        *  \brief Jouer selon le mode de jeu
        *
        *  Méthode permettant de décrire les actions produits pendant un tour de jeu
        */
        virtual void jouer() = 0;

        /*!
        *  \brief Action produit après avoir touché un bateau
        *
        *  Méthode permettant de décrire les actions à faire après 
        *  avoir touché un bateau selon le mode de jeu
        */
        virtual void touche() = 0;

        /*!
        *  \brief Permet de changer l'affichage actif
        *
        *  Méthode permettant changer l'affichage actif pour pouvoir
        *  effectuer les actions nécessaires
        */
        virtual void setAffichage(std::shared_ptr<IAffichage> aff) = 0;

        /*!
        *  \brief Action produit pour le J2
        *
        *  Méthode permettant de choisir l'action à effectuer pour le J2 
        */
        virtual void choixPourJ2() = 0;

        /*!
        *  \brief Destructeur
        *  Destructeur de la classe CompMode
        */
        virtual ~CompMode();

    protected:
        std::shared_ptr<IAffichage> aff_; /*!< affichage pour pouvoir effectuer les actions nécessaires */
};

#endif // COMPMODE_H
