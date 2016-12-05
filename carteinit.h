#ifndef CARTEINIT_H
#define CARTEINIT_H

/*!
 * \file CarteInit.h
 * \brief Description d'une carte d'initialisation
 * \author Dylan Monneau & Alexandre Boudine
 * \date 
*/

#include "carte.h"

class AffichageInit;
#include "iaffichage.h"

/*! \class CarteInit
* \brief classe representant une Carte d'initialisation
*
*  La classe décrit ce qu'il est possible de faire avec une Carte d'initialisation
*/

class CarteInit : public Carte
{
    public:
    	/*!
        *  \brief Constructeur
        *
        *  Constructeur de la classe CarteInit
		*  
        *  \param a : le paramètre est un IAffichage en cas de besoin
        */
        CarteInit(std::shared_ptr<IAffichage> a);

        /*!
        *  \brief Constructeur
        *
        *  Constructeur de la classe CarteInit
		*  
        *  \param a : le paramètre est un AffichageInit en cas de besoin
        */
        CarteInit(std::shared_ptr<AffichageInit> a);

        /*!
        *  \brief Action qui sera déclenché à chaque clic sur une case
        *
        *  Méthode permettant d'interagir lors du clic sur une case de la carte 
        */
        void actionBouton();

    private:
        std::shared_ptr<AffichageInit> aff_; /*!< affichage permettant de récupérer les éléments nécessaires */
};

#endif // CARTEINIT_H
