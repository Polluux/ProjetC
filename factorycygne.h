#ifndef FACTORYCYGNE_H
#define FACTORYCYGNE_H

/*!
 * \file FactoryCygne.h
 * \brief Description de l'usine à Cygne
 * \author Dylan Monneau & Alexandre Boudine
 * \date 
*/

#include "bateaufactory.h"
#include "cygne.h"

#include <iostream>

/*! \class FactoryCygne
* \brief classe representant une usine à Cygne
*
*  La classe modélise une usine à Bateau de taille 4
*/

class FactoryCygne : public BateauFactory
{
    public:
    	/*!
        *  \brief Constructeur
        *
        *  Constructeur de la classe FactoryCygne
        */
        FactoryCygne();

        /*!
        *  \brief Récupère le Cygne créé
        *
        *  Méthode permettant de créer un Cygne et de le récupérer
        *
        *  \return le Bateau de taille 4
        */
        std::shared_ptr<Bateau> creerBateau();
};

#endif // FACTORYCYGNE_H
