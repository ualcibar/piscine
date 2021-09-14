/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 21:02:15 by ualcibar          #+#    #+#             */
/*   Updated: 2021/07/01 18:46:05 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	cont;

	cont = nb - 1;
	if (nb <= 0 || nb == 1)
		return (0);
	while (cont > 1)
	{
		if ((nb % cont) == 0)
			return (0);
		cont--;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && !ft_is_prime(nb))
		nb++;
	return (nb);
}
