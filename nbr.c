#include <stdlib.h>
void	nbrAlea(int a, int tab[])
{
	int i;
	i = 0;
	while ( i < a)
	{
		tab[i] = rand()%(9+10)-9;
		i++;
	}
}
