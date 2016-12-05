#ifndef FACTORYOIE_H
#define FACTORYOIE_H

/*!
 * \file FactoryOie.h
 * \brief Description de l'usine à Oie
 * \author Dylan Monneau & Alexandre Boudine
 * \date 
*/

#include "bateaufactory.h"
#include "oie.h"

/*! \class FactoryOie
* \brief classe representant une usine à Oie
*
*  La classe modélise une usine à Bateau de taille 3
*/

class FactoryOie : public BateauFactory
{
    public:
    	/*!
        *  \brief Constructeur
        *
        *  Constructeur de la classe FactoryOie
        */
        FactoryOie();

        /*!
        *  \brief Récupère le Oie créé
        *
        *  Méthode permettant de créer un Oie et de le récupérer
        *
        *  \return le Bateau de taille 3
        */
        std::shared_ptr<Bateau> creerBateau();
};

#endif // FACTORYOIE_H
