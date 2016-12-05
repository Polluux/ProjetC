#ifndef CANARD_H
#define CANARD_H

/*!
 * \file Canard.h
 * \brief Description Canard, Bateau de taille 2
 * \author Dylan Monneau & Alexandre Boudine
 * \date 
*/

#include "bateau.h"

/*! \class Canard
* \brief classe representant un Canard
*
*  La classe modélise un Bateau de taille 2
*/

class Canard : public Bateau
{
    public:
    	/*!
        *  \brief Constructeur
        *
        *  Constructeur de la classe Canard
        */
        Canard();

        /*!
        *  \brief Récupère la taille du Bateau
        *
        *  Méthode permettant de récupérer la taille d'un Canard
        *
        *  \return la taille d'un Canard (2)
        */
        int getTaille();
};

#endif // CANARD_H
