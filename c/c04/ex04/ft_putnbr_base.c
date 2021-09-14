void ft_putnbr_base(int nbr, char *base)
{
	char *hexa;
	char *binari;
	char *deci;
	char *octal;
	int	i;

	i = 0;
	deci = "0123456789";
	binari = "01";
	hexa = "0123456789ABCDEF";
	octal = "012345678";
	while (base[i] != '\0' && base[i] == hexa[i])
		i++;
	if (base[i] == '\0')
		


}
