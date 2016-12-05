#ifndef CARTE_H
#define CARTE_H

/*!
 * \file Carte.h
 * \brief Description d'une carte
 * \author Dylan Monneau & Alexandre Boudine
 * \date 
*/

#include <QWidget>
#include <QGridLayout>
#include <iostream>
#include <QApplication>
#include <QLabel>
#include <string>
#include <iterator>
#include <QVector>

#include "case.h"
#include "bateau.h"
#include "bateaufactory.h"
#include "factorycygne.h"
#include "factoryoie.h"
#include "factorycanard.h"
#include "factorycaneton.h"

/*! \class Carte
* \brief classe representant une Carte
*
*  La classe modélise les actions que l'on peut faire sur une Carte
*/

class Carte : public QWidget
{
    Q_OBJECT

    public:
        /*!
        *  \brief Constructeur
        *
        *  Constructeur de la classe Carte
        */
        Carte();

        /*!
        *  \brief Ajout d'un Bateau
        *
        *  Méthode permettant d'ajouter un Bateau sur la carte
        * 
        *  \param b : Bateau à ajouter
        *
        *  \return true si le Bateau s'est placé sur la carte, sinon false
        */
        bool ajouterBateau(std::shared_ptr<Bateau> b);

        /*!
        *  \brief Suppression d'un Bateau
        *
        *  Méthode permettant de supprimer un Bateau sur la carte
        * 
        *  \param b : Bateau à supprimer
        */
        void enleverBateau(std::shared_ptr<Bateau> b);

        /*!
        *  \brief Récupère l'ensemble des Bateaux de la carte
        *
        *  Méthode permettant de récupérer l'ensemble des Bateaux qui ont été 
        *  ajouté à la liste des Bateaux de la Carte
        * 
        *  \return la liste des Bateaux qui ont été ajoutés à la carte
        */
        QVector<std::shared_ptr<Bateau> > getTabBateau();

        /*!
        *  \brief Récupère l'ensemble des Case de la carte
        *
        *  Méthode permettant de récupérer l'ensemble des 100 cases 
        *  de la Carte
        * 
        *  \return la liste des cases de la carte
        */
        QVector<Case*> getTabCase();

        /*!
        *  \brief Remet à zéro la carte en enlevant tous les Bateaux
        *
        *  Méthode permettant de supprimer tous les Bateaux déjà présents
        *  sur la carte en changeant le contenu de chaque case par de la Mer  
        */
        void reset();

    public slots :
        /*!
        *  \brief Action qui sera déclenché à chaque clic sur une case selon la carte (Init ou Jeu)
        *
        *  Méthode permettant d'interagir lors du clic sur une case de la carte 
        */
        virtual void actionBouton() = 0;

    protected:
        QVector<Case*> m_tabCase; /*!< liste des cases de la carte */
        QVector<std::shared_ptr<Bateau> > tabBateaux_; /*!< liste des bateaux placés sur la carte */
        QIcon logoCase_; /*!< l'image que pourra prendre une case */
        QPixmap cygne_; /*!< image pour le bateau de taille 4 */
        QPixmap oie_; /*!< image pour les bateaux de taille 3 */
        QPixmap canard_; /*!< image pour les bateaux de taille 2 */
        QPixmap caneton_; /*!< image pour les bateaux de taille 1 */

        std::shared_ptr<BateauFactory> factory; /*!< le chantier naval pour la construction des bateaux */
};

#endif // CARTE_H
