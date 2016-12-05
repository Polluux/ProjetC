#ifndef BATEAU_H
#define BATEAU_H

/*!
 * \file Bateau.h
 * \brief Description d'un Bateau
 * \author Dylan Monneau & Alexandre Boudine
 * \date 
*/

#include <iostream>

#include "contenu.h"
#include "case.h"

/*! \class Bateau
* \brief classe representant un Bateau
*
*  La classe gère l'ensemble des actions émises ou impactant un Bateau
*/

class Bateau : public Contenu
{
    public:
        /*!
        *  \brief Constructeur
        *
        *  Constructeur de la classe Bateau
        *
        *  \param taille : la taille du Bateau
        */
        Bateau(int taille);

        /*!
        *  \brief Action émise lorsqu'on a cliqué sur un Bateau
        *
        *  Méthode permettant de savoir si le contenu de la case est un Bateau 
        *  et décrémente son nombre de points de vie
        *
        *  \param c : la case sur laquelle on a cliqué
        *
        *  \return true si le contenu de la case est un bateau sinon false
        */
        bool action(Case *c);

        /*!
        *  \brief Modifie la coordonnée X du Bateau
        *
        *  Méthode permettant de modifier la coordonnée en X, 
        *  c'est à dire sur quelle ligne placer le Bateau
        *
        *  \param x : numéro de la ligne 
        */
        void setX(int x);

        /*!
        *  \brief Modifie la coordonnée Y du Bateau
        *
        *  Méthode permettant de modifier la coordonnée en Y, 
        *  c'est à dire sur quelle colonne placer le Bateau
        *
        *  \param y : numéro de la colonne 
        */
        void setY(int y);

        /*!
        *  \brief Modifie l'orientation du Bateau
        *
        *  Méthode permettant de modifier l'orientation du Bateau
        *  à l'origine, le Bateau est vertical
        *
        *  \param a : booléen à true : horizontal, sinon vertical
        */
        void setHorizontal(bool a);

        /*!
        *  \brief Récupère la ligne où se trouve le Bateau
        *
        *  Méthode permettant de récupérer la ligne sur laquelle 
        *  se situe le Bateau sur la carte
        *
        *  \return le numéro de ligne sur laquelle se trouve le Bateau 
        */
        int getX();
        
        /*!
        *  \brief Récupère la colonne où se trouve le Bateau
        *
        *  Méthode permettant de récupérer la colonne sur laquelle 
        *  se situe le Bateau sur la carte
        *
        *  \return le numéro de colonne sur laquelle se trouve le Bateau 
        */
        int getY();

        /*!
        *  \brief Récupère l'orientation du Bateau
        *
        *  Méthode permettant de savoir si le Bateau est horizontal 
        *  ou vertical
        * 
        *  \return true si le Bateau est horizontal, false sinon
        */
        bool getHorizontal();

        /*!
        *  \brief Connaitre la taille du Bateau
        *
        *  Méthode permettant de connaitre la taille du Bateau 
        * 
        *  \return la taille du Bateau
        */
        virtual int getTaille() = 0;

        /*!
        *  \brief Connaitre le nombre de PV du Bateau
        *
        *  Méthode permettant de nombre de PV restant au Bateau 
        * 
        *  \return le nombre de PV qu'a le Bateau actuellement
        */
        int getPvActuels();

        /*!
        *  \brief Savoir si le contenu est vide
        *
        *  Méthode permettant de savoir si le contenu est vide 
        * 
        *  \return true 
        */
        bool isEmpty();

        /*!
        *  \brief Savoir si le Bateau est coulé
        *
        *  Méthode permettant de savoir si le nombre de PV du Bateau est à 0
        * 
        *  \return true le nombre de PV est égal à 0, false sinon
        */
        bool estCoule();

        /*!
        *  \brief Savoir si le Bateau est identique à un autre
        *
        *  Méthode permettant de savoir si Bateau possède exactement les mêmes 
        *  attributs qu'un autre
        *
        *  \param b : le Bateau que l'on souhaite comparé à notre Bateau
        * 
        *  \return true si c'est le même, false sinon
        */
        bool estEgal(std::shared_ptr<Bateau> b);

        /*!
        *  \brief Savoir si le Contenu est touché
        *
        *  Méthode permettant de savoir si le Contenu est touché 
        * 
        *  \return true 
        */
        bool touche();

        /*!
        *  \brief Destructeur
        *  Destructeur de la classe Bateau
        */
        virtual ~Bateau();

    private:
        int pvActuels_; /*!< Le nombre de PV du Bateau */
};

#endif // BATEAU_H
