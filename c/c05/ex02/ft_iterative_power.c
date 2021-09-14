/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 18:17:42 by ualcibar          #+#    #+#             */
/*   Updated: 2021/06/30 18:58:39 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	while (i < power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
