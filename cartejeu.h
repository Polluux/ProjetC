#ifndef CARTEJEU_H
#define CARTEJEU_H

/*!
 * \file CarteJeu.h
 * \brief Description d'une carte de jeu
 * \author Dylan Monneau & Alexandre Boudine
 * \date 
*/

#include <QMessageBox>

#include "carte.h"

class AffichageJeu;

/*! \class CarteJeu
* \brief classe representant une Carte de jeu
*
*  La classe décrit ce qu'il est possible de faire avec une Carte d'initialisation
*/

class CarteJeu : public Carte
{
    public:
    	/*!
        *  \brief Constructeur
        *
        *  Constructeur de la classe CarteJeu
		*  
        *  \param a : le paramètre est un AffichageJeu en cas de besoin
        */
        CarteJeu(AffichageJeu *a);

        /*!
        *  \brief Action qui sera déclenché à chaque clic sur une case
        *
        *  Méthode permettant d'interagir lors du clic sur une case de la carte 
        */
        void actionBouton();

    private:
        std::shared_ptr<AffichageJeu> aff_; /*!< affichage permettant de récupérer les éléments nécessaires */
};

#endif // CARTEJEU_H
