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
}

bool Carte::ajouterBateau(Bateau *b)
{
    int x = b->getX();
    int y = b->getY();
    int taille = b->getTaille();
    bool h = b->getHorizontal();

    bool err = false;
    if(h){
        if(y+taille > 9){
            err = true;
        }
    }else{
        if(x+taille > 9){
            err = true;
        }
    }

    if(!err){
        for(int i = 0; i<taille; ++i){
            if(h){
                if(!(m_tabCase[(x*10+(y+i))]->isEmpty())){
                    err = true;
                }
            }else{
                if(!(m_tabCase[((x+i)*10+y)]->isEmpty())){
                    err = true;
                }
            }
        }
        if(!err){
            for(int i = 0; i<taille; ++i){
                if(h){
                    m_tabCase[(x*10+(y+i))]->setContent(b);
                }else{
                    m_tabCase[((x+i)*10+y)]->setContent(b);
                }
            }

            tabBateaux_.push_back(*b);
        }
    }
    return !err;
}

void Carte::enleverBateau(Bateau *b){
    int x = b->getX();
    int y = b->getY();
    int taille = b->getTaille();
    bool h = b->getHorizontal();

    for(int i = 0; i<taille; ++i){
        if(h){
            m_tabCase[(x*10+(y+i))]->setStyleSheet("background-color:purple;");
        }else{
            m_tabCase[((x+i)*10+y)]->setStyleSheet("background-color:purple;");
        }
    }
}

void Carte::afficherCoordonnees()
{
    QObject *emetteur = sender();

    Case *bouton = dynamic_cast<Case*>(emetteur);

    bool res = bouton->clic();
    //Passage de main au joueur suivant si false sinon ... on continue
}
