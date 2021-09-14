/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 20:49:43 by ualcibar          #+#    #+#             */
/*   Updated: 2021/06/30 20:56:51 by ualcibar         ###   ########.fr       */
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
