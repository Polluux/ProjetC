#include "carte.h"

using namespace std;

Carte::Carte() : QWidget()
{
    m_layout = new QGridLayout;
    m_layout->setHorizontalSpacing(0);
    m_layout->setVerticalSpacing(0);
    Case* m_cases;

    for(int i=0; i<10; ++i)
    {
        for(int j=0; j<10; ++j)
        {
            m_cases = new Case(this, i, j);
            m_cases->setMinimumSize(40,40);
            m_cases->setMaximumSize(40,40);
            m_tabCase.push_back(m_cases);
            m_layout->addWidget(m_cases,i,j);

            QObject::connect(m_cases, SIGNAL(clicked()), this, SLOT(afficherCoordonnees()));
        }
    }

    this->setLayout(m_layout);

    //this->show();
}

void Carte::ajouterBateau(Bateau b)
{
    //Esc3nard *b = new Esc3nard(2,2, true, this);
}

void Carte::enleverBateau(Bateau b){

}

void Carte::afficherCoordonnees()
{
    QObject *emetteur = sender();

    Case *bouton = dynamic_cast<Case*>(emetteur);

    bouton->toString();
}
