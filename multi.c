void 	multi(int a, int tabA[], int tabB[], int tabAB[])
{
	int i = 0;
	while (i < a)
	{
		tabAB[i] = tabA[i]*tabB[i];
		i++;
	}
}
