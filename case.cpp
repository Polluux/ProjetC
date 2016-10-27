#include "case.h"

using namespace std;

Case::Case(QWidget* parent, int x, int y) : QPushButton(parent)
{
    hit_ = false;
    x_ = x;
    y_ = y;
    setContent(new Mer());
    this->setStyleSheet("background-color:grey;outline: none");

}

bool Case::clic(){
    if(hit_){
        cout << "Cette case à déjà été cliquée" << endl;
        return false;
    }else{
        cout << "Clic de la case en (" << x_  << ", " << y_<< ")" << endl;
        hit_ = true;
        return content_->action(this); // A changer par la suite, en rendant le résultat de contenu.action();
    }
}

bool Case::isEmpty(){
    return content_->isEmpty();
}

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

