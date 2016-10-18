#ifndef CARTE_H
#define CARTE_H

#include <iostream>
#include <vector>

#include "torpilleur.h"
#include "case.h"

class Carte
{
    public:
        Carte();
        void ajouterBateau(Bateau b);
        void enleverBateau(Bateau b);
        bool coordPresentes(Case c);
        void afficherCarte();
        int coup(int dx, int py);
        void toString();

    private:
        std::vector<Bateau> m_tabBateaux;
        std::vector<Case> m_map;

/* 
    Bateau est fait de caseBateau                   Case --> CaseVide
                                                    Case --> CaseBateau    donc Case : abstraite


    Carte est fait de Bateau et de CaseVide
*/
};

#endif // CARTE_H