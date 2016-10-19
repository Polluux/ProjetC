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

            QObject::connect(m_cases, SIGNAL(clicked()), this, SLOT(actionBouton()));
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

    // pour gérer les cas de dépassements de zone
    bool err = false;
    // si le bateau est horizontal
    if(h){
        // et que sa taille + sa coordonée sur la colonne dépasse 9 ==> erreur
        if(y+taille > 9){
            err = true;
        }
    }
    // idem si le bateau est vertical
    else{
        // et que sa taille + sa coordonnée sur la ligne dépasse 9
        if(x+taille > 9){
            err = true;
        }
    }

    // si on n'a pas de dépassement de zone
    if(!err){
        // on parcourt l'endroit où on souhaite placer le bateau
        for(int i = 0; i<taille; ++i){
            // si le bateau est horizontal
            if(h){
                // on regarde si la case est libre ==> erreur si elle ne l'est pas
                if(!(m_tabCase[(x*10+(y+i))]->isEmpty())){
                    err = true;
                }
            }
            // idem si le bateau est vertical
            else{
                if(!(m_tabCase[((x+i)*10+y)]->isEmpty())){
                    err = true;
                }
            }
        }

        // si toutes les cases où l'on souhaite placer le bateau sont libres
        if(!err){
            // on place le bateau selon sa direction et sa taille
            for(int i = 0; i<taille; ++i){
                if(h){
                    m_tabCase[(x*10+(y+i))]->setContent(b);
                }else{
                    m_tabCase[((x+i)*10+y)]->setContent(b);
                }
            }

            // on ajoute notre bateau dans le tableau contenant ceux sur la carte
            tabBateaux_.push_back(b);
        }
    }

    // on retourne un booléen pour savoir si le bateau a été placé ou non
    return !err;
}

void Carte::enleverBateau(Bateau *b){
    int x = b->getX();
    int y = b->getY();
    int taille = b->getTaille();
    bool h = b->getHorizontal();
    int indiceBateau = 0;

    for(unsigned int i=0; i<tabBateaux_.size(); ++i) {
        if(tabBateaux_[i]->estEgal(b))
        {
            indiceBateau = i;
        }
    }

    for(int i = 0; i<taille; ++i){
        if(h){
            m_tabCase[(x*10+(y+i))]->setStyleSheet("background-color:purple;");
        }else{
            m_tabCase[((x+i)*10+y)]->setStyleSheet("background-color:purple;");
        }
    }

    tabBateaux_.erase(tabBateaux_.begin() + indiceBateau);
}

void Carte::actionBouton()
{
    QObject *emetteur = sender();

    Case *bouton = dynamic_cast<Case*>(emetteur);

    bool res = bouton->clic();
    //Passage de main au joueur suivant si false sinon ... on continue

    for(Bateau *b : tabBateaux_){
        if(b->estCoule()){
            enleverBateau(b);
            cout << "Bateau coulé !" << endl;
        }
    }
}
