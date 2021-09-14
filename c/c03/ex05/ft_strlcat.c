/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 16:01:15 by ualcibar          #+#    #+#             */
/*   Updated: 2021/06/23 18:04:32 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	j;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	count = ft_strlen(dest);
	j = 0;
	while (src[j] != '\0' && count + 1 < size)
	{
		dest[count] = src[j];
		count++;
		j++;
	}
	dest[count] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[j]));
}	
