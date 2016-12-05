#ifndef MER_H
#define MER_H

/*!
 * \file Mer.h
 * \brief Description de la Mer
 * \author Dylan Monneau & Alexandre Boudine
 * \date 
*/

#include <iostream>

#include "contenu.h"
#include "case.h"

/*! \class Mer
* \brief classe representant de la Mer
*
*  La classe gère l'ensemble des actions impactant une Mer
*/

class Mer : public Contenu
{
    public:
        /*!
        *  \brief Constructeur
        *
        *  Constructeur de la classe Mer
        */
        Mer();

        /*!
        *  \brief Action émise lorsqu'on a cliqué sur une case contenant de la Mer
        *
        *  Méthode permettant de savoir si le contenu de la case est de la Mer 
        *
        *  \param c : la case sur laquelle on a cliqué
        *
        *  \return false si le contenu de la case est de la Mer sinon true
        */
        bool action(Case *c);

        /*!
        *  \brief Modifie la coordonnée X de la Mer
        *
        *  Méthode permettant de modifier la coordonnée en X, 
        *  c'est à dire sur quelle ligne placer la Mer
        *
        *  \param x : numéro de la ligne 
        */
        void setX(int x);

        /*!
        *  \brief Modifie la coordonnée Y de la Mer
        *
        *  Méthode permettant de modifier la coordonnée en Y, 
        *  c'est à dire sur quelle colonne placer la Mer
        *
        *  \param x : numéro de la colonne 
        */
        void setY(int y);

        /*!
        *  \brief Modifie l'orientation de la Mer
        *
        *  Méthode permettant de modifier l'orientation de la Mer
        *
        *  \param a : booléen à true : horizontal, sinon vertical
        */
        void setHorizontal(bool a);

        /*!
        *  \brief Récupère la ligne où se trouve la Mer
        *
        *  Méthode permettant de récupérer la ligne sur laquelle 
        *  se situe la Mer sur la carte
        *
        *  \return le numéro de ligne sur laquelle se trouve la Mer
        */
        int getX();

        /*!
        *  \brief Récupère la colonne où se trouve la Mer
        *
        *  Méthode permettant de récupérer la colonne sur laquelle 
        *  se situe la Mer sur la carte
        *
        *  \return le numéro de colonne sur laquelle se trouve la Mer
        */
        int getY();

        /*!
        *  \brief Récupère l'orientation de la Mer
        *
        *  Méthode permettant de savoir si la Mer est horizontal 
        *  ou vertical
        * 
        *  \return true si la Mer est horizontal, false sinon
        */
        bool getHorizontal();

        /*!
        *  \brief Connaitre la taille de la Mer
        *
        *  Méthode permettant de connaitre la taille de la Mer 
        * 
        *  \return la taille de la Mer (1)
        */
        int getTaille();

        /*!
        *  \brief Savoir si le contenu est vide
        *
        *  Méthode permettant de savoir si le contenu est vide 
        * 
        *  \return false
        */
        bool isEmpty();

        /*!
        *  \brief Savoir si le Contenu est touché
        *
        *  Méthode permettant de savoir si le Contenu est touché 
        * 
        *  \return false
        */
        bool touche();

        /*!
        *  \brief Savoir si le Contenu est coulé
        *
        *  Méthode permettant de savoir si le contenu de la case est coulé
        *  logique dans ce cas
        * 
        *  \return false ici
        */
        bool estCoule();

        /*!
        *  \brief Destructeur
        *  Destructeur de la classe Mer
        */
        virtual ~Mer();

};

#endif // MER_H
