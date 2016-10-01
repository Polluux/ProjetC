#include "fenetre.h"

using namespace std;

Fenetre::Fenetre() : QWidget()
{
    layout = new QGridLayout;

    for(int i=0; i<10; ++i)
    {
        for(int j=0; j<10; ++j)
        {
            c = new Case("", this, i, j);
            c->setMinimumSize(20,40);
            tabCase.push_back(c);
            layout->addWidget(c,i,j);

            QObject::connect(c, SIGNAL(clicked()), this, SLOT(afficherCoordonnees()));
        }
    }

    this->setLayout(layout);
}

void Fenetre::afficherCoordonnees()
{
    QObject *emetteur = sender();

    Case *bouton = dynamic_cast<Case*>(emetteur);

    bouton->toString();
}
