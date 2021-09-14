/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 19:40:58 by ualcibar          #+#    #+#             */
/*   Updated: 2021/06/21 18:43:33 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if ((str[i - 1] >= 32) && (str[i - 1] <= 47))
				str[i] -= 32;
			else if (str[i - 1] >= 91 && str[i - 1] <= 96)
				str[i] -= 32;
			else if (str[i - 1] >= 58 && str[i - 1] <= 64)
				str[i] -= 32;
			else if (str[i - 1] >= 123 && str[i - 1] <= 126)
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
