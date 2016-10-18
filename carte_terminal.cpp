#include "carte.h"

using namespace std;

Carte::Carte()
{
    // pour une carte de 100 cases
    for(int i=0; i<10; ++i)
    {
        for(int j=0; j<10; ++j)
        {
            if(0<=j && j<9)
                m_map.push_back(Case(i,j, " ~ "));
            else
                m_map.push_back(Case(i,j, " ~ \n"));
        }
    }
}

void Carte::ajouterBateau(Bateau b)
{
    // permet de savoir si le bateau est déjà présent sur la carte
    bool estPresent = false;
    vector<Case> elemBateau = b.getBateau();

    // on parcourt la liste pour savoir si le bateau est déjà dedans
    for(int i=0; i<m_tabBateaux.size(); ++i)
        if(m_tabBateaux[i].estEgal(b))
            estPresent = true;

    // s'il n'est pas présent sur la carte
    if(!estPresent)
    {
        bool casePresente = false; 

        for(int i=0; i<elemBateau.size(); ++i)
        {
            if(coordPresentes(elemBateau[i]))
                casePresente = true;
        }

        if(casePresente)
        {
            cout << "Le bateau en collision avec un autre !!\n";
        }
        else if(b.getHorizontal() && elemBateau[0].getOrd()+b.getTaille()-1>9)
        {
            cout << "Le bateau est trop long !\n";
        }   
        else if(!b.getHorizontal() && elemBateau[0].getAbs()+b.getTaille()-1>9)
        {
            cout << "Le bateau est trop haut\n";
        }
        else
        {
            // pour chacune des cases qui le composent
            for(int i=0; i<b.getTaille(); ++i)
            {
                // si la case que l'on parcourt est au bout du tableau (dernière colonne)
                // on ajoute un retour à la ligne au motif dans la case de la map qui correspond
                // lien entre le numéro d'une case et les coordonnées du bateau : n° case = x*10 + y
                // ex. : en (5,7), le numéro de la case est 57 puis 58 et 59 en horizontal
                //if(elemBateau[i].getOrd()==9)
                    //m_map[elemBateau[i].getAbs()*10+elemBateau[i].getOrd()].setMotif(" X \n");
                // sinon, on place le motif normalement
                //else
                    //m_map[elemBateau[i].getAbs()*10+elemBateau[i].getOrd()].setMotif(" X ");
            }
            
            // on peut alors ajouter le bateau à la liste des bateaux de la carte
            m_tabBateaux.push_back(b);

            cout << "Bateau ajouté !\n";
        }
    }
}

void Carte::enleverBateau(Bateau b)
{
    bool estPresent = false;
    int indiceBateau = 0;
    vector<Case> elemBateau = b.getBateau();

    for(int i=0; i<m_tabBateaux.size(); ++i)
        if(m_tabBateaux[i].estEgal(b))
        {
            estPresent = true;
            indiceBateau = i;
        }

    if(estPresent)
    {
        // pour chacune des cases qui le composent
        for(int i=0; i<b.getTaille(); ++i)
        {
            // si on est sur la case de la dernière colonne, on fait un retour à la ligne
            if(elemBateau[i].getOrd()==9)
                m_map[elemBateau[i].getAbs()*10+elemBateau[i].getOrd()].setMotif(" C \n");
            // sinon, on place le motif normalement
            else
                m_map[elemBateau[i].getAbs()*10+elemBateau[i].getOrd()].setMotif(" C ");
        }

        m_tabBateaux.erase(m_tabBateaux.begin() + indiceBateau); 

        cout << "Bateau supprimé !\n";
    }
}

bool Carte::coordPresentes(Case c)
{
    bool presente = false;

    // on parcourt la carte
    for(int i=0; i<m_map.size(); ++i)
        if(m_map[i].getAbs() == c.getAbs() && m_map[i].getOrd() == c.getOrd()) 
            if(m_map[i].getMotif() == " X " || m_map[i].getMotif() == " X \n")   
                return true;

    return presente;
}

void Carte::afficherCarte()
{
    cout << "  A  B  C  D  E  F  G  H  I  J \n";

    for(int i=0; i<m_map.size(); ++i)
    {
        if(i%10 == 0)
            cout << i/10;
        cout << m_map[i].getMotif();
    }
  
}

int Carte::coup(int dx, int dy)
{ 
    // on parcourt les bateaux présents sur la carte
    for(int i=0; i<m_tabBateaux.size(); ++i)
    {
        Bateau *b = &m_tabBateaux[i];
        
        // on regarde si ce bateau est touché (ou déjà touché)
        int r = b->toucher(dx, dy); 
        if(r != 0)
        {
            if(r==2)
                cout << "touché !\n";
            else if(r==1)
                cout << "déjà touché !\n";
            
            if(dy == 9)
                m_map[dx*10+dy].setMotif(" T \n");
            else
                m_map[dx*10+dy].setMotif(" T ");
            
            if(r == 3)
            {
                cout << "coulé !!\n";
                enleverBateau(*b);
            }        
        }  
    }

    return 0;
}

void Carte::toString()
{
    for(int i=0; i<m_tabBateaux.size(); ++i)
        m_tabBateaux[i].toString();
}

