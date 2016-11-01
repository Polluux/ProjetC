#ifndef JOUEUR_H
#define JOUEUR_H

#include <string>
#include <cstddef>

class Joueur
{
    public:
        Joueur(std::string n);
        std::string getNom();

    private:
        std::string nom_;
};

#endif // JOUEUR_H
