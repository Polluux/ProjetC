#ifndef SUJET_H
#define SUJET_H


class Sujet
{
    public:
        virtual void ajouterObs(Observer o) = 0;
        virtual void supprimerObs(Observer o) = 0;
        virtual void notifierObs() = 0;

        virtual ~Sujet() {}
};

#endif // SUJET_H
