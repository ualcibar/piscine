/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 20:30:07 by ualcibar          #+#    #+#             */
/*   Updated: 2021/07/01 18:41:26 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (ft_recursive_power(i, 2) < nb && i <= 46341)
		i++;
	if (ft_recursive_power(i, 2) == nb && i <= 46341)
		return (i);
	return (0);
}
