#ifndef CASE_H
#define CASE_H

/*!
 * \file Case.h
 * \brief Description d'une case
 * \author Dylan Monneau & Alexandre Boudine
 * \date 
*/

#include <QApplication>
#include <QPushButton>
#include <iostream>
#include <contenu.h>
#include <memory>

#include "contenu.h"
#include "mer.h"

/*! \class Case
* \brief classe representant une Case
*
*  La classe décrit une case qui composera une carte
*/

class Case : public QPushButton
{
    Q_OBJECT

    public:
        /*!
        *  \brief Constructeur
        *
        *  Constructeur de la classe Case
        *  
        *  \param parent : déigne le parent de la case (la carte)
        *  \param x : le numéro de ligne de la case 
        *  \param y : le numéro de colonne de la case
        */
        Case(QWidget* parent, int x, int y);

        /*!
        *  \brief Permet de savoir si la case a déjà été touchée et ce qu'elle contient
        *
        *  Méthode permettant de savoir si la case a déjà été cliqué et connaitre son contenu
        *  grâce à son retour
        *
        *  \return true si la case a déjà été touchée ou s'il s'agit d'un bateau, sinon false
        */
        bool clic();

        /*!
        *  \brief Récupère la ligne où se trouve la case
        *
        *  Méthode permettant de récupérer la ligne sur laquelle 
        *  se situe la case sur la carte
        *
        *  \return le numéro de ligne sur laquelle se trouve la case 
        */
        int getX();

        /*!
        *  \brief Récupère la colonne où se trouve la case
        *
        *  Méthode permettant de récupérer la colonne sur laquelle 
        *  se situe la case sur la carte
        *
        *  \return le numéro de colonne sur laquelle se trouve la case 
        */
        int getY();

        /*!
        *  \brief Décrit la case
        *
        *  Méthode permettant de décrire la case avec ses coordonnées 
        */
        void toString();

        /*!
        *  \brief Récupère le contenu de la case
        *
        *  Méthode permettant de récupérer le contenu de la case
        *
        *  \return le contenu la case (Bateau ou Mer) 
        */
        std::shared_ptr<Contenu> getContent();

        /*!
        *  \brief Modifie le contenu de la case
        *
        *  Méthode permettant modifier le contenu de la case
        *
        *  \param c : le nouveau contenu de la case (Mer ou Bateau)
        */
        void setContent(Contenu *c);

        /*!
        *  \brief Modifie le contenu de la case
        *
        *  Méthode permettant modifier le contenu de la case
        *
        *  \param c : le nouveau contenu de la case (Mer ou Bateau)
        */
        void setContent(std::shared_ptr<Contenu> c);
        
        /*!
        *  \brief Savoir si le contenu de la case est vide (de la Mer)
        *
        *  Méthode permettant de savoir si le contenu de la case est de la Mer ou non
        *
        *  \return true si le contenu de la case est de la Mer, sinon false
        */
        bool isEmpty();

        /*!
        *  \brief Permet de vider la case
        *
        *  Méthode permettant de modifier le contenu de la case par de la Mer
        */
        void resetCase();

        /*!
        *  \brief Destructeur
        *  Destructeur de la classe Case
        */
        virtual ~Case();

    private:
        bool hit_; /*!< booléen permettant de savoir si la case a déjà été touchée */
        int x_; /*!< le numéro de ligne de la case */
        int y_; /*!< le numéro de colonne de la case */
        std::shared_ptr<Contenu> content_; /*!< le contenu de la case */
};

#endif // CASE_H
