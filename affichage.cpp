#include "affichage.h"
#include "case.h"

using namespace std;

Affichage::Affichage() : QWidget()
{
    layout_ = new QGridLayout;
    this->setLayout(layout_);
}

void Affichage::addContent(QWidget* c, int x, int y){
    layout_->addWidget(c,x,y);
}

void Affichage::removeAll(){

}

void Affichage::afficher(){
    this->show();
}
