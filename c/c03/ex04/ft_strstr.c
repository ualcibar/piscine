/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 19:53:42 by ualcibar          #+#    #+#             */
/*   Updated: 2021/06/23 18:01:24 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	size;
	int	cont;
	int	i;
	int	j;

	i = 0;
	j = 0;
	cont = 0;
	size = 0;
	if (to_find[0] == '\0')
		return (str);
	while (to_find[size] != '\0')
		size++;
	while (str[cont] != '\0')
	{
		while ((to_find[j] == str[cont + j]) && (j <= size))
		{
			if (j == (size - 1))
				return (str + cont);
			j++;
		}
		j = 0;
		cont++;
	}
	return (0);
}
