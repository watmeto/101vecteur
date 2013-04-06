#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "prototype.h"
void 	affiche(int tab[], int a)
{
	int i = 0;
	while (i < a)
	{
		printf ("%d\t ", tab[i]);
		i++;
	}
}
int main(int ac, char **av)
{
	if (debut(ac, av[1]) == 0 && atoi(av[1]) > 0 && (av[2][0] >= 49 && av[2][0] <= 57))
	{
		srand(time(NULL));
		int a = atoi(av[2]);
		int tabA[a], tabB[a] , tabAB[a];

		printf("Vecteur A:\t");  
		nbrAlea(a, tabA);
		affiche(tabA, 	a);
		printf("\n");
		printf("Vecteur B:\t");
		nbrAlea(a, tabB);
		affiche(tabB, 	a);	
		printf("\n");

		if (atoi(av[1]) == 1)
		{
			printf("Vecteur A+B:\t");
			somme(a, tabA, tabB, tabAB);
			affiche(tabAB, 	a);
		}
		else if (atoi(av[1]) == 2)
		{
			printf("Vecteur A*B:\t");
			multi(a, tabA, tabB, tabAB);
			affiche(tabAB, 	a);
		}
		else if (atoi(av[1]) == 3)
		{
			printf("Produit Scalaire AB:\t");
			printf("%d", scal(a, tabA, tabB));
		}
		else if (atoi(av[1]) == 4)
		{
			printf("Norme Euclidienne A.B:\t");
			somme(a, tabA, tabB, tabAB);
			printf("%f", sqrt(norme(a, tabAB)));
		}
		printf("\n");

	}
	else
		printf("Veuillez entrer en argument un nombre compris entre 1 et 4 suivi du nombre de coordonnee que vous voulez \n");
}

