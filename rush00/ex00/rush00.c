void	ft_putchar(char c);

void	lineaExtremos(int c, int x)
{
	if (c == 1 || c == x)
		ft_putchar('o');
	else
		ft_putchar('-');
}

void	rush(int x, int y)
{
	int		f;
	int		c;	

	f = 1;
	c = 1;
	while (f <= y)
	{
		while (c <= x)
		{
			if (f == 1 || f == y)
				lineaExtremos(c, x);
			else
			{	
				if (c == 1 || c == x)
					ft_putchar('|');
				else
					ft_putchar(' ');
			}
			c++;
		}
		c = 1;
		f++;
		ft_putchar('\n');
	}	
}
