/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ft_dict.c                                            :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: andmarti <andmarti@student.42urduliz.com>    +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2021/06/27 22:04:20 by andmarti            #+#    #+#            */
/*  Updated: 2021/06/27 22:12:35 by andmarti           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

void	find_one_digit(char nbr, char *arbuf)
{
	int	i;
	int	j;

	i = 0;
	while (arbuf[i] != '\0')
	{
		while (arbuf[i] == nbr && arbuf[i + 1] == ':')
		{
			j = i + 3;
			while (arbuf[j] != '\n')
			{
				write(1, &arbuf[j], 1);
				j++;
			}
			break ;
		}
		i++;
	}
	write(1, "\n", 1);
}

void	find_teens_digits(char nbr, char nbru, char *arbuf)
{
	int	i;
	int	j;

	i = 0;
	while (arbuf[i] != '\0')
	{
		while (arbuf[i] == nbr && arbuf[i + 1] == nbru)
		{
			j = i + 4;
			while (arbuf[j] != '\n')
			{
				write(1, &arbuf[j], 1);
				j++;
			}
			write(1, "-", 1);
			break ;
		}
		i++;
	}
	write(1, "\n", 1);
}

void	find_two_digits(char nbr, char *arbuf)
{
	int	i;
	int	j;

	i = 0;
	while (arbuf[i] != '\0')
	{
		while (arbuf[i] == nbr && arbuf[i + 2] == ':')
		{
			j = i + 4;
			while (arbuf[j] != '\n')
			{
				write(1, &arbuf[j], 1);
				j++;
			}
			write(1, "-", 1);
			break ;
		}
		i++;
	}
	write(1, "\n", 1);
}

void	print_hundred(void)
{
	char	*hund;
	hund = "hundred ";
	ft_strputchar(hund);
}
