#ifndef AFFICHAGEJEU_H
#define AFFICHAGEJEU_H

/*!
 * \file AffichageJeu.h
 * \brief Affichage du jeu
 * \author Dylan Monneau & Alexandre Boudine
 * \date 
*/

#include <QWidget>
#include <QGridLayout>
#include <QApplication>
#include <iostream>
#include <memory>
#include <QVector>

#include "iaffichage.h"
#include "core.h"

/*! \class AffichageJeu
* \brief classe representant l'affichage du jeu
*
*  La classe gère l'affichage du jeu avec les deux cartes et les autres éléments
*/

class AffichageJeu : public  IAffichage
{
    Q_OBJECT

    public:
        /*!
        *  \brief Constructeur
        *
        *  Constructeur de la classe AffichageJeu
        *
        *  \param c : le Core de l'application
        */
        AffichageJeu(Core* c);

        /*!
        *  \brief Affiche la fenêtre
        *
        *  Méthode pour afficher la fenêtre concernant le jeu
        */
        void afficher();

        /*!
        *  \brief Ajout de tous les éléments pour l'affichage
        *
        *  Methode qui permet d'ajouter l'ensemble des éléments pour l'affichage du jeu (la carte et les pseudos)
        */
        void updateElements();

        /*!
        *  \brief Change la fenêtre vers le menu
        *
        *  Méthode pour switcher la fenêtre courante avec celle du menu
        *  Pas implémenté pour cette classe 
        */
        void changeToMenu();

        /*!
        *  \brief Change la fenêtre vers l'initialisation pour le J1
        *
        *  Méthode pour switcher la fenêtre courante avec celle de l'initialisation du J1
        *  Pas implémenté pour cette classe 
        */
        void changeToInitialisationJ1();

        /*!
        *  \brief Change la fenêtre vers l'initialisation pour le J2
        *
        *  Méthode pour switcher la fenêtre courante avec celle de l'initialisation du J2
        *  Pas implémenté pour cette classe 
        */
        void changeToInitialisationJ2();

        /*!
        *  \brief Change la fenêtre vers le jeu
        *
        *  Méthode pour switcher la fenêtre courante avec celle du jeu 
        *  Pas implémenté pour cette classe 
        */
        void changeToJeu();

        /*!
        *  \brief Ajouter des widgets à l'affichage
        *
        *  Méthode permettant d'ajouter les cartes à l'affichages 
        *  on peut ajouter n'importe quel élément
        *
        *  \param c : l'élément à ajouter
        *  \param x : le n° ligne dans le layout
        *  \param y : le n° colonne dans le layout
        */
        void addContent(QWidget* c,int x, int y);

        /*!
        *  \brief Changer le sens de l'image du tour du joueur
        *
        *  Méthode permettant de tourner de 180° le triangle
        *  indiquant à quel joueur est le tour
        */
        void setImageChgmtTour();

        /*!
        *  \brief Récupère la carte d'initialisation du J1
        *
        *  Methode qui permet de retourner la carte d'initialisation
        *  du J1 avec tous ses bateaux 
        *
        *  \return la carte d'initialisation du J1
        */
        std::shared_ptr<Carte> getCarteJeuT1();

        /*!
        *  \brief Récupère la carte d'initialisation du J2
        *
        *  Methode qui permet de retourner la carte d'initialisation
        *  du J2 avec tous ses bateaux 
        *
        *  \return la carte d'initialisation du J2
        */
        std::shared_ptr<Carte> getCarteJeuT2();

    private:
        std::shared_ptr<Carte> carteJeuT1_; /*!< carte de jeu du J1 */
        std::shared_ptr<Carte> carteJeuT2_; /*!< carte de jeu du J2 */
        QPixmap triangleTour_; /*!< image représentant l'image indiquant à qui est le tour */
        QLabel *labelChgmtTour_; /*!< label dans lequel se trouve l'image précédente */
        QGridLayout *layout_; /*!< Layout contenant l'ensemble de tous les éléments ci-dessus */
};

#endif // AFFICHAGEJEU_H
