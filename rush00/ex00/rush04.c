void	ft_putchar(char c);
void	lineaExtremos(int c, int f, int x, int y)
{
	if ((c == 1 && f == 1) || (f == y && c == x && y != 1 && c != 1))
		ft_putchar('A');
	else if ((c == x && f == 1) || (c == 1 && f == y))
		ft_putchar('C');
	else
		ft_putchar('B');
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
					ft_putchar('B');
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
