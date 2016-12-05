#ifndef OIE_H
#define OIE_H

/*!
 * \file Oie.h
 * \brief Description Cygne, Oie de taille 3
 * \author Dylan Monneau & Alexandre Boudine
 * \date 
*/

#include "bateau.h"

/*! \class Oie
* \brief classe representant un Oie
*
*  La classe modélise un Bateau de taille 3
*/

class Oie : public Bateau
{
    public:
    	/*!
        *  \brief Constructeur
        *
        *  Constructeur de la classe Oie
        */
        Oie();

        /*!
        *  \brief Récupère la taille du Bateau
        *
        *  Méthode permettant de récupérer la taille d'une Oie
        *
        *  \return la taille d'une Oie (3)
        */
        int getTaille();
};

#endif // OIE_H
