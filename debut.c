int 	debut(int ac, char *av)
{
	if (ac > 2 && (av[0] >= 49 && av[0] <= 52))
		return (0);
	else
		return (1);
}
