/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 19:00:36 by ualcibar          #+#    #+#             */
/*   Updated: 2021/06/23 19:03:40 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	descomposicion(int nb)
{
	char	b;
	char	c;

	b = nb / 10;
	c = b + '0';
	write(1, &c, 1);
	b = nb % 10;
	c = b + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	a;

	if (nb < 10 && nb >= 0)
	{
		a = nb + '0';
		write (1, &a, 1);
	}
	else if (nb >= 10)
	{
		descomposicion(nb);
	}
	else
	{
		write(1, "-", 1);
		a = nb * -1 + '0';
		write(1, &a, 1);
	}
}
