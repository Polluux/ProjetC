#ifndef CONTENU_H
#define CONTENU_H

class Contenu
{

protected:
    int x_;
    int y_;
    bool horizontal_;
    int taille_;


public:
    Contenu();
    //virtual void AbstractMemberFunction() = 0; //toAbstract
    virtual bool Action() = 0;

    virtual void setX(int x) = 0;
    virtual void setY(int y) = 0;
    virtual void setHorizontal(bool a) = 0;
    virtual int getX() = 0;
    virtual int getY() = 0;
    virtual bool getHorizontal() = 0;
    virtual int getTaille() = 0;

    virtual ~Contenu();
};

#endif // CONTENU_H
