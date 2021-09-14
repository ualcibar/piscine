/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 19:00:12 by ualcibar          #+#    #+#             */
/*   Updated: 2021/06/17 18:56:07 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	cont;
	int	aux;
	int	m;

	i = size - 1;
	cont = 0;
	m = i / 2;
	while (m >= 0)
	{
		aux = tab[cont];
		tab[cont] = tab[i];
		tab[i] = aux;
		cont ++;
		i--;
		m--;
	}
}
