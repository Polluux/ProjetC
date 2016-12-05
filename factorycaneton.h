#ifndef FACTORYCANETON_H
#define FACTORYCANETON_H

/*!
 * \file FactoryCaneton.h
 * \brief Description de l'usine à Caneton
 * \author Dylan Monneau & Alexandre Boudine
 * \date 
*/

#include "bateaufactory.h"
#include "caneton.h"

/*! \class FactoryCaneton
* \brief classe representant une usine à Caneton
*
*  La classe modélise une usine à Bateau de taille 1
*/

class FactoryCaneton : public BateauFactory
{
    public:
    	/*!
        *  \brief Constructeur
        *
        *  Constructeur de la classe FactoryCaneton
        */
        FactoryCaneton();

        /*!
        *  \brief Récupère le Caneton créé
        *
        *  Méthode permettant de créer un Caneton et de le récupérer
        *
        *  \return le Bateau de taille 1
        */
        std::shared_ptr<Bateau> creerBateau();
};

#endif // FACTORYCANETON_H
