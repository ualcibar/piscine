/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 19:12:04 by ualcibar          #+#    #+#             */
/*   Updated: 2021/06/23 19:12:09 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	escribe(int num)
{
	int		a;
	int		b;
	char	c;

	if (num < 10)
	{
		write (1, "0", 1);
		a = num + '0';
		write (1, &a, 1);
	}
	else
	{
		a = num / 10;
		b = num % 10;
		c = a + '0';
		write(1, &c, 1);
		c = b + '0';
		write(1, &c, 1);
	}
}

void	ft_print_comb2(void)
{
	int		num1;
	int		num2;

	num1 = 0;
	num2 = 1;
	while (num1 <= 98)
	{
		while (num2 <= 99)
		{
			escribe(num1);
			write(1, " ", 1);
			escribe(num2);
			if (num1 != 98 || num2 != 99)
				write (1, ", ", 2);
			num2++;
		}
		num1++;
		num2 = num1 + 1;
	}	
}
