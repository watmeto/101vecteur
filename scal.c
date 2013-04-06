int 	scal(int a, int tab1[], int tab2[])
{
	int i = 0, b = 0;
	while (i < a)
	{
		b +=  (tab1[i]*tab2[i]); 
		i++;
	}
	return (b);
}
