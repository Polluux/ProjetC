#include "case.h"
#include "contenu.h"
#include "mer.h"

using namespace std;

Case::Case(QWidget* parent, int x, int y) : QPushButton(parent)
{
    hit_ = false;
    x_ = x;
    y_ = y;
    setContent(new Mer());
    this->setStyleSheet("background-color:grey;");
}

bool Case::clic(){
    if(hit_){
        cout << "Cette case à déjà été cliquée" << endl;
        return false;
    }else{
        cout << "Clic de la case en (" << x_  << ", " << y_<< ")" << endl;
        hit_ = true;
        cout << content_ << endl;
        return content_->action(this); // A changer par la suite, en rendant le résultat de contenu.action();
    }
}

bool Case::isEmpty(){
    return content_->isEmpty();
}

/*
 * 0 : dans l'eau
 * 1 : touche un élément déjà touché
 * 2 : touche un élément pour la première fois
 * */
/*int Case::toucher(int dx, int dy)
{
    if((m_abs == dx) && (m_abs == dy))
    {
        if(m_touche)
            return 1;
        else
        {
            m_touche = true;
            return 2;
        }
    }
    else
        return 0;
}*/

int Case::getX()
{
    return x_;
}

int Case::getY()
{
    return y_;
}

void Case::toString()
{
    cout << "case en (" << x_  << ", " << y_<< ")" << endl;
}

shared_ptr<Contenu> Case::getContent(){
    return content_;
}


void Case::setContent(Contenu *c){
    content_ = shared_ptr<Contenu> (c);
}

Case::~Case(){}

