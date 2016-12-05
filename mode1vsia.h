#ifndef MODE1VSIA_H
#define MODE1VSIA_H

/*!
 * \file Mode1vsIA.h
 * \brief Classe pour le mode de jeu 1VSIA
 * \author Dylan Monneau & Alexandre Boudine
 * \date 
*/

#include <iostream>
#include <string>

#include "compmode.h"
#include "bateau.h"
#include "carteinit.h"

/*! \class Mode1vsIA
* \brief classe representant le mode de jeu 1VSIA
*
*  La classe décrit les comportements pour le mode de jeu 1VSIA
*/

class Mode1vsIA : public CompMode
{
    public:
        /*!
        *  \brief Constructeur
        *
        *  Constructeur de la classe Mode1vsIA
        */
        Mode1vsIA();

        /*!
        *  \brief Décrit le mode dans lequel on est
        *
        *  Méthode permettant décrire le mode 1VIA
        */
        void getMode();

        /*!
        *  \brief Initialiser la carte d'initialisation 
        *
        *  Méthode permettant d'initialiser la carte 
        *  Initialise de manière aléatoire les bateaux de l'IA
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
        *  \brief Jouer pour le mode 1VSIA
        *
        *  Méthode permettant de décrire les actions produits pendant un tour de jeu
        *  On gère aussi lorsque l'IA touche des bateaux du J1
        */
        void jouer();

        /*!
        *  \brief Action produit après avoir touché un bateau
        *
        *  Méthode permettant de décrire les actions à faire après 
        *  avoir touché un bateau de l'IA
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
        *  Pour ce mode, on initialise l'IA puis on lance le jeu
        */
        void choixPourJ2();

        /*!
        *  \brief Destructeur
        *  Destructeur de la classe Mode1vs1
        */
        virtual ~Mode1vsIA();

    private:
        QVector<int> casesTouchees_; /*!< cases touchées par l'IA */ 
        QVector<int> casesProches_; /*!< cases proches des cases touchées par l'IA */
};

#endif // MODE1VSIA_H
