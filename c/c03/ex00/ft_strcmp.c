/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 17:19:55 by ualcibar          #+#    #+#             */
/*   Updated: 2021/06/22 17:04:03 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	cont;
	int	ret;

	cont = 0;
	while ((s1[cont] == s2[cont]) && (s1[cont] != '\0') && (s2[cont] != '\0'))
		cont++;
	ret = s1[cont] - s2[cont];
	return (ret);
}
