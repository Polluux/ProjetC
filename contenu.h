#ifndef CONTENU_H
#define CONTENU_H

/*!
 * \file Contenu.h
 * \brief Description d'un Contenu de case
 * \author Dylan Monneau & Alexandre Boudine
 * \date 
*/

class Case;

/*! \interface Contenu
* \brief classe representant un Contenu 
*
*  La classe gère l'ensemble des comportements sur un contenu de cases
*/

class Contenu
{
    public:
         /*!
        *  \brief Constructeur
        *
        *  Constructeur de la classe Contenu
        */
        Contenu();

        /*!
        *  \brief Action émise lorsqu'on a cliqué sur une Case
        *
        *  Méthode permettant de savoir si le contenu de la case est un Bateau 
        *  ou de la Mer
        *
        *  \param c : la case sur laquelle on a cliqué
        *
        *  \return true si le contenu de la case est un Bateau sinon false
        */
        virtual bool action(Case *c) = 0;

        /*!
        *  \brief Modifie la coordonnée X du Contenu
        *
        *  Méthode permettant de modifier la coordonnée en X, 
        *  c'est à dire sur quelle ligne placer le Contenu
        *
        *  \param x : numéro de la ligne 
        */
        virtual void setX(int x) = 0;

        /*!
        *  \brief Modifie la coordonnée Y du Contenu
        *
        *  Méthode permettant de modifier la coordonnée en Y, 
        *  c'est à dire sur quelle colonne placer le Contenu
        *
        *  \param x : numéro de la colonne 
        */
        virtual void setY(int y) = 0;

        /*!
        *  \brief Modifie l'orientation du Bateau
        *
        *  Méthode permettant de modifier l'orientation du Contenu
        *
        *  \param a : booléen à true : horizontal, sinon vertical
        */
        virtual void setHorizontal(bool a) = 0;

        /*!
        *  \brief Récupère la ligne où se trouve le Contenu
        *
        *  Méthode permettant de récupérer la ligne sur laquelle 
        *  se situe le Contenu de la Case
        *
        *  \return le numéro de ligne sur laquelle se trouve le Contenu 
        */
        virtual int getX() = 0;

        /*!
        *  \brief Récupère la colonne où se trouve le Contenu
        *
        *  Méthode permettant de récupérer la colonne sur laquelle 
        *  se situe le Contenu de la Case
        *
        *  \return le numéro de colonne sur laquelle se trouve le Contenu 
        */
        virtual int getY() = 0;

        /*!
        *  \brief Récupère l'orientation du Contenu
        *
        *  Méthode permettant de savoir si le Contenu est horizontal 
        *  ou vertical
        * 
        *  \return true si le Contenu est horizontal, false sinon
        */
        virtual bool getHorizontal() = 0;

        /*!
        *  \brief Connaitre la taille du Contenu
        *
        *  Méthode permettant de connaitre la taille du Contenu 
        * 
        *  \return la taille du Contenu
        */
        virtual int getTaille() = 0;

        /*!
        *  \brief Savoir si le contenu est vide
        *
        *  Méthode permettant de savoir si le contenu est vide ( de la Mer )
        * 
        *  \return true s'il s'agit d'un Bateau, false si c'est de la Mer
        */
        virtual bool isEmpty()=0;

        /*!
        *  \brief Savoir si le Contenu est touché
        *
        *  Méthode permettant de savoir si le Contenu est touché 
        * 
        *  \return true si le Contenu est un Bateau, false si c'est de la Mer
        */
        virtual bool touche() = 0;

        /*!
        *  \brief Savoir si le Contenu est coulé 
        *
        *  Méthode permettant de savoir si le Contenu n'a plus de vie
        * 
        *  \return true si le Contenu n'a plus de vie, false sinon
        */
        virtual bool estCoule() = 0;

        /*!
        *  \brief Destructeur
        *  Destructeur de la classe Contenu
        */
        virtual ~Contenu();

    protected:
        int x_; /*!< le numéro de ligne du Contenu */ 
        int y_; /*!< le numéro de colonne du Contenu */ 
        bool horizontal_; /*!< l'orientation du contenu */ 
        int taille_; /*!< la taille du contenu */ 
};

#endif // CONTENU_H
