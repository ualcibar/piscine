/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ft_functions.c                                       :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: andmarti <andmarti@student.42urduliz.com>    +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2021/06/27 13:51:20 by andmarti            #+#    #+#            */
/*  Updated: 2021/06/27 13:58:47 by andmarti           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *num)
{
	int	cont;

	cont = 0;
	while (num[cont] != '\0')
		cont = cont + 1;
	return (cont);
}

long int	ft_atoi(char *num)
{
	long int	mult;
	int			pos;
	long int	val;
	int			len;

	mult = 1;
	val = 0;
	len = ft_strlen(num);
	pos = len - 1;
	while (pos >= 0)
	{
		val = val + ((num[pos] - '0') * mult);
		pos = pos - 1;
		mult = mult * 10;
	}
	return (val);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_strputchar(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		ft_putchar(str[cont]);
		cont = cont + 1;
	}
}
