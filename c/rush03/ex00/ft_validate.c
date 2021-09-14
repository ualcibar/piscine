/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ft_validate.c                                        :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: andmarti <andmarti@student.42urduliz.com>    +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2021/06/27 14:11:30 by andmarti            #+#    #+#            */
/*  Updated: 2021/06/27 17:49:25 by andmarti           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_functions.c"

int	ft_testnum (char *num)
{
	int	pos;

	pos = 0;
	while (num[pos] != '\0')
	{
		if (num[pos] < 48 || num[pos] > 57)
		{
			return (1);
		}
		pos = pos + 1;
	}
	return (0);
}

int	ft_unsigned(long int num)
{
	if (num > 4294967295)
		return (1);
	else
		return (0);
}

int	validate (char *num)
{
	long int	test;
	char		*msgerror;

	test = ft_atoi(num);
	if (ft_tesnum(num) == 1)
	{
		msgerror = "ERROR: contiene caracteres no numericos\n";
		ft_strputchar(msgerror);
		return (0);
	}
	if (ft_unsigned(test))
	{
		msgerror = "ERROR: el numero esta fuera del rango de UINT\n";
		ft_strputchar(msgerror);
		return (0);
	}
	return (1);
}
