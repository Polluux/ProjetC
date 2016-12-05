#ifndef IAFFICHAGE_H
#define IAFFICHAGE_H

/*!
 * \file IAffichage.h
 * \brief Description des comportements des interfaces
 * \author Dylan Monneau & Alexandre Boudine
 * \date 
*/

#include <QApplication>
#include <QWidget>
#include <iostream>
#include <memory>
#include <iostream>

class Core;

/*! \interface IAffichage
* \brief classe representant les comportements des affichages
*
*  La classe modélise les comportements des affichages de jeu,
*  des initialisations, ...
*/

class IAffichage : public QWidget
{
    Q_OBJECT

    public:
        /*!
        *  \brief Constructeur
        *  Constructeur de la classe IAffichage
        */
        IAffichage();

        /*!
        *  \brief Affiche la fenêtre
        *
        *  Méthode pour afficher la fenêtre 
        */
        virtual void afficher()=0;

        /*!
        *  \brief Change la fenêtre vers le menu
        *
        *  Méthode pour switcher la fenêtre courante avec celle du menu 
        */
        virtual void changeToMenu()=0;

        /*!
        *  \brief Change la fenêtre vers l'initialisation pour le J1
        *
        *  Méthode pour switcher la fenêtre courante avec celle de l'initialisation du J1
        */
        virtual void changeToInitialisationJ1()=0;

        /*!
        *  \brief Change la fenêtre vers l'initialisation pour le J2
        *
        *  Méthode pour switcher la fenêtre courante avec celle de l'initialisation du J2
        */
        virtual void changeToInitialisationJ2()=0;

        /*!
        *  \brief Change la fenêtre vers le jeu
        *
        *  Méthode pour switcher la fenêtre courante avec celle du jeu
        */
        virtual void changeToJeu()=0;

        /*!
        *  \brief Récupère le core de l'application
        *
        *  Méthode pour récupérer le core de l'application
        *
        *  \return le core de l'application
        */
        std::shared_ptr<Core> getCore();

        /*!
        *  \brief Destructeur
        *  Destructeur de la classe IAffichage
        */
        virtual ~IAffichage();

    protected:
        std::shared_ptr<Core> core_; /*!< le core de l'application */
};

#endif // IAFFICHAGE_H
