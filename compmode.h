#ifndef COMPMODE_H
#define COMPMODE_H

class CompMode
{
public:
    CompMode();
    virtual void AbstractMemberFunction() = 0; //toAbstract
    virtual void getMode();

    virtual void initialiserJoueurs();
    virtual void initialiserCartes();
    virtual void lancer();
    virtual void arreter();
    virtual void checkFinis();
    virtual void debutTour();
    virtual void finTour();
    virtual void pret();

    virtual ~CompMode();
};

#endif // COMPMODE_H
