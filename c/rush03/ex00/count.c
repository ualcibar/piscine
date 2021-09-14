/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  count.c                                              :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 12:11:08 by ualcibar          #+#    #+#             */
/*  Updated: 2021/06/27 21:07:40 by andmarti           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

void	block_finder(int nblock, char num, char numaux, char *buf)
{
	if (nblock == 3)
	{
		find_one_digit (num, buf);
		print_hundred;
	}
	else if (nblock == 2)
	{
		if (num == 1)
			find_teens_digits(num, numaux, buf);
		else if (num != 0)
			find_two_digits (num);
	}
	else if (nblock == 1)
	{
		find_one_digit (num, buf);
	}
}

void	numberSet(char *nb, char *buf)
{
	int	i;
	int	size;
	int	loop;
	int	nblock;

	i = 0;
	size = ft_strlen(nb);
	nblock = size % 3;
	loop = size / 3;
	if (nblock != 0)
		loop++;
	while (nb[i] != '\0')
	{
		while (nblock != 0)
		{
			block_finder(nblock, nb[i], nb[i + 1], buf);
			if (nblock == 2 && nb[i] == 1)
				i = i + 2;
			else
				i++;
			nblock--;
		}
		ft_loops(loop);
		nblock = 3;
	}
}
