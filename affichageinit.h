#ifndef AFFICHAGEINIT_H
#define AFFICHAGEINIT_H

/*!
 * \file AffichageInit.h
 * \brief Affichage des éléments communs pour l'initialisation
 * \author Dylan Monneau & Alexandre Boudine
 * \date 
*/

#include <QWidget>
#include <QGridLayout>
#include <QApplication>
#include <iostream>
#include <QLabel>
#include <memory>
#include <string>
#include <QRadioButton>
#include <QLineEdit>
#include <QCheckBox>
#include <QMessageBox>

#include "core.h"
#include "carteinit.h"


/*! \class AffichageInit
* \brief classe representant l'affichage des éléments communs pour l'initialisation des deux joueurs
*
*  La classe gère l'affichage de l'ensemble des éléments qu'auront besoin les joueurs pour la phase d'initialisation 
*/

class AffichageInit
{
    public:
        /*!
        *  \brief Constructeur
        *  Constructeur de la classe AffichageInit
        */
        AffichageInit();

        /*!
        *  \brief Ajout de tous les éléments pour l'affichage
        *
        *  Methode qui permet d'ajouter l'ensemble des éléments pour l'affichage
        *
        *  \param txtBt : le texte sur la bouton "Pret" (on indique "suivant", "jeu", ...)
        */
        void updateElements(std::string txtBt);


        /*!
        *  \brief Case pour bateau horizontal cochée ?
        *
        *  Methode qui permet de tester si la case, pour savoir si le bateau 
        *  que l'on veut placer sera horizontal, est cochée
        *
        *  \return true si le bateau sera horizontal,
        *  false sinon
        */
        bool hChecked();

        /*!
        *  \brief Retourne le radiobouton cliqué
        *
        *  Methode qui permet de retourner si le bouton 
        *  représentant le bateau de taille 4 est cliqué
        * 
        *  \return le bouton sur lequel on a cliqué
        */
        QRadioButton* getB4();

        /*!
        *  \brief Retourne le radiobouton cliqué
        *
        *  Methode qui permet de retourner si le bouton 
        *  représentant le bateau de taille 3 est cliqué
        * 
        *  \return le bouton sur lequel on a cliqué
        */
        QRadioButton* getB3();

        /*!
        *  \brief Retourne le radiobouton cliqué
        *
        *  Methode qui permet de retourner si le bouton 
        *  représentant le bateau de taille 2 est cliqué
        * 
        *  \return le bouton sur lequel on a cliqué
        */
        QRadioButton* getB2();

        /*!
        *  \brief Retourne le radiobouton cliqué
        *
        *  Methode qui permet de retourner si le bouton 
        *  représentant le bateau de taille 1 est cliqué
        * 
        *  \return le bouton sur lequel on a cliqué
        */
        QRadioButton* getB1();

        /*!
        *  \brief Retourne le radiobouton cliqué
        *
        *  Methode qui permet de retourner directement
        *  sur quel radiobouton, concernant les bateaux, on a cliqué  
        *
        *  \return le bouton sur lequel on a cliqué
        */
        QRadioButton* getBateauSelect();

        /*!
        *  \brief Permet de remettre à zéro la carte
        *
        *  Methode qui permet de reset l'ensemble des bateaux
        *  présent sur la carte
        */
        void resetBouton();

    protected:
        QGridLayout *gLayoutCentral_; /*!< Layout central */
        QGridLayout *gLayoutGauche_; /*!< Layout contenant la carte */
        QGridLayout *gLayoutDroite_; /*!< Layout contenant les bateaux à placer */
        std::shared_ptr<Carte> carteInit_; /*!< La carte d'initialisation */
        QRadioButton *b1_; /*!< Bouton pour pouvoir placer les bateaux de taille 1 */
        QRadioButton *b2_; /*!< Bouton pour pouvoir placer les bateaux de taille 2 */
        QRadioButton *b3_; /*!< Bouton pour pouvoir placer les bateaux de taille 3 */
        QRadioButton *b4_; /*!< Bouton pour pouvoir placer le bateau de taille 4 */
        QLineEdit *pseudo_; /*!< Champs pour indiquer son pseudo */
        QCheckBox *horizontal_; /*!< Case à cocher pour indiquer si on souhaite un bateau horizontal ou vertical */
        QPushButton *boutonSuivant_; /*!< Bouton "Pret" une fois que tout est OK */
        QPushButton *reset_; /*!< Bouton pour reset le placement des bateaux sur la carte */
};

#endif // AFFICHAGEINIT_H
