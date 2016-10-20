#include <iostream>
#include <vector>

#include "carte.h"

using namespace std;

int main()
{
	Carte c;

	Torpilleur b1(5,9,false);
	Torpilleur b2(5,7,false);

	c.ajouterBateau(b1);
	c.ajouterBateau(b2);

	//c.afficherCarte();

	//c.enleverBateau(b1);

	c.coup(5,9);
	c.coup(6,9);

	c.afficherCarte();

	c.coup(7,9);
	// c.coup(6,7);

	c.afficherCarte();
}
