#ifndef FACTORYCANARD_H
#define FACTORYCANARD_H

/*!
 * \file FactoryCanard.h
 * \brief Description de l'usine à Canard
 * \author Dylan Monneau & Alexandre Boudine
 * \date 
*/

#include "bateaufactory.h"
#include "canard.h"

/*! \class FactoryCanard
* \brief classe representant une usine à Canard
*
*  La classe modélise une usine à Bateau de taille 2
*/

class FactoryCanard : public BateauFactory
{
    public:
    	/*!
        *  \brief Constructeur
        *
        *  Constructeur de la classe FactoryCanard
        */
        FactoryCanard();

        /*!
        *  \brief Récupère le Canard créé
        *
        *  Méthode permettant de créer un Canard et de le récupérer
        *
        *  \return le Bateau de taille 2
        */
        std::shared_ptr<Bateau> creerBateau();
};

#endif // FACTORYCANARD_H
