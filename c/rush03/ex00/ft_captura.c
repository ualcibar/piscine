/* ************************************************************************** */
/*                                                                            */
/*                                                          :::      :::::::: */
/* captura.c                                              :+:      :+:    :+: */
/*                                                      +:+ +:+         +:+   */
/* By: klewis-m <klewis-m@student.42urduliz.com>      +#+  +:+       +#+      */
/*                                                  +#+#+#+#+#+   +#+         */
/* Created: 2021/06/26 16:35:28 by klewis-m              #+#    #+#           */
/* Updated: 2021/06/26 16:35:37 by klewis-m             ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <unistd.h>

void    ft_print (char *aprn, int size);
void    ft_leerdic (char *arr, int size);

int	main (int argc, char **argv)
{
	int	i;
	int arg;

	if (argc == 1)
		arg = 0;
	if (argc == 2)
		arg = 1;
	else
		return (0);
	i = 0;
	while (argv[arg][i])
		i++;
	ft_print(argv[arg], i);
	ft_leerdic(argv[arg], i);
}
