/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 19:33:44 by ualcibar          #+#    #+#             */
/*   Updated: 2021/06/17 18:39:12 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	pos;
	int	aux;
	int	a;

	pos = 0;
	while (pos <= size - 1)
	{
		a = pos++;
		if (tab[pos] > tab[a])
		{
			aux = tab[pos];
			tab[pos] = tab[a];
			tab[a] = aux;
			pos = 0;
		}
		else
			pos++;
	}
}
