#ifndef BATEAUFACTORY_H
#define BATEAUFACTORY_H

/*!
 * \file BateauFactory.h
 * \brief Interface d'un "Chantier Naval" pour la création de Bateaux 
 * \author Dylan Monneau & Alexandre Boudine
 * \date 
*/

#include "bateau.h"

/*! \interface BateauFactory
* \brief classe representant un "Chantier Naval"
*
*  La classe gère la création de Bateaux
*/

class BateauFactory
{
    public:
    	/*!
        *  \brief Constructeur
        *
        *  Constructeur de la classe BateauFactory
        */
        BateauFactory();

        /*!
        *  \brief Récupère le Bateau créé
        *
        *  Méthode permettant de récupérer le Bateau créé 
        *
        *  \return le Bateau créé en fonction de la factory invoqué
        */
        virtual std::shared_ptr<Bateau> creerBateau() = 0;
};

#endif // BATEAUFACTORY_H
