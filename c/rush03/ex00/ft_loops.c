/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ft_loops.c                                           :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: andmarti <andmarti@student.42urduliz.com>    +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2021/06/27 18:59:29 by andmarti            #+#    #+#            */
/*  Updated: 2021/06/27 19:40:41 by andmarti           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

void	ft_printzeros(int ze)
{
	int		i;
	int		j;
	char	*dic;

	i = 0;
	dic = "llamada a la funcion de unai";
	while (dic[i] != '\0')
	{
		if (dic[i] == '1' && dic[i + 1] == '0' && dic[i + 1 + ze] == ':')
		{
			j = i + 3 + ze;
			while (dic[j] != '\n')
			{
				write (1, &dic[j], 1);
				j = j + 1;
			}
		}
		i = i + 1;
	}
}

void	ft_loops(int loop)
{
	int	zeros;

	zeros = (loop - 1) * 3;
	ft_printzeros(zeros);
}
