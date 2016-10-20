#include "carte.h"
#include <string>

using namespace std;

Carte::Carte() : QWidget()
{
    QGridLayout *fenetre = new QGridLayout;

    QGridLayout *lettre_h = new QGridLayout;
    lettre_h->addWidget(new QLabel("    A"), 0, 0);
    lettre_h->addWidget(new QLabel("    B "), 0, 1);
    lettre_h->addWidget(new QLabel("    C "), 0, 2);
    lettre_h->addWidget(new QLabel("    D "), 0, 3);
    lettre_h->addWidget(new QLabel("    E "), 0, 4);
    lettre_h->addWidget(new QLabel("    F "), 0, 5);
    lettre_h->addWidget(new QLabel("    G "), 0, 6);
    lettre_h->addWidget(new QLabel("    H "), 0, 7);
    lettre_h->addWidget(new QLabel("    I "), 0, 8);
    lettre_h->addWidget(new QLabel("    J "), 0, 9);

    QGridLayout *chiffre_v = new QGridLayout;
    chiffre_v->addWidget(new QLabel("0"), 0, 0);
    chiffre_v->addWidget(new QLabel("1"), 1, 0);
    chiffre_v->addWidget(new QLabel("2"), 2, 0);
    chiffre_v->addWidget(new QLabel("3"), 3, 0);
    chiffre_v->addWidget(new QLabel("4"), 4, 0);
    chiffre_v->addWidget(new QLabel("5"), 5, 0);
    chiffre_v->addWidget(new QLabel("6"), 6, 0);
    chiffre_v->addWidget(new QLabel("7"), 7, 0);
    chiffre_v->addWidget(new QLabel("8"), 8, 0);
    chiffre_v->addWidget(new QLabel("9"), 9, 0);

    QGridLayout *grille = new QGridLayout;
    grille->setHorizontalSpacing(0);
    grille->setVerticalSpacing(0);

    Case* m_cases;

    for(int i=0; i<10; ++i)
    {
        for(int j=0; j<10; ++j)
        {
            m_cases = new Case(this, i, j);
            m_cases->setMinimumSize(40,40);
            m_cases->setMaximumSize(40,40);
            m_tabCase.push_back(m_cases);
            grille->addWidget(m_cases,i,j);

            QObject::connect(m_cases, SIGNAL(clicked()), this, SLOT(actionBouton()));
        }
    }

    fenetre->addLayout(lettre_h, 0, 1);
    fenetre->addLayout(chiffre_v, 1, 0);
    fenetre->addLayout(grille, 1, 1);

    this->setLayout(fenetre);
}

bool Carte::ajouterBateau(Bateau *b)
{
    int x = b->getX();
    int y = b->getY();
    int taille = b->getTaille();
    bool h = b->getHorizontal();

    //cout << "BATEAU : [" << x << ":" << y << "]" << endl;

    // pour gérer les cas de dépassements de zone
    bool err = false;
    // si le bateau est horizontal
    if(h){
        // et que sa taille + sa coordonée sur la colonne dépasse 9 ==> erreur
        if(y+taille-1 > 9){
            err = true;
        }
    }
    // idem si le bateau est vertical
    else{
        // et que sa taille + sa coordonnée sur la ligne dépasse 9
        if(x+taille-1 > 9){
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

    /*string res = "";
    int i = 0;
    for(Case* c : m_tabCase){
        if(i%10 == 0)res+="\n";
        if(c->isEmpty()){
            res+="0 ";
        }else{
            res+="1 ";
        }
        ++i;
    }
    cout << res << endl;*/

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
            m_tabCase[(x*10+(y+i))]->setStyleSheet("background-color:purple; outline:none;");
        }else{
            m_tabCase[((x+i)*10+y)]->setStyleSheet("background-color:purple; outline:none;");
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