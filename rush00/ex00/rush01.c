void	ft_putchar(char c);

void	lineaExtremos(int c, int f, int x, int y)
{
	if ((f == 1 && c == 1) || (f == y && c == x && y != 1 && c != 1))
		ft_putchar('/');
	else if ((f == 1 && c == x) || (f == y && c == 1))
		ft_putchar('\\');
	else
		ft_putchar('*');
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
				lineaExtremos(c, f, x, y);
			else
			{	
				if (c == 1 || c == x)
					ft_putchar('*');
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
