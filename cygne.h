#ifndef CYGNE_H
#define CYGNE_H

/*!
 * \file Cygne.h
 * \brief Description Cygne, Bateau de taille 4
 * \author Dylan Monneau & Alexandre Boudine
 * \date 
*/

#include "bateau.h"

/*! \class Cygne
* \brief classe representant un Cygne
*
*  La classe modélise un Bateau de taille 4
*/

class Cygne : public Bateau
{
    public:
    	/*!
        *  \brief Constructeur
        *
        *  Constructeur de la classe Cygne
        */
        Cygne();

        /*!
        *  \brief Récupère la taille du Bateau
        *
        *  Méthode permettant de récupérer la taille d'un Cygne
        *
        *  \return la taille d'un Cygne (4)
        */
        int getTaille();
};

#endif // CYGNE_H
