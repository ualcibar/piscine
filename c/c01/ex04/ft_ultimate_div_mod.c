/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 18:50:51 by ualcibar          #+#    #+#             */
/*   Updated: 2021/06/16 19:43:35 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	d;
	int	m;

	if (*b != 0)
	{
		d = (*a) / (*b);
		m = (*a) % (*b);
		*a = d;
		*b = m;
	}
}
