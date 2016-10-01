#include "carte.h"

using namespace std;

Carte::Carte() : QWidget()
{
    layout = new QGridLayout;

    for(int i=0; i<10; ++i)
    {
        for(int j=0; j<10; ++j)
        {
            cases = new Case("", this, i, j);
            cases->setMinimumSize(20,40);
            tabCase.push_back(cases);
            layout->addWidget(cases,i,j);

            QObject::connect(cases, SIGNAL(clicked()), this, SLOT(afficherCoordonnees()));
        }
    }

    this->setLayout(layout);
}

void Carte::afficherCoordonnees()
{
    QObject *emetteur = sender();

    Case *bouton = dynamic_cast<Case*>(emetteur);

    bouton->toString();
}
