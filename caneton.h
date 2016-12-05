#ifndef CANETON_H
#define CANETON_H

/*!
 * \file Caneton.h
 * \brief Description Caneton, Bateau de taille 1
 * \author Dylan Monneau & Alexandre Boudine
 * \date 
*/

#include "bateau.h"

/*! \class Caneton
* \brief classe representant un Caneton
*
*  La classe modélise un Bateau de taille 1
*/

class Caneton : public Bateau
{
    public:
    	/*!
        *  \brief Constructeur
        *
        *  Constructeur de la classe Caneton
        */
        Caneton();

        /*!
        *  \brief Récupère la taille du Bateau
        *
        *  Méthode permettant de récupérer la taille d'un Caneton
        *
        *  \return la taille d'un Caneton (1)
        */
        int getTaille();
};

#endif // CANETON_H
