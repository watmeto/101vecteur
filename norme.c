#include <math.h>
int 	norme(int a, int tabAB[])
{
	int i = 0, b = 0;
	while (i < a)
	{
		b += pow(tabAB[i], 2); 
		i++;
	}
	return (b);
}

