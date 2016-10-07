#ifndef CONTENU_H
#define CONTENU_H

class Contenu
{
public:
    Contenu();
    virtual void AbstractMemberFunction() = 0; //toAbstract
    bool Action();

    void setX(int x);
    void setY(int y);
    void setHorizontal(bool a);
    int getX();
    int getY();
    bool getHorizontal();
    int getTaille();

private:
    int x_;
    int y_;
    bool horizontal_;
    int taille_;
};

#endif // CONTENU_H
